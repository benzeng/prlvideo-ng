
undefined8 FUN_100c37690(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (*(code **)(lVar1 + 0xa8) == (code *)0x0) {
    uVar2 = 0x42;
    uVar3 = 0x375;
  }
  else {
    if (((lVar1 == *param_2) && (lVar1 == *param_3)) && (lVar1 == *param_4)) {
                    /* WARNING: Could not recover jumptable at 0x000100c376f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(lVar1 + 0xa8))();
      return uVar2;
    }
    uVar2 = 0x65;
    uVar3 = 0x37a;
  }
  FUN_100c62ee0(0x10,0x70,uVar2,"ec_lib.c",uVar3);
  return 0;
}

