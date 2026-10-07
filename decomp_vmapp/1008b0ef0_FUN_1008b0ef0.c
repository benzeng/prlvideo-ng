
long FUN_1008b0ef0(undefined8 param_1,undefined8 param_2,long *param_3,int *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_38;
  
  iVar1 = FUN_10089ba50(param_1,0,param_2,0x10,0,0);
  if (iVar1 == 0) {
    uVar3 = 0x70;
    uVar4 = 0x5f;
  }
  else {
    lVar2 = FUN_10081ddd0(iVar1,"asn_pack.c",0x62);
    if (lVar2 != 0) {
      local_38 = lVar2;
      FUN_10089ba50(param_1,&local_38,param_2,0x10,0,0);
      if (param_4 != (int *)0x0) {
        *param_4 = iVar1;
      }
      if (param_3 == (long *)0x0) {
        return lVar2;
      }
      *param_3 = lVar2;
      return lVar2;
    }
    uVar3 = 0x41;
    uVar4 = 99;
  }
  FUN_100887ce0(0xd,0x7e,uVar3,"asn_pack.c",uVar4);
  return 0;
}

