
void FUN_100746870(QObject *param_1,undefined8 *param_2,QObject *param_3)

{
  int *piVar1;
  QObject *this;
  undefined1 auVar2 [16];
  long local_30;
  undefined1 local_21;
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_102228180;
  this = operator_new(0x98);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f6220;
  *(QObject **)(this + 0x10) = param_1;
  piVar1 = (int *)*param_2;
  *(int **)(this + 0x18) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_21 = *piVar1 != 0;
    UNLOCK();
  }
  *(undefined4 *)(this + 0x20) = 0;
  this[0x28] = (QObject)0x1;
  auVar2._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar2._0_8_ = PTR_shared_null_1021e1288;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(this + 0x30) = auVar2;
  *(undefined1 (*) [16])(this + 0x40) = auVar2;
  *(undefined1 (*) [16])(this + 0x50) = auVar2;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined **)(this + 0x68) = PTR_shared_null_1021e12f0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(QObject **)(param_1 + 0x10) = this;
  QObject::connect(&local_30,this,"2stateChanged(WebStore::CCatalogModel::State)",param_1,
                   "2stateChanged(WebStore::CCatalogModel::State)",0);
  if (local_30 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  return;
}

