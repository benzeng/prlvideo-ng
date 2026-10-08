
uint * FUN_1002830a0(undefined8 *param_1,QString *param_2,QString *param_3)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint *puVar5;
  
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    FUN_100283ba0(param_1);
    puVar3 = (uint *)*param_1;
  }
  puVar5 = (uint *)0x0;
  puVar1 = *(uint **)(puVar3 + 4);
  if (*(uint **)(puVar3 + 4) == (uint *)0x0) {
    puVar3 = puVar3 + 2;
    uVar4 = 1;
  }
  else {
    do {
      while (puVar3 = puVar1, cVar2 = operator<((QString *)(puVar3 + 6),param_2), cVar2 != '\0') {
        puVar1 = *(uint **)(puVar3 + 4);
        if (*(uint **)(puVar3 + 4) == (uint *)0x0) {
          uVar4 = 0;
          if (puVar5 == (uint *)0x0) goto LAB_1002831f0;
          goto LAB_10028312e;
        }
      }
      uVar4 = 1;
      puVar1 = *(uint **)(puVar3 + 2);
      puVar5 = puVar3;
    } while (*(uint **)(puVar3 + 2) != (uint *)0x0);
LAB_10028312e:
    cVar2 = operator<(param_2,(QString *)(puVar5 + 6));
    if (cVar2 == '\0') {
      QString::operator=((QString *)(puVar5 + 8),param_3);
      QString::operator=((QString *)(puVar5 + 10),param_3 + 1);
      QString::operator=((QString *)(puVar5 + 0xc),param_3 + 2);
      QString::operator=((QString *)(puVar5 + 0xe),param_3 + 3);
      QString::operator=((QString *)(puVar5 + 0x10),param_3 + 4);
      QString::operator=((QString *)(puVar5 + 0x12),param_3 + 5);
      QString::operator=((QString *)(puVar5 + 0x14),param_3 + 6);
      QString::operator=((QString *)(puVar5 + 0x16),param_3 + 7);
      QString::operator=((QString *)(puVar5 + 0x18),param_3 + 8);
      QString::operator=((QString *)(puVar5 + 0x1a),param_3 + 9);
      FUN_100283c40(puVar5 + 0x1c,param_3 + 10);
      return puVar5;
    }
  }
LAB_1002831f0:
  puVar3 = (uint *)FUN_1002834a0(*param_1,param_2,param_3,puVar3,uVar4);
  return puVar3;
}

