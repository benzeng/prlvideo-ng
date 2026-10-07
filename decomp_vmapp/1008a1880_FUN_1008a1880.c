
long FUN_1008a1880(long *param_1,long *param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long local_38;
  
  local_38 = *param_2;
  if ((param_1 == (long *)0x0) || (bVar1 = false, *param_1 == 0)) {
    bVar1 = true;
  }
  lVar2 = FUN_1008a5f10(param_1,&local_38,param_3,&DAT_100be1970);
  lVar3 = 0;
  if (lVar2 != 0) {
    if (((*param_2 - local_38) + param_3 < 1) ||
       (lVar3 = FUN_1008a1ab0(lVar2 + 0xb0,&local_38), lVar3 != 0)) {
      *param_2 = local_38;
      lVar3 = lVar2;
    }
    else {
      lVar3 = 0;
      if (bVar1) {
        FUN_1008a4c40(lVar2,&DAT_100be1970);
        lVar3 = 0;
        if (param_1 != (long *)0x0) {
          *param_1 = 0;
          lVar3 = 0;
        }
      }
    }
  }
  return lVar3;
}

