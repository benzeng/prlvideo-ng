
uint * FUN_10050ffa0(undefined8 *param_1,uint *param_2,QString *param_3)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    FUN_10050fe40(param_1);
    puVar3 = (uint *)*param_1;
  }
  if (*(uint **)(puVar3 + 4) == (uint *)0x0) {
    puVar3 = puVar3 + 2;
  }
  else {
    puVar4 = (uint *)0x0;
    puVar2 = *(uint **)(puVar3 + 4);
    do {
      while (puVar3 = puVar2, (int)puVar3[6] < (int)*param_2) {
        puVar2 = *(uint **)(puVar3 + 4);
        if (*(uint **)(puVar3 + 4) == (uint *)0x0) {
          if (puVar4 == (uint *)0x0) goto LAB_100510029;
          goto LAB_10051000d;
        }
      }
      puVar4 = puVar3;
      puVar2 = *(uint **)(puVar3 + 2);
    } while (*(uint **)(puVar3 + 2) != (uint *)0x0);
LAB_10051000d:
    if ((int)puVar4[6] <= (int)*param_2) {
      QString::operator=((QString *)(puVar4 + 8),param_3);
      return puVar4;
    }
  }
LAB_100510029:
  puVar3 = (uint *)QMapDataBase::createNode
                             ((int)*param_1,0x28,(QMapNodeBase *)&DAT_00000008,SUB81(puVar3,0));
  puVar3[6] = *param_2;
  pQVar1 = param_3->field0_0x0;
  *(QTypedArrayData<unsigned_short> **)(puVar3 + 8) = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  return puVar3;
}

