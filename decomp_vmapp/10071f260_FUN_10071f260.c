
ulong FUN_10071f260(char *param_1)

{
  undefined *puVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  char *pcVar5;
  ulong uVar6;
  int *piVar7;
  uint uVar8;
  
  sVar3 = _strlen(param_1);
  puVar1 = PTR_DAT_10116e310;
  sVar4 = _strlen(PTR_DAT_10116e310);
  sVar4 = sVar3 + 2 + sVar4;
  pcVar5 = _malloc(sVar4);
  if (pcVar5 != (char *)0x0) {
    ___snprintf_chk(pcVar5,sVar4,0,0xffffffffffffffff,PTR_s__s__s_10116e318,puVar1,param_1);
    iVar2 = _open(pcVar5,0);
    if (iVar2 == -1) {
      piVar7 = ___error();
      uVar8 = 0;
      if (*piVar7 != 2) {
        uVar8 = 0xffffffff;
      }
    }
    else {
      _close(iVar2);
      uVar8 = 1;
    }
    _free(pcVar5);
    return (ulong)uVar8;
  }
  uVar6 = FUN_10071e690(0xfffffffe,0);
  return uVar6;
}

