
bool FUN_100db9700(int param_1,off_t param_2)

{
  int iVar1;
  
  iVar1 = _ftruncate(param_1,param_2);
  return -1 < iVar1;
}

