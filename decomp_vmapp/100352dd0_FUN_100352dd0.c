
void FUN_100352dd0(long param_1,short param_2,byte *param_3)

{
  uint uVar1;
  
  if (param_2 != 0x43) {
    if (param_2 == 0x44) {
      uVar1 = 1 << (*param_3 & 0x1f);
      *(uint *)(param_1 + 0x104) = *(uint *)(param_1 + 0x104) | uVar1;
      *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | uVar1;
    }
    else if (param_2 == 0x59) goto LAB_100352dfd;
    return;
  }
LAB_100352dfd:
  *(uint *)(param_1 + 0x104) = *(uint *)(param_1 + 0x104) | 1 << (*param_3 & 0x1f);
  return;
}

