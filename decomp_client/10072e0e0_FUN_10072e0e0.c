
void FUN_10072e0e0(long param_1,QString *param_2)

{
  char cVar1;
  
  cVar1 = operator==(param_2,(QString *)(param_1 + 0x40));
  if (cVar1 != '\0') {
    return;
  }
  QString::operator=((QString *)(param_1 + 0x40),param_2);
  FUN_100855550(param_1,param_2);
  return;
}

