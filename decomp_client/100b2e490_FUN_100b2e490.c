
undefined8 FUN_100b2e490(long param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (param_2 < *(ulong *)(param_1 + 0x18104)) {
    uVar1 = FUN_100b21c70(param_1,param_2);
    return uVar1;
  }
  FUN_100df99c0("","dimg",0,"Error: UpdateBATSync failed, wrong image offset %llu, image size %llu")
  ;
  return 0x80021056;
}

