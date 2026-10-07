
ulong FUN_10036c8a0(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_1 + 0x400);
  uVar3 = 0;
  do {
    if (0x18 < piVar4[1] - 2U) {
LAB_10036c940:
      return uVar3 & 0xffffffff;
    }
    iVar1 = *piVar4;
    switch(piVar4[1]) {
    case 2:
    case 0x11:
    case 0x16:
    case 0x17:
      if (iVar1 == 0) {
        uVar2 = piVar4[2];
LAB_10036c910:
        if ((uVar2 & 0xf) == 2) {
          return uVar3 & 0xffffffff;
        }
      }
      break;
    case 3:
      if ((iVar1 == 0) && ((piVar4[3] & 0xfU) == 2)) goto LAB_10036c940;
      break;
    default:
      if (iVar1 == 0) {
        if ((piVar4[2] & 0xfU) == 2) goto LAB_10036c940;
        uVar2 = piVar4[3];
        goto LAB_10036c910;
      }
      break;
    case 0x19:
    case 0x1a:
      if (iVar1 == 0) {
        if (((piVar4[2] & 0xfU) == 2) || ((piVar4[3] & 0xfU) == 2)) goto LAB_10036c940;
        uVar2 = piVar4[0x1a];
        goto LAB_10036c910;
      }
    }
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 0x40;
    if (7 < uVar3) {
      return 8;
    }
  } while( true );
}

