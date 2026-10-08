
void FUN_100786590(long param_1)

{
  char cVar1;
  Data_conflict local_20;
  undefined4 local_18;
  
  local_18 = 0x80000000;
  local_20.field7 = 0;
  cVar1 = QVariant::cmp((QVariant *)(*(long *)(param_1 + 0x10) + 0x20));
  if (cVar1 == '\0') {
    QVariant::operator=((QVariant *)(*(long *)(param_1 + 0x10) + 0x20),(QVariant *)&local_20);
    FUN_10085ea50(param_1,*(long *)(param_1 + 0x10) + 0x20);
  }
  QVariant::~QVariant((QVariant *)&local_20);
  FUN_10078f5e0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x40));
  return;
}

