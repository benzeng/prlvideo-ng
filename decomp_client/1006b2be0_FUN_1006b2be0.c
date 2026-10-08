
void FUN_1006b2be0(QAction *param_1,QObject *param_2,QKeySequence *param_3,QObject *param_4)

{
  undefined8 uVar1;
  long local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QAction::QAction(param_1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_102225410;
  uVar1 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(QObject **)(param_1 + 0x18) = param_2;
  QKeySequence::QKeySequence((QKeySequence *)(param_1 + 0x20),param_3);
  FUN_1007170a0(&local_38,param_3,2);
  QAction::setText((QString *)param_1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006b2c85;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1006b2c85:
  QObject::connect(&local_40,param_1,"2triggered(bool)",param_1,"1onTriggered()",0);
  if (local_40 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  return;
}

