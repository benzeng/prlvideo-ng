
void FUN_10072dff0(long param_1,QString *param_2)

{
  char cVar1;
  
  cVar1 = operator==(param_2,(QString *)(param_1 + 0x28));
  if (cVar1 != '\0') {
    return;
  }
  QString::operator=((QString *)(param_1 + 0x28),param_2);
  FUN_100855460(param_1,param_2);
  return;
}

