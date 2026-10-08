
void FUN_100159720(long param_1,QString *param_2)

{
  char cVar1;
  
  cVar1 = FUN_10010f120(param_2);
  if (cVar1 != '\0') {
    QString::operator=((QString *)(param_1 + 0x38),param_2);
    return;
  }
  return;
}

