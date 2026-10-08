
undefined8 FUN_100364200(long param_1,int param_2,QPointF *param_3)

{
  long lVar1;
  char cVar2;
  char *pcVar3;
  QArrayData *local_68;
  QArrayData *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  cVar2 = FUN_10035ddf0(*(undefined8 *)(param_1 + 8),0);
  if (cVar2 == '\0') {
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
        if ((bool)local_29) goto LAB_1003642b5;
      }
      QArrayData::deallocate(local_38,1,8);
    }
LAB_1003642b5:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1003642e5;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_1003642e5:
  cVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 8) + 0x28) + 0x98))();
  if (cVar2 == '\0') {
    FUN_100df99c0("[HID_CTL]","prl_client_app",0,"Host hook mouse release failed.");
    return 3;
  }
  FUN_10035f5e0(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),1);
  if (param_2 != 0xd) {
    if (param_3 != (QPointF *)0x0) {
      WidgetUtils::setCursorPos(param_3);
    }
    FUN_10035fc20(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  }
  lVar1 = *(long *)(param_1 + 8);
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(lVar1 + 0xa0) = 0;
  *(undefined8 *)(lVar1 + 0x98) = 0;
  FUN_10035e250(*(undefined8 *)(param_1 + 8),param_2);
  cVar2 = FUN_10035ddf0(*(undefined8 *)(param_1 + 8),0);
  EnumUtils::enumToString(&local_68,param_2);
  QString::toLocal8Bit();
  pcVar3 = "released";
  if (cVar2 != '\0') {
    pcVar3 = "grabbed";
  }
  FUN_100df99c0("[HID_CTL]","prl_client_app",0,"Mouse is <%s>. Reason: <%s>. Mouse type: <%s>",
                pcVar3,local_60 + *(long *)(local_60 + 0x10),"relative");
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100364403;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_100364403:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
  return 0;
}

