
undefined8 FUN_100adc710(long param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x7fffffff;
  if ((ulong)*(uint *)(param_1 + 0x800) != 0) {
    uVar2 = 0;
    do {
      if (*(int *)(*(long *)(param_1 + 0x808) + uVar2 * 4) == param_2) {
        uVar1 = uVar2 & 0xffffffff;
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x800));
  }
  return CONCAT71((int7)(uVar1 >> 8),(int)uVar1 != 0x7fffffff);
}

