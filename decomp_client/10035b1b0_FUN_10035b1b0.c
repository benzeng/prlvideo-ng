
int FUN_10035b1b0(long param_1,int param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (DAT_10230ffd0 < 2) goto LAB_10035b27c;
  EnumUtils::enumToString(&local_40,param_2);
  QString::toLocal8Bit();
  FUN_100df99c0("[HID_CTL]","prl_client_app",2,"Trying to release the input. Reason: <%s>",
                local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10035b24c;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_10035b24c:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10035b27c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10035b27c:
  plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x28);
  iVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3);
  if (iVar2 == 3) {
    FUN_100df99c0("[HID_CTL]","prl_client_app",0,"Failed to release the input.");
  }
  else if (param_2 == 1) {
    FUN_10035db20(*(undefined8 *)(param_1 + 0x18),0x10,1);
  }
  return iVar2;
}

