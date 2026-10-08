
int FUN_1008ac3b8(gzFile param_1)

{
  int iVar1;
  int local_24;
  
  iVar1 = _gzclose(param_1);
  if (iVar1 == 0) {
    local_24 = 0;
  }
  else {
    local_24 = -1;
  }
  if (local_24 < 0) {
    FUN_1008ab73e(0,"gzclose()");
  }
  return local_24;
}

