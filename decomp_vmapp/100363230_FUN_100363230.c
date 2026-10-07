
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_100363230(undefined8 param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  switch(param_2) {
  case 1:
    break;
  case 2:
    return 1;
  default:
    if (param_3 != '\0') {
      return 0x500;
    }
    uVar2 = 0x300;
    switch(param_2) {
    case 3:
      break;
    case 4:
      return 0x301;
    default:
      uVar2 = 0x500;
      break;
    case 9:
      return 0x306;
    case 10:
      return 0x307;
    case 0x10:
    case 0x11:
      iVar1 = *(int *)(DAT_1011c8478 + 0x10);
      goto joined_r0x000100363261;
    }
    break;
  case 5:
    return 0x302;
  case 6:
    return 0x303;
  case 7:
    return 0x304;
  case 8:
    return 0x305;
  case 0xb:
    return 0x308;
  case 0xe:
    return 0x8001;
  case 0xf:
    return 0x8002;
  case 0x12:
  case 0x13:
    iVar1 = *(int *)(DAT_1011c8478 + 0x10);
joined_r0x000100363261:
    uVar2 = 1;
    if ((iVar1 != 0) && (uVar2 = 0x500, param_2 - 0x10U < 4)) {
      return *(undefined4 *)(&DAT_100b3c960 + (long)(param_2 + -0x10) * 4);
    }
  }
  return uVar2;
}

