
void FUN_10018e740(undefined8 param_1,int param_2)

{
  long lVar1;
  
  if (param_2 < 0) {
    return;
  }
  lVar1 = QObject::sender();
  if (lVar1 != 0) {
    lVar1 = ___dynamic_cast(lVar1,PTR_typeinfo_1021e1720,PTR_typeinfo_1021e1640,0);
    if (lVar1 != 0) {
      FUN_10018e680(param_1,lVar1,0);
      return;
    }
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get request info object.");
  return;
}

