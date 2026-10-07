
long * FUN_1006932d0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x38);
  uVar2 = *(ulong *)(*(long *)(*plVar3 + -0x18) + 0x38 + (long)plVar3);
  if ((ulong)*(uint *)(param_1 + 0x7c) == 0) {
    uVar1 = (uVar2 - 1) + *(long *)(param_1 + 0x40);
    plVar3 = (long *)(uVar1 / uVar2);
    lVar4 = uVar1 - uVar1 % uVar2;
  }
  else {
    lVar4 = *(uint *)(param_1 + 0x7c) * uVar2;
  }
  *(long *)(param_1 + 0x20) = lVar4;
  return plVar3;
}

