
void FUN_1004b5150(long param_1,QString *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  uint *puVar4;
  int iVar5;
  long lVar6;
  QString *pQVar7;
  long lVar8;
  
  puVar4 = *(uint **)(param_1 + 0x20);
  iVar5 = puVar4[3] - puVar4[2];
  if (0 < iVar5) {
    puVar1 = (undefined8 *)(param_1 + 0x20);
    lVar6 = (long)iVar5;
    iVar5 = (puVar4[3] - 1) - puVar4[2];
    while( true ) {
      if (1 < *puVar4) {
        FUN_1004b5cc0(puVar1,puVar4[1]);
        puVar4 = (uint *)*puVar1;
      }
      cVar3 = operator==(*(QString **)(puVar4 + ((int)puVar4[2] + lVar6) * 2 + 2),param_2);
      if (cVar3 != '\0') {
        FUN_1004b5b60(puVar1,iVar5);
      }
      if (lVar6 < 2) break;
      lVar6 = lVar6 + -1;
      puVar4 = (uint *)*puVar1;
      iVar5 = iVar5 + -1;
    }
  }
  lVar6 = *(long *)(param_1 + 0x38);
  iVar5 = *(int *)(lVar6 + 8);
  pQVar7 = (QString *)(lVar6 + 0x10 + (long)iVar5 * 8);
  iVar2 = *(int *)(lVar6 + 0xc);
  if (iVar5 == iVar2) {
LAB_1004b522b:
    if (pQVar7 != (QString *)(lVar6 + 0x10 + (long)iVar2 * 8)) goto LAB_1004b5245;
  }
  else {
    lVar8 = (long)iVar2 * 8 + (long)iVar5 * -8;
    do {
      cVar3 = operator==(pQVar7,param_2);
      if (cVar3 != '\0') goto LAB_1004b522b;
      pQVar7 = pQVar7 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  FUN_1006fca20(param_1 + 0x38,param_2);
LAB_1004b5245:
  FUN_1004b27f0(*(undefined8 *)(param_1 + 0x28));
  return;
}

