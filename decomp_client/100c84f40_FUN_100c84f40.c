
undefined * FUN_100c84f40(undefined8 *param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  undefined *puVar4;
  size_t sVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 local_38;
  
  sVar3 = (size_t)param_3;
  if (param_3 == 0xffffffff) {
    sVar3 = _strlen(param_2);
  }
  if (param_1 != (undefined8 *)0x0) {
    puVar4 = (undefined *)FUN_100c57d70(&local_38,param_2,sVar3 & 0xffffffff);
    if (puVar4 != (undefined *)0x0) {
      iVar2 = FUN_100c55720(local_38);
      if (iVar2 == 0) {
        puVar4 = (undefined *)0x0;
      }
      FUN_100c54a90(local_38);
      *param_1 = local_38;
      return puVar4;
    }
    *param_1 = 0;
  }
  ppuVar7 = &PTR_DAT_102309650;
  lVar6 = 0;
  while( true ) {
    iVar2 = 0xb;
    if (DAT_1023183b8 != 0) {
      iVar2 = FUN_100c60800();
      iVar2 = iVar2 + 0xb;
    }
    if (iVar2 <= lVar6) break;
    if (lVar6 < 0xb) {
      puVar4 = *ppuVar7;
    }
    else {
      puVar4 = (undefined *)FUN_100c60820(DAT_1023183b8,(int)lVar6 + -0xb);
    }
    if ((puVar4[8] & 1) == 0) {
      pcVar1 = *(char **)(puVar4 + 0x10);
      sVar5 = _strlen(pcVar1);
      if (((int)sVar5 == (int)sVar3) &&
         (iVar2 = _strncasecmp(pcVar1,param_2,(long)(int)sVar3), iVar2 == 0)) {
        return puVar4;
      }
    }
    lVar6 = lVar6 + 1;
    ppuVar7 = ppuVar7 + 1;
  }
  return (undefined *)0x0;
}

