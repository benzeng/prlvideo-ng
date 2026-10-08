
void FUN_100a18750(long param_1,QString *param_2,QString *param_3)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  QString::operator=((QString *)(param_1 + 0x28),param_2);
  QString::operator=((QString *)(param_1 + 0x30),param_3);
  return;
}

