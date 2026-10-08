
long FUN_100be1020(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  short sVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined1 local_130 [160];
  undefined8 local_90;
  long local_38;
  
  local_38 = 0xf;
  lVar2 = *(long *)(param_1 + 0x50);
  iVar3 = FUN_100c58060(lVar2,10);
  if (iVar3 == 0) {
    uVar4 = 7;
    uVar7 = 0x46a;
LAB_100be11ed:
    FUN_100c62ee0(0x14,0xff,uVar4,"d1_both.c",uVar7);
    local_38 = 0;
  }
  else {
    if (param_2 != 0) {
      iVar6 = 0;
      iVar3 = FUN_100c94fc0(local_130,*(undefined8 *)(*(long *)(param_1 + 0x170) + 0x18),param_2,0);
      if (iVar3 == 0) {
        uVar4 = 0xb;
        uVar7 = 0x471;
        goto LAB_100be11ed;
      }
      FUN_100c93570(local_130);
      FUN_100c63270();
      iVar3 = FUN_100c60800(local_90);
      if (0 < iVar3) {
        do {
          uVar4 = FUN_100c60820(local_90,iVar6);
          iVar3 = FUN_100be1270(lVar2,&local_38,uVar4);
          if (iVar3 == 0) {
            FUN_100c94f00(local_130);
            return 0;
          }
          iVar6 = iVar6 + 1;
          iVar3 = FUN_100c60800(local_90);
        } while (iVar6 < iVar3);
      }
      FUN_100c94f00(local_130);
    }
    plVar8 = (long *)(param_1 + 0x170);
    iVar3 = FUN_100c60800(*(undefined8 *)(*plVar8 + 0xf8));
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        uVar4 = FUN_100c60820(*(undefined8 *)(*plVar8 + 0xf8),iVar3);
        iVar6 = FUN_100be1270(lVar2,&local_38,uVar4);
        if (iVar6 == 0) {
          return 0;
        }
        iVar3 = iVar3 + 1;
        iVar6 = FUN_100c60800(*(undefined8 *)(*plVar8 + 0xf8));
      } while (iVar3 < iVar6);
    }
    lVar1 = local_38 + -0xf;
    lVar2 = *(long *)(lVar2 + 8);
    *(char *)(lVar2 + 0xc) = (char)((ulong)lVar1 >> 0x10);
    *(char *)(lVar2 + 0xd) = (char)((ulong)lVar1 >> 8);
    *(char *)(lVar2 + 0xe) = (char)lVar1;
    lVar2 = *(long *)(param_1 + 0x88);
    if (*(int *)(lVar2 + 0x280) == 0) {
      sVar5 = *(short *)(lVar2 + 0x232);
      *(short *)(lVar2 + 0x230) = sVar5;
      *(short *)(lVar2 + 0x232) = sVar5 + 1;
    }
    else {
      sVar5 = *(short *)(lVar2 + 0x230);
    }
    *(undefined1 *)(lVar2 + 0x290) = 0xb;
    *(long *)(lVar2 + 0x298) = local_38 + -0xc;
    *(short *)(lVar2 + 0x2a0) = sVar5;
    *(undefined8 *)(lVar2 + 0x2a8) = 0;
    *(long *)(lVar2 + 0x2b0) = local_38 + -0xc;
  }
  return local_38;
}

