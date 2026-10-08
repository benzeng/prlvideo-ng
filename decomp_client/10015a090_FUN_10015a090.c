
void FUN_10015a090(long param_1,QString *param_2)

{
  QString *this;
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  this = (QString *)(param_1 + 0x28);
  cVar1 = operator==(this,param_2);
  if (cVar1 != '\0') {
    return;
  }
  uVar2 = FUN_100152280();
  lVar3 = FUN_100152740(uVar2,param_2);
  if (lVar3 != 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: there is another server with the same name.");
    return;
  }
  QString::operator=(this,param_2);
  FUN_100800390(param_1,this);
  return;
}

