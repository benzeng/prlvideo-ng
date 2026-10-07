
undefined8 FUN_1006a55d0(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x18124);
  uVar2 = *(long *)(param_1 + 0x1810c) * uVar4;
  if ((*(byte *)(param_1 + 0x18100) & 2) == 0) {
    if (uVar2 == 0) {
      return 0x80000003;
    }
    if (*(long *)(param_1 + 0x18104) == 0) {
      return 0x80000003;
    }
    lVar1 = ((((uVar2 - 1) + *(long *)(param_1 + 0x18104)) / uVar2) * 4 + 0x1ff >> 9) +
            *(long *)(param_1 + 0x18130);
  }
  else {
    if (uVar2 == 0) {
      return 0x80000003;
    }
    if (*(long *)(param_1 + 0x18104) == 0) {
      return 0x80000003;
    }
    lVar1 = ((((uVar2 - 1) + *(long *)(param_1 + 0x18104)) / uVar2) * 4 + 0x1ff >> 9) +
            *(long *)(param_1 + 0x18128);
  }
  *param_2 = lVar1;
  uVar2 = *(long *)(param_1 + 0x1810c) * uVar4;
  uVar5 = 0x80000003;
  if ((uVar2 != 0) && (*(long *)(param_1 + 0x18104) != 0)) {
    uVar5 = 0;
    uVar2 = ((uVar2 - 1) + *(long *)(param_1 + 0x18104)) / uVar2;
    uVar3 = *(ulong *)(param_1 + 0x18130);
    if (*(ulong *)(param_1 + 0x18130) < *(ulong *)(param_1 + 0x18128)) {
      uVar3 = *(ulong *)(param_1 + 0x18128);
    }
    lVar1 = (uVar4 * uVar2 * 4 + 0x1ff >> 9) + (uVar2 * 4 + 0x1ff >> 9) + uVar3;
    *param_3 = lVar1;
    uVar2 = (*(ulong *)(param_1 + 0x1810c) - 1) + lVar1;
    *param_3 = uVar2 - uVar2 % *(ulong *)(param_1 + 0x1810c);
  }
  return uVar5;
}

