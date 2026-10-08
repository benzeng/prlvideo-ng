
void FUN_10072e1f0(long param_1,QString *param_2)

{
  char cVar1;
  
  cVar1 = operator==(param_2,(QString *)(param_1 + 0x50));
  if (cVar1 != '\0') {
    return;
  }
  QString::operator=((QString *)(param_1 + 0x50),param_2);
  FUN_1008555f0(param_1,param_2);
  return;
}

