
undefined4 FUN_100c9f380(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 1;
  if (param_2 != 0) {
    uVar1 = 0;
    lVar2 = FUN_100c76b30(param_2,0);
    if ((lVar2 == 0) || (lVar3 = FUN_100c2a1a0(lVar2), lVar3 == 0)) {
      FUN_100c62ee0(0x22,0x78,0x41,"v3_utl.c",0xaa);
      FUN_100c266b0(lVar2);
    }
    else {
      FUN_100c266b0(lVar2);
      uVar1 = FUN_100c9ef60(param_1,lVar3,param_3);
      FUN_100bf3910(lVar3);
    }
  }
  return uVar1;
}

