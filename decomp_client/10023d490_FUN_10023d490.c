
undefined8 FUN_10023d490(long param_1,undefined1 param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  QString *pQVar7;
  undefined8 uVar8;
  QPoint *pQVar9;
  long lVar10;
  undefined8 uVar11;
  QArrayData *pQVar12;
  QArrayData *local_88;
  undefined8 local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar11 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar11 = *(undefined8 *)(param_1 + 0x20);
  }
  pQVar7 = (QString *)FUN_100323e30(uVar11,1);
  if (pQVar7 == (QString *)0x0) {
    uVar11 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar11 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100323d90(&local_48,uVar11);
    QString::toLocal8Bit();
    pQVar12 = local_40 + *(long *)(local_40 + 0x10);
    uVar11 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar11 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar4 = FUN_100323e20(uVar11);
    EnumUtils::enumToString(&local_60,*(undefined4 *)(param_1 + 0x28),1);
    QString::toUpper();
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",0,
                  "Failed to switch VM\'s [%s] display [%d] to %s mode. Display widget doesn\'t exist and cannot be created!"
                  ,pQVar12,uVar4,local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10023d66f;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_10023d66f:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10023d69f;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_10023d69f:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10023d6cf;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10023d6cf:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10023d6ff;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_10023d6ff:
    if (*(int *)local_48 == -1) {
      return 0x80000001;
    }
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return 0x80000001;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
    return 0x80000001;
  }
  *(undefined1 *)(param_1 + 0x34) = 1;
  iVar3 = FUN_10037a280(2);
  QWidget::setMinimumSize((int)pQVar7,iVar3);
  uVar8 = FUN_100370280();
  uVar11 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar11 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100323d90(&local_68,uVar11);
  uVar11 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar11 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar4 = FUN_100323e20(uVar11);
  pQVar9 = (QPoint *)FUN_1003704b0(uVar8,&local_68,uVar4);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10023d579;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10023d579:
  if (pQVar9 == (QPoint *)0x0) {
    uVar8 = FUN_100370280();
    uVar11 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar11 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100323d90(&local_70,uVar11);
    uVar11 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar11 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar4 = FUN_100323e20(uVar11);
    pQVar9 = (QPoint *)FUN_1003739f0(uVar8,&local_70,uVar4,1,0);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10023d7ce;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_10023d7ce:
    if (pQVar9 != (QPoint *)0x0) {
      FUN_10036d220(pQVar9,pQVar7);
    }
    piVar1 = (int *)(param_1 + 0x40);
    if (*(int *)(param_1 + 0x40) < 0) {
      uVar11 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar11 = *(undefined8 *)(param_1 + 0x20);
      }
      FUN_100323d90(&local_78,uVar11);
      uVar11 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar11 = *(undefined8 *)(param_1 + 0x20);
      }
      uVar4 = FUN_100323e20(uVar11);
      iVar3 = FUN_100354f60(&local_78,uVar4,*(undefined1 *)(param_1 + 0x35));
      *piVar1 = iVar3;
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 == 0) {
LAB_10023d85c:
          QArrayData::deallocate(local_78,2,8);
        }
        else {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if (!(bool)local_31) goto LAB_10023d85c;
        }
        iVar3 = *piVar1;
      }
      if (iVar3 < 0) {
        *piVar1 = 0;
      }
    }
    uVar11 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar11 = *(undefined8 *)(param_1 + 0x20);
    }
    cVar2 = FUN_100325f80(uVar11);
    if (cVar2 == '\0') {
      iVar3 = QApplication::desktop();
      local_80 = QDesktopWidget::screenGeometry(iVar3);
      QWidget::move(pQVar9);
      QWidget::setWindowOpacity(0.0);
    }
    uVar11 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar11 = *(undefined8 *)(param_1 + 0x20);
    }
    cVar2 = FUN_100325f80(uVar11);
    uVar5 = CWindowInterface::customWindowFlags();
    if (cVar2 == '\0') {
      uVar5 = uVar5 & 0xffffefff;
    }
    else {
      uVar5 = uVar5 | 0x1000;
    }
    CWindowInterface::setCustomWindowFlags(pQVar9 + 0x30,uVar5);
    QWidget::show();
    if (pQVar9 != (QPoint *)0x0) goto LAB_10023d931;
  }
  else {
LAB_10023d931:
    FUN_100379870(pQVar7,*(undefined4 *)(param_1 + 0x40));
    FUN_10036d240(&local_88,pQVar9);
    QWidget::setWindowTitle(pQVar7);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10023d985;
      }
      QArrayData::deallocate(local_88,2,8);
    }
  }
LAB_10023d985:
  uVar11 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar11 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar10 = FUN_100323dd0(uVar11);
  if (lVar10 == 0) {
    FUN_10023ae00(param_1,param_2);
    return 0;
  }
  uVar11 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar11 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar3 = FUN_100325aa0(uVar11);
  uVar11 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar11 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100325c00(uVar11,*(undefined4 *)(param_1 + 0x28));
  FUN_10018c2b0(lVar10);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  CVmRunTimeOptions::getVmFullScreen();
  iVar6 = CVmFullScreen::getScaleViewMode();
  if (iVar6 != 0) {
    iVar6 = CVmFullScreen::getScaleViewMode();
    cVar2 = '\x03';
    if (iVar6 != 1) goto LAB_10023da39;
  }
  cVar2 = (iVar3 == 0) + '\x01';
LAB_10023da39:
  uVar11 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar11 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100325d70(uVar11,*(undefined4 *)(param_1 + 0x28),cVar2);
  uVar11 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)
     ) {
    uVar11 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100326e00(uVar11,1);
  return 0;
}

