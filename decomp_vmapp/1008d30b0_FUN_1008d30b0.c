
long FUN_1008d30b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_34;
  
  local_34 = (undefined4)((ulong)in_RAX >> 0x20);
  if (param_4 == 0) {
    iVar1 = FUN_1008926d0(param_3,&local_34);
    if (iVar1 < 1) {
      return 0;
    }
    uVar2 = FUN_100821930(local_34);
    param_4 = FUN_100890b60(uVar2);
    if (param_4 == 0) {
      FUN_100887ce0(0x21,0x83,0x97,"pk7_lib.c",0x19c);
      return 0;
    }
  }
  lVar3 = FUN_1008d2300();
  if (lVar3 == 0) {
    return 0;
  }
  iVar1 = FUN_1008d2f50(lVar3,param_2,param_3,param_4);
  if ((iVar1 != 0) && (iVar1 = FUN_1008d2c40(param_1,lVar3), iVar1 != 0)) {
    return lVar3;
  }
  FUN_1008d2320(lVar3);
  return 0;
}

