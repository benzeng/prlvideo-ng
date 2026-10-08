
uint * FUN_100314320(undefined8 *param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar4 = (uint *)*param_1;
  if (1 < *puVar4) {
    FUN_1003147b0(param_1);
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
        if (*(uint **)(puVar4 + 2) == (uint *)0x0) goto LAB_10031438d;
      }
      puVar2 = *(uint **)(puVar4 + 4);
    } while (*(uint **)(puVar4 + 4) != (uint *)0x0);
    if (puVar3 != (uint *)0x0) {
LAB_10031438d:
      if ((int)puVar3[6] <= (int)*param_2) {
        puVar3[8] = *param_3;
        QString::operator=((QString *)(puVar3 + 10),(QString *)(param_3 + 2));
        goto LAB_1003143ef;
      }
    }
  }
  puVar3 = (uint *)QMapDataBase::createNode((int)*param_1,0x38,(QMapNodeBase *)0x8,SUB81(puVar4,0));
  puVar3[6] = *param_2;
  puVar3[8] = *param_3;
  piVar1 = *(int **)(param_3 + 2);
  *(int **)(puVar3 + 10) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
LAB_1003143ef:
  puVar3[0xc] = param_3[4];
  return puVar3;
}

