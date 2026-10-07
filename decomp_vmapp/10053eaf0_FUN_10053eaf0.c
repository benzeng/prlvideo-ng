
long * FUN_10053eaf0(long *param_1,long param_2,uint param_3)

{
  long lVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  
  QMutex::lock();
  puVar3 = *(uint **)(param_2 + 0x10);
  puVar7 = (undefined8 *)(param_2 + 0x10);
  if (1 < *puVar3) {
    FUN_100541d10(puVar7);
    puVar3 = (uint *)*puVar7;
  }
  puVar2 = *(uint **)(puVar3 + 4);
  puVar4 = (uint *)0x0;
  if (*(uint **)(puVar3 + 4) != (uint *)0x0) {
    do {
      while (puVar5 = puVar2, uVar6 = puVar5[6], param_3 <= uVar6) {
        puVar2 = *(uint **)(puVar5 + 2);
        puVar4 = puVar5;
        if (*(uint **)(puVar5 + 2) == (uint *)0x0) goto LAB_10053eb79;
      }
      puVar2 = *(uint **)(puVar5 + 4);
    } while (*(uint **)(puVar5 + 4) != (uint *)0x0);
    if (puVar4 != (uint *)0x0) {
      uVar6 = puVar4[6];
      puVar5 = puVar4;
LAB_10053eb79:
      if (uVar6 <= param_3) goto LAB_10053eb85;
    }
  }
  puVar5 = puVar3 + 2;
LAB_10053eb85:
  *param_1 = 0;
  if (1 < *puVar3) {
    FUN_100541d10(puVar7);
    puVar3 = (uint *)*puVar7;
  }
  if (puVar5 == puVar3 + 2) {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","InvSharingHost",1,"failed to remove worker, id = %u",param_3);
    }
  }
  else {
    lVar1 = *(long *)(puVar5 + 8);
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *param_1 = lVar1;
    FUN_1005413d0(puVar7,puVar5);
  }
  QMutex::unlock();
  return param_1;
}

