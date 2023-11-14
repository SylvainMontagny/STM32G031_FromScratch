# 1. What is this project?
This project is a template to show how to write an basic application using only registers with CMSIS drivers on a STM32G0 MCU.

* The folder **Inc/** **Src/** and **Drivers/** are the source of the project. 
* The file **STM32G031_PB1_HelloWorld.bin** is the executable of a Led blinking application on PB1.

# 2. What is the MCU? What is the dev board?
## 2.1. MCU
This project has been written for the STM32G031K8 MCU. It uses the following peripherals :

* PB1 : LED
* Sytick Timer
* Clock HSI 16 MHz

## 2.2 Boards
To use this project, you can use the **USMB Home** board. 
![image USMB Board](/Images/usmb_board_top.jpg)
 
Or the **Nucleo 32** board
![image Nucleo Board](/Images/NUCLEO-G031K8_top.png)


# 3. Project compilation
## 3.1 Project creation
1. On STM32CubeIDE, create a new empty project: **File > New > STM32 project > MCU Selector > STM32G031K8T6 > Empty project**.
2. Delete the **Inc/** and **Src/** folder. You don't need them.
3. Clone this GitHub repository on your Hard Disk.
4. Copy-past **Src/**, **Inc/** and **Drivers/** in your project.

## 3.2 Project compilation
1. Add the following folder to your include Path (**right click on the folder > "Add to include Path"**), otherwise, the compiler won't find the header files.
	* Drivers/CMSIS/ST/STM32F4xx/Include
	* Drivers/CMSIS/Include
	* Inc
2. The folder **Src/** and **Drivers/** are sometimes "exclude from build". We need to include them to the compilation process. So, Right clic on the folder **Src/** > Properties > C/C++ build > Uncheck the box "Exclude from buid".

Your project is ready. You can now compile and flash your MCU : **Run > Run**

