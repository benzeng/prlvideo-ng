
void FUN_1002c78f0(QObject *param_1,QString *param_2,uint param_3,int param_4)

{
  char cVar1;
  ushort uVar2;
  QObject *pQVar3;
  long lVar4;
  undefined8 uVar5;
  QString local_40;
  undefined1 local_33;
  undefined1 local_32;
  
  QNetworkProxy::hostName();
  cVar1 = operator==(&local_40,param_2);
  if (cVar1 == '\0') {
    if (*(int *)local_40.field0_0x0 == -1) {
      return;
    }
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_32 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    return;
  }
  uVar2 = QNetworkProxy::port();
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_33 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_33) goto LAB_1002c796f;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1002c796f:
  if (uVar2 == param_3) {
    if (DAT_1023108f0 == (QObject *)0x0) {
      pQVar3 = operator_new(0x18);
      FUN_1001beb60(pQVar3);
      DAT_10226db18 = 1;
      DAT_1023108f0 = pQVar3;
    }
    QObject::disconnect(DAT_1023108f0,"2proxyCommited(QString,uint,PRL_RESULT)",param_1,
                        "1onProxyCommited(QString,uint,PRL_RESULT)");
    if (param_4 < 0) {
      lVar4 = *(long *)param_1;
      uVar5 = 0x80000009;
      if (param_4 == -0x7ffffd8b) {
        uVar5 = 0x80000275;
      }
    }
    else {
      CAbstractTask::prependSubTask((int)param_1);
      lVar4 = *(long *)param_1;
      uVar5 = 0;
    }
    (**(code **)(lVar4 + 0xb0))(param_1,uVar5);
  }
  return;
}

