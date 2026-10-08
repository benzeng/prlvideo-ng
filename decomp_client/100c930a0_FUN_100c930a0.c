
undefined8 FUN_100c930a0(long *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  uVar5 = 0;
  if (param_1 != (long *)0x0) {
    uVar5 = 0;
    if (*param_1 != 0) {
      uVar5 = FUN_100c7b280(*(undefined8 *)(*param_1 + 0x28));
    }
  }
  uVar1 = FUN_100c6d2b0(uVar5,param_2);
  switch(uVar1) {
  case 0:
    uVar2 = 0x74;
    uVar3 = 0x83;
    break;
  case 1:
    uVar4 = 1;
    goto switchD_100c930f7_default;
  case 0xfffffffe:
    if (*param_2 == 0x1c) {
      uVar2 = 0x72;
      uVar3 = 0x93;
    }
    else if (*param_2 == 0x198) {
      uVar2 = 0x10;
      uVar3 = 0x8b;
    }
    else {
      uVar2 = 0x75;
      uVar3 = 0x97;
    }
    break;
  case 0xffffffff:
    uVar2 = 0x73;
    uVar3 = 0x86;
    break;
  default:
    goto switchD_100c930f7_default;
  }
  FUN_100c62ee0(0xb,0x90,uVar2,"x509_req.c",uVar3);
switchD_100c930f7_default:
  FUN_100c6d8c0(uVar5);
  return uVar4;
}

