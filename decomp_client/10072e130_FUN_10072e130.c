
void FUN_10072e130(long param_1,QString *param_2)

{
  char cVar1;
  
  cVar1 = operator==(param_2,(QString *)(param_1 + 0x48));
  if (cVar1 != '\0') {
    return;
  }
  QString::operator=((QString *)(param_1 + 0x48),param_2);
  FUN_1008555a0(param_1,param_2);
  return;
}

