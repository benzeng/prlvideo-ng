
void FUN_100135850(QObject *param_1,QAction *param_2)

{
  undefined *puVar1;
  QAction *this;
  QVariant local_60;
  QVariant local_50;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,0x1dc0d55);
  puVar1 = PTR_s__10226d698;
  if (PTR_s__10226d698 != (undefined *)0x0) {
    _strlen(PTR_s__10226d698);
  }
  QString::fromUtf8_helper((char *)&local_38,(int)puVar1);
  QString::append(&local_40);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001358ed;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1001358ed:
  this = operator_new(0x10);
  QAction::QAction(this,&local_40,param_1);
  QAction::setCheckable(SUB81(this,0));
  QVariant::QVariant(&local_50,0xff);
  QAction::setData((QVariant *)this);
  QVariant::~QVariant(&local_50);
  puVar1 = PTR_s_autoDetectAction_10226d6a0;
  QVariant::QVariant(&local_60,true);
  QObject::setProperty((char *)this,(QVariant *)puVar1);
  QVariant::~QVariant(&local_60);
  QWidget::addAction(param_2);
  QActionGroup::addAction(*(QAction **)(param_1 + 0x38));
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

