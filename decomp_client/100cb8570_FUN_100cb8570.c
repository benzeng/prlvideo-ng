
undefined8 FUN_100cb8570(int *param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_3 == 1) {
    if (*(long *)(param_2 + 0x68) == 0) {
      uVar3 = 0xa0;
      uVar4 = 0xd7;
      goto LAB_100cb8659;
    }
    lVar2 = FUN_100c8b1b0();
    *(long *)(param_1 + 2) = lVar2;
    if (lVar2 != 0) {
LAB_100cb85f7:
      *param_1 = param_3;
      return 1;
    }
  }
  else {
    if (param_3 != 0) {
      uVar3 = 0x96;
      uVar4 = 0xe0;
      goto LAB_100cb8659;
    }
    lVar2 = FUN_100c7fb90(&DAT_102257720);
    *(long *)(param_1 + 2) = lVar2;
    if (lVar2 != 0) {
      uVar3 = FUN_100c92460(param_2);
      iVar1 = FUN_100c7c770(lVar2,uVar3);
      if (iVar1 != 0) {
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 2) + 8);
        uVar4 = FUN_100c926a0(param_2);
        iVar1 = FUN_100c8b060(uVar3,uVar4);
        if (iVar1 != 0) goto LAB_100cb85f7;
      }
    }
  }
  uVar3 = 0x41;
  uVar4 = 0xe9;
LAB_100cb8659:
  FUN_100c62ee0(0x2e,0x92,uVar3,"cms_sd.c",uVar4);
  return 0;
}

