################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../BSW/Driver/asclin.c \
../BSW/Driver/can.c \
../BSW/Driver/evadc.c \
../BSW/Driver/gpt12.c \
../BSW/Driver/gtm_atom_pwm.c \
../BSW/Driver/stm.c 

COMPILED_SRCS += \
BSW/Driver/asclin.src \
BSW/Driver/can.src \
BSW/Driver/evadc.src \
BSW/Driver/gpt12.src \
BSW/Driver/gtm_atom_pwm.src \
BSW/Driver/stm.src 

C_DEPS += \
BSW/Driver/asclin.d \
BSW/Driver/can.d \
BSW/Driver/evadc.d \
BSW/Driver/gpt12.d \
BSW/Driver/gtm_atom_pwm.d \
BSW/Driver/stm.d 

OBJS += \
BSW/Driver/asclin.o \
BSW/Driver/can.o \
BSW/Driver/evadc.o \
BSW/Driver/gpt12.o \
BSW/Driver/gtm_atom_pwm.o \
BSW/Driver/stm.o 


# Each subdirectory must supply rules for building sources it contributes
BSW/Driver/asclin.src: ../BSW/Driver/asclin.c BSW/Driver/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc37x "-fC:/Users/USER/Documents/repos/tc375/mylib/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc37x -Y0 -N0 -Z0 -o "$@" "$<"
BSW/Driver/asclin.o: BSW/Driver/asclin.src BSW/Driver/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
BSW/Driver/can.src: ../BSW/Driver/can.c BSW/Driver/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc37x "-fC:/Users/USER/Documents/repos/tc375/mylib/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc37x -Y0 -N0 -Z0 -o "$@" "$<"
BSW/Driver/can.o: BSW/Driver/can.src BSW/Driver/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
BSW/Driver/evadc.src: ../BSW/Driver/evadc.c BSW/Driver/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc37x "-fC:/Users/USER/Documents/repos/tc375/mylib/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc37x -Y0 -N0 -Z0 -o "$@" "$<"
BSW/Driver/evadc.o: BSW/Driver/evadc.src BSW/Driver/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
BSW/Driver/gpt12.src: ../BSW/Driver/gpt12.c BSW/Driver/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc37x "-fC:/Users/USER/Documents/repos/tc375/mylib/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc37x -Y0 -N0 -Z0 -o "$@" "$<"
BSW/Driver/gpt12.o: BSW/Driver/gpt12.src BSW/Driver/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
BSW/Driver/gtm_atom_pwm.src: ../BSW/Driver/gtm_atom_pwm.c BSW/Driver/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc37x "-fC:/Users/USER/Documents/repos/tc375/mylib/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc37x -Y0 -N0 -Z0 -o "$@" "$<"
BSW/Driver/gtm_atom_pwm.o: BSW/Driver/gtm_atom_pwm.src BSW/Driver/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
BSW/Driver/stm.src: ../BSW/Driver/stm.c BSW/Driver/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc37x "-fC:/Users/USER/Documents/repos/tc375/mylib/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc37x -Y0 -N0 -Z0 -o "$@" "$<"
BSW/Driver/stm.o: BSW/Driver/stm.src BSW/Driver/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"

clean: clean-BSW-2f-Driver

clean-BSW-2f-Driver:
	-$(RM) BSW/Driver/asclin.d BSW/Driver/asclin.o BSW/Driver/asclin.src BSW/Driver/can.d BSW/Driver/can.o BSW/Driver/can.src BSW/Driver/evadc.d BSW/Driver/evadc.o BSW/Driver/evadc.src BSW/Driver/gpt12.d BSW/Driver/gpt12.o BSW/Driver/gpt12.src BSW/Driver/gtm_atom_pwm.d BSW/Driver/gtm_atom_pwm.o BSW/Driver/gtm_atom_pwm.src BSW/Driver/stm.d BSW/Driver/stm.o BSW/Driver/stm.src

.PHONY: clean-BSW-2f-Driver

