
long FUN_100c2cf20(long param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *local_90;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  uint local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  
  if (((*(byte *)(param_2 + 0x14) & 4) != 0) || ((*(byte *)((long)param_3 + 0x14) & 4) != 0)) {
    FUN_100c27c60(param_4);
    puVar5 = (undefined8 *)FUN_100c27e20(param_4);
    puVar6 = (undefined8 *)FUN_100c27e20(param_4);
    puVar8 = (undefined8 *)FUN_100c27e20(param_4);
    uVar12 = FUN_100c27e20(param_4);
    puVar7 = (undefined8 *)FUN_100c27e20(param_4);
    puVar13 = (undefined8 *)FUN_100c27e20(param_4);
    lVar9 = FUN_100c27e20(param_4);
    lVar11 = 0;
    lVar14 = 0;
    if (lVar9 != 0) {
      lVar9 = param_1;
      if (param_1 == 0) {
        lVar9 = FUN_100c26720(0);
        lVar11 = 0;
        lVar14 = 0;
        if (lVar9 == 0) goto LAB_100c2d7c3;
      }
      FUN_100c26db0(puVar8,1);
      lVar11 = 0;
      FUN_100c26db0(puVar13,0);
      lVar10 = FUN_100c26b50(puVar6,param_2);
      lVar14 = lVar9;
      if (lVar10 != 0) {
        lVar10 = FUN_100c26b50(puVar5,param_3);
        lVar11 = 0;
        if (lVar10 != 0) {
          *(undefined4 *)(puVar5 + 2) = 0;
          iVar2 = *(int *)(puVar6 + 2);
          if (iVar2 == 0) {
            iVar2 = FUN_100c27100(puVar6,puVar5);
            if (-1 < iVar2) {
              iVar2 = *(int *)(puVar6 + 2);
              goto LAB_100c2d338;
            }
          }
          else {
LAB_100c2d338:
            local_60 = *puVar6;
            local_58 = *(undefined4 *)(puVar6 + 1);
            local_54 = *(undefined4 *)((long)puVar6 + 0xc);
            local_4c = *(uint *)((long)puVar6 + 0x14) & 0xfffffff8 | 6;
            local_50 = iVar2;
            iVar2 = FUN_100c29ab0(puVar6,&local_60,puVar5,param_4);
            lVar11 = 0;
            if (iVar2 == 0) goto LAB_100c2d7c3;
          }
          if (*(int *)(puVar6 + 1) == 0) {
LAB_100c2d4d6:
            iVar2 = FUN_100c23090(puVar13,param_3,puVar13);
            if (iVar2 != 0) goto LAB_100c2d4ee;
          }
          else {
            iVar2 = -1;
            local_68 = puVar13;
            do {
              iVar3 = iVar2;
              puVar13 = puVar8;
              puVar8 = puVar5;
              puVar5 = puVar6;
              local_48 = *puVar8;
              local_40 = *(undefined4 *)(puVar8 + 1);
              local_3c = *(undefined4 *)((long)puVar8 + 0xc);
              local_38 = *(undefined4 *)(puVar8 + 2);
              local_34 = *(uint *)((long)puVar8 + 0x14) & 0xfffffff8 | 6;
              iVar2 = FUN_100c23170(uVar12,puVar7,&local_48,puVar5,param_4);
              if (((iVar2 == 0) ||
                  (iVar2 = FUN_100c297a0(puVar8,uVar12,puVar13,param_4), iVar2 == 0)) ||
                 (iVar2 = FUN_100c22b40(puVar8,puVar8,local_68), iVar2 == 0)) {
                lVar11 = 0;
                goto LAB_100c2d7c3;
              }
              piVar1 = (int *)(puVar7 + 1);
              puVar6 = puVar7;
              puVar7 = local_68;
              iVar2 = -iVar3;
              local_68 = puVar13;
            } while (*piVar1 != 0);
            if (0 < iVar3) goto LAB_100c2d4d6;
LAB_100c2d4ee:
            if (((*(int *)(puVar5 + 1) == 1) && (*(long *)*puVar5 == 1)) &&
               (*(int *)(puVar5 + 2) == 0)) {
              if ((*(int *)(puVar13 + 2) == 0) &&
                 (iVar2 = FUN_100c27100(puVar13,param_3), iVar2 < 0)) {
                lVar10 = FUN_100c26b50(lVar9,puVar13);
                lVar11 = 0;
                if (lVar10 != 0) {
LAB_100c2d91a:
                  lVar11 = lVar9;
                }
              }
              else {
                iVar2 = FUN_100c29ab0(lVar9,puVar13,param_3,param_4);
                lVar11 = 0;
                if (iVar2 != 0) goto LAB_100c2d91a;
              }
              goto LAB_100c2d7c3;
            }
            FUN_100c62ee0(3,0x8b,0x6c,"bn_gcd.c",0x2b4);
          }
          lVar11 = 0;
        }
      }
    }
LAB_100c2d7c3:
    if (param_1 == 0 && lVar11 == 0) {
      FUN_100c266b0(lVar14);
    }
    goto LAB_100c2d8a9;
  }
  FUN_100c27c60(param_4);
  puVar5 = (undefined8 *)FUN_100c27e20(param_4);
  puVar6 = (undefined8 *)FUN_100c27e20(param_4);
  puVar7 = (undefined8 *)FUN_100c27e20(param_4);
  puVar8 = (undefined8 *)FUN_100c27e20(param_4);
  local_90 = (undefined8 *)FUN_100c27e20(param_4);
  local_70 = (undefined8 *)FUN_100c27e20(param_4);
  lVar9 = FUN_100c27e20(param_4);
  lVar11 = 0;
  lVar14 = 0;
  if (lVar9 == 0) goto LAB_100c2d89c;
  lVar10 = param_1;
  if (param_1 == 0) {
    lVar10 = FUN_100c26720(0);
    lVar11 = 0;
    lVar14 = 0;
    if (lVar10 == 0) goto LAB_100c2d89c;
  }
  FUN_100c26db0(puVar7,1);
  FUN_100c26db0(local_70,0);
  lVar11 = FUN_100c26b50(puVar6,param_2);
  lVar14 = lVar10;
  if (((lVar11 == 0) || (lVar11 = FUN_100c26b50(puVar5,param_3), lVar11 == 0)) ||
     (((*(undefined4 *)(puVar5 + 2) = 0, *(int *)(puVar6 + 2) != 0 ||
       (iVar2 = FUN_100c27100(puVar6,puVar5), -1 < iVar2)) &&
      (iVar2 = FUN_100c29ab0(puVar6,puVar6,puVar5,param_4), iVar2 == 0)))) {
LAB_100c2d895:
    lVar11 = 0;
  }
  else {
    if (((*(int *)(param_3 + 1) < 1) || ((*(byte *)*param_3 & 1) == 0)) ||
       (iVar2 = FUN_100c26610(), 0x800 < iVar2)) {
      if (*(int *)(puVar6 + 1) == 0) goto LAB_100c2d7e1;
      puVar13 = puVar5;
      iVar2 = -1;
      local_68 = local_70;
      do {
        local_70 = puVar7;
        iVar3 = iVar2;
        puVar5 = puVar6;
        puVar7 = puVar13;
        puVar6 = local_90;
        iVar2 = FUN_100c26610(puVar7);
        iVar4 = FUN_100c26610(puVar5);
        if (iVar2 == iVar4) {
LAB_100c2d686:
          iVar2 = FUN_100c26db0(puVar8,1);
          puVar13 = puVar7;
          if (iVar2 == 0) goto LAB_100c2d7f3;
LAB_100c2d6a0:
          iVar2 = FUN_100c23090(local_90,puVar13,puVar5);
        }
        else {
          iVar2 = FUN_100c26610(puVar7);
          iVar4 = FUN_100c26610(puVar5);
          if (iVar2 == iVar4 + 1) {
            iVar2 = FUN_100c2af80(lVar9,puVar5);
            if (iVar2 != 0) {
              iVar2 = FUN_100c27100(puVar7,lVar9);
              if (iVar2 < 0) goto LAB_100c2d686;
              iVar2 = FUN_100c23090(local_90,puVar7,lVar9);
              if ((iVar2 != 0) && (iVar2 = FUN_100c22b40(puVar8,lVar9,puVar5), iVar2 != 0)) {
                iVar2 = FUN_100c27100(puVar7,puVar8);
                if (iVar2 < 0) {
                  iVar2 = FUN_100c26db0(puVar8,2);
                  goto LAB_100c2d7a7;
                }
                iVar2 = FUN_100c26db0(puVar8,3);
                puVar13 = local_90;
                if (iVar2 != 0) goto LAB_100c2d6a0;
              }
            }
            goto LAB_100c2d7f3;
          }
          iVar2 = FUN_100c23170(puVar8,local_90,puVar7,puVar5,param_4);
        }
LAB_100c2d7a7:
        if (iVar2 == 0) goto LAB_100c2d7f3;
        if (*(int *)(puVar8 + 1) == 1) {
          lVar11 = *(long *)*puVar8;
          if (lVar11 == 4) {
            if (*(int *)(puVar8 + 2) != 0) goto LAB_100c2d5b8;
            iVar2 = FUN_100c2b1d0(puVar7,local_70,2);
            goto LAB_100c2d5db;
          }
          if (lVar11 == 2) {
            if (*(int *)(puVar8 + 2) == 0) {
              iVar2 = FUN_100c2af80(puVar7,local_70);
              goto LAB_100c2d5db;
            }
LAB_100c2d5b8:
            lVar11 = FUN_100c26b50(puVar7,local_70);
            if (lVar11 != 0) {
              iVar2 = FUN_100c2bb00(puVar7,*(undefined8 *)*puVar8);
              goto LAB_100c2d5db;
            }
            goto LAB_100c2d7f3;
          }
          if ((lVar11 != 1) || (puVar13 = local_70, *(int *)(puVar8 + 2) != 0)) goto LAB_100c2d5b8;
        }
        else {
          iVar2 = FUN_100c297a0(puVar7,puVar8,local_70,param_4);
LAB_100c2d5db:
          puVar13 = puVar7;
          if (iVar2 == 0) goto LAB_100c2d7f3;
        }
        iVar2 = FUN_100c22b40(puVar7,puVar13,local_68);
        if (iVar2 == 0) goto LAB_100c2d7f3;
        piVar1 = (int *)(local_90 + 1);
        local_90 = local_68;
        local_68 = local_70;
        puVar13 = puVar5;
        iVar2 = -iVar3;
      } while (*piVar1 != 0);
      if (0 < iVar3) goto LAB_100c2d7e1;
    }
    else {
      if (*(int *)(puVar6 + 1) != 0) {
        iVar2 = 0;
        do {
          while (iVar3 = FUN_100c27360(puVar6,iVar2), iVar3 == 0) {
            if (((0 < *(int *)(puVar7 + 1)) && ((*(byte *)*puVar7 & 1) != 0)) &&
               (iVar3 = FUN_100c22e70(puVar7,puVar7,param_3), iVar3 == 0)) goto LAB_100c2d7f3;
            iVar2 = iVar2 + 1;
            iVar3 = FUN_100c2b0f0(puVar7,puVar7);
            if (iVar3 == 0) goto LAB_100c2d7f3;
          }
          iVar3 = 0;
          if (0 < iVar2) {
            iVar2 = FUN_100c2b450(puVar6,puVar6,iVar2);
            iVar3 = 0;
            if (iVar2 == 0) goto LAB_100c2d895;
          }
          while (iVar2 = FUN_100c27360(puVar5,iVar3), iVar2 == 0) {
            if (((0 < *(int *)(local_70 + 1)) && ((*(byte *)*local_70 & 1) != 0)) &&
               (iVar2 = FUN_100c22e70(local_70,local_70,param_3), iVar2 == 0)) goto LAB_100c2d7f3;
            iVar3 = iVar3 + 1;
            iVar2 = FUN_100c2b0f0(local_70,local_70);
            if (iVar2 == 0) goto LAB_100c2d7f3;
          }
          if ((0 < iVar3) && (iVar2 = FUN_100c2b450(puVar5,puVar5), iVar2 == 0)) goto LAB_100c2d7f3;
          iVar2 = FUN_100c27100(puVar6,puVar5);
          if (iVar2 < 0) {
            iVar2 = FUN_100c22e70(local_70,local_70,puVar7);
            puVar8 = puVar5;
            puVar13 = puVar6;
          }
          else {
            iVar2 = FUN_100c22e70(puVar7,puVar7,local_70);
            puVar8 = puVar6;
            puVar13 = puVar5;
          }
          if ((iVar2 == 0) || (iVar2 = FUN_100c22be0(puVar8,puVar8,puVar13), iVar2 == 0))
          goto LAB_100c2d7f3;
          iVar2 = 0;
        } while (*(int *)(puVar6 + 1) != 0);
      }
LAB_100c2d7e1:
      iVar2 = FUN_100c23090(local_70,param_3,local_70);
      if (iVar2 == 0) {
LAB_100c2d7f3:
        lVar11 = 0;
        goto LAB_100c2d89c;
      }
    }
    if (((*(int *)(puVar5 + 1) != 1) || (*(long *)*puVar5 != 1)) || (*(int *)(puVar5 + 2) != 0)) {
      FUN_100c62ee0(3,0x6e,0x6c,"bn_gcd.c",0x20d);
      goto LAB_100c2d895;
    }
    lVar11 = lVar10;
    if ((*(int *)(local_70 + 2) == 0) && (iVar2 = FUN_100c27100(local_70,param_3), iVar2 < 0)) {
      lVar9 = FUN_100c26b50(lVar10,local_70);
      if (lVar9 == 0) {
LAB_100c2d94c:
        lVar11 = 0;
      }
    }
    else {
      iVar2 = FUN_100c29ab0(lVar10,local_70,param_3,param_4);
      if (iVar2 == 0) goto LAB_100c2d94c;
    }
  }
LAB_100c2d89c:
  if (param_1 == 0 && lVar11 == 0) {
    FUN_100c266b0(lVar14);
  }
LAB_100c2d8a9:
  FUN_100c27d40(param_4);
  return lVar11;
}

