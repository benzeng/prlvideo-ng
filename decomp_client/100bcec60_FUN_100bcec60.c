
undefined8 FUN_100bcec60(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x80);
  uVar3 = 0;
  if (((*(int *)(lVar1 + 0x1dc) != 0) && (*(int *)(lVar1 + 0x104) == 0)) &&
     (*(int *)(lVar1 + 0x11c) == 0)) {
    uVar2 = FUN_100be45f0(param_1);
    uVar3 = 0;
    if ((uVar2 & 0x3000) == 0) {
      *(undefined4 *)(param_1 + 0x48) = 0x3004;
      lVar1 = *(long *)(param_1 + 0x80);
      *(undefined4 *)(lVar1 + 0x1dc) = 0;
      *(int *)(lVar1 + 0x1e4) = *(int *)(lVar1 + 0x1e4) + 1;
      *(int *)(lVar1 + 0x1e0) = *(int *)(lVar1 + 0x1e0) + 1;
      uVar3 = 1;
    }
  }
  return uVar3;
}

