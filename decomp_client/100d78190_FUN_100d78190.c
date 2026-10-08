
void FUN_100d78190(QObject *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  QObject *pQVar1;
  long lVar2;
  long *plVar3;
  QArrayData *local_60;
  QArrayData *local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10225bd00;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  lVar2 = *param_3;
  *(long *)(param_1 + 0x18) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x24] = (QObject)0x0;
  pQVar1 = param_1 + 0x28;
  FUN_100d77fb0(pQVar1,param_4);
  FUN_100d77fc0(&local_40,pQVar1);
  FUN_100d77950(param_1 + 0x30,&local_40,FUN_100d784b0,param_1);
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  FUN_100d77fc0(&local_48,pQVar1);
  FUN_100d77a30(param_1 + 0x48,&local_48);
  if (local_48 != 0) {
    _PrlHandle_Free();
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  QObject::connect(&local_50,param_1,"2eventReceived(const SdkHandleWrap)",param_1,
                   "1processEvent(const SdkHandleWrap)",2);
  if (local_50 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  plVar3 = (long *)0x0;
  if (*param_3 != 0) {
    plVar3 = *(long **)(*param_3 + 0x10);
  }
  (**(code **)(*plVar3 + 0x20))(&local_58);
  FUN_100d77ff0(pQVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d782f3;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100d782f3:
  plVar3 = (long *)0x0;
  if (*param_3 != 0) {
    plVar3 = *(long **)(*param_3 + 0x10);
  }
  (**(code **)(*plVar3 + 0x18))(&local_60);
  FUN_100d780c0(pQVar1,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d7834b;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100d7834b:
  FUN_100d77b00(param_1 + 0x48);
  return;
}

