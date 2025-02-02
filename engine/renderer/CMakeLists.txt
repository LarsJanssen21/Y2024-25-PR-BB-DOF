add_library(Renderer
        public/passes/dof_pass.hpp
        private/passes/dof_pass.cpp
)
module_default_init(Renderer)

target_link_libraries(Renderer
        PUBLIC Core
        PUBLIC Application
        PUBLIC Particles
        PUBLIC ECS
        PUBLIC UserInterface
        PUBLIC Settings

        PUBLIC VulkanAPI
        PUBLIC VulkanMemoryAllocator
        PUBLIC spirv-reflect-static
        PUBLIC fastgltf::fastgltf
)

target_include_directories(Renderer
        PUBLIC "${PROJECT_SOURCE_DIR}/external/stb"
)
