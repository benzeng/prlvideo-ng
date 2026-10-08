
uint * FUN_1000be560(undefined8 *param_1,QString *param_2,uint *param_3)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  uint *puVar2;
  char cVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar5 = (uint *)*param_1;
  if (1 < *puVar5) {
    FUN_1000be650(param_1);
    puVar5 = (uint *)*param_1;
  }
  puVar2 = *(uint **)(puVar5 + 4);
  puVar4 = (uint *)0x0;
  if (*(uint **)(puVar5 + 4) == (uint *)0x0) {
    puVar5 = puVar5 + 2;
  }
  else {
    do {
      while (puVar5 = puVar2, cVar3 = operator<((QString *)(puVar5 + 6),param_2), cVar3 != '\0') {
        puVar2 = *(uint **)(puVar5 + 4);
        if (*(uint **)(puVar5 + 4) == (uint *)0x0) {
          if (puVar4 == (uint *)0x0) goto LAB_1000be5f3;
          goto LAB_1000be5da;
        }
      }
      puVar2 = *(uint **)(puVar5 + 2);
      puVar4 = puVar5;
    } while (*(uint **)(puVar5 + 2) != (uint *)0x0);
LAB_1000be5da:
    cVar3 = operator<(param_2,(QString *)(puVar4 + 6));
    if (cVar3 == '\0') goto LAB_1000be628;
  }
LAB_1000be5f3:
  puVar4 = (uint *)QMapDataBase::createNode((int)*param_1,0x28,(QMapNodeBase *)0x8,SUB81(puVar5,0));
  pQVar1 = param_2->field0_0x0;
  *(QTypedArrayData<unsigned_short> **)(puVar4 + 6) = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
LAB_1000be628:
  puVar4[8] = *param_3;
  return puVar4;
}

