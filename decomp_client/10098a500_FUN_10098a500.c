
void FUN_10098a500(byte *param_1,undefined8 param_2,byte param_3)

{
  undefined1 extraout_AL;
  undefined1 extraout_AH;
  undefined2 extraout_var;
  ushort uVar1;
  
  *param_1 = param_3;
  FUN_100987a10(param_1 + 8);
  FUN_100d7e9e0();
  uVar1 = 0;
  if (param_3 < 0xff) {
    switch(param_3) {
    case 7:
      uVar1 = 0x703;
      break;
    case 8:
      uVar1 = (CONCAT22(extraout_var,CONCAT11(extraout_AH,extraout_AL)) &
              CONCAT22(extraout_var,CONCAT11(extraout_AH,extraout_AL))) != 0 | 0x80a;
      break;
    case 9:
      uVar1 = 0x901;
      if ((CONCAT22(extraout_var,CONCAT11(extraout_AH,extraout_AL)) &
          CONCAT22(extraout_var,CONCAT11(extraout_AH,extraout_AL))) != 0) {
        uVar1 = 0x90a;
      }
      break;
    case 10:
      uVar1 = 0xa06;
      break;
    case 0xb:
      uVar1 = 0xb03;
      break;
    case 0xc:
      uVar1 = 0xc01;
      break;
    case 0xd:
      uVar1 = 0xd02;
      break;
    case 0xe:
      uVar1 = 0xe02;
      break;
    case 0xf:
      uVar1 = 0xf01;
      break;
    case 0x10:
      uVar1 = 0x1002;
    }
  }
  else if (param_3 == 0xff) {
    uVar1 = 0xff02;
  }
  *(ushort *)(param_1 + 0x20) = uVar1;
  return;
}

