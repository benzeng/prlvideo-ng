
int FUN_100678c50(long param_1,long *param_2,int *param_3,uint param_4)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  QArrayData *local_50;
  QArrayData *local_48;
  int local_3c;
  int local_38;
  undefined1 local_31;
  
  *param_3 = -1;
  if (*(long *)(param_1 + 8) == 0) {
LAB_100678f77:
    FUN_1008e3970("","WinRegistry",0,"OA00002.27:");
    return 0x8158002;
  }
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 8) + 8);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_1008e3970("","WinRegistry",0,"OA00004.10:");
    goto LAB_100678f77;
  }
  puVar10 = (uint *)*puVar5;
  if ((1 < *puVar10) || (*(long *)(puVar10 + 4) != 0x18)) {
    QByteArray::reallocData(puVar5,puVar10[1] + 1,puVar10[2] >> 0x1f);
    puVar10 = (uint *)*puVar5;
  }
  lVar9 = *(long *)(puVar10 + 4);
  if ((long)puVar10 + lVar9 == 0) goto LAB_100678f77;
  if (*(int *)(*param_2 + 4) == 0) {
    FUN_1008e3970("","WinRegistry",0,"OA00002.28:");
    return 0x815800f;
  }
  if (param_4 == 0xffffffff) {
    iVar6 = FUN_10067c2a0(*(undefined8 *)(param_1 + 8));
    param_4 = iVar6 + 0x1004;
  }
  uVar11 = (ulong)param_4;
  lVar1 = uVar11 + lVar9;
  if (*(short *)((long)puVar10 + lVar1) != 0x6b6e) {
    FUN_1008e3970("","WinRegistry",0,"OA00002.29:");
    return 0x8158009;
  }
  iVar6 = FUN_10067cc50(*(undefined8 *)(param_1 + 8),*(int *)(*param_2 + 4) + 0x4c,&local_38);
  if (iVar6 != 0x8000000) {
    FUN_1008e3970("","WinRegistry",0,"OA00002.30:\t%zx;\t%d",(long)*(int *)(*param_2 + 4) + 0x4c,
                  iVar6);
    return iVar6;
  }
  uVar8 = (ulong)(local_38 + 4);
  lVar12 = uVar8 + lVar9;
  *(undefined2 *)((long)puVar10 + lVar12) = 0x6b6e;
  *(undefined2 *)((long)puVar10 + lVar12 + 2) = 0x20;
  *(uint *)((long)puVar10 + lVar12 + 0x10) = param_4 - 0x1004;
  *(undefined4 *)((long)puVar10 + lVar9 + 0x14 + uVar8) = 0;
  *(undefined4 *)((long)puVar10 + lVar9 + 0x1c + uVar8) = 0xffffffff;
  *(undefined4 *)((long)puVar10 + lVar12 + 0x20) = 0xffffffff;
  *(undefined4 *)((long)puVar10 + lVar12 + 0x24) = 0;
  *(undefined4 *)((long)puVar10 + lVar12 + 0x28) = 0xffffffff;
  lVar3 = lVar9 + 0x2c + uVar11;
  *(undefined4 *)((long)puVar10 + lVar9 + 0x2c + uVar8) = *(undefined4 *)((long)puVar10 + lVar3);
  *(undefined4 *)((long)puVar10 + lVar12 + 0x30) = 0xffffffff;
  *(undefined2 *)((long)puVar10 + lVar12 + 0x48) = *(undefined2 *)(*param_2 + 4);
  *(undefined2 *)((long)puVar10 + lVar12 + 0x4a) = 0;
  QString::toLatin1();
  if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
  }
  _memcpy((void *)((long)puVar10 + lVar12 + 0x4c),local_48 + *(long *)(local_48 + 0x10),
          (long)*(int *)(*param_2 + 4));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100678e79;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100678e79:
  QString::toLatin1();
  if ((1 < *(uint *)local_50) || (*(long *)(local_50 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_50,*(uint *)(local_50 + 4) + 1,*(uint *)(local_50 + 8) >> 0x1f);
  }
  lVar12 = lVar9 + 0x1c + uVar11;
  iVar6 = FUN_100678a20(param_1,local_50 + *(long *)(local_50 + 0x10),local_38,
                        *(undefined4 *)((long)puVar10 + lVar12),&local_3c);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100678f05;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100678f05:
  if (iVar6 == 0x8000000) {
    piVar2 = (int *)((long)puVar10 + lVar9 + 0x14 + uVar11);
    *piVar2 = *piVar2 + 1;
    *(int *)((long)puVar10 + lVar12) = local_3c + -0x1000;
    lVar9 = (ulong)(*(int *)((long)puVar10 + lVar3) + 0x1004) + lVar9;
    if (*(short *)((long)puVar10 + lVar9) == 0x6b73) {
      piVar2 = (int *)((long)puVar10 + lVar9 + 0xc);
      *piVar2 = *piVar2 + 1;
    }
    else {
      FUN_1008e3970("","WinRegistry",0,"OA00002.86:\t0x%x");
    }
    uVar7 = *(int *)(*param_2 + 4) * 2;
    uVar4 = *(uint *)((long)puVar10 + lVar1 + 0x34);
    if (uVar7 <= uVar4) {
      uVar7 = uVar4;
    }
    *(uint *)((long)puVar10 + lVar1 + 0x34) = uVar7;
    *param_3 = local_38 + 4;
    return 0x8000000;
  }
  FUN_1008e3970("","WinRegistry",0,"OA00002.31:\t%d",iVar6);
  FUN_10067ce20(*(undefined8 *)(param_1 + 8),local_38);
  return iVar6;
}

