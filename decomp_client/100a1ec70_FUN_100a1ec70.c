
undefined8 * FUN_100a1ec70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  uint *puVar4;
  undefined1 local_40 [8];
  uint *local_38;
  undefined1 local_29;
  
  puVar4 = (uint *)*param_2;
  if (1 < *puVar4) {
    FUN_100a1edb0(param_2,puVar4[1]);
    puVar4 = (uint *)*param_2;
  }
  puVar1 = *(undefined8 **)(puVar4 + (long)(int)puVar4[2] * 2 + 4);
  piVar3 = (int *)*puVar1;
  uVar2 = puVar1[1];
  *param_1 = piVar3;
  param_1[1] = uVar2;
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    local_29 = *piVar3 != 0;
    UNLOCK();
  }
  uVar2 = puVar1[2];
  param_1[3] = puVar1[3];
  param_1[2] = uVar2;
  QVariant::QVariant((QVariant *)(param_1 + 4),(QVariant *)(puVar1 + 4));
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(puVar1 + 6);
  local_38 = (uint *)*param_2;
  if (1 < *local_38) {
    FUN_100a1edb0(param_2,local_38[1]);
    local_38 = (uint *)*param_2;
  }
  local_38 = local_38 + (long)(int)local_38[2] * 2 + 4;
  FUN_100a1ee60(local_40,param_2,&local_38);
  return param_1;
}

