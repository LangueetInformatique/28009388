################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/MonPremierFichierTexte.cpp \
../src/datedenaissance.cpp 

OBJS += \
./src/MonPremierFichierTexte.o \
./src/datedenaissance.o 

CPP_DEPS += \
./src/MonPremierFichierTexte.d \
./src/datedenaissance.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


