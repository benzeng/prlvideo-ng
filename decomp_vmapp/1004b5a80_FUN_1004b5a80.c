
undefined8 * FUN_1004b5a80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  uint *puVar4;
  undefined1 local_38 [8];
  uint *local_30 [2];
  
  puVar4 = (uint *)*param_2;
  if (1 < *puVar4) {
    FUN_1004b5cc0(param_2,puVar4[1]);
    puVar4 = (uint *)*param_2;
  }
  puVar1 = *(undefined8 **)(puVar4 + (long)(int)puVar4[2] * 2 + 4);
  piVar2 = (int *)*puVar1;
  *param_1 = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    local_30[0] = (uint *)CONCAT71(local_30[0]._1_7_,*piVar2 != 0);
    puVar4 = (uint *)*param_2;
  }
  uVar3 = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[1] = uVar3;
  if (1 < *puVar4) {
    FUN_1004b5cc0(param_2,puVar4[1]);
    puVar4 = (uint *)*param_2;
  }
  local_30[0] = puVar4 + (long)(int)puVar4[2] * 2 + 4;
  FUN_1004b5e80(local_38,param_2,local_30);
  return param_1;
}

