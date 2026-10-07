
undefined4 * FUN_100526400(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint *puVar4;
  undefined1 local_38 [8];
  uint *local_30 [2];
  
  puVar4 = (uint *)*param_2;
  if (1 < *puVar4) {
    FUN_1005264e0(param_2,puVar4[1]);
    puVar4 = (uint *)*param_2;
  }
  puVar2 = *(undefined4 **)(puVar4 + (long)(int)puVar4[2] * 2 + 4);
  uVar1 = *puVar2;
  *param_1 = uVar1;
  piVar3 = *(int **)(puVar2 + 2);
  *(int **)(param_1 + 2) = piVar3;
  if (1 < *piVar3 + 1U) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    local_30[0] = (uint *)CONCAT71(local_30[0]._1_7_,*piVar3 != 0);
    uVar1 = *puVar2;
    puVar4 = (uint *)*param_2;
  }
  *param_1 = uVar1;
  if (1 < *puVar4) {
    FUN_1005264e0(param_2,puVar4[1]);
    puVar4 = (uint *)*param_2;
  }
  local_30[0] = puVar4 + (long)(int)puVar4[2] * 2 + 4;
  FUN_100526590(local_38,param_2,local_30);
  return param_1;
}

