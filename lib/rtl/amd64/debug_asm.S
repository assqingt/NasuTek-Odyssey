/*
 * COPYRIGHT:         See COPYING in the top level directory
 * PROJECT:           Odyssey Run-Time Library
 * PURPOSE:           Debug Routines
 * FILE:              lib/rtl/i386/debug.S
 * PROGRAMER:         Timo Kreuzer (timo.kreuzer@odyssey.org)
 */

#include <asm.inc>

/* GLOBALS ****************************************************************/

PUBLIC DbgBreakPoint
PUBLIC DbgBreakPointWithStatus
PUBLIC DbgUserBreakPoint
PUBLIC DebugService
PUBLIC DebugService2
PUBLIC DbgBreakPointNoBugCheck
PUBLIC RtlpBreakWithStatusInstruction

/* FUNCTIONS ***************************************************************/

.code64

DbgBreakPointNoBugCheck:
    int 3
    ret

DbgBreakPoint:
DbgUserBreakPoint:
    int 3
    ret

DbgBreakPointWithStatus:
    mov eax, ecx
RtlpBreakWithStatusInstruction:
    int 3
    ret

DebugService2:
    ret
    /* Call the interrupt */
//    mov eax, [rbp+8]
//    int 0x2D
//    int 3


/******************************************************************************
 * NTSTATUS NTAPI DebugService(
 *     IN ULONG Service,    // <rcx> = [rsp + 8]
 *     IN PVOID Buffer,     // <rdx> = [rsp + 16]
 *     IN ULONG Length,     // <r8>  = [rsp + 24]
 *     IN PVOID Argument1,  // <r9>  = [rsp + 32]
 *     IN PVOID Argument2); //         [rsp + 40]
 */
DebugService:

    /* Prepare registers for interrupt */
    mov eax, ecx       // Service
    mov rcx, rdx       // Buffer
    mov edx, r8d       // Length
    mov r8, r9         // Argument1
    mov r9, [rsp + 40] // Argument2

    /* Call the Interrupt */
    int HEX(2D)
    int 3

   /* Return */
    ret

END
