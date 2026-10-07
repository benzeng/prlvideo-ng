
undefined8
FUN_1008c7520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1008afdf0(2);
  if (lVar2 != 0) {
    iVar1 = FUN_10089b2a0(lVar2,param_2);
    if (iVar1 != 0) {
      uVar3 = FUN_1008c72f0(param_1,lVar2,param_3,param_4);
      return uVar3;
    }
  }
  FUN_100887ce0(0x22,0x7f,0x41,"v3_sxnet.c",0xaa);
  FUN_1008afd70(lVar2);
  return 0;
}

