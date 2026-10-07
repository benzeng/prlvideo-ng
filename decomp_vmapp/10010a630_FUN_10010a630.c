
ulong FUN_10010a630(long *param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *param_2;
  *param_1 = lVar10;
  if (lVar10 == 0) {
    lVar10 = 0;
  }
  else {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
    lVar10 = 0;
    if (*param_1 != 0) {
      lVar10 = *(long *)(*param_1 + 0x10);
    }
  }
  if ((*(byte *)(lVar10 + 0x40) & 1) == 0) {
    lVar10 = lVar10 + 0x41;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x50);
  }
  FUN_100109aa0(param_1 + 1,lVar10);
  FUN_100109d10(param_1 + 5,(int)param_1[4],*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x38));
  param_1[7] = param_1[6];
  LOCK();
  UNLOCK();
  iVar6 = DAT_10110d238 + 1;
  *(int *)(param_1 + 8) = DAT_10110d238;
  DAT_10110d238 = iVar6;
  param_1[9] = param_1[7] + 4;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1[7] + 4) = 0;
  *(undefined4 *)(param_1[9] + 0x10) = 0;
  *(undefined4 *)(param_1[9] + 4) = 0;
  *(undefined4 *)(param_1[9] + 8) = 1;
  *(undefined4 *)(param_1[9] + 0xc) = 2;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(int *)param_1[7] = (int)param_1[8];
  lVar11 = 0;
  lVar10 = 0x18;
  do {
    *(undefined4 *)(param_1[7] + 0x108 + lVar11 * 4) =
         *(undefined4 *)(*(long *)(*param_1 + 0x10) + 0x20 + lVar11 * 8);
    puVar7 = operator_new(0x20);
    lVar3 = param_1[6];
    *puVar7 = &PTR_FUN_100ba91c0;
    puVar7[1] = lVar3 + lVar10;
    lVar4 = *param_1;
    puVar7[2] = *(long *)(*(long *)(lVar4 + 0x10) + 0x20 + lVar11 * 8) + lVar3;
    puVar7[3] = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x18);
    *(undefined8 *)(lVar3 + 0x48 + lVar10) = 0;
    *(undefined8 *)(lVar3 + 0x40 + lVar10) = 0;
    *(undefined8 *)(lVar3 + 0x38 + lVar10) = 0;
    *(undefined8 *)(lVar3 + 0x30 + lVar10) = 0;
    *(undefined8 *)(lVar3 + 0x28 + lVar10) = 0;
    *(undefined8 *)(lVar3 + 0x20 + lVar10) = 0;
    *(undefined8 *)(lVar3 + 0x18 + lVar10) = 0;
    *(undefined8 *)(lVar3 + 0x10 + lVar10) = 0;
    *(undefined8 *)(lVar3 + 8 + lVar10) = 0;
    *(undefined8 *)(lVar3 + lVar10) = 0;
    plVar8 = (long *)FUN_10010b440(puVar7,0);
    uVar9 = 0;
    if (plVar8 != (long *)0x0) {
      LOCK();
      puVar1 = (uint *)(plVar8 + 1);
      uVar9 = (ulong)*puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
    }
    plVar5 = (long *)param_1[lVar11 + 0xb];
    param_1[lVar11 + 0xb] = (long)plVar8;
    if (plVar5 != (long *)0x0) {
      LOCK();
      puVar1 = (uint *)(plVar5 + 1);
      uVar2 = *puVar1;
      uVar9 = (ulong)uVar2;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (uVar2 == 1) {
        uVar9 = (**(code **)(*plVar5 + 0x10))();
      }
    }
    if (plVar8 != (long *)0x0) {
      LOCK();
      puVar1 = (uint *)(plVar8 + 1);
      uVar2 = *puVar1;
      uVar9 = (ulong)uVar2;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if (uVar2 == 1) {
        uVar9 = (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    lVar11 = lVar11 + 1;
    lVar10 = lVar10 + 0x50;
  } while (lVar11 < 3);
  return uVar9;
}

