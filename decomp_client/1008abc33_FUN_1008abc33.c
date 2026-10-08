
int FUN_1008abc33(int param_1)

{
  int iVar1;
  
  iVar1 = _close(param_1);
  if (iVar1 < 0) {
    FUN_1008ab73e(0,"close()");
  }
  return iVar1;
}

