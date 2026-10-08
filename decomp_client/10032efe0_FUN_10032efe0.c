
void FUN_10032efe0(long param_1,long *param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = *param_2;
  lVar3 = *(long *)(lVar1 + 0x10);
  switch(*(undefined4 *)(lVar3 + 8)) {
  case 2:
    if (0x83 < param_3) {
      if (lVar1 == 0) {
        lVar3 = 0;
      }
      FUN_10082d150(param_1,lVar3 + 0x18);
      return;
    }
    break;
  case 3:
    if (0x57 < param_3) {
      if (lVar1 == 0) {
        lVar3 = 0;
      }
      FUN_10082d100(param_1,lVar3 + 0x18);
      return;
    }
    break;
  case 4:
    if (0x43 < param_3) {
      if (lVar1 == 0) {
        lVar3 = 0;
      }
      FUN_10082d1a0(param_1,lVar3 + 0x18);
      return;
    }
    break;
  case 5:
    if (0x2f < param_3) {
      if (lVar1 == 0) {
        lVar3 = 0;
      }
      FUN_10082d1f0(param_1,lVar3 + 0x18);
      return;
    }
    break;
  case 6:
    if (0x9b < param_3) {
      if (lVar1 == 0) {
        lVar3 = 0;
      }
      FUN_10082d240(param_1,lVar3 + 0x18);
      return;
    }
    break;
  case 7:
    if (299 < param_3) {
      if (lVar1 == 0) {
        lVar3 = 0;
      }
      iVar2 = _memcmp((void *)(lVar3 + 0x20),(void *)(param_1 + 0x60),0x28);
      if (iVar2 == 0) {
        FUN_10082d290(param_1,lVar3 + 0x18);
        return;
      }
    }
  }
  return;
}

