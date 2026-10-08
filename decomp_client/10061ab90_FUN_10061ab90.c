
undefined8 FUN_10061ab90(long param_1,uint param_2,byte param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((uVar1 & param_2) == param_2) {
    if (((param_2 != 0 || uVar1 == param_2) ^ param_3) != 1) {
      return 0;
    }
    if (param_3 == 0) {
      uVar1 = uVar1 & ~param_2;
      goto LAB_10061abc7;
    }
  }
  else if (param_3 == 0) {
    return 0;
  }
  uVar1 = uVar1 | param_2;
LAB_10061abc7:
  *(uint *)(param_1 + 0x30) = uVar1;
  return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
}

