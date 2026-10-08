
undefined4 FUN_100b9e610(void)

{
  undefined *puVar1;
  mode_t mVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  undefined1 local_a8 [4];
  ushort local_a4;
  
  iVar3 = FUN_100b93810();
  if (iVar3 == 8) {
    pcVar6 = "/Library/Preferences/Parallels/Licenses/pd";
  }
  else {
    pcVar6 = "/Library/Preferences/Parallels/Licenses";
  }
  _strncpy(&DAT_1023144d0,pcVar6,0x400);
  iVar3 = _stat_INODE64(PTR_DAT_1022cfce0,local_a8);
  if (iVar3 == 0) {
    if ((local_a4 & 0xf000) != 0x4000) {
      uVar4 = FUN_100b9d470(0xfffffffc,"File %s is not directory",PTR_DAT_1022cfce0);
      return uVar4;
    }
  }
  else {
    piVar5 = ___error();
    puVar1 = PTR_DAT_1022cfce0;
    if (*piVar5 != 2) {
      piVar5 = ___error();
      pcVar6 = _strerror(*piVar5);
      uVar4 = FUN_100b9d470(0xfffffffc,"Can\'t stat file %s - %s",puVar1,pcVar6);
      return uVar4;
    }
  }
  mVar2 = _umask(0x36);
  iVar3 = FUN_100b9e520(PTR_DAT_1022cfce0);
  puVar1 = PTR_DAT_1022cfce0;
  uVar4 = 0;
  if (iVar3 != 0) {
    piVar5 = ___error();
    pcVar6 = _strerror(*piVar5);
    uVar4 = FUN_100b9d470(0xfffffffc,"Can\'t create directory %s - %s",puVar1,pcVar6);
  }
  _umask(mVar2);
  return uVar4;
}

