
uint * FUN_100376750(undefined8 *param_1,QString *param_2,undefined8 *param_3)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  int *piVar2;
  undefined8 uVar3;
  uint *puVar4;
  char cVar5;
  uint *puVar6;
  int *piVar7;
  uint *puVar8;
  
  puVar6 = (uint *)*param_1;
  if (1 < *puVar6) {
    FUN_100376900(param_1);
    puVar6 = (uint *)*param_1;
  }
  if (*(uint **)(puVar6 + 4) == (uint *)0x0) {
    puVar6 = puVar6 + 2;
  }
  else {
    puVar4 = *(uint **)(puVar6 + 4);
    puVar8 = (uint *)0x0;
    do {
      while( true ) {
        puVar6 = puVar4;
        cVar5 = operator<((QString *)(puVar6 + 6),param_2);
        if ((cVar5 == '\0') &&
           ((cVar5 = operator<(param_2,(QString *)(puVar6 + 6)), cVar5 != '\0' ||
            (*(uint *)&param_2[1].field0_0x0 <= puVar6[8])))) break;
        puVar4 = *(uint **)(puVar6 + 4);
        if (*(uint **)(puVar6 + 4) == (uint *)0x0) {
          if (puVar8 == (uint *)0x0) goto LAB_10037683e;
          goto LAB_1003767f9;
        }
      }
      puVar4 = *(uint **)(puVar6 + 2);
      puVar8 = puVar6;
    } while (*(uint **)(puVar6 + 2) != (uint *)0x0);
LAB_1003767f9:
    cVar5 = operator<(param_2,(QString *)(puVar8 + 6));
    if ((cVar5 == '\0') &&
       ((cVar5 = operator<((QString *)(puVar8 + 6),param_2), cVar5 != '\0' ||
        (puVar8[8] <= *(uint *)&param_2[1].field0_0x0)))) {
      piVar2 = (int *)*param_3;
      piVar7 = *(int **)(puVar8 + 10);
      if (piVar7 == piVar2) {
        return puVar8;
      }
      uVar3 = param_3[1];
      if (piVar2 != (int *)0x0) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
        piVar7 = *(int **)(puVar8 + 10);
      }
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if ((*piVar7 == 0) && (*(void **)(puVar8 + 10) != (void *)0x0)) {
          operator_delete(*(void **)(puVar8 + 10));
        }
      }
      *(int **)(puVar8 + 10) = piVar2;
      *(undefined8 *)(puVar8 + 0xc) = uVar3;
      return puVar8;
    }
  }
LAB_10037683e:
  puVar6 = (uint *)QMapDataBase::createNode((int)*param_1,0x38,(QMapNodeBase *)0x8,SUB81(puVar6,0));
  pQVar1 = param_2->field0_0x0;
  *(QTypedArrayData<unsigned_short> **)(puVar6 + 6) = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  puVar6[8] = *(uint *)&param_2[1].field0_0x0;
  piVar2 = (int *)*param_3;
  uVar3 = param_3[1];
  *(int **)(puVar6 + 10) = piVar2;
  *(undefined8 *)(puVar6 + 0xc) = uVar3;
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return puVar6;
}

