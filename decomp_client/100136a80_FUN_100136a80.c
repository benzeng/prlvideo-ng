
void FUN_100136a80(undefined8 param_1)

{
  undefined4 uVar1;
  QVariant local_28;
  
  QComboBox::itemData((int)&local_28,(int)param_1);
  uVar1 = QVariant::toUInt((bool *)&local_28);
  QVariant::~QVariant(&local_28);
  FUN_100134ea0();
  FUN_1007fa980(param_1,uVar1);
  FUN_1001367e0(param_1);
  return;
}

