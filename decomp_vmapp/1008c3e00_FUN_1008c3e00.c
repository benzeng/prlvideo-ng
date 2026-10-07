
undefined4 FUN_1008c3e00(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 1;
  if (param_2 != 0) {
    uVar1 = 0;
    lVar2 = FUN_10089b5b0(param_2,0);
    if ((lVar2 == 0) || (lVar3 = FUN_10084efa0(lVar2), lVar3 == 0)) {
      FUN_100887ce0(0x22,0x78,0x41,"v3_utl.c",0xaa);
      FUN_10084b4b0(lVar2);
    }
    else {
      FUN_10084b4b0(lVar2);
      uVar1 = FUN_1008c39e0(param_1,lVar3,param_3);
      FUN_10081e1a0(lVar3);
    }
  }
  return uVar1;
}

