
void FUN_1007630d0(long param_1,QString *param_2)

{
  char cVar1;
  
  cVar1 = operator==((QString *)(param_1 + 0x28),param_2);
  if (cVar1 != '\0') {
    return;
  }
  QString::operator=((QString *)(param_1 + 0x28),param_2);
  FUN_10085a810(param_1,param_2);
  return;
}

