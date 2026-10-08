
void FUN_1008291f0(undefined8 param_1,int param_2,int param_3,long *param_4)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == 0xc) {
    if (((param_3 != 7) && (param_3 != 0xb)) || (*(int *)param_4[1] != 1)) {
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
      FUN_1002f9900();
      return;
    case 1:
      FUN_1002f9a40();
      return;
    case 2:
      FUN_1002f9ee0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      FUN_1002f7e10(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 4:
      FUN_1002fa550();
      return;
    case 5:
      FUN_1002fb2b0();
      return;
    case 6:
      FUN_1002fb9f0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 7:
      FUN_1002fcce0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 8:
      FUN_1002fd670();
      return;
    case 9:
      FUN_1002fe8b0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],
                    *(undefined4 *)param_4[3]);
      return;
    case 10:
      FUN_1002fdba0(param_1,param_4[1]);
      return;
    case 0xb:
      FUN_1002ff650(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 0xc:
      iVar1 = FUN_1002f73f0();
      break;
    case 0xd:
      iVar1 = FUN_1002f8770();
      break;
    case 0xe:
      iVar1 = FUN_1002f8f00();
      break;
    case 0xf:
      iVar1 = FUN_1002f98e0();
      break;
    case 0x10:
      iVar1 = FUN_1002f9f00();
      break;
    case 0x11:
      iVar1 = FUN_1002fb2d0();
      break;
    case 0x12:
      iVar1 = FUN_1002fcd40();
      break;
    case 0x13:
      iVar1 = FUN_1002ff6b0();
      break;
    case 0x14:
      iVar1 = FUN_1002ff940();
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

