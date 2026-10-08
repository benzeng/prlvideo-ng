
void FUN_10035db20(long param_1,uint param_2,byte param_3)

{
  char *pcVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if ((*(uint *)(param_1 + 0x20) & param_2) == param_2) {
    if (((param_2 != 0 || *(uint *)(param_1 + 0x20) == param_2) ^ param_3) != 1) {
      return;
    }
  }
  else if (param_3 == 0) {
    return;
  }
  if (DAT_10230ffd0 < 3) goto LAB_10035dc58;
  FUN_10035dd20(&local_40,param_2);
  QString::toLatin1();
  if ((1 < *(uint *)local_38) || (*(long *)(local_38 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_38,*(uint *)(local_38 + 4) + 1,*(uint *)(local_38 + 8) >> 0x1f);
  }
  pcVar1 = "OFF";
  if (param_3 != 0) {
    pcVar1 = "ON";
  }
  FUN_100df99c0("[HID_CTL]","prl_client_app",3,"Changing attribute <%s> to %s",
                local_38 + *(long *)(local_38 + 0x10),pcVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10035dc28;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_10035dc28:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_10035dc58;
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10035dc58:
  if (param_3 == 0) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & ~param_2;
  }
  else {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | param_2;
  }
  return;
}

