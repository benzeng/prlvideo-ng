
void FUN_100a18780(long param_1,QString *param_2)

{
  *(undefined4 *)(param_1 + 0x18) = 1;
  QString::operator=((QString *)(param_1 + 0x50),param_2);
  return;
}

