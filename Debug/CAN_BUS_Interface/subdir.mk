################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../CAN_BUS_Interface/CAN_BUS_Int.c 

OBJS += \
./CAN_BUS_Interface/CAN_BUS_Int.o 

C_DEPS += \
./CAN_BUS_Interface/CAN_BUS_Int.d 


# Each subdirectory must supply rules for building sources it contributes
CAN_BUS_Interface/%.o CAN_BUS_Interface/%.su: ../CAN_BUS_Interface/%.c CAN_BUS_Interface/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F412Rx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../FATFS/Target -I../FATFS/App -I../USB_DEVICE/App -I../USB_DEVICE/Target -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/ST/STM32_USB_Device_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Device_Library/Class/MSC/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-CAN_BUS_Interface

clean-CAN_BUS_Interface:
	-$(RM) ./CAN_BUS_Interface/CAN_BUS_Int.d ./CAN_BUS_Interface/CAN_BUS_Int.o ./CAN_BUS_Interface/CAN_BUS_Int.su

.PHONY: clean-CAN_BUS_Interface

