
undefined8 FUN_1008dbd30(int *param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_3 == 1) {
    if (*(long *)(param_2 + 0x68) == 0) {
      uVar3 = 0xa0;
      uVar4 = 0xd7;
      goto LAB_1008dbe19;
    }
    lVar2 = FUN_1008afc30();
    *(long *)(param_1 + 2) = lVar2;
    if (lVar2 != 0) {
LAB_1008dbdb7:
      *param_1 = param_3;
      return 1;
    }
  }
  else {
    if (param_3 != 0) {
      uVar3 = 0x96;
      uVar4 = 0xe0;
      goto LAB_1008dbe19;
    }
    lVar2 = FUN_1008a4610(&DAT_100be7110);
    *(long *)(param_1 + 2) = lVar2;
    if (lVar2 != 0) {
      uVar3 = FUN_1008b6ee0(param_2);
      iVar1 = FUN_1008a11f0(lVar2,uVar3);
      if (iVar1 != 0) {
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 2) + 8);
        uVar4 = FUN_1008b7120(param_2);
        iVar1 = FUN_1008afae0(uVar3,uVar4);
        if (iVar1 != 0) goto LAB_1008dbdb7;
      }
    }
  }
  uVar3 = 0x41;
  uVar4 = 0xe9;
LAB_1008dbe19:
  FUN_100887ce0(0x2e,0x92,uVar3,"cms_sd.c",uVar4);
  return 0;
}

