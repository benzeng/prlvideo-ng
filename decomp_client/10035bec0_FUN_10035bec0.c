
void FUN_10035bec0(long param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (DAT_10230ffd0 < 3) goto LAB_10035bf8c;
  EnumUtils::enumToString(&local_40,param_3);
  QString::toLocal8Bit();
  FUN_100df99c0("[HID_CTL]","prl_client_app",3,"Trying to grab input. Reason: <%s>",
                local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10035bf5c;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_10035bf5c:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10035bf8c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10035bf8c:
  plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x28);
  if (param_3 == 1) {
    (**(code **)(*plVar1 + 0x40))(plVar1,param_2,1);
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2,param_2,param_3,0);
  }
  return;
}

