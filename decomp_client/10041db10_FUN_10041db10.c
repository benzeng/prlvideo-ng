
void FUN_10041db10(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  long lVar4;
  
  if (param_2 - param_3 != 0) {
    lVar4 = 0;
    do {
      puVar3 = operator_new(0x30);
      puVar1 = *(undefined1 **)(param_4 + lVar4);
      *puVar3 = *puVar1;
      piVar2 = *(int **)(puVar1 + 8);
      *(int **)(puVar3 + 8) = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      *(undefined8 *)(puVar3 + 0x10) = *(undefined8 *)(puVar1 + 0x10);
      piVar2 = *(int **)(puVar1 + 0x18);
      *(int **)(puVar3 + 0x18) = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      piVar2 = *(int **)(puVar1 + 0x20);
      *(int **)(puVar3 + 0x20) = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      puVar3[0x28] = puVar1[0x28];
      *(undefined1 **)(param_2 + lVar4) = puVar3;
      lVar4 = lVar4 + 8;
    } while ((param_2 - param_3) + lVar4 != 0);
  }
  return;
}

