
undefined8
FUN_100ba66a0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = _malloc(0x40);
  uVar2 = 0xffffffff;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_100ba5b10(puVar1 + 6,param_3,param_4);
    puVar1[1] = 0xf0e0d0c0b0a0908;
    *puVar1 = 0x706050403020100;
    FUN_100ba6360(param_1,param_2,puVar1);
    _free(puVar1);
    uVar2 = 0;
  }
  return uVar2;
}

