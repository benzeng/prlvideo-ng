
void FUN_100024780(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100ba7be8;
  param_1[5] = &PTR_FUN_100ba7c40;
  QObject::deleteLater();
  FUN_100519360(DAT_1011c3698 + 0x10f0,0x13);
  FUN_1004ec3e0(*(undefined8 *)(param_1[0x10] + 0xa0));
  FUN_1005192c0(param_1 + 5);
  FUN_1004c0680(param_1);
  return;
}

