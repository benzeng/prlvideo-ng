
undefined8 FUN_100894f40(undefined4 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar2 = 0xffffffff;
  uVar1 = 0xffffffff;
  if (param_2 != 0) {
    uVar1 = FUN_1008945e0(param_2);
  }
  if (param_3 != 0) {
    uVar2 = FUN_1008946b0(param_3);
  }
  if (((DAT_1011c2970 != 0) || (DAT_1011c2970 = FUN_100884d30(FUN_100894f20), DAT_1011c2970 != 0))
     && (puVar3 = (undefined4 *)FUN_10081ddd0(0x18,"evp_pbe.c",0xee), puVar3 != (undefined4 *)0x0))
  {
    *puVar3 = 0;
    puVar3[1] = param_1;
    puVar3[2] = uVar1;
    puVar3[3] = uVar2;
    *(undefined8 *)(puVar3 + 4) = param_4;
    FUN_1008852e0(DAT_1011c2970,puVar3);
    return 1;
  }
  FUN_100887ce0(6,0xa0,0x41,"evp_pbe.c",0xfb);
  return 0;
}

