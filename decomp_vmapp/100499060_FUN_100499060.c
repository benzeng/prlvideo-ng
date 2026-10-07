
uint * FUN_100499060(undefined8 *param_1,uint *param_2,undefined8 *param_3)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    FUN_100498ef0(param_1);
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
          if (puVar4 == (uint *)0x0) goto LAB_1004990f4;
          goto LAB_1004990cd;
        }
      }
      puVar4 = puVar3;
      puVar2 = *(uint **)(puVar3 + 2);
    } while (*(uint **)(puVar3 + 2) != (uint *)0x0);
LAB_1004990cd:
    if (puVar4[6] <= *param_2) {
      *(undefined8 *)(puVar4 + 8) = *param_3;
      QString::operator=((QString *)(puVar4 + 10),(QString *)(param_3 + 1));
      return puVar4;
    }
  }
LAB_1004990f4:
  puVar3 = (uint *)QMapDataBase::createNode
                             ((int)*param_1,0x30,(QMapNodeBase *)&DAT_00000008,SUB81(puVar3,0));
  puVar3[6] = *param_2;
  *(undefined8 *)(puVar3 + 8) = *param_3;
  piVar1 = (int *)param_3[1];
  *(int **)(puVar3 + 10) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(puVar3 + 8) = *param_3;
  return puVar3;
}

