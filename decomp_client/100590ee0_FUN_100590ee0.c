
void FUN_100590ee0(long param_1,int param_2)

{
  QString *pQVar1;
  long *plVar2;
  code *pcVar3;
  undefined1 uVar4;
  long *plVar5;
  QVariant local_68;
  Data_conflict local_58;
  QString local_50 [2];
  QArrayData *local_40;
  undefined1 local_31;
  
  QStackedWidget::widget((int)*(undefined8 *)(param_1 + 0xb0));
  plVar5 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221a0a0);
  if (plVar5 == (long *)0x0) {
    return;
  }
  QStackedWidget::setCurrentIndex((int)*(undefined8 *)(param_1 + 0xb0));
  pQVar1 = *(QString **)(param_1 + 0x10);
  FUN_100525a50(&local_40,plVar5);
  QWidget::setWindowTitle(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100590f7b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100590f7b:
  plVar2 = *(long **)(*(long *)(*(long *)(param_1 + 0x10) + 0x40) + 0x30);
  pcVar3 = *(code **)(*plVar2 + 0x68);
  uVar4 = FUN_100525ab0(plVar5);
  (*pcVar3)(plVar2,uVar4);
  QWidget::setFocus(plVar5,7);
  (**(code **)(*plVar5 + 0x1b0))(plVar5);
  (**(code **)(*plVar5 + 0x70))(plVar5);
  QWidget::setFixedHeight((int)plVar5);
  QSettings::QSettings((QSettings *)local_50,(QObject *)0x0);
  local_58.field7 = QString::fromAscii_helper("Application preferences/Last selected page",0x2a);
  QVariant::QVariant(&local_68,param_2);
  QSettings::setValue(local_50,(QVariant *)&local_58);
  QVariant::~QVariant(&local_68);
  if (*(int *)local_58.field15 != -1) {
    if (*(int *)local_58.field15 != 0) {
      LOCK();
      *(int *)local_58.field15 = *(int *)local_58.field15 + -1;
      local_31 = *(int *)local_58.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100591045;
    }
    QArrayData::deallocate((QArrayData *)local_58.field15,2,8);
  }
LAB_100591045:
  QSettings::~QSettings((QSettings *)local_50);
  return;
}

