
undefined8 FUN_100b9e520(char *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined1 local_b8 [4];
  ushort local_b4;
  
  pcVar2 = _strdup(param_1);
  if (pcVar2 == (char *)0x0) {
    piVar4 = ___error();
    *piVar4 = 0xc;
    return 0xffffffff;
  }
  pcVar3 = pcVar2;
  do {
    pcVar3 = _strchr(pcVar3 + 1,0x2f);
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = '\0';
    }
    iVar1 = _stat_INODE64(pcVar2,local_b8);
    if (iVar1 == 0) {
      if ((local_b4 & 0xf000) != 0x4000) {
        piVar4 = ___error();
        *piVar4 = 0x14;
        uVar5 = 0xffffffff;
LAB_100b9e5f1:
        _free(pcVar2);
        return uVar5;
      }
    }
    else {
      piVar4 = ___error();
      uVar5 = 0xffffffff;
      if ((*piVar4 != 2) || (iVar1 = _mkdir(pcVar2,0x1ed), iVar1 != 0)) goto LAB_100b9e5f1;
      _chmod(pcVar2,0x1ed);
    }
    uVar5 = 0;
    if (pcVar3 == (char *)0x0) goto LAB_100b9e5f1;
    *pcVar3 = '/';
  } while( true );
}

