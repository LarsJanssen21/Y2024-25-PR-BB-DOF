#include "passes/dof_pass.hpp"

DofPass::DofPass(const std::shared_ptr<GraphicsContext>& context, ResourceHandle<GPUImage> originalTarget, ResourceHandle<GPUImage> depthTarget, ResourceHandle<GPUImage> target)
{
}

DofPass::~DofPass()
{
}

void DofPass::RecordCommands(vk::CommandBuffer commandBuffer, uint32_t currentFrame, MAYBE_UNUSED const RenderSceneDescription& scene)
{
}

void DofPass::CreatePipeline()
{
}