
undefined8 FUN_100364720(long param_1,QWidget *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  CStickyMouseLogic *this;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  cVar1 = FUN_10035ddf0(*(undefined8 *)(param_1 + 8),0);
  if (cVar1 != '\0') {
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
        if ((bool)local_31) goto LAB_1003647d9;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_1003647d9:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100364809;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100364809:
  cVar1 = FUN_100362ea0(param_1,param_2);
  if (cVar1 == '\0') {
    if (DAT_10230ffd0 < 2) {
      return 3;
    }
    pcVar7 = "Input check failed. Can\'t grab the mouse.";
    uVar4 = 2;
    goto LAB_100364ad0;
  }
  if (param_3 != 0xe) {
    FUN_10035da60(&local_50,*(undefined8 *)(param_1 + 8));
    cVar1 = FUN_100360b20(&local_50);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10036486d;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_10036486d:
    if (cVar1 == '\0') {
      if (DAT_10230ffd0 < 3) {
        return 3;
      }
      pcVar7 = "Can\'t grab sliding mouse since it is not over any input grabber.";
      uVar4 = 3;
LAB_100364ad0:
      FUN_100df99c0("[HID_CTL]","prl_client_app",uVar4,pcVar7);
      return 3;
    }
  }
  FUN_10035df80(*(undefined8 *)(param_1 + 8),param_2,param_3);
  if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0)) ||
     (*(long *)(param_1 + 0x20) == 0)) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    lVar3 = FUN_100360500(param_2);
    if ((lVar3 != 0) && ((iVar2 = FUN_100325aa0(lVar3), iVar2 == 1 || (iVar2 == 4)))) {
      uVar4 = FUN_10035da10(uVar4);
      FUN_10018c2b0(uVar4);
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmRuntimeOptions();
      cVar1 = CVmRunTimeOptions::isStickyMouse();
      if (cVar1 != '\0') {
        this = operator_new(0x18);
        CStickyMouseLogic::CStickyMouseLogic(this,param_2);
        piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
        piVar6 = *(int **)(param_1 + 0x18);
        if (piVar6 != piVar5) {
          if (piVar5 != (int *)0x0) {
            LOCK();
            *piVar5 = *piVar5 + 1;
            local_31 = *piVar5 != 0;
            UNLOCK();
            piVar6 = *(int **)(param_1 + 0x18);
          }
          if (piVar6 != (int *)0x0) {
            LOCK();
            *piVar6 = *piVar6 + -1;
            local_31 = *piVar6 != 0;
            UNLOCK();
            if ((!(bool)local_31) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
              operator_delete(*(void **)(param_1 + 0x18));
            }
          }
          *(int **)(param_1 + 0x18) = piVar5;
          *(CStickyMouseLogic **)(param_1 + 0x20) = this;
        }
        if (piVar5 != (int *)0x0) {
          LOCK();
          *piVar5 = *piVar5 + -1;
          local_31 = *piVar5 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            operator_delete(piVar5);
          }
        }
      }
    }
  }
  FUN_10035fca0(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),1);
  FUN_10035f890(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  cVar1 = FUN_10035ddf0(*(undefined8 *)(param_1 + 8),0);
  EnumUtils::enumToString(&local_60,param_3);
  QString::toLocal8Bit();
  pcVar7 = "released";
  if (cVar1 != '\0') {
    pcVar7 = "grabbed";
  }
  FUN_100df99c0("[HID_CTL]","prl_client_app",0,"Mouse is <%s>. Reason: <%s>. Mouse type: <%s>",
                pcVar7,local_58 + *(long *)(local_58 + 0x10),"absolute");
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100364a45;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100364a45:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
  return 0;
}

