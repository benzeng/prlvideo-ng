
uint * FUN_10041a010(undefined8 *param_1,double *param_2,QColor *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)*param_1;
  if (1 < *puVar2) {
    FUN_10041f7c0(param_1);
    puVar2 = (uint *)*param_1;
  }
  if (*(uint **)(puVar2 + 4) == (uint *)0x0) {
    puVar2 = puVar2 + 2;
  }
  else {
    puVar1 = *(uint **)(puVar2 + 4);
    puVar3 = (uint *)0x0;
    do {
      while (puVar2 = puVar1,
            *(double *)(puVar2 + 6) <= *param_2 && *param_2 != *(double *)(puVar2 + 6)) {
        puVar1 = *(uint **)(puVar2 + 4);
        if (*(uint **)(puVar2 + 4) == (uint *)0x0) {
          if (puVar3 == (uint *)0x0) goto LAB_10041a09f;
          goto LAB_10041a07f;
        }
      }
      puVar1 = *(uint **)(puVar2 + 2);
      puVar3 = puVar2;
    } while (*(uint **)(puVar2 + 2) != (uint *)0x0);
LAB_10041a07f:
    if (*(double *)(puVar3 + 6) < *param_2 || *(double *)(puVar3 + 6) == *param_2) {
      QColor::operator=((QColor *)(puVar3 + 8),param_3);
      return puVar3;
    }
  }
LAB_10041a09f:
  puVar2 = (uint *)QMapDataBase::createNode((int)*param_1,0x30,(QMapNodeBase *)0x8,SUB81(puVar2,0));
  *(double *)(puVar2 + 6) = *param_2;
  puVar2[8] = *(uint *)param_3;
  *(undefined2 *)(puVar2 + 0xb) = *(undefined2 *)(param_3 + 0xc);
  *(undefined8 *)(puVar2 + 9) = *(undefined8 *)(param_3 + 4);
  return puVar2;
}

