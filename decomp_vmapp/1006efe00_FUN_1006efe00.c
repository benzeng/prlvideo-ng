
bool FUN_1006efe00(long *param_1,long param_2)

{
  ulong uVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((param_2 != 0) && (*(int *)(*param_1 + 4) != 0)) {
    uVar1 = FUN_1006eec80(param_2,param_1);
    if ((uVar1 & 0x60) == 0) {
      bVar2 = (uVar1 & 0x10000) == 0;
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}

