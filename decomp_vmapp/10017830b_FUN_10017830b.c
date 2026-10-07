
int FUN_10017830b(int param_1)

{
  int iVar1;
  
  iVar1 = _close(param_1);
  if (iVar1 < 0) {
    FUN_100177e16(0,"close()");
  }
  return iVar1;
}

