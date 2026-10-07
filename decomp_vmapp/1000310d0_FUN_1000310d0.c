
bool FUN_1000310d0(undefined8 param_1,long param_2,int param_3,uint param_4,ulong param_5)

{
  uint uVar1;
  bool bVar2;
  
  bVar2 = true;
  if (param_4 != 0x20) {
    uVar1 = *(uint *)(param_2 + 0x20);
    if ((uVar1 & 1) == 0) {
      bVar2 = false;
    }
    else {
      if ((((uVar1 & 2) != 0) && (*(int *)(param_2 + 0xc) != param_3)) && (param_4 != 0x10)) {
        if (param_4 != 4) {
          return false;
        }
        if (1 < param_5) {
          return false;
        }
      }
      bVar2 = (param_4 & uVar1) != 0;
    }
  }
  return bVar2;
}

