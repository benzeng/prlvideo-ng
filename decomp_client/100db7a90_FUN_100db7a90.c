
byte FUN_100db7a90(char *param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  long lVar5;
  size_t sVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_c0 [4];
  ushort local_bc;
  
  lVar3 = _opendir_INODE64();
  if (lVar3 == 0) {
    bVar1 = 0;
  }
  else {
    sVar4 = _strlen(param_1);
    bVar1 = 1;
    do {
      do {
        lVar5 = _readdir_INODE64(lVar3);
        if (lVar5 == 0) {
          _closedir(lVar3);
          if ((bVar1 & 1) != 0) {
            iVar2 = _rmdir(param_1);
            bVar1 = iVar2 == 0;
          }
          goto LAB_100db7bf5;
        }
        pcVar8 = (char *)(lVar5 + 0x15);
        iVar2 = _strcmp(pcVar8,".");
      } while ((iVar2 == 0) || (iVar2 = _strcmp(pcVar8,".."), iVar2 == 0));
      sVar6 = _strlen(pcVar8);
      sVar6 = sVar6 + sVar4 + 2;
      pcVar7 = _malloc(sVar6);
      if (pcVar7 == (char *)0x0) break;
      bVar1 = 0;
      _snprintf(pcVar7,sVar6,"%s/%s",param_1,pcVar8);
      iVar2 = _stat_INODE64(pcVar7,local_c0);
      if (iVar2 == 0) {
        if ((local_bc & 0xf000) == 0x4000) {
          bVar1 = FUN_100db7a90();
        }
        else {
          iVar2 = _unlink(pcVar7);
          bVar1 = iVar2 == 0;
        }
      }
      _free(pcVar7);
    } while (bVar1 != 0);
    _closedir(lVar3);
    bVar1 = 0;
LAB_100db7bf5:
    bVar1 = bVar1 & 1;
  }
  return bVar1;
}

