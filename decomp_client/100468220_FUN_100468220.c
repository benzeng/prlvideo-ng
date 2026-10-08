
void FUN_100468220(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_2 - param_3 != 0) {
    lVar4 = 0;
    do {
      puVar3 = operator_new(0x28);
      puVar1 = *(undefined8 **)(param_4 + lVar4);
      piVar2 = (int *)*puVar1;
      *puVar3 = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      piVar2 = (int *)puVar1[1];
      puVar3[1] = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar1 + 2);
      *(undefined2 *)((long)puVar3 + 0x1c) = *(undefined2 *)((long)puVar1 + 0x1c);
      *(undefined8 *)((long)puVar3 + 0x14) = *(undefined8 *)((long)puVar1 + 0x14);
      QBrush::QBrush((QBrush *)(puVar3 + 4),(QBrush *)(puVar1 + 4));
      *(undefined8 **)(param_2 + lVar4) = puVar3;
      lVar4 = lVar4 + 8;
    } while ((param_2 - param_3) + lVar4 != 0);
  }
  return;
}

