
void FUN_10072e040(long param_1,QString *param_2)

{
  char cVar1;
  
  cVar1 = operator==(param_2,(QString *)(param_1 + 0x38));
  if (cVar1 != '\0') {
    return;
  }
  QString::operator=((QString *)(param_1 + 0x38),param_2);
  FUN_100855500(param_1,param_2);
  return;
}

