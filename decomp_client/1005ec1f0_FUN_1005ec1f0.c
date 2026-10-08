
void FUN_1005ec1f0(QObject *param_1,undefined8 param_2)

{
  QAction *this;
  Connection local_40 [8];
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_1005ecd90(param_1,param_2,0xf,0);
  *(undefined ***)param_1 = &PTR_FUN_10221f650;
  QMetaObject::tr((char *)&local_30,(char *)&PTR_PTR_10221f610,0x1dc6ef4);
  CAbstractWizardPage::setTitle((QString *)param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005ec275;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005ec275:
  this = operator_new(0x10);
  QAction::QAction(this,param_1);
  *(QAction **)(param_1 + 0x40) = this;
  QMetaObject::tr((char *)&local_38,(char *)&PTR_PTR_10221f610,0x1dc3fe1);
  QAction::setText((QString *)this);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005ec2ec;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005ec2ec:
  QObject::connect(local_40,*(undefined8 *)(param_1 + 0x40),"2triggered()",param_1,
                   "1onConfigActionTriggered()",0);
  QMetaObject::Connection::~Connection(local_40);
  return;
}

