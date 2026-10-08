
long FUN_100c58450(long param_1,char *param_2,ulong param_3)

{
  long lVar1;
  size_t sVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar3 = 0;
  for (; lVar5 = 0, param_3 != 0; param_3 = param_3 - 1) {
    if (*(char *)(param_1 + lVar3) == '\0') {
      puVar4 = (undefined1 *)(param_1 + lVar3);
      lVar5 = 0;
      if (1 < param_3) goto LAB_100c58490;
      lVar1 = 0;
      goto LAB_100c584c8;
    }
    lVar3 = lVar3 + 1;
  }
  goto LAB_100c584ce;
  while( true ) {
    puVar4[lVar1] = param_2[lVar1];
    lVar5 = lVar1 + 1;
    param_3 = param_3 - 1;
    if (param_3 < 2) break;
LAB_100c58490:
    lVar1 = lVar5;
    if (param_2[lVar1] == '\0') {
      param_2 = param_2 + lVar1;
      puVar4 = puVar4 + lVar1;
      goto LAB_100c584c8;
    }
  }
  param_2 = param_2 + lVar1 + 1;
  if (param_3 != 0) {
    puVar4 = puVar4 + lVar1 + 1;
    lVar1 = lVar5;
LAB_100c584c8:
    *puVar4 = 0;
    lVar5 = lVar1;
  }
LAB_100c584ce:
  sVar2 = _strlen(param_2);
  return sVar2 + lVar3 + lVar5;
}

