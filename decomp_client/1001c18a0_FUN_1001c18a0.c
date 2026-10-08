
void FUN_1001c18a0(undefined8 *param_1,undefined8 *param_2,QPixmap *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)*param_2;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  QPixmap::QPixmap((QPixmap *)(param_1 + 1),param_3);
  return;
}

