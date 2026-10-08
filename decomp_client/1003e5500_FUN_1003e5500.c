
void FUN_1003e5500(QHash *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_1003e3340(uVar1);
  FUN_1003e31a0(uVar1);
  CMappingModel::dataChanged();
  CMappingModel::setValues(param_1);
  return;
}

