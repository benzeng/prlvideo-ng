
undefined8 FUN_100366600(long *param_1,QWidget *param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  QEvent local_90 [24];
  QVariant local_78;
  QString local_68;
  double local_60;
  double local_58;
  QVariant local_50;
  QString local_40;
  QString local_38;
  undefined8 local_30;
  undefined1 local_21;
  
  cVar1 = FUN_10035ddf0(param_1[1],0);
  if (cVar1 == '\0') {
    cVar1 = MacUtils::isMouseInResizeBorderArea(param_2);
    if (cVar1 != '\0') {
      return 0;
    }
    QEvent::QEvent(local_90,10);
    (**(code **)(*param_1 + 0x30))(param_1,param_2,local_90);
    QEvent::~QEvent(local_90);
    return 0;
  }
  dVar6 = *(double *)(param_3 + 0x40);
  if (0.0 <= dVar6) {
    iVar2 = (int)(dVar6 + DAT_100e110f0);
  }
  else {
    iVar2 = (int)((dVar6 - (double)(int)(DAT_100e110e0 + dVar6)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + dVar6);
  }
  dVar6 = *(double *)(param_3 + 0x48);
  dVar7 = 0.0;
  if (0.0 <= dVar6) {
    iVar5 = (int)(dVar6 + DAT_100e110f0);
  }
  else {
    dVar7 = (double)(int)(DAT_100e110e0 + dVar6);
    iVar5 = (int)((dVar6 - dVar7) + DAT_100e110f0) + (int)(DAT_100e110e0 + dVar6);
  }
  local_30 = CONCAT44(iVar5,iVar2);
  lVar4 = QApplication::widgetAt((QPoint *)&local_30);
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (lVar4 != 0) {
    QObject::property((char *)&local_50);
    QVariant::toString();
    QString::operator=(&local_38,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_21 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100366783;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_100366783:
    QVariant::~QVariant(&local_50);
  }
  local_60 = (double)WidgetUtils::mapToGlobal(param_2,(QPointF *)(param_3 + 0x20));
  local_58 = dVar7;
  dVar6 = (double)WidgetUtils::makePointInside(param_2,(QPointF *)&local_60);
  cVar1 = WidgetUtils::isWidgetUnderMouse(param_2);
  if (cVar1 == '\0') {
    QObject::property((char *)&local_78);
    QVariant::toString();
    cVar1 = operator==(&local_38,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_21 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10036682c;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_10036682c:
    QVariant::~QVariant(&local_78);
    if (cVar1 != '\0') goto LAB_100366853;
  }
  local_60 = dVar6;
  local_58 = dVar7;
LAB_100366853:
  cVar1 = FUN_10035ddc0(param_1[1],2);
  if ((2 < DAT_10230ffd0) && (cVar1 == '\x01')) {
    if (0.0 <= local_60) {
      iVar2 = (int)(local_60 + DAT_100e110f0);
    }
    else {
      iVar2 = (int)((local_60 - (double)(int)(DAT_100e110e0 + local_60)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + local_60);
    }
    if (0.0 <= local_58) {
      iVar5 = (int)(local_58 + DAT_100e110f0);
    }
    else {
      iVar5 = (int)((local_58 - (double)(int)(DAT_100e110e0 + local_58)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + local_58);
    }
    FUN_100df99c0("[HID_CTL]","prl_client_app",3,
                  "Sending mouse to hook(abs): x=%d y=%d. Qt Btns: =%i",iVar2,iVar5,
                  *(undefined4 *)(param_3 + 0x54));
  }
  uVar3 = MacUtils::getMouseButtons();
  FUN_100362140(local_60,local_58,param_1[2],uVar3);
  FUN_10035daa0(param_1[1],uVar3);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return 0;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return 0;
}

