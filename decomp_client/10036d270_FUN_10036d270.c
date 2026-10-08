
void FUN_10036d270(long param_1,QString *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  QString::operator=((QString *)(lVar1 + 0x40),param_2);
  MacUtils::setAlternateWindowTitle(*(QWidget **)(lVar1 + 0x10),param_2);
  FUN_100833360(*(undefined8 *)(lVar1 + 0x10),param_2);
  return;
}

