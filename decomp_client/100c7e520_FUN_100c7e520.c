
undefined4 FUN_100c7e520(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_100c59ee0();
  lVar3 = FUN_100c58530(uVar2);
  if (lVar3 == 0) {
    FUN_100c62ee0(0xb,0x76,7,"t_x509.c",0x5a);
    uVar1 = 0;
  }
  else {
    FUN_100c58d60(lVar3,0x6a,0,param_1);
    uVar1 = FUN_100c7e650(lVar3,param_2,0,0);
    FUN_100c586e0(lVar3);
  }
  return uVar1;
}

