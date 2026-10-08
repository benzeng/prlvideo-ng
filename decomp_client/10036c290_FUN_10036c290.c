
void FUN_10036c290(long param_1,QString *param_2)

{
  QString::operator=((QString *)(param_1 + 0x40),param_2);
  MacUtils::setAlternateWindowTitle(*(QWidget **)(param_1 + 0x10),param_2);
  FUN_100833360(*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}

