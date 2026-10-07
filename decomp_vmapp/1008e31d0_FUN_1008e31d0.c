
undefined8 FUN_1008e31d0(bool *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = QVariant::canConvert((int)param_1);
  if (cVar1 != '\0') {
    uVar2 = QVariant::toInt(param_1);
    return uVar2;
  }
  return 0xffffffff;
}

