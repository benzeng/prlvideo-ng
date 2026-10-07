
undefined8 FUN_1001066a0(long *param_1,undefined4 *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 4) != 8) {
    return 5;
  }
  if (0xff < *(uint *)(lVar2 + 0x24)) {
    return 5;
  }
  if (0xff < *(uint *)(lVar2 + 0x28)) {
    return 5;
  }
  uVar4 = *(uint *)(lVar2 + 0x28) | *(uint *)(lVar2 + 0x24) << 8;
  if ((0x501 < (int)uVar4) && ((ulong)param_1[1] < 0x118)) {
    return 6;
  }
  cVar1 = *(char *)(lVar2 + 0x136);
  if ((int)uVar4 < 0xa00) {
    if (0x5ff < (int)uVar4) {
      uVar3 = 5;
      switch(uVar4) {
      case 0x600:
        uVar4 = (cVar1 != '\x01') + 0x809;
        break;
      case 0x601:
        uVar4 = cVar1 == '\x01' | 0x80a;
        break;
      case 0x602:
        uVar4 = cVar1 != '\x01' | 0x80c;
        break;
      case 0x603:
        uVar4 = (cVar1 == '\x01') + 0x80d;
        break;
      default:
        goto switchD_10010676f_default;
      }
      goto LAB_10010674a;
    }
    if (uVar4 == 0x500) {
      param_2[1] = 0x806;
    }
    else {
      if (uVar4 != 0x501) {
        if (uVar4 != 0x502) {
          return 5;
        }
        uVar4 = (cVar1 != '\x01') + 0x807;
        goto LAB_10010674a;
      }
      param_2[1] = 0x807;
    }
  }
  else {
    if (uVar4 != 0xa00) {
      return 5;
    }
    uVar4 = (cVar1 != '\x01') + 0x80f;
LAB_10010674a:
    param_2[1] = uVar4;
  }
  *param_2 = *(undefined4 *)(*param_1 + 4);
  uVar3 = 0;
switchD_10010676f_default:
  return uVar3;
}

