
undefined8 FUN_1006a5e20(long param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (param_2 < *(ulong *)(param_1 + 0x18104)) {
    uVar1 = FUN_100699600(param_1,param_2);
    return uVar1;
  }
  FUN_1008e3970("","dimg",0,"Error: UpdateBATSync failed, wrong image offset %llu, image size %llu")
  ;
  return 0x80021056;
}

