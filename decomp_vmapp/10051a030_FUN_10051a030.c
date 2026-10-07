
long FUN_10051a030(long param_1,uint param_2)

{
  long lVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  QMutex::lock();
  puVar3 = *(uint **)(param_1 + 0x10);
  puVar7 = (undefined8 *)(param_1 + 0x10);
  if (1 < *puVar3) {
    FUN_10051b5e0(puVar7);
    puVar3 = (uint *)*puVar7;
  }
  puVar2 = *(uint **)(puVar3 + 4);
  puVar4 = (uint *)0x0;
  if (*(uint **)(puVar3 + 4) != (uint *)0x0) {
    do {
      while (puVar5 = puVar2, uVar6 = puVar5[6], param_2 <= uVar6) {
        puVar2 = *(uint **)(puVar5 + 2);
        puVar4 = puVar5;
        if (*(uint **)(puVar5 + 2) == (uint *)0x0) goto LAB_10051a0b9;
      }
      puVar2 = *(uint **)(puVar5 + 4);
    } while (*(uint **)(puVar5 + 4) != (uint *)0x0);
    if (puVar4 != (uint *)0x0) {
      uVar6 = puVar4[6];
      puVar5 = puVar4;
LAB_10051a0b9:
      if (uVar6 <= param_2) goto LAB_10051a0c5;
    }
  }
  puVar5 = puVar3 + 2;
LAB_10051a0c5:
  if (1 < *puVar3) {
    FUN_10051b5e0(puVar7);
    puVar3 = (uint *)*puVar7;
  }
  lVar8 = 0;
  if (puVar5 != puVar3 + 2) {
    lVar1 = *(long *)(puVar5 + 8);
    lVar8 = 0;
    if (lVar1 != 0) {
      QMutex::lock();
      *(int *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + 1;
      QMutex::unlock();
      lVar8 = lVar1;
    }
  }
  QMutex::unlock();
  return lVar8;
}

