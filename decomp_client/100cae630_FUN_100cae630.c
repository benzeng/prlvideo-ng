
long FUN_100cae630(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_34;
  
  local_34 = (undefined4)((ulong)in_RAX >> 0x20);
  if (param_4 == 0) {
    iVar1 = FUN_100c6dab0(param_3,&local_34);
    if (iVar1 < 1) {
      return 0;
    }
    uVar2 = FUN_100bf70a0(local_34);
    param_4 = FUN_100c6bd60(uVar2);
    if (param_4 == 0) {
      FUN_100c62ee0(0x21,0x83,0x97,"pk7_lib.c",0x19c);
      return 0;
    }
  }
  lVar3 = FUN_100cad880();
  if (lVar3 == 0) {
    return 0;
  }
  iVar1 = FUN_100cae4d0(lVar3,param_2,param_3,param_4);
  if ((iVar1 != 0) && (iVar1 = FUN_100cae1c0(param_1,lVar3), iVar1 != 0)) {
    return lVar3;
  }
  FUN_100cad8a0(lVar3);
  return 0;
}

