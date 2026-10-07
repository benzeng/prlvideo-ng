
uint * FUN_1004eb720(undefined8 *param_1,uint *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar5 = (uint *)*param_1;
  if (1 < *puVar5) {
    FUN_1004ebd10(param_1);
    puVar5 = (uint *)*param_1;
  }
  if (*(uint **)(puVar5 + 4) == (uint *)0x0) {
    puVar5 = puVar5 + 2;
  }
  else {
    puVar6 = (uint *)0x0;
    puVar4 = *(uint **)(puVar5 + 4);
    do {
      while (puVar5 = puVar4, puVar5[6] < *param_2) {
        puVar4 = *(uint **)(puVar5 + 4);
        if (*(uint **)(puVar5 + 4) == (uint *)0x0) {
          if (puVar6 == (uint *)0x0) goto LAB_1004eb7dc;
          goto LAB_1004eb78d;
        }
      }
      puVar6 = puVar5;
      puVar4 = *(uint **)(puVar5 + 2);
    } while (*(uint **)(puVar5 + 2) != (uint *)0x0);
LAB_1004eb78d:
    if (puVar6[6] <= *param_2) {
      lVar2 = *param_3;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      plVar3 = *(long **)(puVar6 + 8);
      *(long *)(puVar6 + 8) = lVar2;
      if (plVar3 == (long *)0x0) {
        return puVar6;
      }
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 != 1) {
        return puVar6;
      }
      (**(code **)(*plVar3 + 0x10))();
      return puVar6;
    }
  }
LAB_1004eb7dc:
  puVar5 = (uint *)QMapDataBase::createNode
                             ((int)*param_1,0x28,(QMapNodeBase *)&DAT_00000008,SUB81(puVar5,0));
  puVar5[6] = *param_2;
  lVar2 = *param_3;
  *(long *)(puVar5 + 8) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return puVar5;
}

