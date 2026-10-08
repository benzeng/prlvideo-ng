
undefined4 FUN_100bdc1f0(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 local_58 [52];
  undefined4 local_24;
  
  lVar4 = *(long *)(param_1 + 0x80);
  if (*(long *)(lVar4 + 0x1b8) != 0) {
    iVar1 = FUN_100bcfe80(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    lVar4 = *(long *)(param_1 + 0x80);
  }
  plVar3 = *(long **)(lVar4 + 0x1c0);
  if (*plVar3 == 0) {
LAB_100bdc267:
    if (plVar3[1] != 0) {
      uVar2 = FUN_100c6fca0();
      iVar1 = FUN_100c6fc30(uVar2);
      lVar4 = 1;
      if (iVar1 == param_2) goto LAB_100bdc347;
      plVar3 = *(long **)(*(long *)(param_1 + 0x80) + 0x1c0);
    }
    if (plVar3[2] != 0) {
      uVar2 = FUN_100c6fca0();
      iVar1 = FUN_100c6fc30(uVar2);
      lVar4 = 2;
      if (iVar1 == param_2) goto LAB_100bdc347;
      plVar3 = *(long **)(*(long *)(param_1 + 0x80) + 0x1c0);
    }
    if (plVar3[3] != 0) {
      uVar2 = FUN_100c6fca0();
      iVar1 = FUN_100c6fc30(uVar2);
      lVar4 = 3;
      if (iVar1 == param_2) goto LAB_100bdc347;
      plVar3 = *(long **)(*(long *)(param_1 + 0x80) + 0x1c0);
    }
    if (plVar3[4] != 0) {
      uVar2 = FUN_100c6fca0();
      iVar1 = FUN_100c6fc30(uVar2);
      lVar4 = 4;
      if (iVar1 == param_2) goto LAB_100bdc347;
      plVar3 = *(long **)(*(long *)(param_1 + 0x80) + 0x1c0);
    }
    if (plVar3[5] == 0) goto LAB_100bdc3a2;
    uVar2 = FUN_100c6fca0();
    iVar1 = FUN_100c6fc30(uVar2);
    lVar4 = 5;
    if (iVar1 != param_2) goto LAB_100bdc3a2;
  }
  else {
    uVar2 = FUN_100c6fca0();
    iVar1 = FUN_100c6fc30(uVar2);
    lVar4 = 0;
    if (iVar1 != param_2) {
      plVar3 = *(long **)(*(long *)(param_1 + 0x80) + 0x1c0);
      goto LAB_100bdc267;
    }
  }
LAB_100bdc347:
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x80) + 0x1c0) + lVar4 * 8);
  if (lVar4 != 0) {
    FUN_100c65850(local_58);
    iVar1 = FUN_100c65d60(local_58,lVar4);
    if ((iVar1 < 1) || (iVar1 = FUN_100c65bc0(local_58,param_3,&local_24), iVar1 < 1)) {
      local_24 = 0;
    }
    FUN_100c65c50(local_58);
    return local_24;
  }
LAB_100bdc3a2:
  FUN_100c62ee0(0x14,0x11e,0x144,"t1_enc.c",0x399);
  return 0;
}

