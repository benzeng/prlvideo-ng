
undefined4 FUN_100363120(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  cVar3 = FUN_10035de40(*(undefined8 *)(param_1 + 8),0);
  if (cVar3 != '\0') {
    return 1;
  }
  if (DAT_102310998 == (void *)0x0) {
    pvVar6 = operator_new(0x18);
    FUN_1006faf60(pvVar6);
    DAT_102274400 = 1;
    DAT_102310998 = pvVar6;
  }
  pvVar6 = DAT_102310998;
  uVar7 = FUN_10035da10(*(undefined8 *)(param_1 + 8));
  uVar5 = FUN_10018f860(uVar7);
  cVar3 = FUN_1006fb710(pvVar6,uVar5);
  if (2 < DAT_10230ffd0) {
    EnumUtils::enumToString(&local_48,param_3);
    QString::toLocal8Bit();
    pcVar9 = "WITHOUT";
    if (cVar3 != '\0') {
      pcVar9 = "WITH";
    }
    FUN_100df99c0("[HID_CTL]","prl_client_app",3,
                  "Trying to grab keyboard. Reason: <%s>. Mode: <%s shortcuts>",
                  local_40 + *(long *)(local_40 + 0x10),pcVar9);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100363239;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_100363239:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100363269;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100363269:
  cVar4 = FUN_100362ea0(param_1,param_2);
  if (cVar4 == '\0') {
    if (DAT_10230ffd0 < 3) {
      return 3;
    }
    pcVar9 = "Input check failed. Can\'t grab the keyboard";
    uVar7 = 3;
  }
  else {
    plVar1 = *(long **)(*(long *)(param_1 + 8) + 0x28);
    pcVar2 = *(code **)(*plVar1 + 0x70);
    uVar7 = QWidget::winId();
    uVar8 = FUN_10035da10(*(undefined8 *)(param_1 + 8));
    uVar5 = FUN_10018f890(uVar8);
    cVar3 = (*pcVar2)(plVar1,uVar7,cVar3,uVar5);
    if (cVar3 != '\0') {
      FUN_10035e4a0(*(undefined8 *)(param_1 + 8),param_2,param_3);
      cVar3 = FUN_10035de40(*(undefined8 *)(param_1 + 8),0);
      EnumUtils::enumToString(&local_58,param_3);
      QString::toLocal8Bit();
      pcVar9 = "released";
      if (cVar3 != '\0') {
        pcVar9 = "grabbed";
      }
      FUN_100df99c0("[HID_CTL]","prl_client_app",0,"Keyboard is <%s>. Reason: <%s>.",pcVar9,
                    local_50 + *(long *)(local_50 + 0x10));
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100363369;
        }
        QArrayData::deallocate(local_50,1,8);
      }
LAB_100363369:
      if (*(int *)local_58 == -1) {
        return 0;
      }
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        UNLOCK();
        if (*(int *)local_58 != 0) {
          return 0;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_58,2,8);
      return 0;
    }
    if (DAT_10230ffd0 < 2) {
      return 3;
    }
    pcVar9 = "Host hook keyboard grab failed.";
    uVar7 = 2;
  }
  FUN_100df99c0("[HID_CTL]","prl_client_app",uVar7,pcVar9);
  return 3;
}

