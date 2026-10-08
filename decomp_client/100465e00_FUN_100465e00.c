
void FUN_100465e00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
                  QBrush *param_5)

{
  int *piVar1;
  
  piVar1 = (int *)*param_2;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = (int *)*param_3;
  param_1[1] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 2) = *param_4;
  *(undefined2 *)((long)param_1 + 0x1c) = *(undefined2 *)(param_4 + 3);
  *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)(param_4 + 1);
  if (*(int *)(*(long *)param_5 + 4) == 0) {
    QBrush::QBrush((QBrush *)(param_1 + 4),param_4,1);
  }
  else {
    QBrush::QBrush((QBrush *)(param_1 + 4),param_5);
  }
  return;
}

