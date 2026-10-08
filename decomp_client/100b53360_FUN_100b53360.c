
void FUN_100b53360(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (param_2 - param_3 != 0) {
    lVar5 = 0;
    do {
      puVar4 = operator_new(0x40);
      puVar1 = *(undefined8 **)(param_4 + lVar5);
      piVar2 = (int *)*puVar1;
      *puVar4 = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      puVar4[7] = puVar1[7];
      puVar4[6] = puVar1[6];
      puVar4[5] = puVar1[5];
      puVar4[4] = puVar1[4];
      puVar4[3] = puVar1[3];
      uVar3 = puVar1[1];
      puVar4[2] = puVar1[2];
      puVar4[1] = uVar3;
      *(undefined8 **)(param_2 + lVar5) = puVar4;
      lVar5 = lVar5 + 8;
    } while ((param_2 - param_3) + lVar5 != 0);
  }
  return;
}

