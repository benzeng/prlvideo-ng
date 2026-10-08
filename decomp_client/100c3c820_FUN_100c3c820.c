
undefined8
FUN_100c3c820(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_100c45420();
  if ((uVar1 != 0) && (lVar2 = FUN_100bf3540(uVar1 & 0xffffffff,"ec_print.c",0x47), lVar2 != 0)) {
    lVar3 = FUN_100c45420(param_1,param_2,param_3,lVar2,uVar1,param_5);
    if (lVar3 != 0) {
      uVar4 = FUN_100c26e20(lVar2,uVar1 & 0xffffffff,param_4);
      FUN_100bf3910(lVar2);
      return uVar4;
    }
    FUN_100bf3910(lVar2);
  }
  return 0;
}

