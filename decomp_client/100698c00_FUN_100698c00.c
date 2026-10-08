
void FUN_100698c00(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  QPoint *pQVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined8 local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  undefined8 local_48;
  double local_40;
  double local_38;
  double local_28;
  
  uVar3 = FUN_10018c280(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
  uVar3 = FUN_100319c50(uVar3);
  cVar1 = FUN_100330a50(uVar3);
  if (cVar1 != '\0') {
    uVar3 = FUN_10018c280(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
    FUN_10031b640(uVar3,1);
  }
  uVar3 = FUN_10018c280(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
  cVar1 = FUN_10031bde0(uVar3);
  if (cVar1 != '\0') {
    if (DAT_1023109b8 == (void *)0x0) {
      pvVar4 = operator_new(0x18);
      FUN_100759600(pvVar4);
      DAT_102271308 = 1;
      DAT_1023109b8 = pvVar4;
    }
    FUN_1007596c0(&local_40,DAT_1023109b8);
    dVar9 = local_38 + local_28;
    pQVar5 = (QPoint *)QApplication::desktop();
    if (0.0 <= local_40) {
      iVar2 = (int)(DAT_100e110f0 + local_40);
    }
    else {
      iVar2 = (int)((local_40 - (double)(int)(DAT_100e110e0 + local_40)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + local_40);
    }
    if (0.0 <= dVar9) {
      iVar6 = (int)(DAT_100e110f0 + dVar9);
    }
    else {
      iVar6 = (int)((dVar9 - (double)(int)(DAT_100e110e0 + dVar9)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + dVar9);
    }
    local_48 = CONCAT44(iVar6,iVar2);
    QDesktopWidget::screenNumber(pQVar5);
    auVar11 = QDesktopWidget::availableGeometry((int)pQVar5);
    iVar2 = auVar11._0_4_;
    dVar10 = (double)iVar2;
    if (iVar2 < 0) {
      iVar6 = (int)((dVar10 - (double)(int)(DAT_100e110e0 + dVar10)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + dVar10);
    }
    else {
      iVar6 = (int)(dVar10 + DAT_100e110f0);
    }
    iVar2 = (1 - iVar2) + auVar11._8_4_;
    dVar10 = (double)auVar11._4_4_;
    if (auVar11._0_8_ < 0) {
      iVar8 = (int)((dVar10 - (double)(int)(DAT_100e110e0 + dVar10)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + dVar10);
    }
    else {
      iVar8 = (int)(dVar10 + DAT_100e110f0);
    }
    iVar7 = (1 - auVar11._4_4_) + auVar11._12_4_;
    dVar10 = (double)iVar2;
    if (iVar2 < 0) {
      iVar2 = (int)((dVar10 - (double)(int)(DAT_100e110e0 + dVar10)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + dVar10);
    }
    else {
      iVar2 = (int)(dVar10 + DAT_100e110f0);
    }
    dVar10 = (double)iVar7;
    if (iVar7 < 0) {
      iVar7 = (int)((dVar10 - (double)(int)(DAT_100e110e0 + dVar10)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + dVar10);
    }
    else {
      iVar7 = (int)(dVar10 + DAT_100e110f0);
    }
    local_68 = (double)iVar6;
    local_60 = (double)iVar8;
    local_58 = (double)iVar2;
    local_50 = (double)iVar7;
    if (0.0 <= local_40) {
      iVar2 = (int)(local_40 + DAT_100e110f0);
    }
    else {
      iVar2 = (int)((local_40 - (double)(int)(DAT_100e110e0 + local_40)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + local_40);
    }
    if (0.0 <= dVar9) {
      dVar10 = dVar9 + DAT_100e110f0;
      iVar6 = (int)dVar10;
    }
    else {
      dVar10 = (dVar9 - (double)(int)(DAT_100e110e0 + dVar9)) + DAT_100e110f0;
      iVar6 = (int)dVar10 + (int)(DAT_100e110e0 + dVar9);
    }
    local_78 = (double)iVar2;
    local_70 = (double)iVar6;
    dVar9 = (double)WidgetUtils::makePointInside((QRectF *)&local_68,(QPointF *)&local_78);
    uVar3 = FUN_10018c280(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
    uVar3 = FUN_100319c80(uVar3);
    if (0.0 <= dVar9) {
      iVar2 = (int)(dVar9 + DAT_100e110f0);
    }
    else {
      iVar2 = (int)((dVar9 - (double)(int)(DAT_100e110e0 + dVar9)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + dVar9);
    }
    if (0.0 <= dVar10) {
      iVar6 = (int)(dVar10 + DAT_100e110f0);
    }
    else {
      iVar6 = (int)((dVar10 - (double)(int)(DAT_100e110e0 + dVar10)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + dVar10);
    }
    local_80 = CONCAT44(iVar6,iVar2);
    FUN_10033abe0(uVar3,&local_80);
    return;
  }
  uVar3 = FUN_10018c280(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28));
  uVar3 = FUN_100319d40(uVar3);
  FUN_10035c110(uVar3,0x73,1);
  FUN_10035c110(uVar3,0x73,0);
  return;
}

