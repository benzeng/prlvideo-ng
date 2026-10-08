
void FUN_1007c4fd0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = QObject::sender();
  if (lVar1 != 0) {
    lVar1 = ___dynamic_cast(lVar1,PTR_typeinfo_1021e1720,&PTR_vtable_10222d910,0);
    if (lVar1 != 0) {
      FUN_100863ee0(param_1,lVar1);
      return;
    }
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t cast triggered action to device action");
  return;
}

