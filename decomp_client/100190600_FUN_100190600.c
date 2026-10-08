
void FUN_100190600(long param_1,QString *param_2)

{
  char cVar1;
  
  cVar1 = operator==((QString *)(param_1 + 0xe8),param_2);
  if (cVar1 != '\0') {
    return;
  }
  QString::operator=((QString *)(param_1 + 0xe8),param_2);
  FUN_1008056d0(param_1);
  return;
}

