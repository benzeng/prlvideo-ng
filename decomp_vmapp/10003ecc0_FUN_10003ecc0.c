
void FUN_10003ecc0(undefined8 param_1,QString *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = QString::lastIndexOf(param_2,DAT_1011b6280,0xffffffff,1);
  if (-1 < iVar2) {
    FUN_10003fcc0();
    return;
  }
  cVar1 = operator==(param_2,(QString *)&DAT_1011b6290);
  if (cVar1 != '\0') {
    FUN_100040770(param_1,param_3);
    return;
  }
  FUN_100040010();
  return;
}

