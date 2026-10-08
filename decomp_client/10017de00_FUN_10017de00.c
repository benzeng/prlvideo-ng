
void FUN_10017de00(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = QObject::sender();
  if (lVar1 != 0) {
    lVar1 = ___dynamic_cast(lVar1,PTR_typeinfo_1021e1720,&PTR_vtable_1021fd4e0,0);
    if (lVar1 != 0) {
      FUN_10017d910(param_1,lVar1);
      return;
    }
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: vm object is null");
  return;
}

