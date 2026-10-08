
undefined8 FUN_1002a7460(long param_1)

{
  QObject *pQVar1;
  QString *this;
  undefined1 local_60 [16];
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  long local_38;
  QString local_30;
  undefined1 local_21;
  
  pQVar1 = (QObject *)(param_1 + 0x48);
  QObject::disconnect(pQVar1,(char *)0x0,(QObject *)0x0,(char *)0x0);
  QObject::connect(&local_38,pQVar1,"2finished()",param_1,"1onUnmountImageFinished()",0);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  local_48 = (QArrayData *)QString::fromAscii_helper("hdiutil detach \"%1/\"",0x14);
  this = (QString *)(param_1 + 0xc0);
  QString::arg(&local_40,&local_48,this,0,0x20);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002a751f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002a751f:
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",2,"\n%s",local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_21 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002a7591;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
LAB_1002a7591:
  if (this->field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288) {
    local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::operator=(this,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_21 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002a75e4;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
LAB_1002a75e4:
  FUN_1002a98c0(local_60,FUN_1002a6cf0,&local_40);
  FUN_1002a9990(pQVar1,local_60);
  CAbstractTask::setWaitForSubTaskCompletion();
  FUN_1002a9d80(local_60);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return 0;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return 0;
}

