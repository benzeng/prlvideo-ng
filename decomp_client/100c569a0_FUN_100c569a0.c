
undefined8
FUN_100c569a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar1 = 0x43;
    uVar2 = 0xa8;
  }
  else {
    FUN_100bf2780(9,0x1e,"eng_pkey.c",0xab);
    if (*(int *)(param_1 + 0xb0) == 0) {
      FUN_100bf2780(10,0x1e,"eng_pkey.c",0xad);
      uVar1 = 0x75;
      uVar2 = 0xaf;
    }
    else {
      FUN_100bf2780(10,0x1e,"eng_pkey.c",0xb2);
      if (*(code **)(param_1 + 0x98) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100c56a33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(param_1 + 0x98))(param_1,param_2,param_3,param_4,param_5,param_6);
        return uVar1;
      }
      uVar1 = 0x7d;
      uVar2 = 0xb5;
    }
  }
  FUN_100c62ee0(0x26,0xc2,uVar1,"eng_pkey.c",uVar2);
  return 0;
}

