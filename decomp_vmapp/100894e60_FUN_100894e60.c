
undefined8
FUN_100894e60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined4 *puVar1;
  
  if (((DAT_1011c2970 != 0) || (DAT_1011c2970 = FUN_100884d30(FUN_100894f20), DAT_1011c2970 != 0))
     && (puVar1 = (undefined4 *)FUN_10081ddd0(0x18,"evp_pbe.c",0xee), puVar1 != (undefined4 *)0x0))
  {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    *(undefined8 *)(puVar1 + 4) = param_5;
    FUN_1008852e0(DAT_1011c2970,puVar1);
    return 1;
  }
  FUN_100887ce0(6,0xa0,0x41,"evp_pbe.c",0xfb);
  return 0;
}

