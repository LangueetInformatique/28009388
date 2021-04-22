################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Etudiant.cpp \
../src/boucle.cpp \
../src/factorielle.cpp \
../src/factorielle2.cpp \
../src/minimum.cpp \
../src/testEperluette.cpp \
../src/testEtudiant.cpp 

OBJS += \
./src/Etudiant.o \
./src/boucle.o \
./src/factorielle.o \
./src/factorielle2.o \
./src/minimum.o \
./src/testEperluette.o \
./src/testEtudiant.o 

CPP_DEPS += \
./src/Etudiant.d \
./src/boucle.d \
./src/factorielle.d \
./src/factorielle2.d \
./src/minimum.d \
./src/testEperluette.d \
./src/testEtudiant.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


