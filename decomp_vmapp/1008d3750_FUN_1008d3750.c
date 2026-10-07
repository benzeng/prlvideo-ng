
long FUN_1008d3750(long param_1,long param_2)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 local_a0;
  long local_98;
  undefined4 local_90 [2];
  undefined1 local_88 [16];
  undefined1 local_78 [64];
  long local_38;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_98 = 0;
  local_38 = lVar9;
  if (param_1 == 0) {
    FUN_100887ce0(0x21,0x69,0x8f,"pk7_doit.c",0x109);
    param_2 = 0;
    lVar10 = local_98;
    goto LAB_1008d3d2f;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    FUN_100887ce0(0x21,0x69,0x7a,"pk7_doit.c",0x117);
    param_2 = 0;
    lVar10 = local_98;
    goto LAB_1008d3d2f;
  }
  uVar3 = FUN_100821ab0();
  *(undefined4 *)(param_1 + 0x10) = 0;
  piVar15 = (int *)0x0;
  lVar10 = 0;
  lVar9 = 0;
  uVar16 = 0;
  uVar14 = 0;
  puVar13 = (undefined8 *)0x0;
  switch(uVar3) {
  case 0x15:
    break;
  case 0x16:
    uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
    iVar4 = FUN_100821ab0();
    if (iVar4 == 0x15) {
      piVar15 = *(int **)(lVar9 + 0x20);
    }
    else {
      iVar4 = FUN_100821ab0();
      piVar15 = (int *)0x0;
      if (5 < iVar4 - 0x15U) {
        piVar1 = *(int **)(lVar9 + 0x20);
        piVar15 = (int *)0x0;
        if ((piVar1 != (int *)0x0) && (piVar15 = (int *)0x0, *piVar1 == 4)) {
          piVar15 = *(int **)(piVar1 + 2);
        }
      }
    }
    lVar10 = 0;
    goto LAB_1008d3934;
  case 0x17:
    lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    lVar9 = *(long *)(lVar10 + 0x18);
    piVar15 = (int *)0x0;
    if (lVar9 == 0) {
      uVar14 = 0x74;
      uVar16 = 0x132;
      goto LAB_1008d37c5;
    }
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    puVar13 = *(undefined8 **)(lVar10 + 8);
    lVar10 = 0;
    uVar16 = 0;
    break;
  case 0x18:
    lVar10 = *(long *)(param_1 + 0x20);
    lVar9 = *(long *)(*(long *)(lVar10 + 0x28) + 0x18);
    piVar15 = (int *)0x0;
    if (lVar9 == 0) {
      uVar14 = 0x74;
      uVar16 = 0x129;
      goto LAB_1008d37c5;
    }
    uVar14 = *(undefined8 *)(lVar10 + 0x30);
    uVar16 = *(undefined8 *)(lVar10 + 8);
    puVar13 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 8);
    lVar10 = 0;
    break;
  case 0x19:
    lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    iVar4 = FUN_100821ab0();
    if (iVar4 == 0x15) {
      piVar15 = *(int **)(lVar9 + 0x20);
    }
    else {
      iVar4 = FUN_100821ab0();
      piVar15 = (int *)0x0;
      if (5 < iVar4 - 0x15U) {
        piVar1 = *(int **)(lVar9 + 0x20);
        piVar15 = (int *)0x0;
        if ((piVar1 != (int *)0x0) && (piVar15 = (int *)0x0, *piVar1 == 4)) {
          piVar15 = *(int **)(piVar1 + 2);
        }
      }
    }
    uVar16 = 0;
LAB_1008d3934:
    lVar9 = 0;
    uVar14 = 0;
    puVar13 = (undefined8 *)0x0;
    break;
  default:
    uVar14 = 0x70;
    uVar16 = 0x13d;
LAB_1008d37c5:
    FUN_100887ce0(0x21,0x69,uVar14,"pk7_doit.c",uVar16);
    lVar8 = 0;
    goto LAB_1008d3cfa;
  }
  iVar4 = FUN_100885600(uVar16);
  if (0 < iVar4) {
    iVar4 = 0;
    lVar8 = 0;
    do {
      uVar7 = FUN_100885620(uVar16,iVar4);
      iVar5 = FUN_1008d3ec0(&local_98,uVar7);
      if (iVar5 == 0) goto LAB_1008d3cfa;
      iVar4 = iVar4 + 1;
      iVar5 = FUN_100885600(uVar16);
    } while (iVar4 < iVar5);
  }
  if (lVar10 == 0) {
LAB_1008d39d6:
    lVar8 = local_98;
    if (lVar9 == 0) {
LAB_1008d3dc5:
      local_98 = lVar8;
      lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (param_2 == 0) {
        iVar4 = FUN_100821ab0(*(undefined8 *)(param_1 + 0x18));
        if ((iVar4 == 0x16) && (lVar10 = FUN_1008d27b0(param_1,2,0,0), lVar10 != 0)) {
          uVar14 = FUN_10087eb10();
          param_2 = FUN_10087d330(uVar14);
LAB_1008d3e39:
          if (param_2 != 0) goto LAB_1008d3e78;
        }
        else if ((piVar15 != (int *)0x0) && (0 < *piVar15)) {
          param_2 = FUN_10087e670(*(undefined8 *)(piVar15 + 2));
          goto LAB_1008d3e39;
        }
        uVar14 = FUN_10087e660();
        param_2 = FUN_10087d330(uVar14);
        lVar8 = 0;
        if (param_2 == 0) goto LAB_1008d3cfa;
        FUN_10087db60(param_2,0x82,0,0);
        lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
      }
LAB_1008d3e78:
      lVar8 = local_98;
      lVar10 = param_2;
      if (local_98 != 0) {
        FUN_10087dfb0(local_98,param_2);
        param_2 = lVar8;
        lVar10 = local_98;
      }
      goto LAB_1008d3d2f;
    }
    uVar16 = FUN_100893a10();
    lVar8 = FUN_10087d330(uVar16);
    if (lVar8 == 0) {
      FUN_100887ce0(0x21,0x69,0x20,"pk7_doit.c",0x14f);
    }
    else {
      FUN_10087db60(lVar8,0x81,0,&local_a0);
      iVar4 = FUN_100894670(lVar9);
      iVar5 = FUN_100894660(lVar9);
      uVar3 = FUN_1008944e0(lVar9);
      uVar16 = FUN_100821870(uVar3);
      *puVar13 = uVar16;
      if ((((iVar5 < 1) || (iVar6 = FUN_100886f90(local_88,iVar5), 0 < iVar6)) &&
          (iVar6 = FUN_10088af10(local_a0,lVar9,0,0,0,1), 0 < iVar6)) &&
         ((iVar6 = FUN_10088be00(local_a0,local_78), 0 < iVar6 &&
          (iVar6 = FUN_10088af10(local_a0,0,0,local_78,local_88,1), 0 < iVar6)))) {
        if (0 < iVar5) {
          if (puVar13[1] == 0) {
            lVar9 = FUN_1008a8980();
            puVar13[1] = lVar9;
            if (lVar9 == 0) goto LAB_1008d3cfa;
          }
          iVar5 = FUN_100894260(local_a0);
          if (iVar5 < 0) goto LAB_1008d3cfa;
        }
        iVar5 = FUN_100885600(uVar14);
        if (0 < iVar5) {
          iVar5 = 0;
          do {
            lVar9 = FUN_100885620(uVar14,iVar5);
            lVar10 = FUN_1008b7420(*(undefined8 *)(lVar9 + 0x20));
            if ((lVar10 == 0) || (lVar11 = FUN_100895fc0(lVar10,0), lVar11 == 0))
            goto LAB_1008d3cfa;
            iVar6 = FUN_100896c90(lVar11);
            lVar12 = 0;
            bVar2 = false;
            if (0 < iVar6) {
              iVar6 = FUN_1008964c0(lVar11,0xffffffff,0x100,3,0,lVar9);
              if (iVar6 < 1) {
                uVar16 = 0x98;
LAB_1008d3c70:
                FUN_100887ce0(0x21,0x84,uVar16,"pk7_doit.c");
                lVar12 = 0;
                bVar2 = false;
              }
              else {
                bVar2 = false;
                iVar6 = FUN_100896d10(lVar11,0,local_90,local_78);
                if (0 < iVar6) {
                  lVar12 = FUN_10081ddd0(local_90[0],"pk7_doit.c",0xa7);
                  if (lVar12 == 0) {
                    uVar16 = 0x41;
                    goto LAB_1008d3c70;
                  }
                  iVar6 = FUN_100896d10(lVar11,lVar12,local_90,local_78);
                  if (iVar6 < 1) goto LAB_1008d3c7b;
                  FUN_1008afdb0(*(undefined8 *)(lVar9 + 0x18),lVar12,local_90[0]);
                  bVar2 = true;
                }
                lVar12 = 0;
              }
            }
LAB_1008d3c7b:
            FUN_1008924e0(lVar10);
            FUN_1008963e0(lVar11);
            if (lVar12 != 0) {
              FUN_10081e1a0(lVar12);
            }
            if (!bVar2) goto LAB_1008d3cfa;
            iVar5 = iVar5 + 1;
            iVar6 = FUN_100885600(uVar14);
          } while (iVar5 < iVar6);
        }
        _OPENSSL_cleanse(local_78,(long)iVar4);
        if (local_98 != 0) {
          FUN_10087dfb0(local_98,lVar8);
          lVar8 = local_98;
        }
        goto LAB_1008d3dc5;
      }
    }
  }
  else {
    iVar4 = FUN_1008d3ec0(&local_98,lVar10);
    lVar8 = 0;
    if (iVar4 != 0) goto LAB_1008d39d6;
  }
LAB_1008d3cfa:
  if (local_98 != 0) {
    FUN_10087e280();
  }
  lVar9 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (lVar8 != 0) {
    FUN_10087e280(lVar8);
  }
  local_98 = 0;
  param_2 = 0;
  lVar10 = local_98;
LAB_1008d3d2f:
  local_98 = lVar10;
  if (lVar9 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_2;
}

