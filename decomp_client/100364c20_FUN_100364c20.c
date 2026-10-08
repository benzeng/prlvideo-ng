
undefined8 FUN_100364c20(long param_1,int param_2,QPointF *param_3)

{
  char cVar1;
  char *pcVar2;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  cVar1 = FUN_10035ddf0(*(undefined8 *)(param_1 + 8),0);
  if (cVar1 == '\0') {
    return 1;
  }
  if (2 < DAT_10230ffd0) {
    EnumUtils::enumToString(&local_40,param_2);
    QString::toLocal8Bit();
    FUN_100df99c0("[HID_CTL]","prl_client_app",3,"Trying to release mouse. Reason: <%s>",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100364cd5;
      }
      QArrayData::deallocate(local_38,1,8);
    }
LAB_100364cd5:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100364d05;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_100364d05:
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long **)(param_1 + 0x20) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
  }
  if (param_2 != 0xd) {
    if (param_3 != (QPointF *)0x0) {
      WidgetUtils::setCursorPos(param_3);
    }
    FUN_10035fc20(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  }
  FUN_10035e250(*(undefined8 *)(param_1 + 8),param_2);
  cVar1 = FUN_10035ddf0(*(undefined8 *)(param_1 + 8),0);
  EnumUtils::enumToString(&local_50,param_2);
  QString::toLocal8Bit();
  pcVar2 = "released";
  if (cVar1 != '\0') {
    pcVar2 = "grabbed";
  }
  FUN_100df99c0("[HID_CTL]","prl_client_app",0,"Mouse is <%s>. Reason: <%s>. Mouse type: <%s>",
                pcVar2,local_48 + *(long *)(local_48 + 0x10),"absolute");
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100364df4;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100364df4:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return 0;
}

