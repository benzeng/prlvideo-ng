
void FUN_1004b6d20(long param_1,QString *param_2,char param_3)

{
  FUN_1004b6d80();
  QString::operator=((QString *)(param_1 + 0x40),param_2);
  if (param_3 != '\0') {
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  *(undefined1 *)(param_1 + 0xa9) = 1;
  FUN_1002af110(*(long *)(param_1 + 0x50),1,*(long *)(*(long *)(param_1 + 0x50) + 0x868) != 0);
  return;
}

