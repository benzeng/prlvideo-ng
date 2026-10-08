
void FUN_10008f5e0(long param_1)

{
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (DAT_10230ffd0 < 3) goto LAB_10008f6a2;
  FUN_10008f550(&local_30,*(undefined4 *)(param_1 + 0x18));
  QString::toUtf8();
  FUN_100df99c0("[SHORTCUT_RECOGNIZER]","prl_client_app",3,
                "Received keyboard input source change notification. Current state: %s. ",
                local_28 + *(long *)(local_28 + 0x10));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10008f672;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_10008f672:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10008f6a2;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10008f6a2:
  if (*(int *)(param_1 + 0x18) == 1) {
    FUN_10008f2d0(param_1,2);
    *(undefined1 *)(param_1 + 0x1c) = 0;
    FUN_10008f2d0(param_1,0);
  }
  return;
}

