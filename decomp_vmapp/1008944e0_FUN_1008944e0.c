
int FUN_1008944e0(int *param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 < 0x28a) {
    if (iVar2 < 0xa6) {
      if (iVar2 < 0x61) {
        if (iVar2 < 0x25) {
          if (iVar2 == 5) {
            return 5;
          }
          if (iVar2 == 0x1e) {
            return 0x1e;
          }
        }
        else {
          if (iVar2 == 0x25) {
            return 0x25;
          }
          if (iVar2 == 0x3d) {
            return 0x1e;
          }
        }
      }
      else {
        if (iVar2 == 0x61) {
          return 5;
        }
        if (iVar2 == 0x62) {
          return 0x25;
        }
      }
    }
    else if (iVar2 < 0x1a9) {
      if (iVar2 == 0xa6) {
        return 0x25;
      }
      if (iVar2 == 0x1a5) {
        return 0x1a5;
      }
    }
    else {
      if (iVar2 == 0x1a9) {
        return 0x1a9;
      }
      if (iVar2 == 0x1ad) {
        return 0x1ad;
      }
    }
  }
  else {
    switch(iVar2) {
    case 0x28a:
    case 0x28d:
      return 0x1a5;
    case 0x28b:
    case 0x28e:
      return 0x1a9;
    case 0x28c:
    case 0x28f:
      return 0x1ad;
    case 0x290:
    case 0x291:
    case 0x292:
    case 0x293:
      return 0x1e;
    }
  }
  lVar1 = FUN_100821870(iVar2);
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x18) == 0)) {
    iVar2 = 0;
  }
  FUN_100899890(lVar1);
  return iVar2;
}

