
void FUN_1002bae30(undefined8 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (*(uint *)*param_1 < 2) {
    puVar2 = (undefined8 *)QListData::append();
    puVar3 = operator_new(0x40);
    *puVar3 = *param_2;
    piVar1 = *(int **)(param_2 + 2);
    *(int **)(puVar3 + 2) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_2 + 4);
    *(int **)(puVar3 + 4) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_2 + 6);
    *(int **)(puVar3 + 6) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(param_2 + 8);
    uVar4 = *param_2;
    *puVar3 = uVar4;
    piVar1 = *(int **)(param_2 + 10);
    *(int **)(puVar3 + 10) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      uVar4 = *param_2;
    }
    *puVar3 = uVar4;
    piVar1 = *(int **)(param_2 + 0xc);
    *(int **)(puVar3 + 0xc) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      uVar4 = *param_2;
    }
    *puVar3 = uVar4;
    piVar1 = *(int **)(param_2 + 0xe);
    *(int **)(puVar3 + 0xe) = piVar1;
    if (*piVar1 + 1U < 2) goto LAB_1002bafea;
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  else {
    puVar2 = (undefined8 *)FUN_1002bb050(param_1,0x7fffffff,1);
    puVar3 = operator_new(0x40);
    *puVar3 = *param_2;
    piVar1 = *(int **)(param_2 + 2);
    *(int **)(puVar3 + 2) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_2 + 4);
    *(int **)(puVar3 + 4) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_2 + 6);
    *(int **)(puVar3 + 6) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(param_2 + 8);
    uVar4 = *param_2;
    *puVar3 = uVar4;
    piVar1 = *(int **)(param_2 + 10);
    *(int **)(puVar3 + 10) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      uVar4 = *param_2;
    }
    *puVar3 = uVar4;
    piVar1 = *(int **)(param_2 + 0xc);
    *(int **)(puVar3 + 0xc) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      uVar4 = *param_2;
    }
    *puVar3 = uVar4;
    piVar1 = *(int **)(param_2 + 0xe);
    *(int **)(puVar3 + 0xe) = piVar1;
    if (*piVar1 + 1U < 2) goto LAB_1002bafea;
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar4 = *param_2;
LAB_1002bafea:
  *puVar3 = uVar4;
  *puVar2 = puVar3;
  return;
}

