# 1. What is this project?
This project is a simple demonstration to show how to write an application using only registers with CMSIS drivers.

# 2. What is the MCU?
This project has been written for the STM32G031K8 MCU with the default High Speed Internal (HSI) clock of 16Mhz. The main() function works on a the **USMB Home board** with the following peripherals. 

	* PB1 : LED
	* Sytick Timer

# 3. Project compilation
## 3.1. How to use it with STM32CubeIDE?
1. On STM32CubeIDE, create a new empty project: File > New > STM32 project > MCU Selector > STM32G031K8T6 > Empty project.
2. Delete all files from Inc/ and Src/ folder.
3. Clone this repository on your Hard Disk.
4. Add all Inc/ and Src/ files in the corresponding folder of your application.
5. Add Drivers folder in your project.

For the compilation process:
1. Add the following folder to your include Path (right click > "Add to include Path"), otherwise, the compiler won't find the header files.
	* Drivers/CMSIS/ST/STM32F4xx/Include
	* Drivers/CMSIS/Include
	* Inc
2. The folder Src/ is sometimes "exclude from build". We need to include it to the compilation process. So, Right clic on the folder Src then > C/C++ build > Uncheck the box "Exclude from buid".

Your project is ready. You can now compile and flash your MCU.

