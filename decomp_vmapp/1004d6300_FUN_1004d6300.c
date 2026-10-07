
undefined8 * FUN_1004d6300(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint *puVar3;
  undefined1 local_40 [8];
  uint *local_38 [2];
  
  puVar3 = (uint *)*param_2;
  if (1 < *puVar3) {
    FUN_1004d6530(param_2,puVar3[1]);
    puVar3 = (uint *)*param_2;
  }
  puVar1 = *(undefined8 **)(puVar3 + (long)(int)puVar3[2] * 2 + 4);
  piVar2 = (int *)*puVar1;
  *param_1 = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    local_38[0] = (uint *)CONCAT71(local_38[0]._1_7_,*piVar2 != 0);
  }
  piVar2 = (int *)puVar1[1];
  param_1[1] = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    local_38[0] = (uint *)CONCAT71(local_38[0]._1_7_,*piVar2 != 0);
  }
  puVar3 = (uint *)*param_2;
  if (1 < *puVar3) {
    FUN_1004d6530(param_2,puVar3[1]);
    puVar3 = (uint *)*param_2;
  }
  local_38[0] = puVar3 + (long)(int)puVar3[2] * 2 + 4;
  FUN_1004d65e0(local_40,param_2,local_38);
  return param_1;
}

