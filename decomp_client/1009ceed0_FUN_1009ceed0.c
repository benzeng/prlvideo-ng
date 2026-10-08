
void FUN_1009ceed0(int *param_1)

{
  int iVar1;
  
  if (((char)param_1[1] != '\0') && (*param_1 != -1)) {
    iVar1 = _ftruncate(*param_1,(ulong)(uint)param_1[2]);
    if (iVar1 == 0) {
      _close(*param_1);
      *param_1 = -1;
    }
  }
  return;
}

