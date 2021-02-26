################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/date.cpp \
../src/main.cpp \
../src/paire.cpp \
../src/parite.cpp 

OBJS += \
./src/date.o \
./src/main.o \
./src/paire.o \
./src/parite.o 

CPP_DEPS += \
./src/date.d \
./src/main.d \
./src/paire.d \
./src/parite.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


