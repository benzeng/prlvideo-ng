
void FUN_1006a0460(QObject *param_1,undefined8 param_2,undefined8 param_3,QObject *param_4)

{
  QSignalMapper *this;
  void *pvVar1;
  Connection local_38 [8];
  Connection local_30 [8];
  Connection local_28 [8];
  
  QObject::QObject(param_1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_102224f00;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  this = operator_new(0x10);
  QSignalMapper::QSignalMapper(this,param_1);
  *(QSignalMapper **)(param_1 + 0x20) = this;
  QObject::connect(local_28,this,"2mapped(QObject*)",*(undefined8 *)(param_1 + 0x10),
                   "1updateActions(QObject*)",0);
  QMetaObject::Connection::~Connection(local_28);
  FUN_1006a05e0(param_1);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar1 = operator_new(0x18);
    FUN_1001a61d0(pvVar1);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar1;
  }
  QObject::connect(local_30,DAT_1023108e0,"2serverAdded(const QString&)",param_1,
                   "1setupServerSignals(const QString&)",0);
  QMetaObject::Connection::~Connection(local_30);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar1 = operator_new(0x18);
    FUN_1001a61d0(pvVar1);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar1;
  }
  QObject::connect(local_38,DAT_1023108e0,"2vmAdded(const GUI::VmId&)",param_1,
                   "1setupVmSignals(const GUI::VmId&)",0);
  QMetaObject::Connection::~Connection(local_38);
  QObject::installEventFilter(*(QObject **)PTR_self_1021e1388);
  return;
}

