
uint * FUN_1003ae9e0(undefined8 *param_1,QString *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  uint *puVar4;
  char cVar5;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  
  puVar7 = (uint *)*param_1;
  if (1 < *puVar7) {
    FUN_1003aeb40(param_1);
    puVar7 = (uint *)*param_1;
  }
  puVar8 = (uint *)0x0;
  puVar4 = *(uint **)(puVar7 + 4);
  if (*(uint **)(puVar7 + 4) == (uint *)0x0) {
    puVar7 = puVar7 + 2;
  }
  else {
    do {
      while (puVar7 = puVar4, cVar5 = operator<((QString *)(puVar7 + 6),param_2), cVar5 == '\0') {
        puVar4 = *(uint **)(puVar7 + 2);
        puVar8 = puVar7;
        if (*(uint **)(puVar7 + 2) == (uint *)0x0) goto LAB_1003aea6a;
      }
      puVar4 = *(uint **)(puVar7 + 4);
    } while (*(uint **)(puVar7 + 4) != (uint *)0x0);
    if (puVar8 != (uint *)0x0) {
LAB_1003aea6a:
      cVar5 = operator<(param_2,(QString *)(puVar8 + 6));
      if (cVar5 == '\0') {
        piVar1 = (int *)*param_3;
        piVar6 = *(int **)(puVar8 + 8);
        if (piVar6 == piVar1) {
          return puVar8;
        }
        uVar2 = param_3[1];
        if (piVar1 != (int *)0x0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          piVar6 = *(int **)(puVar8 + 8);
        }
        if (piVar6 != (int *)0x0) {
          LOCK();
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if ((*piVar6 == 0) && (*(void **)(puVar8 + 8) != (void *)0x0)) {
            operator_delete(*(void **)(puVar8 + 8));
          }
        }
        *(int **)(puVar8 + 8) = piVar1;
        *(undefined8 *)(puVar8 + 10) = uVar2;
        return puVar8;
      }
    }
  }
  puVar7 = (uint *)QMapDataBase::createNode((int)*param_1,0x30,(QMapNodeBase *)0x8,SUB81(puVar7,0));
  pQVar3 = param_2->field0_0x0;
  *(QTypedArrayData<unsigned_short> **)(puVar7 + 6) = pQVar3;
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    UNLOCK();
  }
  piVar1 = (int *)*param_3;
  uVar2 = param_3[1];
  *(int **)(puVar7 + 8) = piVar1;
  *(undefined8 *)(puVar7 + 10) = uVar2;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return puVar7;
}

