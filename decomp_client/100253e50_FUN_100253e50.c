
long * FUN_100253e50(long *param_1)

{
  int *piVar1;
  long lVar2;
  undefined8 in_RAX;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uStack_24 = (undefined4)((ulong)in_RAX >> 0x20);
  FUN_100249d00();
  lVar2 = *param_1;
  lVar4 = (long)*(int *)(lVar2 + 8);
  uVar5 = 0xffffffff;
  if (*(int *)(lVar2 + 8) < *(int *)(lVar2 + 0xc)) {
    lVar6 = lVar2 + 8 + lVar4 * 8;
    lVar3 = (long)*(int *)(lVar2 + 0xc) * 8 + lVar4 * -8;
    do {
      if (lVar3 == 0) goto LAB_100253eb1;
      lVar3 = lVar3 + -8;
      piVar1 = (int *)(lVar6 + 8);
      lVar6 = lVar6 + 8;
    } while (*piVar1 != 6);
    uVar5 = (ulong)(lVar6 - (lVar2 + 0x10 + lVar4 * 8)) >> 3 & 0xffffffff;
  }
LAB_100253eb1:
  _local_28 = CONCAT44(uStack_24,7);
  FUN_1002264f0(param_1,uVar5,&local_28);
  return param_1;
}

