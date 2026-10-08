
undefined1 FUN_100724780(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  QArrayData *pQVar12;
  undefined8 uVar13;
  uint uVar14;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar13 = 0;
  if ((*(long *)(param_1 + 8) != 0) && (uVar13 = 0, *(int *)(*(long *)(param_1 + 8) + 4) != 0)) {
    uVar13 = *(undefined8 *)(param_1 + 0x10);
  }
  plVar7 = (long *)FUN_100cd00c0(uVar13);
  if (plVar7 == (long *)0x0) {
    return 0;
  }
  cVar2 = FUN_100719630(param_2);
  iVar10 = 1;
  if (cVar2 != '\0') {
    bVar3 = FUN_100719630(param_3);
    iVar10 = bVar3 + 1;
  }
  pcVar1 = *(code **)(*plVar7 + 0x88);
  uVar11 = (uint)param_3;
  iVar4 = QKeySequence::operator[](uVar11);
  uVar14 = (iVar4 << 6) >> 0x1f & 0xc;
  uVar8 = QKeySequence::operator[](uVar11);
  uVar5 = uVar14 + 3;
  if ((uVar8 & 0x10000000) == 0) {
    uVar5 = uVar14;
  }
  uVar8 = QKeySequence::operator[](uVar11);
  uVar14 = uVar5 | 0x30;
  if ((uVar8 & 0x8000000) == 0) {
    uVar14 = uVar5;
  }
  uVar8 = QKeySequence::operator[](uVar11);
  uVar5 = uVar14 | 0xc0;
  if ((uVar8 & 0x4000000) == 0) {
    uVar5 = uVar14;
  }
  uVar14 = uVar5 | 0x40000000;
  if (uVar5 == 0) {
    uVar14 = 0;
  }
  uVar5 = QKeySequence::operator[](uVar11);
  uVar6 = FUN_100cdf420(uVar5 & 0x1ffffff);
  (*pcVar1)(plVar7,iVar10,uVar14,uVar6);
  pcVar1 = *(code **)(*plVar7 + 0x78);
  uVar14 = (uint)param_2;
  uVar5 = QKeySequence::operator[](uVar14);
  uVar6 = FUN_100cdf420(uVar5 & 0x1ffffff);
  iVar10 = QKeySequence::operator[](uVar14);
  uVar11 = (iVar10 << 6) >> 0x1f & 0xc;
  uVar8 = QKeySequence::operator[](uVar14);
  uVar5 = uVar11 + 3;
  if ((uVar8 & 0x10000000) == 0) {
    uVar5 = uVar11;
  }
  uVar8 = QKeySequence::operator[](uVar14);
  uVar11 = uVar5 | 0x30;
  if ((uVar8 & 0x8000000) == 0) {
    uVar11 = uVar5;
  }
  uVar8 = QKeySequence::operator[](uVar14);
  uVar5 = uVar11 | 0xc0;
  if ((uVar8 & 0x4000000) == 0) {
    uVar5 = uVar11;
  }
  uVar11 = uVar5 | 0x40000000;
  if (uVar5 == 0) {
    uVar11 = 0;
  }
  (*pcVar1)(plVar7,uVar6,uVar11);
  if (DAT_10230ffd0 < 3) goto LAB_100724a72;
  FUN_1007170a0(&local_48,param_2,1);
  QString::toUtf8();
  pQVar12 = local_40 + *(long *)(local_40 + 0x10);
  FUN_1007170a0(&local_58,param_3,1);
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",3,"Try to install Remap - %s - %s",pQVar12,
                local_50 + *(long *)(local_50 + 0x10));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007249e2;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1007249e2:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100724a12;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100724a12:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100724a42;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100724a42:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100724a72;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100724a72:
  if (*(long *)(param_1 + 8) == 0) {
    uVar9 = 0;
  }
  else if (*(int *)(*(long *)(param_1 + 8) + 4) == 0) {
    uVar9 = 0;
  }
  else if (*(long **)(param_1 + 0x10) == (long *)0x0) {
    uVar9 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x18) != 0) {
      (**(code **)(**(long **)(param_1 + 0x10) + 0xf8))();
      if (*(long **)(param_1 + 0x18) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x18) + 0x60))();
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
    }
    cVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0xf0))(*(long **)(param_1 + 0x10),plVar7,1);
    if (cVar2 == '\0') {
      (**(code **)(*plVar7 + 0x60))(plVar7);
      uVar9 = 0;
    }
    else {
      *(long **)(param_1 + 0x18) = plVar7;
      uVar9 = 1;
    }
  }
  return uVar9;
}

