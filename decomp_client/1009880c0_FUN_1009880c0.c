
ushort FUN_1009880c0(int param_1)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_100d7e9e0();
  if (param_1 < 0xff) {
    uVar2 = 0;
    switch(param_1) {
    case 7:
      uVar2 = 0x703;
      break;
    case 8:
      uVar2 = iVar1 != 0 | 0x80a;
      break;
    case 9:
      uVar2 = 0x901;
      if (iVar1 != 0) {
        uVar2 = 0x90a;
      }
      break;
    case 10:
      uVar2 = 0xa06;
      break;
    case 0xb:
      uVar2 = 0xb03;
      break;
    case 0xc:
      uVar2 = 0xc01;
      break;
    case 0xd:
      uVar2 = 0xd02;
      break;
    case 0xe:
      uVar2 = 0xe02;
      break;
    case 0xf:
      uVar2 = 0xf01;
      break;
    case 0x10:
      uVar2 = 0x1002;
    }
  }
  else {
    uVar2 = 0;
    if (param_1 == 0xff) {
      uVar2 = 0xff02;
    }
  }
  return uVar2;
}

