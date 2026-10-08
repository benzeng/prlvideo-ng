
void FUN_100419750(undefined8 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (*(uint *)*param_1 < 2) {
    puVar2 = (undefined8 *)QListData::append();
    puVar3 = operator_new(0x20);
    uVar4 = *param_2;
    *puVar3 = uVar4;
    piVar1 = *(int **)(param_2 + 2);
    *(int **)(puVar3 + 2) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      uVar4 = *param_2;
    }
    *puVar3 = uVar4;
    piVar1 = *(int **)(param_2 + 4);
    *(int **)(puVar3 + 4) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  else {
    puVar2 = (undefined8 *)FUN_10041ce10(param_1,0x7fffffff,1);
    puVar3 = operator_new(0x20);
    uVar4 = *param_2;
    *puVar3 = uVar4;
    piVar1 = *(int **)(param_2 + 2);
    *(int **)(puVar3 + 2) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      uVar4 = *param_2;
    }
    *puVar3 = uVar4;
    piVar1 = *(int **)(param_2 + 4);
    *(int **)(puVar3 + 4) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  *(undefined2 *)(puVar3 + 6) = *(undefined2 *)(param_2 + 6);
  *puVar2 = puVar3;
  return;
}

