
undefined1
FUN_10060b2b0(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 uVar1;
  
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 6:
  case 8:
    FUN_10060a8b0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    uVar1 = FUN_10060b4b0(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_5);
    break;
  case 4:
    FUN_10060a8b0(*(undefined8 *)(param_1 + 0x10),4,param_3);
    uVar1 = FUN_10060cb40(*(undefined8 *)(param_1 + 0x10),param_3,param_5);
    break;
  case 5:
    FUN_10060a8b0(*(undefined8 *)(param_1 + 0x10),5,param_3);
    uVar1 = FUN_100608960(*(undefined8 *)(param_1 + 0x10),param_3,param_5);
    break;
  case 7:
    FUN_10060a8b0(*(undefined8 *)(param_1 + 0x10),7,param_3);
    uVar1 = FUN_10060c610(*(undefined8 *)(param_1 + 0x10),param_3,param_5);
    break;
  default:
    uVar1 = 0;
    FUN_100df99c0("","prl_client_app",0,"Unknown dialog type requested.");
  }
  return uVar1;
}

