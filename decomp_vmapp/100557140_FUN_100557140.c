
undefined1 FUN_100557140(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  
  lVar3 = *(long *)(param_1 + 0x60);
  lVar5 = (ulong)param_2 * 0x10;
  iVar1 = *(int *)(lVar3 + lVar5);
  if (iVar1 < -1) {
    if (iVar1 < -2) goto LAB_100557215;
LAB_10055716e:
    if (-3 < *(int *)(lVar3 + 4 + lVar5)) {
      FUN_1008e3970("","TransMem",0,"The block %u is being processed, wait");
      return 0;
    }
    if (iVar1 < -1) goto LAB_100557215;
  }
  else if (*(int *)(lVar3 + 4 + lVar5) < -1) goto LAB_10055716e;
  if (-2 < *(int *)(lVar3 + 4 + lVar5)) {
    lVar5 = (long)(int)param_2 * 0x10;
    iVar1 = *(int *)(lVar3 + 4 + lVar5);
    if ((long)iVar1 < 0) {
      puVar6 = (undefined4 *)0x0;
      if (iVar1 == -1) {
        puVar6 = (undefined4 *)(param_1 + 0x88);
      }
    }
    else {
      puVar6 = (undefined4 *)((long)iVar1 * 0x10 + lVar3);
    }
    *puVar6 = *(undefined4 *)(lVar3 + lVar5);
    iVar2 = *(int *)(lVar3 + lVar5);
    if ((long)iVar2 < 0) {
      lVar7 = 0;
      if (iVar2 == -1) {
        lVar7 = param_1 + 0x88;
      }
    }
    else {
      lVar7 = (long)iVar2 * 0x10 + lVar3;
    }
    *(int *)(lVar7 + 4) = iVar1;
    *(int *)(lVar3 + lVar5) = -2;
    *(undefined4 *)(lVar3 + 4 + lVar5) = 0xfffffffe;
  }
LAB_100557215:
  *(undefined4 *)(lVar3 + (long)(int)param_2 * 0x10) = 0xffffffff;
  *(undefined4 *)(lVar3 + 4 + (long)(int)param_2 * 0x10) = *(undefined4 *)(param_1 + 0x8c);
  iVar1 = *(int *)(param_1 + 0x8c);
  if ((long)iVar1 < 0) {
    puVar4 = (uint *)0x0;
    if (iVar1 == -1) {
      puVar4 = (uint *)(param_1 + 0x88);
    }
  }
  else {
    puVar4 = (uint *)(lVar3 + (long)iVar1 * 0x10);
  }
  *puVar4 = param_2;
  *(uint *)(param_1 + 0x8c) = param_2;
  return 1;
}

