
undefined8 FUN_1008753b0(long param_1,long param_2,long *param_3,long *param_4)

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
  
  if ((param_1 == 0) || (lVar3 = FUN_1008648d0(), lVar3 == 0)) {
    uVar9 = 0x43;
    uVar10 = 100;
LAB_100875612:
    FUN_100887ce0(0x2a,0x67,uVar9,"ecs_ossl.c",uVar10);
    return 0;
  }
  local_38 = param_2;
  if ((param_2 == 0) && (local_38 = FUN_10084c820(), local_38 == 0)) {
    uVar9 = 0x41;
    uVar10 = 0x6a;
    goto LAB_100875612;
  }
  lVar4 = FUN_10084b520();
  lVar5 = FUN_10084b520();
  lVar6 = FUN_10084b520();
  lVar7 = FUN_10084b520();
  if ((lVar4 == 0) || (((lVar5 == 0 || (lVar6 == 0)) || (lVar7 == 0)))) {
    uVar9 = 0x41;
    uVar10 = 0x75;
LAB_10087566c:
    FUN_100887ce0(0x2a,0x67,uVar9,"ecs_ossl.c",uVar10);
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_10085b6e0(lVar3);
    if (lVar8 == 0) {
      uVar9 = 0x10;
      uVar10 = 0x79;
      goto LAB_10087566c;
    }
    iVar1 = FUN_10085b9d0(lVar3,lVar6,local_38);
    if (iVar1 == 0) {
      FUN_100887ce0(0x2a,0x67,0x10,"ecs_ossl.c",0x7d);
    }
    else {
      do {
        do {
          iVar1 = FUN_10084fb60(lVar4,lVar6);
          if (iVar1 == 0) {
            FUN_100887ce0(0x2a,0x67,0x68,"ecs_ossl.c",0x86);
            goto LAB_100875795;
          }
        } while (*(int *)(lVar4 + 8) == 0);
        iVar1 = FUN_100847940(lVar4,lVar4,lVar6);
        if (iVar1 == 0) goto LAB_100875795;
        iVar1 = FUN_10084b410(lVar4);
        iVar2 = FUN_10084b410(lVar6);
        if ((iVar1 <= iVar2) && (iVar1 = FUN_100847940(lVar4,lVar4,lVar6), iVar1 == 0))
        goto LAB_100875795;
        iVar1 = FUN_10085c790(lVar3,lVar8,lVar4,0,0,local_38);
        if (iVar1 == 0) {
          uVar9 = 0x98;
LAB_100875788:
          FUN_100887ce0(0x2a,0x67,0x10,"ecs_ossl.c",uVar9);
          goto LAB_100875795;
        }
        uVar9 = FUN_10085b870(lVar3);
        iVar1 = FUN_10085b880(uVar9);
        if (iVar1 == 0x196) {
          iVar1 = FUN_10085c3d0(lVar3,lVar8,lVar7);
          if (iVar1 == 0) {
            uVar9 = 0x9f;
            goto LAB_100875788;
          }
        }
        else {
          iVar1 = FUN_10085c430(lVar3,lVar8,lVar7,0);
          if (iVar1 == 0) {
            uVar9 = 0xa9;
            goto LAB_100875788;
          }
        }
        iVar1 = FUN_10084e8b0(lVar5,lVar7,lVar6);
        if (iVar1 == 0) {
          FUN_100887ce0(0x2a,0x67,3,"ecs_ossl.c",0xaf);
          goto LAB_100875795;
        }
      } while (*(int *)(lVar5 + 8) == 0);
      lVar3 = FUN_100851d20(lVar4,lVar4,lVar6,local_38);
      if (lVar3 != 0) {
        if (*param_4 != 0) {
          FUN_10084b440();
        }
        if (*param_3 != 0) {
          FUN_10084b440();
        }
        *param_4 = lVar5;
        *param_3 = lVar4;
        uVar9 = 1;
        goto LAB_1008757b7;
      }
      FUN_100887ce0(0x2a,0x67,3,"ecs_ossl.c",0xb7);
    }
  }
LAB_100875795:
  if (lVar4 != 0) {
    FUN_10084b440();
  }
  uVar9 = 0;
  if (lVar5 != 0) {
    FUN_10084b440();
  }
LAB_1008757b7:
  if (param_2 == 0) {
    FUN_10084c8b0(local_38);
  }
  if (lVar6 != 0) {
    FUN_10084b4b0(lVar6);
  }
  if (lVar8 != 0) {
    FUN_10085b080(lVar8);
  }
  if (lVar7 == 0) {
    return uVar9;
  }
  FUN_10084b440();
  return uVar9;
}

