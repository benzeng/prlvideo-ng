
undefined8 FUN_100c77e70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long local_30;
  
  local_30 = 0;
  iVar1 = FUN_100c80850(param_3,&local_30,param_1);
  if (local_30 == 0) {
    FUN_100c62ee0(0xd,0xc0,0x41,"a_i2d_fp.c",0x8c);
    uVar4 = 0;
  }
  else {
    iVar2 = FUN_100c58980(param_2,local_30,iVar1);
    if (iVar1 != iVar2) {
      iVar3 = 0;
      uVar4 = 0;
      do {
        if (iVar2 < 1) goto LAB_100c77ee6;
        iVar3 = iVar3 + iVar2;
        iVar1 = iVar1 - iVar2;
        iVar2 = FUN_100c58980(param_2,iVar3 + local_30,iVar1);
      } while (iVar1 != iVar2);
    }
    uVar4 = 1;
LAB_100c77ee6:
    FUN_100bf3910(local_30);
  }
  return uVar4;
}

