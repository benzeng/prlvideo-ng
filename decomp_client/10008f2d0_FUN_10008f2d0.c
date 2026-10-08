
void FUN_10008f2d0(long param_1,int param_2)

{
  undefined4 uVar1;
  QArrayData *pQVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (*(int *)(param_1 + 0x18) == param_2) {
    return;
  }
  if (DAT_10230ffd0 < 3) goto LAB_10008f424;
  FUN_10008f550(&local_38);
  QString::toUtf8();
  pQVar2 = local_30 + *(long *)(local_30 + 0x10);
  FUN_10008f550(&local_48,param_2);
  QString::toUtf8();
  FUN_100df99c0("[SHORTCUT_RECOGNIZER]","prl_client_app",3,
                "Change shortuct recognizer state %s -> %s",pQVar2,
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10008f394;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10008f394:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10008f3c4;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10008f3c4:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10008f3f4;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_10008f3f4:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10008f424;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10008f424:
  if (param_2 == 1) {
    QTimer::start((int)param_1 + 0x20);
  }
  else {
    QTimer::stop();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = param_2;
  FUN_100868270(*(undefined8 *)(param_1 + 0x10),param_2,uVar1);
  return;
}

