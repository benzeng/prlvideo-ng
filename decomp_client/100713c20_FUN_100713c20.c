
uint * FUN_100713c20(undefined8 *param_1,QString *param_2,QKeySequence *param_3)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint *puVar5;
  
  puVar3 = (uint *)*param_1;
  if (1 < *puVar3) {
    FUN_1007146d0(param_1);
    puVar3 = (uint *)*param_1;
  }
  if (*(uint **)(puVar3 + 4) == (uint *)0x0) {
    puVar3 = puVar3 + 2;
    uVar4 = 1;
  }
  else {
    puVar1 = *(uint **)(puVar3 + 4);
    puVar5 = (uint *)0x0;
    do {
      while( true ) {
        puVar3 = puVar1;
        cVar2 = operator<((QString *)(puVar3 + 6),param_2);
        if ((cVar2 == '\0') &&
           ((cVar2 = operator<(param_2,(QString *)(puVar3 + 6)), cVar2 != '\0' ||
            (cVar2 = operator<((QString *)(puVar3 + 8),param_2 + 1), cVar2 == '\0')))) break;
        puVar1 = *(uint **)(puVar3 + 4);
        if (*(uint **)(puVar3 + 4) == (uint *)0x0) {
          uVar4 = 0;
          if (puVar5 == (uint *)0x0) goto LAB_100713d22;
          goto LAB_100713ccd;
        }
      }
      uVar4 = 1;
      puVar1 = *(uint **)(puVar3 + 2);
      puVar5 = puVar3;
    } while (*(uint **)(puVar3 + 2) != (uint *)0x0);
LAB_100713ccd:
    cVar2 = operator<(param_2,(QString *)(puVar5 + 6));
    if ((cVar2 == '\0') &&
       ((cVar2 = operator<((QString *)(puVar5 + 6),param_2), cVar2 != '\0' ||
        (cVar2 = operator<(param_2 + 1,(QString *)(puVar5 + 8)), cVar2 == '\0')))) {
      QKeySequence::operator=((QKeySequence *)(puVar5 + 10),param_3);
      QKeySequence::operator=((QKeySequence *)(puVar5 + 0xc),param_3 + 8);
      puVar5[0xe] = *(uint *)(param_3 + 0x10);
      QKeySequence::operator=((QKeySequence *)(puVar5 + 0x10),param_3 + 0x18);
      QKeySequence::operator=((QKeySequence *)(puVar5 + 0x12),param_3 + 0x20);
      puVar5[0x14] = *(uint *)(param_3 + 0x28);
      return puVar5;
    }
  }
LAB_100713d22:
  puVar3 = (uint *)FUN_1007144b0(*param_1,param_2,param_3,puVar3,uVar4);
  return puVar3;
}

