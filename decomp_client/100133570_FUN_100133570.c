
undefined4 FUN_100133570(int param_1)

{
  undefined4 uVar1;
  QVariant local_28;
  
  QComboBox::currentIndex();
  QComboBox::itemData((int)&local_28,param_1);
  uVar1 = QVariant::toUInt((bool *)&local_28);
  QVariant::~QVariant(&local_28);
  return uVar1;
}

