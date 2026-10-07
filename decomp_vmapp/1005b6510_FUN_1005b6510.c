
uint * FUN_1005b6510(undefined8 *param_1,QString *param_2,undefined8 *param_3)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  undefined8 uVar2;
  uint *puVar3;
  char cVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar6 = (uint *)*param_1;
  if (1 < *puVar6) {
    FUN_1005b6470(param_1);
    puVar6 = (uint *)*param_1;
  }
  puVar3 = *(uint **)(puVar6 + 4);
  puVar5 = (uint *)0x0;
  if (*(uint **)(puVar6 + 4) == (uint *)0x0) {
    puVar6 = puVar6 + 2;
  }
  else {
    do {
      while (puVar6 = puVar3, cVar4 = operator<((QString *)(puVar6 + 6),param_2), cVar4 != '\0') {
        puVar3 = *(uint **)(puVar6 + 4);
        if (*(uint **)(puVar6 + 4) == (uint *)0x0) {
          if (puVar5 == (uint *)0x0) goto LAB_1005b65a3;
          goto LAB_1005b658a;
        }
      }
      puVar3 = *(uint **)(puVar6 + 2);
      puVar5 = puVar6;
    } while (*(uint **)(puVar6 + 2) != (uint *)0x0);
LAB_1005b658a:
    cVar4 = operator<(param_2,(QString *)(puVar5 + 6));
    if (cVar4 == '\0') goto LAB_1005b65d8;
  }
LAB_1005b65a3:
  puVar5 = (uint *)QMapDataBase::createNode
                             ((int)*param_1,0x30,(QMapNodeBase *)&DAT_00000008,SUB81(puVar6,0));
  pQVar1 = param_2->field0_0x0;
  *(QTypedArrayData<unsigned_short> **)(puVar5 + 6) = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
LAB_1005b65d8:
  uVar2 = *param_3;
  *(undefined8 *)(puVar5 + 10) = param_3[1];
  *(undefined8 *)(puVar5 + 8) = uVar2;
  return puVar5;
}

