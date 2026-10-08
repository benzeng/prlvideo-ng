
ulong FUN_100db2c60(long *param_1,undefined8 param_2,undefined4 param_3,uint param_4,code *param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar5 = 0xffffffffffffffff;
  do {
    while (uVar2 = (*param_5)((int)param_1[1],param_2,param_3), (long)uVar2 < 0) {
      iVar1 = FUN_100db96d0();
      *(int *)((long)param_1 + 0x14) = iVar1;
      uVar2 = 0;
      if (iVar1 != 4) goto LAB_100db2d60;
    }
    *(undefined4 *)((long)param_1 + 0x14) = 0;
    if (uVar2 == param_4) {
      uVar2 = (ulong)param_4;
      goto LAB_100db2d60;
    }
    uVar4 = *(uint *)(param_1 + 7);
    if ((uVar4 & 0x3f) == 0) {
      FUN_100df99c0("","AbstractFile",0,"Interrupted vector operations count is %u now");
      uVar4 = *(uint *)(param_1 + 7);
    }
    *(uint *)(param_1 + 7) = uVar4 + 1;
    if (uVar2 == uVar5) {
      FUN_100df99c0("","AbstractFile",0,"DoRWOpVec: got twice same value %zd",uVar5);
      uVar2 = uVar5;
      goto LAB_100db2d60;
    }
    lVar3 = (**(code **)(*param_1 + 0x60))(param_1,-uVar2,1);
    uVar5 = uVar2;
  } while (lVar3 != -1);
  FUN_100df99c0("","AbstractFile",0,"DoRWOpVec: Seek failed.");
  uVar2 = 0;
LAB_100db2d60:
  return uVar2 & 0xffffffff;
}

