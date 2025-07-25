################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../BSW/io/Bluetooth.c \
../BSW/io/GPIO.c \
../BSW/io/Ultrasonic.c \
../BSW/io/eru.c \
../BSW/io/motor.c 

COMPILED_SRCS += \
BSW/io/Bluetooth.src \
BSW/io/GPIO.src \
BSW/io/Ultrasonic.src \
BSW/io/eru.src \
BSW/io/motor.src 

C_DEPS += \
BSW/io/Bluetooth.d \
BSW/io/GPIO.d \
BSW/io/Ultrasonic.d \
BSW/io/eru.d \
BSW/io/motor.d 

OBJS += \
BSW/io/Bluetooth.o \
BSW/io/GPIO.o \
BSW/io/Ultrasonic.o \
BSW/io/eru.o \
BSW/io/motor.o 


# Each subdirectory must supply rules for building sources it contributes
BSW/io/Bluetooth.src: ../BSW/io/Bluetooth.c BSW/io/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc37x "-fC:/Users/USER/Documents/repos/tc375/mylib/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc37x -Y0 -N0 -Z0 -o "$@" "$<"
BSW/io/Bluetooth.o: BSW/io/Bluetooth.src BSW/io/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
BSW/io/GPIO.src: ../BSW/io/GPIO.c BSW/io/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc37x "-fC:/Users/USER/Documents/repos/tc375/mylib/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc37x -Y0 -N0 -Z0 -o "$@" "$<"
BSW/io/GPIO.o: BSW/io/GPIO.src BSW/io/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
BSW/io/Ultrasonic.src: ../BSW/io/Ultrasonic.c BSW/io/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc37x "-fC:/Users/USER/Documents/repos/tc375/mylib/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc37x -Y0 -N0 -Z0 -o "$@" "$<"
BSW/io/Ultrasonic.o: BSW/io/Ultrasonic.src BSW/io/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
BSW/io/eru.src: ../BSW/io/eru.c BSW/io/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc37x "-fC:/Users/USER/Documents/repos/tc375/mylib/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc37x -Y0 -N0 -Z0 -o "$@" "$<"
BSW/io/eru.o: BSW/io/eru.src BSW/io/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
BSW/io/motor.src: ../BSW/io/motor.c BSW/io/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc37x "-fC:/Users/USER/Documents/repos/tc375/mylib/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc37x -Y0 -N0 -Z0 -o "$@" "$<"
BSW/io/motor.o: BSW/io/motor.src BSW/io/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"

clean: clean-BSW-2f-io

clean-BSW-2f-io:
	-$(RM) BSW/io/Bluetooth.d BSW/io/Bluetooth.o BSW/io/Bluetooth.src BSW/io/GPIO.d BSW/io/GPIO.o BSW/io/GPIO.src BSW/io/Ultrasonic.d BSW/io/Ultrasonic.o BSW/io/Ultrasonic.src BSW/io/eru.d BSW/io/eru.o BSW/io/eru.src BSW/io/motor.d BSW/io/motor.o BSW/io/motor.src

.PHONY: clean-BSW-2f-io

