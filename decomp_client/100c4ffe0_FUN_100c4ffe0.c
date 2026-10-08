
undefined8 *
FUN_100c4ffe0(undefined8 param_1,int param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long local_58;
  long local_38;
  
  local_38 = 0;
  lVar4 = FUN_100c4fc00(param_5);
  lVar5 = FUN_100c3fad0(param_5);
  lVar6 = FUN_100c3fb20(param_5);
  if (((lVar4 == 0) || (lVar5 == 0)) || (lVar6 == 0)) {
    uVar11 = 0x43;
    uVar12 = 0xe7;
LAB_100c50243:
    FUN_100c62ee0(0x2a,0x65,uVar11,"ecs_ossl.c",uVar12);
    return (undefined8 *)0x0;
  }
  puVar7 = (undefined8 *)FUN_100c4ff90();
  if (puVar7 == (undefined8 *)0x0) {
    uVar11 = 0x41;
    uVar12 = 0xed;
    goto LAB_100c50243;
  }
  lVar4 = puVar7[1];
  lVar8 = FUN_100c27a20();
  local_58 = 0;
  lVar1 = 0;
  if (lVar8 == 0) {
LAB_100c50320:
    lVar9 = lVar1;
    FUN_100c62ee0(0x2a,0x65,0x41,"ecs_ossl.c",0xf4);
    lVar10 = 0;
  }
  else {
    lVar9 = FUN_100c26720();
    local_58 = 0;
    lVar1 = 0;
    if (lVar9 == 0) goto LAB_100c50320;
    local_58 = FUN_100c26720();
    lVar1 = lVar9;
    if (local_58 == 0) {
      local_58 = 0;
      goto LAB_100c50320;
    }
    lVar10 = FUN_100c26720();
    if (lVar10 == 0) goto LAB_100c50320;
    iVar2 = FUN_100c36bd0(lVar5,lVar9,lVar8);
    if (iVar2 == 0) {
      FUN_100c62ee0(0x2a,0x65,0x10,"ecs_ossl.c",0xf9);
    }
    else {
      uVar3 = FUN_100c26610(lVar9);
      if ((int)uVar3 < param_2 * 8) {
        param_2 = (int)(uVar3 + 7 + ((uint)((int)(uVar3 + 7) >> 0x1f) >> 0x1d)) >> 3;
      }
      lVar5 = FUN_100c26e20(param_1,param_2,lVar10);
      if (lVar5 == 0) {
        FUN_100c62ee0(0x2a,0x65,3,"ecs_ossl.c",0x103);
      }
      else if (((int)uVar3 < param_2 * 8) &&
              (iVar2 = FUN_100c2b450(lVar10,lVar10,8 - (uVar3 & 7)), iVar2 == 0)) {
        uVar11 = 3;
        uVar12 = 0x108;
LAB_100c50594:
        FUN_100c62ee0(0x2a,0x65,uVar11,"ecs_ossl.c",uVar12);
      }
      else {
        if ((param_3 == 0) || (param_4 == 0)) {
          do {
            iVar2 = FUN_100c51100(param_5,lVar8,&local_38,puVar7);
            lVar5 = local_38;
            if (iVar2 == 0) {
              uVar11 = 0x2a;
              uVar12 = 0x10e;
              goto LAB_100c50594;
            }
            iVar2 = FUN_100c29cc0(local_58,lVar6,*puVar7,lVar9,lVar8);
            if (iVar2 == 0) goto LAB_100c504cc;
            iVar2 = FUN_100c29bb0(lVar4,local_58,lVar10,lVar9);
            if (iVar2 == 0) goto LAB_100c50501;
            iVar2 = FUN_100c29cc0(lVar4,lVar4,lVar5,lVar9,lVar8);
            if (iVar2 == 0) goto LAB_100c50527;
            if (*(int *)(lVar4 + 8) != 0) goto LAB_100c5035b;
          } while (param_4 == 0 || param_3 == 0);
LAB_100c502fb:
          uVar11 = 0x6a;
          uVar12 = 0x12d;
        }
        else {
          if (param_4 == 0 || param_3 == 0) {
            do {
              lVar5 = FUN_100c26b50(*puVar7,param_4);
              if (lVar5 == 0) goto LAB_100c5054a;
              iVar2 = FUN_100c29cc0(local_58,lVar6,*puVar7,lVar9,lVar8);
              if (iVar2 == 0) goto LAB_100c504cc;
              iVar2 = FUN_100c29bb0(lVar4,local_58,lVar10,lVar9);
              if (iVar2 == 0) goto LAB_100c50501;
              iVar2 = FUN_100c29cc0(lVar4,lVar4,param_3,lVar9,lVar8);
              if (iVar2 == 0) goto LAB_100c50527;
            } while (*(int *)(lVar4 + 8) == 0);
            goto LAB_100c5035b;
          }
          lVar5 = FUN_100c26b50(*puVar7,param_4);
          if (lVar5 != 0) {
            iVar2 = FUN_100c29cc0(local_58,lVar6,*puVar7,lVar9,lVar8);
            if (iVar2 == 0) {
LAB_100c504cc:
              FUN_100c62ee0(0x2a,0x65,3,"ecs_ossl.c",0x11b);
            }
            else {
              iVar2 = FUN_100c29bb0(lVar4,local_58,lVar10,lVar9);
              if (iVar2 == 0) {
LAB_100c50501:
                FUN_100c62ee0(0x2a,0x65,3,"ecs_ossl.c",0x11f);
              }
              else {
                iVar2 = FUN_100c29cc0(lVar4,lVar4,param_3,lVar9,lVar8);
                if (iVar2 != 0) {
                  if (*(int *)(lVar4 + 8) != 0) goto LAB_100c5035b;
                  goto LAB_100c502fb;
                }
LAB_100c50527:
                FUN_100c62ee0(0x2a,0x65,3,"ecs_ossl.c",0x123);
              }
            }
            goto LAB_100c50350;
          }
LAB_100c5054a:
          uVar11 = 0x41;
          uVar12 = 0x115;
        }
        FUN_100c62ee0(0x2a,0x65,uVar11,"ecs_ossl.c",uVar12);
      }
    }
  }
LAB_100c50350:
  FUN_100c4ffb0(puVar7);
  puVar7 = (undefined8 *)0x0;
LAB_100c5035b:
  if (lVar8 != 0) {
    FUN_100c27ab0(lVar8);
  }
  if (lVar10 != 0) {
    FUN_100c26640(lVar10);
  }
  if (local_58 != 0) {
    FUN_100c26640();
  }
  if (lVar9 != 0) {
    FUN_100c266b0(lVar9);
  }
  if (local_38 == 0) {
    return puVar7;
  }
  FUN_100c26640();
  return puVar7;
}

