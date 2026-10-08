
undefined1 FUN_1007243e0(long param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined8 uVar9;
  QKeySequence local_58 [8];
  QArrayData *local_50;
  QArrayData *local_48;
  QKeySequence local_40 [15];
  undefined1 local_31;
  
  uVar9 = 0;
  if ((*(long *)(param_1 + 8) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 8) + 4) != 0)) {
    uVar9 = *(undefined8 *)(param_1 + 0x10);
  }
  plVar5 = (long *)FUN_100cd1920(uVar9);
  if (plVar5 == (long *)0x0) {
    return 0;
  }
  (**(code **)(*plVar5 + 0x90))(plVar5,1,param_3);
  pcVar1 = *(code **)(*plVar5 + 0x80);
  QKeySequence::QKeySequence(local_40,param_2,0,0,0);
  iVar4 = QKeySequence::operator[]((uint)local_40);
  uVar6 = QKeySequence::operator[]((uint)local_40);
  uVar8 = (iVar4 << 6) >> 0x1f & 0xc;
  uVar2 = uVar8 | 3;
  if ((uVar6 & 0x10000000) == 0) {
    uVar2 = uVar8;
  }
  uVar6 = QKeySequence::operator[]((uint)local_40);
  uVar8 = uVar2 | 0x30;
  if ((uVar6 & 0x8000000) == 0) {
    uVar8 = uVar2;
  }
  uVar6 = QKeySequence::operator[]((uint)local_40);
  uVar2 = uVar8 | 0xc0;
  if ((uVar6 & 0x4000000) == 0) {
    uVar2 = uVar8;
  }
  uVar8 = uVar2 | 0x40000000;
  if (uVar2 == 0) {
    uVar8 = 0;
  }
  (*pcVar1)(plVar5,1,uVar8);
  QKeySequence::~QKeySequence(local_40);
  if (DAT_10230ffd0 < 3) goto LAB_1007245be;
  QKeySequence::QKeySequence(local_58,param_2,0,0,0);
  FUN_1007170a0(&local_50,local_58,1);
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",3,"Try to install Mouse key action - %s",
                local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100724585;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100724585:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007245b5;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1007245b5:
  QKeySequence::~QKeySequence(local_58);
LAB_1007245be:
  if (*(long *)(param_1 + 8) == 0) {
    uVar7 = 0;
  }
  else if (*(int *)(*(long *)(param_1 + 8) + 4) == 0) {
    uVar7 = 0;
  }
  else if (*(long **)(param_1 + 0x10) == (long *)0x0) {
    uVar7 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x18) != 0) {
      (**(code **)(**(long **)(param_1 + 0x10) + 0xf8))();
      if (*(long **)(param_1 + 0x18) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x18) + 0x60))();
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
    }
    cVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0xf0))(*(long **)(param_1 + 0x10),plVar5,0);
    if (cVar3 == '\0') {
      (**(code **)(*plVar5 + 0x60))(plVar5);
      uVar7 = 0;
    }
    else {
      *(long **)(param_1 + 0x18) = plVar5;
      uVar7 = 1;
    }
  }
  return uVar7;
}

