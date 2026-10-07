
void FUN_1007595e0(undefined8 param_1,long param_2,long param_3)

{
  FUN_100759180(param_1,0,(*(ulong *)(param_2 + 8) & 0xfffffffffffff000) + param_3,0x1000,param_2,
                "eax page");
  FUN_100759180(param_1,0,(*(ulong *)(param_2 + 0x10) & 0xfffffffffffff000) + param_3,0x1000,param_2
                ,"ecx page");
  FUN_100759180(param_1,0,(*(ulong *)(param_2 + 0x18) & 0xfffffffffffff000) + param_3,0x1000,param_2
                ,"edx page");
  FUN_100759180(param_1,0,(*(ulong *)(param_2 + 0x20) & 0xfffffffffffff000) + param_3,0x1000,param_2
                ,"ebx page");
  FUN_100759180(param_1,0,(*(ulong *)(param_2 + 0x30) & 0xfffffffffffff000) + param_3,0x1000,param_2
                ,"ebp page");
  FUN_100759180(param_1,0,(*(ulong *)(param_2 + 0x38) & 0xfffffffffffff000) + param_3,0x1000,param_2
                ,"esi page");
  FUN_100759180(param_1,0,(*(ulong *)(param_2 + 0x40) & 0xfffffffffffff000) + param_3,0x1000,param_2
                ,"edi page");
  if (*(short *)(param_2 + 0x220) == 0x40) {
    FUN_100759180(param_1,0,(*(ulong *)(param_2 + 0x48) & 0xfffffffffffff000) + param_3,0x1000,
                  param_2,"r8 page");
    FUN_100759180(param_1,0,(*(ulong *)(param_2 + 0x50) & 0xfffffffffffff000) + param_3,0x1000,
                  param_2,"r9 page");
    FUN_100759180(param_1,0,(*(ulong *)(param_2 + 0x58) & 0xfffffffffffff000) + param_3,0x1000,
                  param_2,"r10 page");
    FUN_100759180(param_1,0,(*(ulong *)(param_2 + 0x60) & 0xfffffffffffff000) + param_3,0x1000,
                  param_2,"r11 page");
    FUN_100759180(param_1,0,(*(ulong *)(param_2 + 0x68) & 0xfffffffffffff000) + param_3,0x1000,
                  param_2,"r12 page");
    FUN_100759180(param_1,0,(*(ulong *)(param_2 + 0x70) & 0xfffffffffffff000) + param_3,0x1000,
                  param_2,"r13 page");
    FUN_100759180(param_1,0,(*(ulong *)(param_2 + 0x78) & 0xfffffffffffff000) + param_3,0x1000,
                  param_2,"r14 page");
    FUN_100759180(param_1,0,(*(ulong *)(param_2 + 0x80) & 0xfffffffffffff000) + param_3,0x1000,
                  param_2,"r15 page");
    return;
  }
  return;
}

