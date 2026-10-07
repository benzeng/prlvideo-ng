
void FUN_1005674b0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (param_2 - param_3 != 0) {
    lVar5 = 0;
    do {
      puVar4 = operator_new(0x28);
      puVar1 = *(undefined8 **)(param_4 + lVar5);
      puVar4[2] = puVar1[2];
      uVar2 = *puVar1;
      puVar4[1] = puVar1[1];
      *puVar4 = uVar2;
      piVar3 = (int *)puVar1[3];
      puVar4[3] = piVar3;
      if (1 < *piVar3 + 1U) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
      }
      *(undefined1 *)(puVar4 + 4) = *(undefined1 *)(puVar1 + 4);
      *(undefined8 **)(param_2 + lVar5) = puVar4;
      lVar5 = lVar5 + 8;
    } while ((param_2 - param_3) + lVar5 != 0);
  }
  return;
}

