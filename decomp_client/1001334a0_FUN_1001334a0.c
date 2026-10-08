
undefined4 FUN_1001334a0(int param_1)

{
  undefined4 uVar1;
  QVariant local_20;
  
  QComboBox::itemData((int)&local_20,param_1);
  uVar1 = QVariant::toUInt((bool *)&local_20);
  QVariant::~QVariant(&local_20);
  return uVar1;
}

