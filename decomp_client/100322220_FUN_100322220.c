
void FUN_100322220(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  puVar3 = operator_new(0x38);
  piVar2 = (int *)*param_3;
  uVar1 = param_3[1];
  *puVar3 = piVar2;
  puVar3[1] = uVar1;
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uVar1 = param_3[2];
  puVar3[3] = param_3[3];
  puVar3[2] = uVar1;
  QVariant::QVariant((QVariant *)(puVar3 + 4),(QVariant *)(param_3 + 4));
  *(undefined1 *)(puVar3 + 6) = *(undefined1 *)(param_3 + 6);
  *param_2 = puVar3;
  return;
}

