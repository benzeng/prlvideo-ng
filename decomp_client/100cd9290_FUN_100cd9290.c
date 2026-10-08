
undefined1 FUN_100cd9290(void)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  
  if (DAT_102311940 == (long *)0x0) {
    uVar4 = 0;
    FUN_100df99c0("","hid",0,"[CHIDThread] hid thread doesn\'t exists");
  }
  else {
    _close((int)DAT_102311940[5]);
    plVar1 = DAT_102311940;
    if (((int)DAT_102311940[2] != 0) &&
       (iVar3 = (int)DAT_102311940[2] + -1, *(int *)(DAT_102311940 + 2) = iVar3, iVar3 == 0)) {
      *(undefined1 *)((long)plVar1 + 0x15) = 1;
      cVar2 = QThread::wait((ulong)plVar1);
      if (cVar2 == '\0') {
        QThread::terminate();
        QThread::wait((ulong)plVar1);
      }
    }
    (**(code **)(*DAT_102311940 + 0x68))();
    uVar4 = 1;
  }
  return uVar4;
}

