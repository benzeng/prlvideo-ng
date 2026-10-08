
undefined1 FUN_100723350(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  QArrayData *pQVar12;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_3 != 0) {
    FUN_100722bf0(param_1,param_3);
  }
  uVar11 = 0;
  if ((*(long *)(param_1 + 8) != 0) && (uVar11 = 0, *(int *)(*(long *)(param_1 + 8) + 4) != 0)) {
    uVar11 = *(undefined8 *)(param_1 + 0x10);
  }
  plVar6 = (long *)FUN_100cd00c0(uVar11);
  if (plVar6 == (long *)0x0) {
    return 0;
  }
  (**(code **)(*plVar6 + 0x98))(plVar6,6,FUN_100723710,param_1);
  pcVar1 = *(code **)(*plVar6 + 0x78);
  uVar10 = (uint)param_2;
  uVar3 = QKeySequence::operator[](uVar10);
  uVar4 = FUN_100cdf420(uVar3 & 0x1ffffff);
  iVar5 = QKeySequence::operator[](uVar10);
  uVar9 = (iVar5 << 6) >> 0x1f & 0xc;
  uVar7 = QKeySequence::operator[](uVar10);
  uVar3 = uVar9 + 3;
  if ((uVar7 & 0x10000000) == 0) {
    uVar3 = uVar9;
  }
  uVar7 = QKeySequence::operator[](uVar10);
  uVar9 = uVar3 | 0x30;
  if ((uVar7 & 0x8000000) == 0) {
    uVar9 = uVar3;
  }
  uVar7 = QKeySequence::operator[](uVar10);
  uVar3 = uVar9 | 0xc0;
  if ((uVar7 & 0x4000000) == 0) {
    uVar3 = uVar9;
  }
  uVar9 = uVar3 | 0x40000000;
  if (uVar3 == 0) {
    uVar9 = 0;
  }
  (*pcVar1)(plVar6,uVar4,uVar9);
  if (DAT_10230ffd0 < 3) goto LAB_10072359d;
  FUN_1006946e0(&local_48,*(undefined4 *)(param_1 + 0x20));
  QString::toUtf8();
  pQVar12 = local_40 + *(long *)(local_40 + 0x10);
  FUN_1007170a0(&local_58,param_2,1);
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",3,"Try to install KeyAction - %s - %s",pQVar12,
                local_50 + *(long *)(local_50 + 0x10));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10072350d;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10072350d:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10072353d;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10072353d:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10072356d;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10072356d:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10072359d;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10072359d:
  if (*(long *)(param_1 + 8) == 0) {
    uVar8 = 0;
  }
  else if (*(int *)(*(long *)(param_1 + 8) + 4) == 0) {
    uVar8 = 0;
  }
  else if (*(long **)(param_1 + 0x10) == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x18) != 0) {
      (**(code **)(**(long **)(param_1 + 0x10) + 0xf8))();
      if (*(long **)(param_1 + 0x18) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x18) + 0x60))();
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
    }
    cVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0xf0))(*(long **)(param_1 + 0x10),plVar6,1);
    if (cVar2 == '\0') {
      (**(code **)(*plVar6 + 0x60))(plVar6);
      uVar8 = 0;
    }
    else {
      *(long **)(param_1 + 0x18) = plVar6;
      uVar8 = 1;
    }
  }
  return uVar8;
}

