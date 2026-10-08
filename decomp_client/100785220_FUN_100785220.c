
void FUN_100785220(long param_1,QString *param_2)

{
  char cVar1;
  
  cVar1 = operator==(param_2,(QString *)(*(long *)(param_1 + 0x10) + 0x10));
  if (cVar1 != '\0') {
    return;
  }
  QString::operator=((QString *)(*(long *)(param_1 + 0x10) + 0x10),param_2);
  FUN_10085e3e0(param_1,param_2);
  return;
}

