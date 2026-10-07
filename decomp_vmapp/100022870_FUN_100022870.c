
void FUN_100022870(undefined8 param_1,long param_2,long param_3,long param_4)

{
  QVariant *this;
  long lVar1;
  
  if (param_2 - param_3 != 0) {
    lVar1 = 0;
    do {
      this = operator_new(0x10);
      QVariant::QVariant(this,*(QVariant **)(param_4 + lVar1));
      *(QVariant **)(param_2 + lVar1) = this;
      lVar1 = lVar1 + 8;
    } while ((param_2 - param_3) + lVar1 != 0);
  }
  return;
}

