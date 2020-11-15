#include <iostream>
#include <GLFW/glfw3.h>
int main() {
    GLFWwindow* window;
    std::cout << "creating window\n";

    if (!glfwInit())
        exit(EXIT_FAILURE);
    window = glfwCreateWindow(640, 480, "window", NULL, NULL);
    if (!window){
        glfwTerminate();
        exit(EXIT_FAILURE);
    }
    while (!glfwWindowShouldClose(window)){
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    std::cout << "destroying window\n";
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
