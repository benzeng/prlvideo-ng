
void FUN_10015a150(long param_1,QString *param_2)

{
  char cVar1;
  
  cVar1 = operator==((QString *)(param_1 + 0x30),param_2);
  if (cVar1 != '\0') {
    return;
  }
  QString::operator=((QString *)(param_1 + 0x30),param_2);
  FUN_100800390(param_1,param_1 + 0x28);
  return;
}

