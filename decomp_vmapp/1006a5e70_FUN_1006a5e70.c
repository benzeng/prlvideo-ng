
undefined8 FUN_1006a5e70(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (param_2 < *(ulong *)(*(long *)(*param_1 + -0xd0) + 0x18104 + (long)param_1)) {
    uVar1 = FUN_100699600((long)param_1 + *(long *)(*param_1 + -0xd0),param_2);
    return uVar1;
  }
  FUN_1008e3970("","dimg",0,"Error: UpdateBATSync failed, wrong image offset %llu, image size %llu")
  ;
  return 0x80021056;
}

