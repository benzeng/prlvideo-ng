
undefined8 FUN_100c77d00(code *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long local_38;
  
  iVar5 = 0;
  iVar1 = (*param_1)(param_3,0);
  lVar3 = FUN_100bf3540(iVar1,"a_i2d_fp.c",0x5a);
  if (lVar3 == 0) {
    FUN_100c62ee0(0xd,0x74,0x41,"a_i2d_fp.c",0x5c);
    uVar4 = 0;
  }
  else {
    local_38 = lVar3;
    (*param_1)(param_3,&local_38);
    iVar2 = FUN_100c58980(param_2,lVar3,iVar1);
    if (iVar1 != iVar2) {
      uVar4 = 0;
      do {
        if (iVar2 < 1) goto LAB_100c77d93;
        iVar5 = iVar5 + iVar2;
        iVar1 = iVar1 - iVar2;
        iVar2 = FUN_100c58980(param_2,iVar5 + lVar3,iVar1);
      } while (iVar1 != iVar2);
    }
    uVar4 = 1;
LAB_100c77d93:
    FUN_100bf3910(lVar3);
  }
  return uVar4;
}

