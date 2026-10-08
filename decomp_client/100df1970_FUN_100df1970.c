
int FUN_100df1970(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 < 0x901) {
    if (param_1 < 0x801) {
      if (param_1 == 0x701) {
        return 0xc00;
      }
      if (param_1 == 0x702) {
        return 0x2400;
      }
      if (param_1 == 0x703) {
        return 0x2000;
      }
    }
    else if (param_1 - 0x801U < 0x10) {
      iVar1 = 0x28;
      switch(param_1) {
      case 0x801:
        goto switchD_100df19d3_caseD_801;
      case 0x802:
        return 100;
      case 0x803:
        return 0x78;
      case 0x804:
        return 500;
      case 0x805:
        return 0x8c;
      case 0x806:
        return 0x400;
      case 0x807:
        return 0x600;
      case 0x808:
        return 0x800;
      case 0x809:
        iVar1 = 0x3c00;
        if ((param_2 & 2) != 0) {
          iVar1 = 0x5000;
        }
        return iVar1;
      case 0x80a:
        return 0xa000;
      default:
        return (param_2 & 2 | 8) << 0xb;
      case 0x80d:
        return 0xf000;
      }
    }
  }
  else if (param_1 < 0x907) {
    if (param_1 == 0x901) {
      return 0xc66;
    }
  }
  else {
    switch(param_1) {
    case 0x907:
      return 0xf33;
    case 0x90a:
      return 0x1399;
    case 0x90d:
      return 0x10cc;
    case 0x910:
      return 0xd33;
    }
  }
  iVar1 = 0;
switchD_100df19d3_caseD_801:
  return iVar1;
}

