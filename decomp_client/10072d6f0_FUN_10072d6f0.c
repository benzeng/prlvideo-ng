
void FUN_10072d6f0(long param_1,QString *param_2)

{
  char cVar1;
  
  cVar1 = operator==(param_2,(QString *)(param_1 + 0x10));
  if (cVar1 != '\0') {
    return;
  }
  QString::operator=((QString *)(param_1 + 0x10),param_2);
  FUN_100855360(param_1,param_2);
  return;
}

