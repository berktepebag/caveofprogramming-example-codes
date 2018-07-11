################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Returning\ Objects\ From\ Functions.cpp 

OBJS += \
./src/Returning\ Objects\ From\ Functions.o 

CPP_DEPS += \
./src/Returning\ Objects\ From\ Functions.d 


# Each subdirectory must supply rules for building sources it contributes
src/Returning\ Objects\ From\ Functions.o: ../src/Returning\ Objects\ From\ Functions.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Returning Objects From Functions.d" -MT"src/Returning\ Objects\ From\ Functions.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


