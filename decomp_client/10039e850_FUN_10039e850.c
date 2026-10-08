
void FUN_10039e850(long param_1)

{
  long lVar1;
  QWidget *pQVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  QObject *pQVar8;
  QWidget *pQVar9;
  long *plVar10;
  Data_conflict local_70;
  undefined4 local_68;
  QVariant local_60;
  QArrayData *local_50;
  QString local_48;
  QVariant local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_10039f8c0(param_1,1);
  FUN_10039f8c0(param_1,2);
  FUN_10039f8c0(param_1,3);
  FUN_10039f8c0(param_1,4);
  FUN_10039f8c0(param_1,5);
  lVar1 = param_1 + 0x20;
  lVar6 = FUN_1003b0a60(lVar1);
  if (lVar6 != 0) {
    uVar7 = FUN_1003b0a60(lVar1);
    cVar3 = FUN_1001754c0(uVar7,0x1f);
    if (cVar3 != '\0') {
      FUN_10039f8c0(param_1,7);
    }
  }
  uVar7 = FUN_1003b0a60(lVar1);
  uVar7 = FUN_10016f500(uVar7);
  cVar3 = FUN_10061b4d0(uVar7,0x80);
  if (cVar3 != '\0') {
    FUN_10039f8c0(param_1,6);
    pQVar8 = (QObject *)FUN_10039faa0(param_1,6);
    QObject::installEventFilter(pQVar8);
  }
  pQVar2 = *(QWidget **)(param_1 + 0x38);
  pQVar9 = operator_new(0x30);
  QWidget::QWidget(pQVar9,pQVar2,0);
  QStackedWidget::addWidget(pQVar2);
  QStackedWidget::setCurrentIndex((int)pQVar2);
  QSettings::QSettings((QSettings *)&local_40,(QObject *)0x0);
  FUN_10039f310(&local_50,param_1);
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_50;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_21 = *(int *)local_50 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1df1466);
  QString::append(&local_48);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10039e9d0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10039e9d0:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10039ea00;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10039ea00:
  cVar3 = QSettings::contains((QString *)&local_40);
  uVar5 = 1;
  if (cVar3 != '\0') {
    local_68 = 0x80000000;
    local_70.field7 = 0;
    QSettings::value((QString *)&local_60,&local_40);
    uVar4 = QVariant::toUInt((bool *)&local_60);
    plVar10 = (long *)FUN_10039faa0(param_1,uVar4);
    QVariant::~QVariant(&local_60);
    QVariant::~QVariant((QVariant *)&local_70);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x1d8))(plVar10);
      uVar5 = (**(code **)(*plVar10 + 0x1a8))(plVar10);
    }
  }
  FUN_10039fc50(param_1,uVar5);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10039eac6;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10039eac6:
  QSettings::~QSettings((QSettings *)&local_40);
  return;
}

