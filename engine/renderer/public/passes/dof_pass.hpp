#pragma once

#include "frame_graph.hpp"

class DofPass final : public FrameGraphRenderPass
{
public:
    DofPass(const std::shared_ptr<GraphicsContext>& context, ResourceHandle<GPUImage> originalTarget, ResourceHandle<GPUImage> depthTarget, ResourceHandle<GPUImage> target);
    ~DofPass() final;

    void RecordCommands(vk::CommandBuffer commandBuffer, uint32_t currentFrame, MAYBE_UNUSED const RenderSceneDescription& scene) final;

    NON_COPYABLE(DofPass);
    NON_MOVABLE(DofPass);

private:
    void CreatePipeline();

    ResourceHandle<GPUImage> originalTarget;
};
