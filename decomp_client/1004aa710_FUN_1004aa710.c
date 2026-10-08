
void FUN_1004aa710(long param_1)

{
  long *plVar1;
  QObject *pQVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  int *piVar8;
  undefined8 uVar9;
  QArrayData *local_90;
  QVariant local_88;
  int *local_78;
  int *local_70;
  QObject *local_68;
  int *local_60;
  QObject *local_58;
  int *local_50;
  QArrayData *local_48;
  QVariant local_40;
  undefined1 local_29;
  
  lVar5 = FUN_10044e580();
  if (lVar5 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    return;
  }
  uVar6 = FUN_10044e560(param_1);
  local_48 = (QArrayData *)QString::fromAscii_helper("Settings.Startup.AutoStart",0x1a);
  FUN_1003e1800(&local_40,uVar6,&local_48,0);
  uVar4 = QVariant::toInt((bool *)&local_40);
  QVariant::~QVariant(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004aa7a9;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004aa7a9:
  uVar6 = FUN_10044e660(param_1);
  cVar3 = FUN_1003bea00(uVar6);
  if (cVar3 == '\0') {
LAB_1004aa82b:
    local_50 = (int *)PTR_shared_null_1021e15e8;
    pQVar2 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x48);
    piVar7 = (int *)0x0;
    if (pQVar2 != (QObject *)0x0) {
      piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    }
    local_60 = piVar7;
    local_58 = pQVar2;
    FUN_10007b8d0(&local_50,&local_60);
    local_68 = *(QObject **)(*(long *)(param_1 + 0x38) + 0x50);
    piVar8 = (int *)0x0;
    if (local_68 != (QObject *)0x0) {
      piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_68);
    }
    local_70 = piVar8;
    FUN_10007b8d0(&local_50,&local_70);
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_29 = *piVar8 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar8);
      }
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_29 = *piVar7 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar7);
      }
    }
    FUN_10006b440(&local_78,&local_50);
    WidgetUtils::hideWidgetsAndRemoveFromFormLayouts(param_1,&local_78);
    if (*local_78 != -1) {
      if (*local_78 != 0) {
        LOCK();
        *local_78 = *local_78 + -1;
        local_29 = *local_78 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004aa912;
      }
      FUN_10006b5d0(&local_78,local_78);
    }
LAB_1004aa912:
    if (*local_50 != -1) {
      if (*local_50 != 0) {
        LOCK();
        *local_50 = *local_50 + -1;
        local_29 = *local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004aa93c;
      }
      FUN_10006b5d0(&local_50,local_50);
    }
  }
  else {
    if (uVar4 != 3) {
      if ((uVar4 & 0xfffffffb) == 1) {
        uVar6 = FUN_10044e580(param_1);
        cVar3 = FUN_1001754c0(uVar6,0x10);
        if (cVar3 != '\0') goto LAB_1004aa7e6;
      }
      goto LAB_1004aa82b;
    }
LAB_1004aa7e6:
    plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x48);
    (**(code **)(*plVar1 + 0x68))(plVar1,1);
    plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x50);
    (**(code **)(*plVar1 + 0x68))(plVar1,1);
    QFormLayout::insertRow
              ((int)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30),(QWidget *)0x1,
               *(QWidget **)(*(long *)(param_1 + 0x38) + 0x48));
  }
LAB_1004aa93c:
  uVar6 = FUN_10044e580(param_1);
  cVar3 = FUN_1001754c0(uVar6,0x10);
  if ((cVar3 == '\0') || (cVar3 = FUN_100d807b0(), cVar3 != '\0')) {
    *(undefined1 *)(param_1 + 0x52) = 0;
LAB_1004aa963:
    uVar6 = FUN_10044e660(param_1);
    cVar3 = FUN_1003beaf0(uVar6);
    if (cVar3 != '\0') {
      FUN_1004aabe0(param_1);
    }
  }
  else {
    uVar6 = FUN_10044e660(param_1);
    cVar3 = FUN_1003beaf0(uVar6);
    *(char *)(param_1 + 0x52) = cVar3;
    if (cVar3 == '\0') goto LAB_1004aa963;
  }
  uVar6 = FUN_10044e560(param_1);
  local_90 = (QArrayData *)QString::fromAscii_helper("Settings.SasProfile.Custom",0x1a);
  FUN_1003e1800(&local_88,uVar6,&local_90,0);
  cVar3 = QVariant::toBool();
  QVariant::~QVariant(&local_88);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004aaa46;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1004aaa46:
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
  if (cVar3 == '\0') {
    uVar9 = FUN_10044e660(param_1);
    FUN_1003bec30(uVar9);
  }
  QStackedWidget::setCurrentIndex((int)uVar6);
  return;
}

