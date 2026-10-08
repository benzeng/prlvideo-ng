
void FUN_1006f4d80(long param_1,QString *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x68);
  QString::operator=((QString *)(lVar1 + 0x48),param_2);
  QString::operator=((QString *)(lVar1 + 0x50),param_2 + 1);
  QString::operator=((QString *)(lVar1 + 0x58),param_2 + 2);
  QString::operator=((QString *)(lVar1 + 0x60),param_2 + 3);
  QString::operator=((QString *)(lVar1 + 0x68),param_2 + 4);
  QString::operator=((QString *)(lVar1 + 0x70),param_2 + 5);
  QString::operator=((QString *)(lVar1 + 0x78),param_2 + 6);
  QString::operator=((QString *)(lVar1 + 0x80),param_2 + 7);
  QString::operator=((QString *)(lVar1 + 0x88),param_2 + 8);
  QString::operator=((QString *)(lVar1 + 0x90),param_2 + 9);
  FUN_100283c40(lVar1 + 0x98,param_2 + 10);
  QString::operator=((QString *)(lVar1 + 0xa0),param_2 + 0xb);
  QString::operator=((QString *)(lVar1 + 0xa8),param_2 + 0xc);
  QString::operator=((QString *)(lVar1 + 0xb0),param_2 + 0xd);
  QString::operator=((QString *)(lVar1 + 0xb8),param_2 + 0xe);
  QString::operator=((QString *)(lVar1 + 0xc0),param_2 + 0xf);
  FUN_1006f3a90(*(undefined8 *)(param_1 + 0x68));
  return;
}

