//
// Created by Caleb on 12/28/2023.
//

#ifndef VULKAN2DRENDERER_HPP
#define VULKAN2DRENDERER_HPP
#include "../Renderer.hpp"

#include <vulkan/vulkan.hpp>
#include <SDL2/SDL.h>


class Vulkan2DRenderer final : public Renderer {
public:
    explicit Vulkan2DRenderer(SDL_Window*, const char*);
    ~Vulkan2DRenderer() override;
    void render() override;

private:
    VkInstance vulkan{};
    VkSurfaceKHR vk_surface{};
};



#endif //VULKAN2DRENDERER_HPP
