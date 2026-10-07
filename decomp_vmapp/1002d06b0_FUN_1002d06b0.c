
uint FUN_1002d06b0(long param_1,long param_2,undefined8 *param_3,long param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(uint *)(param_2 + 0xc) & 2) * 0x800;
  uVar2 = uVar1 + 0x800;
  if (*(int *)(param_4 * 0x510 + param_1 + 0x1634 + param_5 * 0x28) == 0) {
    param_3[1] = 0;
    *param_3 = 0;
    param_3[1] = 0x840001000000;
    if ((*(byte *)(param_2 + 0xc) & 0x20) != 0) {
      uVar2 = uVar1 | *(uint *)(param_2 + 8) >> 0x16 | 0xc00;
    }
  }
  return uVar2;
}

