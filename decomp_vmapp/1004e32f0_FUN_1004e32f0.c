
undefined8 FUN_1004e32f0(long param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != -1) {
    if (*(char *)(param_1 + 0x14) != '\0') {
      _ftruncate(iVar1,0);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    _close(iVar1);
    if (*(char *)(param_1 + 0x14) != '\0') {
      iVar1 = _unlink((char *)(*(long *)(param_1 + 8) + *(long *)(*(long *)(param_1 + 8) + 0x10)));
      if (iVar1 != 0) {
        piVar2 = ___error();
        if (*piVar2 == 1) {
          iVar1 = _chflags((char *)(*(long *)(param_1 + 8) +
                                   *(long *)(*(long *)(param_1 + 8) + 0x10)),0);
          if (iVar1 == 0) {
            _unlink((char *)(*(long *)(param_1 + 8) + *(long *)(*(long *)(param_1 + 8) + 0x10)));
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  return 0;
}

