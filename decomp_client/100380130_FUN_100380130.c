
uint * FUN_100380130(undefined8 *param_1,uint *param_2,QString *param_3)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar4 = (uint *)*param_1;
  if (1 < *puVar4) {
    FUN_1003807b0(param_1);
    puVar4 = (uint *)*param_1;
  }
  if (*(uint **)(puVar4 + 4) == (uint *)0x0) {
    puVar4 = puVar4 + 2;
  }
  else {
    puVar3 = (uint *)0x0;
    puVar2 = *(uint **)(puVar4 + 4);
    do {
      while (puVar4 = puVar2, (int)*param_2 <= (int)puVar4[6]) {
        puVar3 = puVar4;
        puVar2 = *(uint **)(puVar4 + 2);
        if (*(uint **)(puVar4 + 2) == (uint *)0x0) goto LAB_10038019d;
      }
      puVar2 = *(uint **)(puVar4 + 4);
    } while (*(uint **)(puVar4 + 4) != (uint *)0x0);
    if (puVar3 != (uint *)0x0) {
LAB_10038019d:
      if ((int)puVar3[6] <= (int)*param_2) {
        QString::operator=((QString *)(puVar3 + 8),param_3);
        goto LAB_1003801f1;
      }
    }
  }
  puVar3 = (uint *)QMapDataBase::createNode((int)*param_1,0x30,(QMapNodeBase *)0x8,SUB81(puVar4,0));
  puVar3[6] = *param_2;
  pQVar1 = param_3->field0_0x0;
  *(QTypedArrayData<unsigned_short> **)(puVar3 + 8) = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
LAB_1003801f1:
  *(undefined1 *)(puVar3 + 10) = *(undefined1 *)&param_3[1].field0_0x0;
  return puVar3;
}

