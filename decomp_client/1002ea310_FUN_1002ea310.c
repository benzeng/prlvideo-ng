
void FUN_1002ea310(CAbstractProgressOperation *param_1,undefined4 **param_2,QObject *param_3)

{
  long local_78;
  undefined8 local_70;
  QArrayData *local_68;
  undefined4 *local_60;
  int *piStack_58;
  undefined4 *local_50;
  QVariant local_48;
  QArrayData *local_38;
  undefined1 local_29;
  
  CAbstractProgressOperation::CAbstractProgressOperation(param_1,param_3);
  param_1->field0_0x0 = (undefined4 **)&PTR_FUN_1021ef810;
  param_1[1].field0_0x0 = param_2;
  CAbstractProgressOperation::setCancellable(SUB81(param_1,0));
  local_70 = param_2[3];
  local_68 = (QArrayData *)param_2[4];
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_29 = *(int *)local_68 != 0;
    UNLOCK();
  }
  local_60 = param_2[5];
  piStack_58 = param_2[6];
  local_50 = param_2[7];
  if (piStack_58 != (int *)0x0) {
    LOCK();
    *piStack_58 = *piStack_58 + 1;
    local_29 = *piStack_58 != 0;
    UNLOCK();
  }
  QVariant::QVariant(&local_48,(QVariant *)(param_2 + 8));
  if (local_70._4_4_ == 0x88d) {
    QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,0x1de5ef3);
  }
  else {
    QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,0x1dd1ee5);
  }
  CAbstractProgressOperation::setName((QString *)param_1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002ea427;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002ea427:
  QVariant::~QVariant(&local_48);
  if (piStack_58 != (int *)0x0) {
    LOCK();
    *piStack_58 = *piStack_58 + -1;
    local_29 = *piStack_58 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (piStack_58 != (int *)0x0)) {
      operator_delete(piStack_58);
    }
  }
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002ea484;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1002ea484:
  QObject::connect(&local_78,param_2,"2jobProgressChanged(uint)",param_1,"1onProgressChanged(uint)",
                   0);
  if (local_78 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  return;
}

