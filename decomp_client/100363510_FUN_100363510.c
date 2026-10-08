
undefined8 FUN_100363510(long param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  cVar1 = FUN_10035de40(*(undefined8 *)(param_1 + 8),0);
  if (cVar1 == '\0') {
    return 1;
  }
  if (3 < DAT_10230ffd0) {
    EnumUtils::enumToString(&local_38,param_2);
    QString::toLocal8Bit();
    FUN_100df99c0("[HID_CTL]","prl_client_app",4,"Trying to release keyboard. Reason: <%s>",
                  local_30 + *(long *)(local_30 + 0x10));
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_21 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1003635bf;
      }
      QArrayData::deallocate(local_30,1,8);
    }
LAB_1003635bf:
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1003635ef;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_1003635ef:
  cVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 8) + 0x28) + 0x78))();
  if (cVar1 == '\0') {
    FUN_100df99c0("[HID_CTL]","prl_client_app",0,"Host hook keyboard release failed");
    return 3;
  }
  FUN_10035e740(*(undefined8 *)(param_1 + 8),param_2);
  cVar1 = FUN_10035de40(*(undefined8 *)(param_1 + 8),0);
  EnumUtils::enumToString(&local_48,param_2);
  QString::toLocal8Bit();
  pcVar2 = "released";
  if (cVar1 != '\0') {
    pcVar2 = "grabbed";
  }
  FUN_100df99c0("[HID_CTL]","prl_client_app",0,"Keyboard is <%s>. Reason: <%s>.",pcVar2,
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003636a6;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1003636a6:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return 0;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return 0;
}

