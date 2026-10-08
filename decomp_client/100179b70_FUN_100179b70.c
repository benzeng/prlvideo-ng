
void FUN_100179b70(QVariant *param_1,Data_conflict param_2,undefined8 param_3,long param_4)

{
  Connection local_58 [8];
  Connection local_50 [8];
  QVariant local_48;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_1001322e0(param_1,param_4);
  (param_1->field0_0x0).field0_0x0.field15 = (QObject *)&PTR_FUN_1021fd0c0;
  param_1[2].field0_0x0.field0_0x0 = param_2;
  *(undefined8 *)&param_1[2].field0_0x0.field1_0x8 = param_3;
  CVmSharedFolder::getName();
  QAction::setText((QString *)param_1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100179bf1;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100179bf1:
  QAction::setCheckable(SUB81(param_1,0));
  FUN_100179cf0(param_1);
  QVariant::QVariant(&local_48,6);
  QAction::setData(param_1);
  QVariant::~QVariant(&local_48);
  QObject::connect(local_50,param_1,"2triggered(bool)",param_1,"1onShareCustomFolder(bool)",0);
  QMetaObject::Connection::~Connection(local_50);
  if (param_4 != 0) {
    QObject::connect(local_58,param_1,"2folderSettingsChanged()",param_4,"1commitConfig()",0);
    QMetaObject::Connection::~Connection(local_58);
  }
  return;
}

