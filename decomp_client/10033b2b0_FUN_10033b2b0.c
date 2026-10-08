
void FUN_10033b2b0(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  QArrayData *pQVar3;
  QKeySequence local_58 [8];
  QKeySequence local_50 [8];
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_100a5ed00(*(undefined8 *)(param_1 + 0x20));
  if (param_2 != 2) {
    return;
  }
  if (DAT_10230ffd0 < 3) goto LAB_10033b45f;
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_100319410(&local_38,uVar1);
  QString::toUtf8();
  pQVar3 = local_30 + *(long *)(local_30 + 0x10);
  lVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (lVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    lVar2 = *(long *)(param_1 + 0x18);
  }
  QKeySequence::QKeySequence(local_50,(QKeySequence *)(lVar2 + 0x178));
  QKeySequence::toString(&local_48,local_50,1);
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",3,"VM [%s]: Send switch language shortcut [%s] to the guest",
                pQVar3,local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10033b3c6;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10033b3c6:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10033b3f6;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10033b3f6:
  QKeySequence::~QKeySequence(local_50);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10033b42f;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_10033b42f:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10033b45f;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10033b45f:
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar1 = FUN_100319d40(uVar1);
  lVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (lVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    lVar2 = *(long *)(param_1 + 0x18);
  }
  QKeySequence::QKeySequence(local_58,(QKeySequence *)(lVar2 + 0x178));
  FUN_10035c150(uVar1,local_58);
  QKeySequence::~QKeySequence(local_58);
  return;
}

