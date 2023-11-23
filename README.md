# 1. What is this project?
This project is a template to show how to write a basic application using only registers with CMSIS drivers on a STM32G0 MCU.

* The folder **Inc/**, **Src/** and **Drivers/** are the source of the project. 
* The file **STM32G031_PB1_HelloWorld.bin** is the executable of a Led blinking application on PB1.

# 2. What is the MCU? What is the dev board?
## 2.1. MCU
This template project has been written for the STM32G031K8 MCU. It uses the following peripherals :

* PB1 : LED
* Sytick Timer
* Clock HSI 16 MHz

## 2.2 Boards
You can use this project with the following devlopment board. 

### 2.2.1 Nucleo-G031K8 board
This board has a standalone ST-Link. There is no need of any programmer hardware to use it.
![image Nucleo Board](/Images/NUCLEO-G031K8_top.png)

### 2.2.2 USMB board
This board has been build at University Savoie Mont Blanc by Xavier Poncet and Kenny Begue-Besson.
![image USMB Board](/Images/usmb_board_top.jpg)
 




# 3. Project development
## 3.1 Project creation on STM32CubeIDE
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

Your project is ready. You can now compile your project : **Project > Compile**. 

## 3.3 MCU programmation
There are 2 ways to program the MCU :
1. Using the ST-Link
2. Using the Internal bootloader

### 3.3.1 Programmation with ST-Link
If you use the NUCLEO-G031K8, you just need to plug the board to your computer. Then, on STM32CubeIDE, hit the **Run > Run** command to flash your MCU.

If you use the USMB board, there is no ST-Link (programmer/debugger) onboard, so you need to add one. The easiest way to do so is to use another Nucleo64 board, then remove the ST-Link Jumper CN2. Removing the jumpers disconnects the ST-Link and the Nucleo64 MCU.
![image USMB Board jumpers](/Images/st-link-jumpers-no-bg.png)

You can now connect your own board (USMB Board). Locate the CN4 ST-Link connector and plug your development board as shown below, and switch BOOT0 to 0. 
![image USMB Board jumpers](/Images/usmb_board_no_bg.png)

You need to power up both the Nucleo64 board (USB mini) **AND** the USMB board (USB micro). 

### 3.3.2 Programmation with the bootloader
When using the onboard bootloader, we don't need the ST-Link. For that, we just need to set the BOOT0 (PA8) pin to 1.

If you use the NUCLEO-G031K8, the BOOT0 pin is not exposed, so there is no convenient way to have access to the bootloader.

If you use the USMB Board :
1. Switch the BOOT0 to 1
2. Install STM32CubeProgrammer
3. Select your Connection : UART, 115200 and the COM port
4. In the Erasing & Programming section, select any executable file : **.bin**, **.hex** or **.elf** and press "Start Programming".

Your application should start.
