
undefined8 FUN_1006a5a50(long param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x18124) * *(long *)(param_1 + 0x1810c);
  uVar2 = 0x80000003;
  if ((uVar1 != 0) && (*(long *)(param_1 + 0x18104) != 0)) {
    uVar2 = 0;
    uVar1 = ((uVar1 - 1) + *(long *)(param_1 + 0x18104)) / uVar1;
    if (param_2 != (long *)0x0) {
      *param_2 = (uVar1 * 4 + 0x1ff >> 9) + *(long *)(param_1 + 0x18130);
    }
    if (param_3 != (long *)0x0) {
      *param_3 = (uVar1 * 4 + 0x1ff >> 9) + *(long *)(param_1 + 0x18128);
    }
  }
  return uVar2;
}

