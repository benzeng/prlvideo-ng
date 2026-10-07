
undefined8 FUN_1008899a0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_30;
  
  if (DAT_1011c0db0 == (undefined **)0x0) {
    FUN_10081d010(9,1,"err.c",0x127);
    if (DAT_1011c0db0 == (undefined **)0x0) {
      DAT_1011c0db0 = &PTR_FUN_100bde1a8;
    }
    FUN_10081d010(10,1,"err.c",0x12a);
  }
  lVar1 = (*(code *)DAT_1011c0db0[5])(1);
  uVar2 = 0;
  if (lVar1 != 0) {
    local_30 = lVar1;
    FUN_10081d010(9,1,"err.c",0x205);
    uVar2 = FUN_1008859e0(lVar1,param_1);
    FUN_10081d010(10,1,"err.c",0x207);
    (*(code *)DAT_1011c0db0[6])(&local_30);
  }
  return uVar2;
}

