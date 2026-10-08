
undefined8 FUN_100b2e4e0(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (param_2 < *(ulong *)(*(long *)(*param_1 + -0xd0) + 0x18104 + (long)param_1)) {
    uVar1 = FUN_100b21c70((long)param_1 + *(long *)(*param_1 + -0xd0),param_2);
    return uVar1;
  }
  FUN_100df99c0("","dimg",0,"Error: UpdateBATSync failed, wrong image offset %llu, image size %llu")
  ;
  return 0x80021056;
}

