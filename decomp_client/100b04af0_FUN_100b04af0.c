
uint * FUN_100b04af0(undefined8 *param_1,QString *param_2,QString *param_3)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  uint *puVar2;
  char cVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar4 = (uint *)*param_1;
  if (1 < *puVar4) {
    FUN_100b06320(param_1);
    puVar4 = (uint *)*param_1;
  }
  puVar2 = *(uint **)(puVar4 + 4);
  puVar5 = (uint *)0x0;
  if (*(uint **)(puVar4 + 4) == (uint *)0x0) {
    puVar4 = puVar4 + 2;
  }
  else {
    do {
      while (puVar4 = puVar2, cVar3 = operator<((QString *)(puVar4 + 6),param_2), cVar3 == '\0') {
        puVar2 = *(uint **)(puVar4 + 2);
        puVar5 = puVar4;
        if (*(uint **)(puVar4 + 2) == (uint *)0x0) goto LAB_100b04b6a;
      }
      puVar2 = *(uint **)(puVar4 + 4);
    } while (*(uint **)(puVar4 + 4) != (uint *)0x0);
    if (puVar5 != (uint *)0x0) {
LAB_100b04b6a:
      cVar3 = operator<(param_2,(QString *)(puVar5 + 6));
      if (cVar3 == '\0') {
        QString::operator=((QString *)(puVar5 + 8),param_3);
        QString::operator=((QString *)(puVar5 + 10),param_3 + 1);
        return puVar5;
      }
    }
  }
  puVar4 = (uint *)QMapDataBase::createNode((int)*param_1,0x30,(QMapNodeBase *)0x8,SUB81(puVar4,0));
  pQVar1 = param_2->field0_0x0;
  *(QTypedArrayData<unsigned_short> **)(puVar4 + 6) = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  pQVar1 = param_3->field0_0x0;
  *(QTypedArrayData<unsigned_short> **)(puVar4 + 8) = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  pQVar1 = param_3[1].field0_0x0;
  *(QTypedArrayData<unsigned_short> **)(puVar4 + 10) = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  return puVar4;
}

