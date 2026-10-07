
undefined8 FUN_100894320(long *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(*param_1 + 0xc);
    if (0x10 < uVar1) {
      FUN_10081d560("evp_lib.c",0x87,"j <= sizeof(c->iv)");
    }
    uVar2 = FUN_1008b0ab0(param_2,param_1 + 3,uVar1);
    return uVar2;
  }
  return 0;
}

