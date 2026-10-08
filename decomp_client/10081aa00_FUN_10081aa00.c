
void FUN_10081aa00(undefined8 param_1,int param_2,int param_3,long *param_4)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == 0xc) {
    if ((param_3 != 6) || (*(int *)param_4[1] != 1)) {
      *(undefined4 *)*param_4 = 0xffffffff;
      return;
    }
    if (DAT_10226db58 == 0) {
      DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
    }
    piVar2 = (int *)*param_4;
    iVar1 = DAT_10226db58;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    switch(param_3) {
    case 0:
      FUN_10026fe20();
      return;
    case 1:
      FUN_100271360(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      FUN_100272010();
      return;
    case 3:
      FUN_1002729b0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 4:
      FUN_1002737a0();
      return;
    case 5:
      FUN_100273d80(param_1,*(undefined4 *)param_4[1]);
      return;
    case 6:
      FUN_100272080(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 7:
      FUN_100270ca0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 8:
      FUN_100272880(param_1,*(undefined4 *)param_4[1]);
      return;
    case 9:
      FUN_1002728a0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 10:
      iVar1 = FUN_10026e630();
      break;
    case 0xb:
      iVar1 = FUN_10026e6e0();
      break;
    case 0xc:
      iVar1 = FUN_10026e760();
      break;
    case 0xd:
      iVar1 = FUN_10026fe40();
      break;
    case 0xe:
      iVar1 = FUN_1002702d0();
      break;
    case 0xf:
      iVar1 = FUN_100270760();
      break;
    case 0x10:
      iVar1 = FUN_100270bf0();
      break;
    case 0x11:
      iVar1 = FUN_1002711a0();
      break;
    case 0x12:
      iVar1 = FUN_100271450();
      break;
    case 0x13:
      iVar1 = FUN_100271570();
      break;
    case 0x14:
      iVar1 = FUN_100271650();
      break;
    case 0x15:
      iVar1 = FUN_100271a80();
      break;
    case 0x16:
      iVar1 = FUN_100272140();
      break;
    case 0x17:
      iVar1 = FUN_1002728e0();
      break;
    case 0x18:
      iVar1 = FUN_100272de0();
      break;
    case 0x19:
      iVar1 = FUN_1002736b0();
      break;
    case 0x1a:
      iVar1 = FUN_1002737d0();
      break;
    case 0x1b:
      iVar1 = FUN_100273e00();
      break;
    case 0x1c:
      iVar1 = FUN_100273ee0();
      break;
    default:
      return;
    }
    piVar2 = (int *)*param_4;
    if (piVar2 == (int *)0x0) {
      return;
    }
  }
  *piVar2 = iVar1;
  return;
}

