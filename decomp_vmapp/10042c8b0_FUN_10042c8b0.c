
bool FUN_10042c8b0(int *param_1,void *param_2,size_t param_3,ulong param_4)

{
  ulong uVar1;
  size_t sVar2;
  bool bVar3;
  
  if (*(long *)(param_1 + 2) == 0) {
    sVar2 = _pread(*param_1,param_2,param_3,param_4);
    bVar3 = sVar2 == param_3;
  }
  else if ((long)param_4 < 0) {
    bVar3 = false;
  }
  else {
    uVar1 = *(ulong *)(param_1 + 4);
    bVar3 = true;
    if (uVar1 < param_4 + param_3) {
      bVar3 = false;
      param_3 = uVar1 - param_4;
      if (uVar1 < param_4 || param_3 == 0) {
        return false;
      }
    }
    _memcpy(param_2,(void *)(*(long *)(param_1 + 2) + param_4),param_3);
  }
  return bVar3;
}

