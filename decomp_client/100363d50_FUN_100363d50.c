
undefined8 FUN_100363d50(long param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  QArrayData *local_98;
  QArrayData *local_90;
  QCursor local_88 [16];
  QCursor local_78 [48];
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  cVar2 = FUN_10035ddf0(*(undefined8 *)(param_1 + 8),0);
  if (cVar2 != '\0') {
    return 1;
  }
  if (2 < DAT_10230ffd0) {
    EnumUtils::enumToString(&local_48,param_3);
    QString::toLocal8Bit();
    FUN_100df99c0("[HID_CTL]","prl_client_app",3,"Trying to grab mouse. Reason: <%s>",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100363e0c;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_100363e0c:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100363e43;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100363e43:
  cVar2 = FUN_100362ea0(param_1,param_2);
  if (cVar2 == '\0') {
    if (DAT_10230ffd0 < 2) {
      return 3;
    }
    FUN_100df99c0("[HID_CTL]","prl_client_app",2,"Input check failed. Can\'t grab the mouse.");
    return 3;
  }
  FUN_1003600d0(local_88,param_2);
  uVar3 = QWidget::winId();
  plVar1 = *(long **)(*(long *)(param_1 + 8) + 0x28);
  if (param_4 == '\0') {
    cVar2 = (**(code **)(*plVar1 + 0x88))(plVar1,uVar3);
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x90))
                      (plVar1,uVar3,*(undefined4 *)(*(long *)(param_1 + 8) + 0x80));
  }
  if (cVar2 == '\0') {
    FUN_100df99c0("[HID_CTL]","prl_client_app",0,"Host hook mouse grab failed.");
    uVar3 = 3;
    FUN_1003602d0(param_2,local_88);
    goto LAB_100364095;
  }
  FUN_10035df80(*(undefined8 *)(param_1 + 8),param_2,param_3);
  uVar3 = FUN_10035da10(*(undefined8 *)(param_1 + 8));
  FUN_10018c2b0(uVar3);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getMouseSync();
  cVar2 = MouseSync::isEnabled();
  if ((cVar2 == '\0') || (cVar2 = FUN_10035dcf0(*(undefined8 *)(param_1 + 8),0x40), cVar2 != '\0'))
  {
    FUN_10035fca0(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),2);
  }
  FUN_10035f890(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  FUN_10035f840(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_2,0);
  FUN_10035f5e0(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),0);
  FUN_10035fc90(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  cVar2 = FUN_10035ddf0(*(undefined8 *)(param_1 + 8),0);
  pcVar4 = "released";
  if (cVar2 != '\0') {
    pcVar4 = "grabbed";
  }
  EnumUtils::enumToString(&local_98,param_3);
  QString::toLocal8Bit();
  FUN_100df99c0("[HID_CTL]","prl_client_app",0,"Mouse is <%s>. Reason: <%s>. Mouse type: <%s>",
                pcVar4,local_90 + *(long *)(local_90 + 0x10),"relative");
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10036402a;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_10036402a:
  uVar3 = 0;
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100364095;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100364095:
  QCursor::~QCursor(local_78);
  QCursor::~QCursor(local_88);
  return uVar3;
}

