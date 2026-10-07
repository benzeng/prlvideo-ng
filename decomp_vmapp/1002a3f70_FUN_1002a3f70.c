
undefined8 FUN_1002a3f70(long *param_1)

{
  long *plVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_var;
  undefined8 uVar5;
  ushort uVar6;
  long lVar7;
  ushort uVar8;
  QArrayData *pQVar9;
  QArrayData *pQVar10;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  undefined1 local_e9;
  undefined1 local_e8 [176];
  long local_38;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
  plVar1 = (long *)*param_1;
  local_38 = lVar7;
  if (plVar1 == (long *)0x0) {
    uVar5 = 0;
    goto LAB_1002a444f;
  }
  _memcpy(local_e8,param_1,0xb0);
  (**(code **)(*plVar1 + 0x80))(&local_100,plVar1);
  QString::toLatin1();
  if ((1 < *(uint *)local_f8) || (*(long *)(local_f8 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_f8,*(uint *)(local_f8 + 4) + 1,*(uint *)(local_f8 + 8) >> 0x1f);
  }
  pQVar10 = local_f8;
  pQVar9 = local_f8 + *(long *)(local_f8 + 0x10);
  iVar3 = _strcmp((char *)(param_1 + 9),(char *)pQVar9);
  if (iVar3 != 0) {
    *(undefined1 *)(param_1 + 0xd) = 0;
    _strncpy((char *)(param_1 + 9),(char *)pQVar9,0x20);
    pQVar10 = local_f8;
  }
  if (*(uint *)pQVar10 != 0xffffffff) {
    if (*(uint *)pQVar10 != 0) {
      LOCK();
      *(uint *)pQVar10 = *(uint *)pQVar10 - 1;
      local_e9 = *(uint *)pQVar10 != 0;
      UNLOCK();
      pQVar10 = local_f8;
      if ((bool)local_e9) goto LAB_1002a4081;
    }
    QArrayData::deallocate(pQVar10,1,8);
  }
LAB_1002a4081:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_e9 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_e9) goto LAB_1002a40bd;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_1002a40bd:
  (**(code **)(*plVar1 + 0x88))(&local_110,plVar1);
  QString::toLatin1();
  if ((1 < *(uint *)local_108) || (*(long *)(local_108 + 0x10) != 0x18)) {
    QByteArray::reallocData
              (&local_108,*(uint *)(local_108 + 4) + 1,*(uint *)(local_108 + 8) >> 0x1f);
  }
  pQVar10 = local_108;
  pQVar9 = local_108 + *(long *)(local_108 + 0x10);
  iVar3 = _strcmp((char *)((long)param_1 + 0x69),(char *)pQVar9);
  if (iVar3 != 0) {
    *(undefined1 *)((long)param_1 + 0x89) = 0;
    _strncpy((char *)((long)param_1 + 0x69),(char *)pQVar9,0x20);
    pQVar10 = local_108;
  }
  if (*(uint *)pQVar10 != 0xffffffff) {
    if (*(uint *)pQVar10 != 0) {
      LOCK();
      *(uint *)pQVar10 = *(uint *)pQVar10 - 1;
      local_e9 = *(uint *)pQVar10 != 0;
      UNLOCK();
      pQVar10 = local_108;
      if ((bool)local_e9) goto LAB_1002a418c;
    }
    QArrayData::deallocate(pQVar10,1,8);
  }
LAB_1002a418c:
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_e9 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_e9) goto LAB_1002a41c8;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1002a41c8:
  (**(code **)(*plVar1 + 0x90))(&local_120,plVar1);
  QString::toLatin1();
  if ((1 < *(uint *)local_118) || (*(long *)(local_118 + 0x10) != 0x18)) {
    QByteArray::reallocData
              (&local_118,*(uint *)(local_118 + 4) + 1,*(uint *)(local_118 + 8) >> 0x1f);
  }
  pQVar10 = local_118;
  pQVar9 = local_118 + *(long *)(local_118 + 0x10);
  iVar3 = _strcmp((char *)((long)param_1 + 0x8a),(char *)pQVar9);
  if (iVar3 != 0) {
    *(undefined1 *)((long)param_1 + 0xaa) = 0;
    _strncpy((char *)((long)param_1 + 0x8a),(char *)pQVar9,0x20);
    pQVar10 = local_118;
  }
  if (*(uint *)pQVar10 != 0xffffffff) {
    if (*(uint *)pQVar10 != 0) {
      LOCK();
      *(uint *)pQVar10 = *(uint *)pQVar10 - 1;
      local_e9 = *(uint *)pQVar10 != 0;
      UNLOCK();
      pQVar10 = local_118;
      if ((bool)local_e9) goto LAB_1002a429a;
    }
    QArrayData::deallocate(pQVar10,1,8);
  }
LAB_1002a429a:
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_e9 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_e9) goto LAB_1002a42d6;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1002a42d6:
  uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1);
  *(undefined2 *)((long)param_1 + 0x1c) = uVar2;
  uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
  *(undefined2 *)((long)param_1 + 0x1e) = uVar2;
  uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  *(undefined2 *)(param_1 + 4) = uVar2;
  uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1);
  *(undefined2 *)((long)param_1 + 0x22) = uVar2;
  uVar2 = (**(code **)(*plVar1 + 0x38))(plVar1);
  *(undefined2 *)(param_1 + 6) = uVar2;
  uVar2 = (**(code **)(*plVar1 + 0x40))(plVar1);
  *(undefined2 *)((long)param_1 + 0x32) = uVar2;
  uVar2 = (**(code **)(*plVar1 + 0x48))(plVar1);
  *(undefined2 *)((long)param_1 + 0x2a) = uVar2;
  uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1);
  *(undefined2 *)((long)param_1 + 0x2c) = uVar2;
  uVar2 = (**(code **)(*plVar1 + 0x58))(plVar1);
  *(undefined2 *)((long)param_1 + 0x3a) = uVar2;
  uVar2 = (**(code **)(*plVar1 + 0x60))(plVar1);
  *(undefined2 *)((long)param_1 + 0x3c) = uVar2;
  uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1);
  *(undefined2 *)((long)param_1 + 0x3e) = uVar2;
  uVar2 = (**(code **)(*plVar1 + 0x70))(plVar1);
  *(undefined2 *)((long)param_1 + 0x42) = uVar2;
  uVar2 = (**(code **)(*plVar1 + 0x78))(plVar1);
  *(undefined2 *)((long)param_1 + 0x44) = uVar2;
  uVar4 = (**(code **)(*plVar1 + 8))(plVar1);
  *(undefined4 *)(param_1 + 1) = uVar4;
  uVar8 = *(ushort *)(param_1 + 7);
  iVar3 = (**(code **)(*plVar1 + 8))(plVar1);
  if (iVar3 == 0) {
    uVar6 = uVar8 & 0xff9f | 0x40;
  }
  else {
    iVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
    uVar8 = uVar8 & 0xff9f;
    uVar6 = uVar8 + 0x20;
    if (iVar3 != 0) {
      uVar6 = uVar8;
    }
  }
  if (*(ushort *)((long)param_1 + 0x2a) < *(ushort *)((long)param_1 + 0xe)) {
    uVar6 = uVar6 | 0x200;
  }
  else {
    uVar6 = uVar6 & 0xfdff;
  }
  if (*(ushort *)(param_1 + 6) < *(ushort *)(param_1 + 2)) {
    uVar6 = uVar6 | 0x100;
  }
  else {
    uVar6 = uVar6 & 0xfeff;
  }
  *(ushort *)(param_1 + 7) = uVar6;
  FUN_1000ad1b0(DAT_1011c3698,(int)param_1[1]);
  iVar3 = _memcmp(param_1,local_e8,0xb0);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    *(byte *)((long)param_1 + 0x13) = *(byte *)((long)param_1 + 0x13) & 0xdf;
    uVar5 = CONCAT71((int7)(CONCAT44(extraout_var,iVar3) >> 8),1);
  }
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_1002a444f:
  if (lVar7 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

