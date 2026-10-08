
uint * FUN_100106f70(undefined8 *param_1,QString *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  QTypedArrayData<unsigned_short> *pQVar4;
  uint *puVar5;
  char cVar6;
  uint *puVar7;
  uint *puVar8;
  
  puVar7 = (uint *)*param_1;
  if (1 < *puVar7) {
    FUN_1001073c0(param_1);
    puVar7 = (uint *)*param_1;
  }
  puVar5 = *(uint **)(puVar7 + 4);
  puVar8 = (uint *)0x0;
  if (*(uint **)(puVar7 + 4) == (uint *)0x0) {
    puVar7 = puVar7 + 2;
  }
  else {
    do {
      while (puVar7 = puVar5, cVar6 = operator<((QString *)(puVar7 + 6),param_2), cVar6 == '\0') {
        puVar5 = *(uint **)(puVar7 + 2);
        puVar8 = puVar7;
        if (*(uint **)(puVar7 + 2) == (uint *)0x0) goto LAB_100106fee;
      }
      puVar5 = *(uint **)(puVar7 + 4);
    } while (*(uint **)(puVar7 + 4) != (uint *)0x0);
    if (puVar8 != (uint *)0x0) {
LAB_100106fee:
      cVar6 = operator<(param_2,(QString *)(puVar8 + 6));
      if (cVar6 == '\0') {
        lVar2 = *param_3;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
        plVar3 = *(long **)(puVar8 + 8);
        *(long *)(puVar8 + 8) = lVar2;
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar2 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
        lVar2 = param_3[1];
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
        plVar3 = *(long **)(puVar8 + 10);
        *(long *)(puVar8 + 10) = lVar2;
        if (plVar3 == (long *)0x0) {
          return puVar8;
        }
        LOCK();
        plVar1 = plVar3 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 != 1) {
          return puVar8;
        }
        (**(code **)(*plVar3 + 0x10))();
        return puVar8;
      }
    }
  }
  puVar7 = (uint *)QMapDataBase::createNode((int)*param_1,0x30,(QMapNodeBase *)0x8,SUB81(puVar7,0));
  pQVar4 = param_2->field0_0x0;
  *(QTypedArrayData<unsigned_short> **)(puVar7 + 6) = pQVar4;
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    UNLOCK();
  }
  lVar2 = *param_3;
  *(long *)(puVar7 + 8) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  lVar2 = param_3[1];
  *(long *)(puVar7 + 10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return puVar7;
}

