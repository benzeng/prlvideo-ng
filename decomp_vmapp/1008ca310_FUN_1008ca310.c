
int FUN_1008ca310(char *param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  
  puVar5 = &DAT_1011b2040;
  lVar4 = 0;
  iVar1 = -9;
  do {
    iVar6 = iVar1;
    iVar1 = 9;
    if (DAT_1011c2a10 != 0) {
      iVar1 = FUN_100885600();
      iVar1 = iVar1 + 9;
    }
    if (iVar1 <= lVar4) {
      return -1;
    }
    puVar3 = puVar5;
    if (8 < lVar4) {
      puVar3 = (undefined *)FUN_100885620(DAT_1011c2a10,iVar6);
    }
    iVar2 = _strcmp(*(char **)(puVar3 + 0x20),param_1);
    lVar4 = lVar4 + 1;
    puVar5 = puVar5 + 0x30;
    iVar1 = iVar6 + 1;
  } while (iVar2 != 0);
  return iVar6 + 9;
}

