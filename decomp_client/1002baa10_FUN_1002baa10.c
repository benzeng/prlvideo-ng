
undefined4 * FUN_1002baa10(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint *puVar4;
  undefined1 local_28 [8];
  uint *local_20;
  
  puVar4 = (uint *)*param_2;
  if (1 < *puVar4) {
    FUN_1002bb230(param_2,puVar4[1]);
    puVar4 = (uint *)*param_2;
  }
  puVar2 = *(undefined4 **)(puVar4 + (long)(int)puVar4[2] * 2 + 4);
  *param_1 = *puVar2;
  piVar3 = *(int **)(puVar2 + 2);
  *(int **)(param_1 + 2) = piVar3;
  if (1 < *piVar3 + 1U) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    local_20 = (uint *)CONCAT71(local_20._1_7_,*piVar3 != 0);
  }
  piVar3 = *(int **)(puVar2 + 4);
  *(int **)(param_1 + 4) = piVar3;
  if (1 < *piVar3 + 1U) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    local_20 = (uint *)CONCAT71(local_20._1_7_,*piVar3 != 0);
  }
  piVar3 = *(int **)(puVar2 + 6);
  *(int **)(param_1 + 6) = piVar3;
  if (1 < *piVar3 + 1U) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    local_20 = (uint *)CONCAT71(local_20._1_7_,*piVar3 != 0);
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(puVar2 + 8);
  uVar1 = *puVar2;
  *param_1 = uVar1;
  piVar3 = *(int **)(puVar2 + 10);
  *(int **)(param_1 + 10) = piVar3;
  if (1 < *piVar3 + 1U) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    local_20 = (uint *)CONCAT71(local_20._1_7_,*piVar3 != 0);
    uVar1 = *puVar2;
  }
  *param_1 = uVar1;
  piVar3 = *(int **)(puVar2 + 0xc);
  *(int **)(param_1 + 0xc) = piVar3;
  if (1 < *piVar3 + 1U) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    local_20 = (uint *)CONCAT71(local_20._1_7_,*piVar3 != 0);
    uVar1 = *puVar2;
  }
  *param_1 = uVar1;
  piVar3 = *(int **)(puVar2 + 0xe);
  *(int **)(param_1 + 0xe) = piVar3;
  if (1 < *piVar3 + 1U) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    local_20 = (uint *)CONCAT71(local_20._1_7_,*piVar3 != 0);
    uVar1 = *puVar2;
  }
  *param_1 = uVar1;
  puVar4 = (uint *)*param_2;
  if (1 < *puVar4) {
    FUN_1002bb230(param_2,puVar4[1]);
    puVar4 = (uint *)*param_2;
  }
  local_20 = puVar4 + (long)(int)puVar4[2] * 2 + 4;
  FUN_1002bb340(local_28,param_2,&local_20);
  return param_1;
}

