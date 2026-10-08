
void FUN_10041e0f0(undefined8 *param_1,undefined8 *param_2,QVariant *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)*param_2;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  QVariant::QVariant((QVariant *)(param_1 + 1),param_3);
  return;
}

