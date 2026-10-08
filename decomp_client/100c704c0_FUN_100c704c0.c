
undefined8 FUN_100c704c0(undefined4 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar2 = 0xffffffff;
  uVar1 = 0xffffffff;
  if (param_2 != 0) {
    uVar1 = FUN_100c6fb60(param_2);
  }
  if (param_3 != 0) {
    uVar2 = FUN_100c6fc30(param_3);
  }
  if (((DAT_1023183b0 != 0) || (DAT_1023183b0 = FUN_100c5ff30(FUN_100c704a0), DAT_1023183b0 != 0))
     && (puVar3 = (undefined4 *)FUN_100bf3540(0x18,"evp_pbe.c",0xee), puVar3 != (undefined4 *)0x0))
  {
    *puVar3 = 0;
    puVar3[1] = param_1;
    puVar3[2] = uVar1;
    puVar3[3] = uVar2;
    *(undefined8 *)(puVar3 + 4) = param_4;
    FUN_100c604e0(DAT_1023183b0,puVar3);
    return 1;
  }
  FUN_100c62ee0(6,0xa0,0x41,"evp_pbe.c",0xfb);
  return 0;
}

