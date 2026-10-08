
void FUN_1007b63d0(undefined8 param_1,char param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = QObject::sender();
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = ___dynamic_cast(lVar2,PTR_typeinfo_1021e1720,&PTR_vtable_10222d910,0);
  }
  if (param_2 != '\0') {
    cVar1 = QActionGroup::isExclusive();
    if (cVar1 != '\0') {
      if (lVar3 != 0) {
        FUN_1007b61a0(param_1,lVar3);
        return;
      }
      FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get sender action instance.");
      return;
    }
  }
  return;
}

