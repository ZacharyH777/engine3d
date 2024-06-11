#include <engine3d/engine3dPrecompiledHeader.h>
#include <engine3d/OpenGL/OpenGLSwapChain.h>


namespace engine3d{
    OpenGLSwapChain::OpenGLSwapChain(){}

    void OpenGLSwapChain::CurrentSwapChainPresent(){
        // glfwSwapBuffers(Application::G)
        glfwSwapBuffers((GLFWwindow *)Application::GetNativeWindow());
        glfwPollEvents();
    }
};