
byte FUN_10037b880(QWidget *param_1,double *param_2)

{
  double dVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  undefined8 local_90;
  QVariant local_88;
  QString local_78;
  QVariant local_70;
  QVariant local_60;
  QString local_50;
  undefined8 local_48;
  Data_conflict local_40;
  uint local_38;
  QString local_30;
  undefined1 local_21;
  
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_38 = 0x80000000;
  local_40.field7 = 0;
  dVar1 = *param_2;
  if (0.0 <= dVar1) {
    iVar5 = (int)(dVar1 + DAT_100e110f0);
  }
  else {
    iVar5 = (int)((dVar1 - (double)(int)(DAT_100e110e0 + dVar1)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + dVar1);
  }
  dVar1 = param_2[1];
  if (0.0 <= dVar1) {
    iVar7 = (int)(dVar1 + DAT_100e110f0);
  }
  else {
    iVar7 = (int)((dVar1 - (double)(int)(DAT_100e110e0 + dVar1)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + dVar1);
  }
  local_48 = CONCAT44(iVar7,iVar5);
  lVar6 = QApplication::widgetAt((QPoint *)&local_48);
  if (lVar6 != 0) {
    QObject::property((char *)&local_60);
    QVariant::toString();
    QString::operator=(&local_30,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_21 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10037b9bc;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_10037b9bc:
    QVariant::~QVariant(&local_60);
    QObject::property((char *)&local_70);
    QVariant::operator=((QVariant *)&local_40,&local_70);
    QVariant::~QVariant(&local_70);
  }
  cVar3 = WidgetUtils::isWidgetUnderMouse(param_1);
  if (cVar3 == '\0') {
    QObject::property((char *)&local_88);
    QVariant::toString();
    cVar3 = operator==(&local_30,&local_78);
    uVar2 = local_38 & 0x3fffffff;
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_21 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10037ba71;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_10037ba71:
    QVariant::~QVariant(&local_88);
    if (cVar3 == '\0' || uVar2 == 0) {
      bVar4 = 0;
      goto LAB_10037bb52;
    }
  }
  iVar5 = MacUtils::getWindowAtPoint(*param_2,param_2[1]);
  cVar3 = MacUtils::isWindowNumberBelongsToApp(iVar5);
  if (cVar3 == '\0') {
    bVar4 = 0;
  }
  else {
    dVar1 = *param_2;
    if (0.0 <= dVar1) {
      iVar5 = (int)(dVar1 + DAT_100e110f0);
    }
    else {
      iVar5 = (int)((dVar1 - (double)(int)(DAT_100e110e0 + dVar1)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + dVar1);
    }
    dVar1 = param_2[1];
    if (0.0 <= dVar1) {
      iVar7 = (int)(dVar1 + DAT_100e110f0);
    }
    else {
      iVar7 = (int)((dVar1 - (double)(int)(DAT_100e110e0 + dVar1)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + dVar1);
    }
    local_90 = CONCAT44(iVar7,iVar5);
    bVar4 = CHostDesktop::pointOnBounds((QPoint *)&local_90);
    bVar4 = bVar4 ^ 1;
  }
LAB_10037bb52:
  QVariant::~QVariant((QVariant *)&local_40);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return bVar4;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return bVar4;
}

