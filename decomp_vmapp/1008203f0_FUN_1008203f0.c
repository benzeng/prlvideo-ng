
undefined4 * FUN_1008203f0(undefined4 param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 local_38 [6];
  
  if (DAT_1011c06c0 == 0) {
    FUN_10081d010(9,2,"ex_data.c",0x116);
    if (DAT_1011c06c0 == 0) {
      lVar2 = FUN_1008856e0(FUN_1008203c0,FUN_1008203d0);
      DAT_1011c06c0 = lVar2;
      FUN_10081d010(10,2,"ex_data.c",0x119);
      if (lVar2 == 0) {
        return (undefined4 *)0x0;
      }
    }
    else {
      FUN_10081d010(10,2,"ex_data.c",0x119);
    }
  }
  local_38[0] = param_1;
  FUN_10081d010(9,2,"ex_data.c",0x13e);
  puVar1 = (undefined4 *)FUN_100885dc0(DAT_1011c06c0,local_38);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_10081ddd0(0x18,"ex_data.c",0x141);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = param_1;
      puVar1[4] = 0;
      lVar2 = FUN_100884e10();
      *(long *)(puVar1 + 2) = lVar2;
      if (lVar2 != 0) {
        FUN_1008859e0(DAT_1011c06c0,puVar1);
        goto LAB_10082050f;
      }
      FUN_10081e1a0(puVar1);
    }
    FUN_10081d010(10,2,"ex_data.c",0x152);
    FUN_100887ce0(0xf,0x69,0x41,"ex_data.c",0x154);
    puVar1 = (undefined4 *)0x0;
  }
  else {
LAB_10082050f:
    FUN_10081d010(10,2,"ex_data.c",0x152);
  }
  return puVar1;
}

