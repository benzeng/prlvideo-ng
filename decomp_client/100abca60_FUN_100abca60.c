
void FUN_100abca60(QObject *param_1,QObject *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  Connection local_50 [8];
  long local_48;
  Connection local_40 [16];
  
  QObject::QObject(param_1,(QObject *)0x0);
  FUN_100a4a020();
  *(undefined ***)param_1 = &PTR_FUN_102239f50;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102239fd0;
  uVar2 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(QObject **)(param_1 + 0x28) = param_2;
  pvVar3 = operator_new(0x10);
  FUN_100abf440(pvVar3,param_1);
  puVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_100abf4b0(pvVar3);
    operator_delete(pvVar3);
    puVar4 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar4 + 1) = 1;
    puVar4[2] = pvVar3;
    *puVar4 = &PTR_FUN_102282768;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar4;
  plVar5 = operator_new(0x40);
  FUN_100ac0db0(plVar5,param_2);
  puVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  else {
    *(undefined4 *)(puVar4 + 1) = 1;
    puVar4[2] = plVar5;
    *puVar4 = &PTR_FUN_1022827c8;
  }
  *(undefined8 **)(param_1 + 0x38) = puVar4;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (DAT_102313b08 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_102313b08);
    if (iVar1 != 0) {
      FUN_100aba350(&DAT_102313b00);
      ___cxa_atexit(FUN_100aba3f0,&DAT_102313b00,0x100000000);
      ___cxa_guard_release(&DAT_102313b08);
    }
  }
  FUN_10009c520("SmartPChar",0,0);
  QObject::connect(local_40,param_1,"2sigQueueToGuiThread(const SmartPChar, unsigned)",param_1,
                   "1onDataReceived(const SmartPChar, unsigned)",2);
  QMetaObject::Connection::~Connection(local_40);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001a61d0(pvVar3);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar3;
  }
  QObject::connect(&local_48,DAT_1023108e0,
                   "2appUIOptionChanged(GUI::ApplicationUIOptions, GUI::ApplicationUIOptions)",
                   param_1,
                   "1onAppUIOptionChanged(GUI::ApplicationUIOptions, GUI::ApplicationUIOptions)",0);
  if (local_48 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  if (DAT_1023109b8 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_100759600(pvVar3);
    DAT_102271308 = 1;
    DAT_1023109b8 = pvVar3;
  }
  QObject::connect(local_50,DAT_1023109b8,"2iconGeometryChanged()",param_1,
                   "1onIIiconGeometryChanged()",0);
  QMetaObject::Connection::~Connection(local_50);
  FUN_100a4a120(param_1 + 0x10,param_3,4);
  return;
}

