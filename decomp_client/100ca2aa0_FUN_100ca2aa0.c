
undefined8
FUN_100ca2aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_100c8b370(2);
  if (lVar2 != 0) {
    iVar1 = FUN_100c76820(lVar2,param_2);
    if (iVar1 != 0) {
      uVar3 = FUN_100ca2870(param_1,lVar2,param_3,param_4);
      return uVar3;
    }
  }
  FUN_100c62ee0(0x22,0x7f,0x41,"v3_sxnet.c",0xaa);
  FUN_100c8b2f0(lVar2);
  return 0;
}

