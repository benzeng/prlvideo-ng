
bool FUN_1008a9730(undefined8 param_1,int param_2,long param_3,long param_4,ulong *param_5)

{
  int iVar1;
  bool bVar2;
  
  for (; 0x14 < param_2; param_2 = param_2 + -0x14) {
    iVar1 = FUN_10087d780(param_1,s__1011af860,0x14);
    if (iVar1 != 0x14) {
      return false;
    }
  }
  iVar1 = FUN_10087d780(param_1,s__1011af860,param_2);
  bVar2 = false;
  if (iVar1 == param_2) {
    if ((*param_5 & 0x100) != 0) {
      param_4 = 0;
    }
    if ((*param_5 & 0x40) != 0) {
      param_3 = 0;
    }
    bVar2 = true;
    if (param_4 != 0 || param_3 != 0) {
      if ((param_3 != 0) && (iVar1 = FUN_10087d870(param_1,param_3), iVar1 < 1)) {
        return false;
      }
      if (param_4 != 0) {
        if (param_3 == 0) {
          iVar1 = FUN_10087d870(param_1,param_4);
        }
        else {
          iVar1 = FUN_100880ec0(param_1," (%s)",param_4);
        }
        if (iVar1 < 1) {
          return false;
        }
      }
      iVar1 = FUN_10087d780(param_1,": ",2);
      bVar2 = iVar1 == 2;
    }
  }
  return bVar2;
}

