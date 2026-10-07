
undefined8 * FUN_1003e3500(uint param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  if ((param_1 & 0x20) == 0) {
    puVar1 = (undefined8 *)0x0;
    switch(param_1 & 0xf) {
    case 1:
      puVar1 = operator_new(0x120);
      *puVar1 = &PTR_FUN_100bbe6f0;
      puVar1[4] = PTR_shared_null_100ba20d0;
      FUN_1003e0450(puVar1,param_1,0x800,param_2);
      break;
    case 2:
      puVar1 = operator_new(0x140);
      FUN_1003e9b00(puVar1,param_1,param_2);
      break;
    case 3:
      puVar1 = operator_new(0x140);
      FUN_1003ed240(puVar1,param_1,param_2);
      break;
    case 4:
      puVar1 = operator_new(0x128);
      FUN_1003e3a80(puVar1,param_1,0x800,param_2);
      break;
    case 5:
      puVar1 = operator_new(0x128);
      FUN_1003f3f30(puVar1,param_1,param_2);
    }
  }
  else if ((param_1 & 0xfffffeff) == 0xa0) {
    puVar1 = operator_new(0x120);
    FUN_1003e53a0(puVar1,param_1,param_2);
  }
  else {
    puVar1 = operator_new(0x128);
    FUN_1003f2220(puVar1,param_1,param_2);
  }
  return puVar1;
}

