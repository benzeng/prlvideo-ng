
uint * FUN_100321c20(undefined8 *param_1,uint *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  uint *puVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar5 = (uint *)*param_1;
  if (1 < *puVar5) {
    FUN_1003226a0(param_1);
    puVar5 = (uint *)*param_1;
  }
  if (*(uint **)(puVar5 + 4) == (uint *)0x0) {
    puVar5 = puVar5 + 2;
  }
  else {
    puVar6 = (uint *)0x0;
    puVar3 = *(uint **)(puVar5 + 4);
    do {
      while (puVar5 = puVar3, puVar5[6] < *param_2) {
        puVar3 = *(uint **)(puVar5 + 4);
        if (*(uint **)(puVar5 + 4) == (uint *)0x0) {
          if (puVar6 == (uint *)0x0) goto LAB_100321cec;
          goto LAB_100321c8d;
        }
      }
      puVar6 = puVar5;
      puVar3 = *(uint **)(puVar5 + 2);
    } while (*(uint **)(puVar5 + 2) != (uint *)0x0);
LAB_100321c8d:
    if (puVar6[6] <= *param_2) {
      piVar1 = (int *)*param_3;
      piVar4 = *(int **)(puVar6 + 8);
      if (piVar4 == piVar1) {
        return puVar6;
      }
      uVar2 = param_3[1];
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        piVar4 = *(int **)(puVar6 + 8);
      }
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if ((*piVar4 == 0) && (*(void **)(puVar6 + 8) != (void *)0x0)) {
          operator_delete(*(void **)(puVar6 + 8));
        }
      }
      *(int **)(puVar6 + 8) = piVar1;
      *(undefined8 *)(puVar6 + 10) = uVar2;
      return puVar6;
    }
  }
LAB_100321cec:
  puVar5 = (uint *)QMapDataBase::createNode((int)*param_1,0x30,(QMapNodeBase *)0x8,SUB81(puVar5,0));
  puVar5[6] = *param_2;
  piVar1 = (int *)*param_3;
  uVar2 = param_3[1];
  *(int **)(puVar5 + 8) = piVar1;
  *(undefined8 *)(puVar5 + 10) = uVar2;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return puVar5;
}

