################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../lib/CS_MQ7.cpp 

OBJS += \
./lib/CS_MQ7.o 

CPP_DEPS += \
./lib/CS_MQ7.d 


# Each subdirectory must supply rules for building sources it contributes
lib/%.o: ../lib/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -I"/Users/toanthanh/Documents/workspace/MQ-7/lib" -I"/Users/toanthanh/Documents/workspace/ArduinoCore/src" -I"/Users/toanthanh/Documents/workspace/MQ-7/src" -Wall -Os -ffunction-sections -fdata-sections -ffunction-sections -fdata-sections -fno-exceptions -mmcu=atmega2560 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


