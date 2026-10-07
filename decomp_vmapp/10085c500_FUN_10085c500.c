
undefined8 FUN_10085c500(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (*(code **)(lVar1 + 0xb0) == (code *)0x0) {
    uVar2 = 0x42;
    uVar3 = 900;
  }
  else {
    if ((lVar1 == *param_2) && (lVar1 == *param_3)) {
                    /* WARNING: Could not recover jumptable at 0x00010085c561. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(lVar1 + 0xb0))();
      return uVar2;
    }
    uVar2 = 0x65;
    uVar3 = 0x388;
  }
  FUN_100887ce0(0x10,0x73,uVar2,"ec_lib.c",uVar3);
  return 0;
}

