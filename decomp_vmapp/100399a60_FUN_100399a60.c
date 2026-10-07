
uint FUN_100399a60(long param_1,ulong param_2,char param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  param_2 = param_2 & 0xffffffff;
  uVar3 = 0;
  uVar2 = 0;
  if ((param_4 & 0x100) != 0) {
    uVar2 = 0;
    if ((param_4 & 0xfffffeff) < 5) {
      uVar2 = *(int *)(&DAT_100b3f2a0 + (long)(int)(param_4 & 0xfffffeff) * 4) << 4;
    }
  }
  if (param_3 != '\0') {
    uVar3 = (uint)*(byte *)(param_1 + 0x11 + param_2 * 0xc) << 0x10;
  }
  uVar1 = 0x20000;
  if (*(char *)(param_1 + 0x10 + param_2 * 0xc) == '\0') {
    uVar1 = 0;
  }
  return *(int *)(param_1 + 0xc + param_2 * 0xc) << 8 |
         uVar2 | *(uint *)(param_1 + 8 + param_2 * 0xc) | uVar3 | uVar1;
}

