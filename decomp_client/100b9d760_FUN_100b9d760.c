
ulong FUN_100b9d760(char *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  size_t sVar3;
  size_t sVar4;
  char *pcVar5;
  FILE *pFVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  sVar3 = _strlen(param_1);
  puVar1 = PTR_DAT_1022cfce0;
  sVar4 = _strlen(PTR_DAT_1022cfce0);
  sVar4 = sVar3 + 2 + sVar4;
  pcVar5 = _malloc(sVar4);
  if (pcVar5 != (char *)0x0) {
    ___snprintf_chk(pcVar5,sVar4,0,0xffffffffffffffff,PTR_s__s__s_1022cfce8,puVar1,param_1);
    pFVar6 = _fopen(pcVar5,"rb");
    if (pFVar6 == (FILE *)0x0) {
      uVar2 = FUN_100b9d470(0xfffffffc,"Can\'t open file %s",pcVar5);
    }
    else {
      lVar7 = _ftell(pFVar6);
      _fseek(pFVar6,0,2);
      lVar8 = _ftell(pFVar6);
      _fseek(pFVar6,lVar7,0);
      uVar2 = 0xfffffffc;
      if (lVar8 != -1) {
        lVar7 = _ftell(pFVar6);
        _fseek(pFVar6,0,2);
        lVar8 = _ftell(pFVar6);
        _fseek(pFVar6,lVar7,0);
        *param_2 = lVar8;
        uVar2 = 0;
      }
      _fclose(pFVar6);
    }
    if (uVar2 != 0) {
      FUN_100b9d470(uVar2,0);
    }
    _free(pcVar5);
    return (ulong)uVar2;
  }
  uVar9 = FUN_100b9d470(0xfffffffe,0);
  return uVar9;
}

