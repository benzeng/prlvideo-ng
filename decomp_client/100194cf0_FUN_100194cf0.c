
void FUN_100194cf0(long param_1,undefined4 param_2,undefined4 param_3)

{
  QArrayData *pQVar1;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_100188480(&local_40,param_1);
  QString::toUtf8();
  if ((1 < *(uint *)local_38) || (*(long *)(local_38 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_38,*(uint *)(local_38 + 4) + 1,*(uint *)(local_38 + 8) >> 0x1f);
  }
  pQVar1 = local_38 + *(long *)(local_38 + 0x10);
  FUN_10018d830(&local_50,param_1);
  QString::toUtf8();
  if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
  }
  FUN_100df99c0("","prl_client_app",0,"Sending key to VM %s %s ...",pQVar1,
                local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100194deb;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100194deb:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100194e1b;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100194e1b:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100194e4b;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100194e4b:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100194e7b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100194e7b:
  _PrlDevKeyboard_SendKeyEvent(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
  return;
}

