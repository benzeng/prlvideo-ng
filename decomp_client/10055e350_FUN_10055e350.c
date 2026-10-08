
undefined4 FUN_10055e350(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  QVariant local_28;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18);
  QComboBox::currentIndex();
  QComboBox::itemData((int)&local_28,(int)uVar1);
  uVar2 = QVariant::toInt((bool *)&local_28);
  QVariant::~QVariant(&local_28);
  return uVar2;
}

