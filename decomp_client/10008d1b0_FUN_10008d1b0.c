
uint * FUN_10008d1b0(undefined8 *param_1,QString *param_2,QVariant *param_3)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    FUN_10008d290(param_1);
    puVar3 = (uint *)*param_1;
  }
  puVar1 = *(uint **)(puVar3 + 4);
  puVar4 = (uint *)0x0;
  if (*(uint **)(puVar3 + 4) == (uint *)0x0) {
    puVar3 = puVar3 + 2;
    uVar5 = 1;
  }
  else {
    do {
      while (puVar3 = puVar1, cVar2 = operator<((QString *)(puVar3 + 6),param_2), cVar2 != '\0') {
        puVar1 = *(uint **)(puVar3 + 4);
        if (*(uint **)(puVar3 + 4) == (uint *)0x0) {
          uVar5 = 0;
          if (puVar4 == (uint *)0x0) goto LAB_10008d267;
          goto LAB_10008d22a;
        }
      }
      uVar5 = 1;
      puVar1 = *(uint **)(puVar3 + 2);
      puVar4 = puVar3;
    } while (*(uint **)(puVar3 + 2) != (uint *)0x0);
LAB_10008d22a:
    cVar2 = operator<(param_2,(QString *)(puVar4 + 6));
    if (cVar2 == '\0') {
      QVariant::operator=((QVariant *)(puVar4 + 8),param_3);
      return puVar4;
    }
  }
LAB_10008d267:
  puVar3 = (uint *)FUN_10008d3e0(*param_1,param_2,param_3,puVar3,uVar5);
  return puVar3;
}

