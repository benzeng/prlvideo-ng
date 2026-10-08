
uint * FUN_100d2c1a0(undefined8 *param_1,QString *param_2,QString *param_3)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  uint *puVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar6 = (uint *)*param_1;
  if (1 < *puVar6) {
    FUN_100d2c2c0(param_1);
    puVar6 = (uint *)*param_1;
  }
  puVar5 = (uint *)0x0;
  puVar2 = *(uint **)(puVar6 + 4);
  if (*(uint **)(puVar6 + 4) == (uint *)0x0) {
    puVar6 = puVar6 + 2;
  }
  else {
    do {
      while (puVar6 = puVar2, cVar3 = operator<((QString *)(puVar6 + 6),param_2), cVar3 != '\0') {
        puVar2 = *(uint **)(puVar6 + 4);
        if (*(uint **)(puVar6 + 4) == (uint *)0x0) {
          if (puVar5 == (uint *)0x0) goto LAB_100d2c248;
          goto LAB_100d2c21a;
        }
      }
      puVar2 = *(uint **)(puVar6 + 2);
      puVar5 = puVar6;
    } while (*(uint **)(puVar6 + 2) != (uint *)0x0);
LAB_100d2c21a:
    cVar3 = operator<(param_2,(QString *)(puVar5 + 6));
    if (cVar3 == '\0') {
      QString::operator=((QString *)(puVar5 + 8),param_3);
      uVar4 = *(uint *)&param_3[1].field0_0x0;
      goto LAB_100d2c29e;
    }
  }
LAB_100d2c248:
  puVar5 = (uint *)QMapDataBase::createNode((int)*param_1,0x30,(QMapNodeBase *)0x8,SUB81(puVar6,0));
  pQVar1 = param_2->field0_0x0;
  *(QTypedArrayData<unsigned_short> **)(puVar5 + 6) = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  pQVar1 = param_3->field0_0x0;
  *(QTypedArrayData<unsigned_short> **)(puVar5 + 8) = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  uVar4 = *(uint *)&param_3[1].field0_0x0;
LAB_100d2c29e:
  puVar5[10] = uVar4;
  return puVar5;
}

