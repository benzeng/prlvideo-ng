
void FUN_100d79e50(int param_1)

{
  int iVar1;
  
  if (param_1 < 0x66) {
    if (99 < param_1) {
      if (DAT_102318950 == '\0') {
        iVar1 = ___cxa_guard_acquire(&DAT_102318950);
        if (iVar1 != 0) {
          FUN_100d79cc0(&DAT_102318940);
          ___cxa_atexit(FUN_100d79dc0,&DAT_102318940,0x100000000);
          ___cxa_guard_release(&DAT_102318950);
        }
      }
      param_1 = *(int *)(&DAT_102318948 + (long)(param_1 + -100) * 4);
    }
    if (param_1 != -1) {
      _AudioServicesPlaySystemSound(param_1);
      return;
    }
  }
  return;
}

