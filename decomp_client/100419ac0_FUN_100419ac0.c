
void FUN_100419ac0(undefined8 *param_1,undefined1 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  
  if (*(uint *)*param_1 < 2) {
    puVar2 = (undefined8 *)QListData::append();
    puVar3 = operator_new(0x30);
    *puVar3 = *param_2;
    piVar1 = *(int **)(param_2 + 8);
    *(int **)(puVar3 + 8) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *(undefined8 *)(puVar3 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    piVar1 = *(int **)(param_2 + 0x18);
    *(int **)(puVar3 + 0x18) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_2 + 0x20);
    *(int **)(puVar3 + 0x20) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  else {
    puVar2 = (undefined8 *)FUN_10041d930(param_1,0x7fffffff,1);
    puVar3 = operator_new(0x30);
    *puVar3 = *param_2;
    piVar1 = *(int **)(param_2 + 8);
    *(int **)(puVar3 + 8) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *(undefined8 *)(puVar3 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    piVar1 = *(int **)(param_2 + 0x18);
    *(int **)(puVar3 + 0x18) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_2 + 0x20);
    *(int **)(puVar3 + 0x20) = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  puVar3[0x28] = param_2[0x28];
  *puVar2 = puVar3;
  return;
}

