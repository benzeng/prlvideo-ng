
undefined4 * FUN_100bf5b60(undefined4 param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 local_38 [6];
  
  if (DAT_1023160b0 == 0) {
    FUN_100bf2780(9,2,"ex_data.c",0x116);
    if (DAT_1023160b0 == 0) {
      lVar2 = FUN_100c608e0(FUN_100bf5b30,FUN_100bf5b40);
      DAT_1023160b0 = lVar2;
      FUN_100bf2780(10,2,"ex_data.c",0x119);
      if (lVar2 == 0) {
        return (undefined4 *)0x0;
      }
    }
    else {
      FUN_100bf2780(10,2,"ex_data.c",0x119);
    }
  }
  local_38[0] = param_1;
  FUN_100bf2780(9,2,"ex_data.c",0x13e);
  puVar1 = (undefined4 *)FUN_100c60fc0(DAT_1023160b0,local_38);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_100bf3540(0x18,"ex_data.c",0x141);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = param_1;
      puVar1[4] = 0;
      lVar2 = FUN_100c60010();
      *(long *)(puVar1 + 2) = lVar2;
      if (lVar2 != 0) {
        FUN_100c60be0(DAT_1023160b0,puVar1);
        goto LAB_100bf5c7f;
      }
      FUN_100bf3910(puVar1);
    }
    FUN_100bf2780(10,2,"ex_data.c",0x152);
    FUN_100c62ee0(0xf,0x69,0x41,"ex_data.c",0x154);
    puVar1 = (undefined4 *)0x0;
  }
  else {
LAB_100bf5c7f:
    FUN_100bf2780(10,2,"ex_data.c",0x152);
  }
  return puVar1;
}

