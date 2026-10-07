
uint * FUN_10004de00(undefined8 *param_1,uint *param_2,QByteArray *param_3)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    FUN_10004e550(param_1);
    puVar3 = (uint *)*param_1;
  }
  if (*(uint **)(puVar3 + 4) == (uint *)0x0) {
    puVar3 = puVar3 + 2;
  }
  else {
    puVar4 = (uint *)0x0;
    puVar2 = *(uint **)(puVar3 + 4);
    do {
      while (puVar3 = puVar2, puVar3[6] < *param_2) {
        puVar2 = *(uint **)(puVar3 + 4);
        if (*(uint **)(puVar3 + 4) == (uint *)0x0) {
          if (puVar4 == (uint *)0x0) goto LAB_10004de89;
          goto LAB_10004de6d;
        }
      }
      puVar4 = puVar3;
      puVar2 = *(uint **)(puVar3 + 2);
    } while (*(uint **)(puVar3 + 2) != (uint *)0x0);
LAB_10004de6d:
    if (puVar4[6] <= *param_2) {
      QByteArray::operator=((QByteArray *)(puVar4 + 8),param_3);
      return puVar4;
    }
  }
LAB_10004de89:
  puVar3 = (uint *)QMapDataBase::createNode
                             ((int)*param_1,0x28,(QMapNodeBase *)&DAT_00000008,SUB81(puVar3,0));
  puVar3[6] = *param_2;
  piVar1 = *(int **)param_3;
  *(int **)(puVar3 + 8) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return puVar3;
}

