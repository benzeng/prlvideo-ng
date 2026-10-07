
undefined4 FUN_10071f830(void)

{
  undefined *puVar1;
  mode_t mVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  undefined1 local_a8 [4];
  ushort local_a4;
  
  iVar3 = FUN_100714a30();
  if (iVar3 == 8) {
    pcVar6 = "/Library/Preferences/Parallels/Licenses/pd";
  }
  else {
    pcVar6 = "/Library/Preferences/Parallels/Licenses";
  }
  _strncpy(&DAT_1011bdd40,pcVar6,0x400);
  iVar3 = _stat_INODE64(PTR_DAT_10116e310,local_a8);
  if (iVar3 == 0) {
    if ((local_a4 & 0xf000) != 0x4000) {
      uVar4 = FUN_10071e690(0xfffffffc,"File %s is not directory",PTR_DAT_10116e310);
      return uVar4;
    }
  }
  else {
    piVar5 = ___error();
    puVar1 = PTR_DAT_10116e310;
    if (*piVar5 != 2) {
      piVar5 = ___error();
      pcVar6 = _strerror(*piVar5);
      uVar4 = FUN_10071e690(0xfffffffc,"Can\'t stat file %s - %s",puVar1,pcVar6);
      return uVar4;
    }
  }
  mVar2 = _umask(0x36);
  iVar3 = FUN_10071f740(PTR_DAT_10116e310);
  puVar1 = PTR_DAT_10116e310;
  uVar4 = 0;
  if (iVar3 != 0) {
    piVar5 = ___error();
    pcVar6 = _strerror(*piVar5);
    uVar4 = FUN_10071e690(0xfffffffc,"Can\'t create directory %s - %s",puVar1,pcVar6);
  }
  _umask(mVar2);
  return uVar4;
}

