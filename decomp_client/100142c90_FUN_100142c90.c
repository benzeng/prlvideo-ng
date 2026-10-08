
void FUN_100142c90(long param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  Connection local_30 [12];
  undefined4 local_24;
  
  local_24 = param_2;
  pvVar1 = operator_new(0x100);
  FUN_1001416a0(pvVar1,param_1,param_2);
  QBoxLayout::addWidget(*(undefined8 *)(param_1 + 0x30),pvVar1,0,0);
  QObject::connect(local_30,pvVar1,"2clicked( PRL_VM_COLOR )",param_1,
                   "1onButtonClicked( PRL_VM_COLOR )",0);
  QMetaObject::Connection::~Connection(local_30);
  puVar2 = (undefined8 *)FUN_100143680(param_1 + 0x38,&local_24);
  *puVar2 = pvVar1;
  return;
}

