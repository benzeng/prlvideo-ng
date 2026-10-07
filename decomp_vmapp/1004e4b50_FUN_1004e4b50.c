
undefined1 FUN_1004e4b50(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 uVar4;
  
  lVar3 = _opendir_INODE64(*(long *)(param_1 + 8) + *(long *)(*(long *)(param_1 + 8) + 0x10));
  uVar4 = 1;
  if (lVar3 != 0) {
    lVar1 = _readdir_INODE64(lVar3);
    uVar4 = 1;
    while (lVar1 != 0) {
      iVar2 = _strcmp((char *)(lVar1 + 0x15),".");
      if ((iVar2 != 0) && (iVar2 = _strcmp((char *)(lVar1 + 0x15),".."), iVar2 != 0)) {
        uVar4 = 0;
        break;
      }
      lVar1 = _readdir_INODE64(lVar3);
    }
    _closedir(lVar3);
  }
  return uVar4;
}

