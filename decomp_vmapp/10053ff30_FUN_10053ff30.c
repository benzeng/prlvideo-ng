
undefined1 FUN_10053ff30(long param_1,byte param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if ((((param_2 & 1) == 0) && (((param_2 & 2) == 0 || (*(char *)(param_1 + 0x2a) == '\0')))) &&
     (((param_2 & 4) == 0 || (*(char *)(param_1 + 0x2b) == '\0')))) {
    if (((param_2 & 8) != 0) && (*(long *)(DAT_1011c3698 + 0x118) != 0)) {
      CDispCommonPreferences::getWorkspacePreferences();
      cVar1 = CDispWorkspacePreferences::isMountNTFSToHostOnConnectionToVm();
      if (cVar1 != '\0') {
        return 1;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

