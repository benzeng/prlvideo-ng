
void FUN_1004d73d0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  
  if (param_2 - param_3 != 0) {
    lVar4 = 0;
    do {
      puVar3 = operator_new(0x10);
      puVar1 = *(undefined4 **)(param_4 + lVar4);
      *puVar3 = *puVar1;
      lVar2 = *(long *)(puVar1 + 2);
      *(long *)(puVar3 + 2) = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      *puVar3 = *puVar1;
      *(undefined4 **)(param_2 + lVar4) = puVar3;
      lVar4 = lVar4 + 8;
    } while ((param_2 - param_3) + lVar4 != 0);
  }
  return;
}

