
undefined8 FUN_1008b7b20(long *param_1,int *param_2)

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
      uVar5 = FUN_10089fd00(*(undefined8 *)(*param_1 + 0x28));
    }
  }
  uVar1 = FUN_100891ed0(uVar5,param_2);
  switch(uVar1) {
  case 0:
    uVar2 = 0x74;
    uVar3 = 0x83;
    break;
  case 1:
    uVar4 = 1;
    goto switchD_1008b7b77_default;
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
    goto switchD_1008b7b77_default;
  }
  FUN_100887ce0(0xb,0x90,uVar2,"x509_req.c",uVar3);
switchD_1008b7b77_default:
  FUN_1008924e0(uVar5);
  return uVar4;
}

