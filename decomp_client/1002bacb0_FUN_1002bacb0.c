
void FUN_1002bacb0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  long lVar4;
  
  if (param_2 - param_3 != 0) {
    lVar4 = 0;
    do {
      puVar3 = operator_new(0x40);
      puVar1 = *(undefined4 **)(param_4 + lVar4);
      *puVar3 = *puVar1;
      piVar2 = *(int **)(puVar1 + 2);
      *(int **)(puVar3 + 2) = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      piVar2 = *(int **)(puVar1 + 4);
      *(int **)(puVar3 + 4) = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      piVar2 = *(int **)(puVar1 + 6);
      *(int **)(puVar3 + 6) = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar1 + 8);
      *puVar3 = *puVar1;
      piVar2 = *(int **)(puVar1 + 10);
      *(int **)(puVar3 + 10) = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      *puVar3 = *puVar1;
      piVar2 = *(int **)(puVar1 + 0xc);
      *(int **)(puVar3 + 0xc) = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      *puVar3 = *puVar1;
      piVar2 = *(int **)(puVar1 + 0xe);
      *(int **)(puVar3 + 0xe) = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      *puVar3 = *puVar1;
      *(undefined4 **)(param_2 + lVar4) = puVar3;
      lVar4 = lVar4 + 8;
    } while ((param_2 - param_3) + lVar4 != 0);
  }
  return;
}

