################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Libraries/iLLD/TC37A/Tricore/Asclin/Asc/IfxAsclin_Asc.c 

COMPILED_SRCS += \
Libraries/iLLD/TC37A/Tricore/Asclin/Asc/IfxAsclin_Asc.src 

C_DEPS += \
Libraries/iLLD/TC37A/Tricore/Asclin/Asc/IfxAsclin_Asc.d 

OBJS += \
Libraries/iLLD/TC37A/Tricore/Asclin/Asc/IfxAsclin_Asc.o 


# Each subdirectory must supply rules for building sources it contributes
Libraries/iLLD/TC37A/Tricore/Asclin/Asc/IfxAsclin_Asc.src: ../Libraries/iLLD/TC37A/Tricore/Asclin/Asc/IfxAsclin_Asc.c Libraries/iLLD/TC37A/Tricore/Asclin/Asc/subdir.mk
	cctc -cs --dep-file="$(*F).d" --misrac-version=2004 -D__CPU__=tc37x "-fC:/Users/USER/Documents/repos/tc375/mylib/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc37x -Y0 -N0 -Z0 -o "$@" "$<"
Libraries/iLLD/TC37A/Tricore/Asclin/Asc/IfxAsclin_Asc.o: Libraries/iLLD/TC37A/Tricore/Asclin/Asc/IfxAsclin_Asc.src Libraries/iLLD/TC37A/Tricore/Asclin/Asc/subdir.mk
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"

clean: clean-Libraries-2f-iLLD-2f-TC37A-2f-Tricore-2f-Asclin-2f-Asc

clean-Libraries-2f-iLLD-2f-TC37A-2f-Tricore-2f-Asclin-2f-Asc:
	-$(RM) Libraries/iLLD/TC37A/Tricore/Asclin/Asc/IfxAsclin_Asc.d Libraries/iLLD/TC37A/Tricore/Asclin/Asc/IfxAsclin_Asc.o Libraries/iLLD/TC37A/Tricore/Asclin/Asc/IfxAsclin_Asc.src

.PHONY: clean-Libraries-2f-iLLD-2f-TC37A-2f-Tricore-2f-Asclin-2f-Asc

