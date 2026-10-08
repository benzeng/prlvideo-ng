
QAction * FUN_1004e0550(int param_1,QObject *param_2)

{
  char cVar1;
  QAction *this;
  QVariant local_58;
  QString local_48;
  QArrayData *local_40;
  QIcon local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  cVar1 = FUN_1003b1e20();
  if (cVar1 == '\0') {
    return (QAction *)0x0;
  }
  this = operator_new(0x10);
  QAction::QAction(this,param_2);
  FUN_1003b4c00(&local_30,param_1);
  QAction::setText((QString *)this);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004e05d5;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1004e05d5:
  FUN_1003b34e0(&local_48,param_1,2);
  QIcon::QIcon(local_38,&local_48);
  QAction::setIcon((QIcon *)this);
  QIcon::~QIcon(local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004e063a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004e063a:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004e066a;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1004e066a:
  QVariant::QVariant(&local_58,param_1);
  QAction::setData((QVariant *)this);
  QVariant::~QVariant(&local_58);
  return this;
}

