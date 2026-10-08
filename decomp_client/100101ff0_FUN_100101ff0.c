
undefined8 * FUN_100101ff0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint *puVar3;
  undefined1 local_28 [8];
  uint *local_20;
  
  puVar3 = (uint *)*param_2;
  if (1 < *puVar3) {
    FUN_1001020d0(param_2,puVar3[1]);
    puVar3 = (uint *)*param_2;
  }
  puVar1 = *(undefined8 **)(puVar3 + (long)(int)puVar3[2] * 2 + 4);
  piVar2 = (int *)*puVar1;
  *param_1 = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    local_20 = (uint *)CONCAT71(local_20._1_7_,*piVar2 != 0);
  }
  piVar2 = (int *)puVar1[1];
  param_1[1] = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    local_20 = (uint *)CONCAT71(local_20._1_7_,*piVar2 != 0);
  }
  piVar2 = (int *)puVar1[2];
  param_1[2] = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    local_20 = (uint *)CONCAT71(local_20._1_7_,*piVar2 != 0);
  }
  puVar3 = (uint *)*param_2;
  if (1 < *puVar3) {
    FUN_1001020d0(param_2,puVar3[1]);
    puVar3 = (uint *)*param_2;
  }
  local_20 = puVar3 + (long)(int)puVar3[2] * 2 + 4;
  FUN_1001014b0(local_28,param_2,&local_20);
  return param_1;
}

