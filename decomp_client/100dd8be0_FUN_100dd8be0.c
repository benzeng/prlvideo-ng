
void FUN_100dd8be0(long *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 != 0) {
    while (iVar1 = _IOIteratorNext(iVar1), iVar1 != 0) {
      (**(code **)(*param_1 + 0x10))(param_1,iVar1);
      _IOObjectRelease(iVar1);
      iVar1 = (int)param_1[1];
    }
  }
  return;
}

