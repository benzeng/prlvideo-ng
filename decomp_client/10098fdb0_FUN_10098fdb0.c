
void FUN_10098fdb0(QObject *param_1,QObject *param_2,QObject *param_3)

{
  long lVar1;
  undefined4 *puVar2;
  QObject *pQVar3;
  Connection local_58 [8];
  code *local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_102233ae0;
  if (param_2 == (QObject *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined ***)param_1 = &PTR_FUN_102233b78;
    pQVar3 = (QObject *)0x0;
  }
  else {
    lVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
    *(long *)(param_1 + 0x10) = lVar1;
    *(QObject **)(param_1 + 0x18) = param_2;
    *(undefined ***)param_1 = &PTR_FUN_102233b78;
    pQVar3 = (QObject *)0x0;
    if ((lVar1 != 0) && (pQVar3 = (QObject *)0x0, *(int *)(lVar1 + 4) != 0)) {
      pQVar3 = param_2;
    }
  }
  local_40 = FUN_1009bed40;
  local_38 = 0;
  local_50 = FUN_10098ff30;
  local_48 = 0;
  puVar2 = operator_new(0x20);
  *puVar2 = 1;
  *(code **)(puVar2 + 2) = FUN_100990070;
  *(code **)(puVar2 + 4) = FUN_10098ff30;
  *(undefined8 *)(puVar2 + 6) = 0;
  QObject::connectImpl
            (local_58,pQVar3,&local_40,param_1,&local_50,puVar2,0,0,&PTR_staticMetaObject_102233d80)
  ;
  QMetaObject::Connection::~Connection(local_58);
  return;
}

