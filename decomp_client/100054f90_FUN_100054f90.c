
undefined8 * FUN_100054f90(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined1 local_38 [8];
  uint *local_30 [2];
  
  puVar2 = (uint *)*param_2;
  if (1 < *puVar2) {
    FUN_100036c40(param_2,puVar2[1]);
    puVar2 = (uint *)*param_2;
  }
  piVar1 = *(int **)(puVar2 + (long)(int)puVar2[2] * 2 + 4);
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    local_30[0] = (uint *)CONCAT71(local_30[0]._1_7_,*piVar1 != 0);
    puVar2 = (uint *)*param_2;
  }
  if (1 < *puVar2) {
    FUN_100036c40(param_2,puVar2[1]);
    puVar2 = (uint *)*param_2;
  }
  local_30[0] = puVar2 + (long)(int)puVar2[2] * 2 + 4;
  FUN_1000557c0(local_38,param_2,local_30);
  return param_1;
}

