
int FUN_100178755(FILE *param_1)

{
  int iVar1;
  int local_28;
  int local_24;
  
  if (param_1 == (FILE *)0x0) {
    local_28 = -1;
  }
  else {
    iVar1 = _fflush(param_1);
    if (iVar1 == -1) {
      local_24 = -1;
    }
    else {
      local_24 = 0;
    }
    if (local_24 < 0) {
      FUN_100177e16(0,"fflush()");
    }
    local_28 = local_24;
  }
  return local_28;
}

