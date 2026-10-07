
ulong FUN_10071f5f0(char *param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  size_t sVar5;
  char *pcVar6;
  int *piVar7;
  char *pcVar8;
  ulong uVar9;
  
  sVar4 = _strlen(param_1);
  puVar1 = PTR_DAT_10116e310;
  sVar5 = _strlen(PTR_DAT_10116e310);
  sVar5 = sVar4 + 2 + sVar5;
  pcVar6 = _malloc(sVar5);
  if (pcVar6 != (char *)0x0) {
    uVar9 = 0;
    ___snprintf_chk(pcVar6,sVar5,0,0xffffffffffffffff,PTR_s__s__s_10116e318,puVar1,param_1);
    iVar2 = _unlink(pcVar6);
    if (iVar2 == -1) {
      piVar7 = ___error();
      if (*piVar7 != 2) {
        piVar7 = ___error();
        pcVar8 = _strerror(*piVar7);
        uVar3 = FUN_10071e690(0xfffffffc,"Can\'t delete file %s, error = %s",pcVar6,pcVar8);
        uVar9 = (ulong)uVar3;
      }
    }
    _free(pcVar6);
    return uVar9;
  }
  uVar9 = FUN_10071e690(0xfffffffe,0);
  return uVar9;
}

