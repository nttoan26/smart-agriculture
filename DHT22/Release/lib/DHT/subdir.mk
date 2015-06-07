################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../lib/DHT/DHT.cpp 

OBJS += \
./lib/DHT/DHT.o 

CPP_DEPS += \
./lib/DHT/DHT.d 


# Each subdirectory must supply rules for building sources it contributes
lib/DHT/%.o: ../lib/DHT/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -I"/Users/toanthanh/Documents/workspace/DHT22/lib/DHT" -I"/Users/toanthanh/Documents/workspace/ArduinoCore/src" -I"/Users/toanthanh/Documents/workspace/DHT22/src" -Wall -Os -ffunction-sections -fdata-sections -ffunction-sections -fdata-sections -fno-exceptions -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


