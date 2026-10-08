
undefined8 FUN_100c505b0(long param_1,long param_2,long *param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long local_38;
  
  if ((param_1 == 0) || (lVar3 = FUN_100c3fad0(), lVar3 == 0)) {
    uVar9 = 0x43;
    uVar10 = 100;
LAB_100c50812:
    FUN_100c62ee0(0x2a,0x67,uVar9,"ecs_ossl.c",uVar10);
    return 0;
  }
  local_38 = param_2;
  if ((param_2 == 0) && (local_38 = FUN_100c27a20(), local_38 == 0)) {
    uVar9 = 0x41;
    uVar10 = 0x6a;
    goto LAB_100c50812;
  }
  lVar4 = FUN_100c26720();
  lVar5 = FUN_100c26720();
  lVar6 = FUN_100c26720();
  lVar7 = FUN_100c26720();
  if ((lVar4 == 0) || (((lVar5 == 0 || (lVar6 == 0)) || (lVar7 == 0)))) {
    uVar9 = 0x41;
    uVar10 = 0x75;
LAB_100c5086c:
    FUN_100c62ee0(0x2a,0x67,uVar9,"ecs_ossl.c",uVar10);
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_100c368e0(lVar3);
    if (lVar8 == 0) {
      uVar9 = 0x10;
      uVar10 = 0x79;
      goto LAB_100c5086c;
    }
    iVar1 = FUN_100c36bd0(lVar3,lVar6,local_38);
    if (iVar1 == 0) {
      FUN_100c62ee0(0x2a,0x67,0x10,"ecs_ossl.c",0x7d);
    }
    else {
      do {
        do {
          iVar1 = FUN_100c2ad60(lVar4,lVar6);
          if (iVar1 == 0) {
            FUN_100c62ee0(0x2a,0x67,0x68,"ecs_ossl.c",0x86);
            goto LAB_100c50995;
          }
        } while (*(int *)(lVar4 + 8) == 0);
        iVar1 = FUN_100c22b40(lVar4,lVar4,lVar6);
        if (iVar1 == 0) goto LAB_100c50995;
        iVar1 = FUN_100c26610(lVar4);
        iVar2 = FUN_100c26610(lVar6);
        if ((iVar1 <= iVar2) && (iVar1 = FUN_100c22b40(lVar4,lVar4,lVar6), iVar1 == 0))
        goto LAB_100c50995;
        iVar1 = FUN_100c37990(lVar3,lVar8,lVar4,0,0,local_38);
        if (iVar1 == 0) {
          uVar9 = 0x98;
LAB_100c50988:
          FUN_100c62ee0(0x2a,0x67,0x10,"ecs_ossl.c",uVar9);
          goto LAB_100c50995;
        }
        uVar9 = FUN_100c36a70(lVar3);
        iVar1 = FUN_100c36a80(uVar9);
        if (iVar1 == 0x196) {
          iVar1 = FUN_100c375d0(lVar3,lVar8,lVar7);
          if (iVar1 == 0) {
            uVar9 = 0x9f;
            goto LAB_100c50988;
          }
        }
        else {
          iVar1 = FUN_100c37630(lVar3,lVar8,lVar7,0);
          if (iVar1 == 0) {
            uVar9 = 0xa9;
            goto LAB_100c50988;
          }
        }
        iVar1 = FUN_100c29ab0(lVar5,lVar7,lVar6);
        if (iVar1 == 0) {
          FUN_100c62ee0(0x2a,0x67,3,"ecs_ossl.c",0xaf);
          goto LAB_100c50995;
        }
      } while (*(int *)(lVar5 + 8) == 0);
      lVar3 = FUN_100c2cf20(lVar4,lVar4,lVar6,local_38);
      if (lVar3 != 0) {
        if (*param_4 != 0) {
          FUN_100c26640();
        }
        if (*param_3 != 0) {
          FUN_100c26640();
        }
        *param_4 = lVar5;
        *param_3 = lVar4;
        uVar9 = 1;
        goto LAB_100c509b7;
      }
      FUN_100c62ee0(0x2a,0x67,3,"ecs_ossl.c",0xb7);
    }
  }
LAB_100c50995:
  if (lVar4 != 0) {
    FUN_100c26640();
  }
  uVar9 = 0;
  if (lVar5 != 0) {
    FUN_100c26640();
  }
LAB_100c509b7:
  if (param_2 == 0) {
    FUN_100c27ab0(local_38);
  }
  if (lVar6 != 0) {
    FUN_100c266b0(lVar6);
  }
  if (lVar8 != 0) {
    FUN_100c36280(lVar8);
  }
  if (lVar7 == 0) {
    return uVar9;
  }
  FUN_100c26640();
  return uVar9;
}

