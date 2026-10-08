
void FUN_1007864e0(long param_1,QVariant *param_2)

{
  char cVar1;
  
  cVar1 = QVariant::cmp((QVariant *)(*(long *)(param_1 + 0x10) + 0x20));
  if (cVar1 != '\0') {
    return;
  }
  QVariant::operator=((QVariant *)(*(long *)(param_1 + 0x10) + 0x20),param_2);
  FUN_10085ea50(param_1,*(long *)(param_1 + 0x10) + 0x20);
  return;
}

