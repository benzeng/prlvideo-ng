
void FUN_100a4d130(QObject *param_1,undefined8 param_2)

{
  long in_RAX;
  long local_28;
  
  local_28 = in_RAX;
  QObject::QObject(param_1,(QObject *)0x0);
  FUN_100a4a020(param_1 + 0x10);
  *(undefined ***)param_1 = &PTR_FUN_102238530;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1022385b0;
  if (DAT_10226ca68 == 0) {
    DAT_10226ca68 = FUN_10009c520("SmartCharPtr_t",0xffffffffffffffff,1);
  }
  FUN_10009bee0("unsigned",0,0);
  FUN_1003193b0(&local_28,param_2);
  FUN_100a4a120(param_1 + 0x10,local_28,0x13);
  if (local_28 != 0) {
    _PrlHandle_Free();
  }
  return;
}

