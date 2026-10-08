
void FUN_10014c170(QStyleOption *param_1,QStyleOption *param_2)

{
  undefined8 uVar1;
  
  QStyleOption::QStyleOption(param_1,4,10);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0xffffffffffffffff;
  QFont::QFont((QFont *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x6c) = 0;
  QLocale::QLocale((QLocale *)(param_1 + 0x70));
  *(undefined8 *)(param_1 + 0x80) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  QIcon::QIcon((QIcon *)(param_1 + 0xa0));
  *(undefined **)(param_1 + 0xa8) = PTR_shared_null_1021e1288;
  QBrush::QBrush((QBrush *)(param_1 + 0xb8));
  QStyleOption::operator=(param_1,param_2);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  QFont::operator=((QFont *)(param_1 + 0x58),(QFont *)(param_2 + 0x58));
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  QLocale::operator=((QLocale *)(param_1 + 0x70),(QLocale *)(param_2 + 0x70));
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  QIcon::operator=((QIcon *)(param_1 + 0xa0),(QIcon *)(param_2 + 0xa0));
  QString::operator=((QString *)(param_1 + 0xa8),(QString *)(param_2 + 0xa8));
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  QBrush::operator=((QBrush *)(param_1 + 0xb8),(QBrush *)(param_2 + 0xb8));
  return;
}

