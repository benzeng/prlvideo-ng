
undefined8 FUN_100582370(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  QVariant local_30;
  
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x60) + 0x28);
  QComboBox::currentIndex();
  QComboBox::itemData((int)&local_30,(int)uVar1);
  QVariant::toString();
  QVariant::~QVariant(&local_30);
  return param_1;
}

