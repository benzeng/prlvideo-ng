
bool FUN_100422250(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  if (*param_1 != -1) {
    iVar1 = _ftruncate(*param_1,(ulong)(uint)param_1[2]);
    if (iVar1 == 0) {
      iVar1 = _close(*param_1);
      bVar2 = iVar1 == 0;
      *param_1 = -1;
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}

