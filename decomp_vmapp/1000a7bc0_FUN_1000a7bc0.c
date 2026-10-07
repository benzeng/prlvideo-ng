
undefined8 FUN_1000a7bc0(long param_1)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  iVar3 = *(int *)(param_1 + 0x1164);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x5d8);
    *(int *)(param_1 + 0x1164) = iVar3;
  }
  if (0 < iVar3) {
    lVar4 = (long)iVar3 + 0x301;
    do {
      uVar1 = *(ulong *)(param_1 + lVar4 * 8);
      if (uVar1 != 0) {
        cVar2 = QThread::wait(uVar1);
        if (cVar2 == '\0') {
          return 1;
        }
      }
      lVar5 = lVar4 + -0x301;
      lVar4 = lVar4 + -1;
    } while (1 < lVar5);
  }
  return 0;
}

