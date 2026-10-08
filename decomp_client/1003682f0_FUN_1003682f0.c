
void FUN_1003682f0(long param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  QSize *pQVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  undefined8 uVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined8 local_40;
  ulong local_38;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  lVar4 = FUN_100323dd0();
  if (lVar4 == 0) {
    return;
  }
  lVar4 = FUN_10037a2c0(*(undefined8 *)(param_1 + 0x20));
  if ((lVar4 != 0) &&
     (lVar4 = FUN_10037a2c0(*(undefined8 *)(param_1 + 0x20)),
     (*(byte *)(*(long *)(lVar4 + 0x28) + 9) & 0x80) != 0)) {
    iVar13 = 0;
    cVar11 = '\x01';
    goto LAB_1003684e0;
  }
  iVar13 = 0;
  uVar12 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)
     ) {
    uVar12 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar12 = FUN_100323dd0(uVar12);
  iVar2 = FUN_10018a9d0(uVar12);
  cVar11 = '\x01';
  if (iVar2 != 0x30000004) goto LAB_1003684e0;
  iVar13 = 0;
  uVar12 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)
     ) {
    uVar12 = *(undefined8 *)(param_1 + 0x18);
  }
  iVar2 = FUN_100325aa0(uVar12);
  if (iVar2 == 4) goto LAB_1003684e0;
  if (iVar2 != 2) {
    if (iVar2 != 1) {
      cVar11 = '\0';
    }
    goto LAB_1003684e0;
  }
  uVar12 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)
     ) {
    uVar12 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar12 = FUN_100323dd0(uVar12);
  FUN_10018c2b0(uVar12);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  CVmRunTimeOptions::getVmFullScreen();
  iVar2 = CVmFullScreen::getScaleViewMode();
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  iVar13 = 1;
  cVar11 = '\x01';
  if (1 < iVar2 - 1U) {
    if (iVar2 == 0) {
      uVar5 = FUN_1003797e0(uVar12);
      uVar3 = FUN_100325aa0(uVar5);
      uVar5 = FUN_10037a280(uVar3);
      uVar6 = FUN_1003797e0(uVar12);
      auVar14 = FUN_100325fd0(uVar6);
      uVar9 = (auVar14._8_4_ + 1) - auVar14._0_4_;
      uVar10 = (auVar14._12_4_ + 1) - auVar14._4_4_;
      if (((int)(uVar10 | uVar9) < 0) ||
         ((cVar1 = '\0', (int)uVar5 <= (int)uVar9 && ((int)((ulong)uVar5 >> 0x20) <= (int)uVar10))))
      {
        uVar5 = FUN_1003797e0(uVar12);
        uVar5 = FUN_100323e00(uVar5);
        cVar1 = FUN_10031c1c0(uVar5);
      }
    }
    else {
      cVar1 = '\x01';
      if (iVar2 == 3) {
        iVar13 = 2;
        goto LAB_1003684bb;
      }
    }
    cVar11 = cVar1;
    iVar13 = 0;
  }
LAB_1003684bb:
  lVar4 = FUN_10037a510(uVar12);
  if (lVar4 != 0) {
    FUN_10037a510(uVar12);
    cVar1 = CMacFullScreenDelegate::isSwitchInProgress();
    if (cVar1 != '\0') {
      iVar13 = 0;
    }
  }
LAB_1003684e0:
  cVar1 = CScrollArea::widgetResizable();
  iVar2 = CScrollArea::widgetResizeMode();
  CScrollArea::setWidgetResizeMode(*(undefined8 *)(param_1 + 0x20),iVar13);
  CScrollArea::setWidgetResizable(SUB81(*(undefined8 *)(param_1 + 0x20),0));
  local_38 = 0xffffffffffffffff;
  if ((cVar11 == '\0') && (cVar1 != '\0')) {
    uVar12 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar12 = *(undefined8 *)(param_1 + 0x18);
    }
    auVar14 = FUN_100325fd0(uVar12);
    uVar7 = (auVar14._8_8_ + 1) - auVar14._0_8_;
    lVar4 = ((auVar14._8_8_ >> 0x20) + 1) - (auVar14._0_8_ >> 0x20);
    uVar9 = (uint)lVar4;
    local_38 = uVar7 & 0xffffffff | lVar4 << 0x20;
  }
  else {
    uVar9 = 0xffffffff;
    if (iVar13 == 1) {
      uVar7 = 0xffffffff;
      if (iVar2 == 0) {
        uVar12 = 0;
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (uVar12 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
          uVar12 = *(undefined8 *)(param_1 + 0x18);
        }
        auVar14 = FUN_100325fd0(uVar12);
        local_38 = CONCAT44((auVar14._12_4_ + 1) - auVar14._4_4_,(auVar14._8_4_ + 1) - auVar14._0_4_
                           );
        lVar4 = FUN_100379860(*(undefined8 *)(param_1 + 0x20));
        lVar4 = *(long *)(lVar4 + 0x28);
        local_40 = CONCAT44((*(int *)(lVar4 + 0x20) + 1) - *(int *)(lVar4 + 0x18),
                            (*(int *)(lVar4 + 0x1c) + 1) - *(int *)(lVar4 + 0x14));
        uVar7 = QSize::scaled(&local_38,&local_40,1);
        uVar9 = (uint)(uVar7 >> 0x20);
        local_38 = uVar7;
      }
    }
    else {
      uVar7 = 0xffffffff;
    }
  }
  if (-1 < (int)(uVar9 | (uint)uVar7)) {
    pQVar8 = (QSize *)FUN_100379860(*(undefined8 *)(param_1 + 0x20));
    QWidget::resize(pQVar8);
  }
  return;
}

