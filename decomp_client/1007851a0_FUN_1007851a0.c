
void FUN_1007851a0(long param_1,QString *param_2)

{
  char cVar1;
  
  cVar1 = operator==(param_2,(QString *)(*(long *)(param_1 + 0x10) + 8));
  if (cVar1 != '\0') {
    return;
  }
  QString::operator=((QString *)(*(long *)(param_1 + 0x10) + 8),param_2);
  FUN_10085e390(param_1,param_2);
  return;
}

