
undefined8 FUN_10089c8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long local_30;
  
  local_30 = 0;
  iVar1 = FUN_1008a52d0(param_3,&local_30,param_1);
  if (local_30 == 0) {
    FUN_100887ce0(0xd,0xc0,0x41,"a_i2d_fp.c",0x8c);
    uVar4 = 0;
  }
  else {
    iVar2 = FUN_10087d780(param_2,local_30,iVar1);
    if (iVar1 != iVar2) {
      iVar3 = 0;
      uVar4 = 0;
      do {
        if (iVar2 < 1) goto LAB_10089c966;
        iVar3 = iVar3 + iVar2;
        iVar1 = iVar1 - iVar2;
        iVar2 = FUN_10087d780(param_2,iVar3 + local_30,iVar1);
      } while (iVar1 != iVar2);
    }
    uVar4 = 1;
LAB_10089c966:
    FUN_10081e1a0(local_30);
  }
  return uVar4;
}

