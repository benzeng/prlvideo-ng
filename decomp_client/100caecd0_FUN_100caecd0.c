
long FUN_100caecd0(long param_1,long param_2)

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
  
  lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_98 = 0;
  local_38 = lVar9;
  if (param_1 == 0) {
    FUN_100c62ee0(0x21,0x69,0x8f,"pk7_doit.c",0x109);
    param_2 = 0;
    lVar10 = local_98;
    goto LAB_100caf2af;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    FUN_100c62ee0(0x21,0x69,0x7a,"pk7_doit.c",0x117);
    param_2 = 0;
    lVar10 = local_98;
    goto LAB_100caf2af;
  }
  uVar3 = FUN_100bf7220();
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
    iVar4 = FUN_100bf7220();
    if (iVar4 == 0x15) {
      piVar15 = *(int **)(lVar9 + 0x20);
    }
    else {
      iVar4 = FUN_100bf7220();
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
    goto LAB_100caeeb4;
  case 0x17:
    lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    lVar9 = *(long *)(lVar10 + 0x18);
    piVar15 = (int *)0x0;
    if (lVar9 == 0) {
      uVar14 = 0x74;
      uVar16 = 0x132;
      goto LAB_100caed45;
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
      goto LAB_100caed45;
    }
    uVar14 = *(undefined8 *)(lVar10 + 0x30);
    uVar16 = *(undefined8 *)(lVar10 + 8);
    puVar13 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 8);
    lVar10 = 0;
    break;
  case 0x19:
    lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
    iVar4 = FUN_100bf7220();
    if (iVar4 == 0x15) {
      piVar15 = *(int **)(lVar9 + 0x20);
    }
    else {
      iVar4 = FUN_100bf7220();
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
LAB_100caeeb4:
    lVar9 = 0;
    uVar14 = 0;
    puVar13 = (undefined8 *)0x0;
    break;
  default:
    uVar14 = 0x70;
    uVar16 = 0x13d;
LAB_100caed45:
    FUN_100c62ee0(0x21,0x69,uVar14,"pk7_doit.c",uVar16);
    lVar8 = 0;
    goto LAB_100caf27a;
  }
  iVar4 = FUN_100c60800(uVar16);
  if (0 < iVar4) {
    iVar4 = 0;
    lVar8 = 0;
    do {
      uVar7 = FUN_100c60820(uVar16,iVar4);
      iVar5 = FUN_100caf440(&local_98,uVar7);
      if (iVar5 == 0) goto LAB_100caf27a;
      iVar4 = iVar4 + 1;
      iVar5 = FUN_100c60800(uVar16);
    } while (iVar4 < iVar5);
  }
  if (lVar10 == 0) {
LAB_100caef56:
    lVar8 = local_98;
    if (lVar9 == 0) {
LAB_100caf345:
      local_98 = lVar8;
      lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
      if (param_2 == 0) {
        iVar4 = FUN_100bf7220(*(undefined8 *)(param_1 + 0x18));
        if ((iVar4 == 0x16) && (lVar10 = FUN_100cadd30(param_1,2,0,0), lVar10 != 0)) {
          uVar14 = FUN_100c59d10();
          param_2 = FUN_100c58530(uVar14);
LAB_100caf3b9:
          if (param_2 != 0) goto LAB_100caf3f8;
        }
        else if ((piVar15 != (int *)0x0) && (0 < *piVar15)) {
          param_2 = FUN_100c59870(*(undefined8 *)(piVar15 + 2));
          goto LAB_100caf3b9;
        }
        uVar14 = FUN_100c59860();
        param_2 = FUN_100c58530(uVar14);
        lVar8 = 0;
        if (param_2 == 0) goto LAB_100caf27a;
        FUN_100c58d60(param_2,0x82,0,0);
        lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
      }
LAB_100caf3f8:
      lVar8 = local_98;
      lVar10 = param_2;
      if (local_98 != 0) {
        FUN_100c591b0(local_98,param_2);
        param_2 = lVar8;
        lVar10 = local_98;
      }
      goto LAB_100caf2af;
    }
    uVar16 = FUN_100c6edf0();
    lVar8 = FUN_100c58530(uVar16);
    if (lVar8 == 0) {
      FUN_100c62ee0(0x21,0x69,0x20,"pk7_doit.c",0x14f);
    }
    else {
      FUN_100c58d60(lVar8,0x81,0,&local_a0);
      iVar4 = FUN_100c6fbf0(lVar9);
      iVar5 = FUN_100c6fbe0(lVar9);
      uVar3 = FUN_100c6fa60(lVar9);
      uVar16 = FUN_100bf6fe0(uVar3);
      *puVar13 = uVar16;
      if ((((iVar5 < 1) || (iVar6 = FUN_100c62190(local_88,iVar5), 0 < iVar6)) &&
          (iVar6 = FUN_100c66110(local_a0,lVar9,0,0,0,1), 0 < iVar6)) &&
         ((iVar6 = FUN_100c67000(local_a0,local_78), 0 < iVar6 &&
          (iVar6 = FUN_100c66110(local_a0,0,0,local_78,local_88,1), 0 < iVar6)))) {
        if (0 < iVar5) {
          if (puVar13[1] == 0) {
            lVar9 = FUN_100c83f00();
            puVar13[1] = lVar9;
            if (lVar9 == 0) goto LAB_100caf27a;
          }
          iVar5 = FUN_100c6f7e0(local_a0);
          if (iVar5 < 0) goto LAB_100caf27a;
        }
        iVar5 = FUN_100c60800(uVar14);
        if (0 < iVar5) {
          iVar5 = 0;
          do {
            lVar9 = FUN_100c60820(uVar14,iVar5);
            lVar10 = FUN_100c929a0(*(undefined8 *)(lVar9 + 0x20));
            if ((lVar10 == 0) || (lVar11 = FUN_100c71540(lVar10,0), lVar11 == 0))
            goto LAB_100caf27a;
            iVar6 = FUN_100c72210(lVar11);
            lVar12 = 0;
            bVar2 = false;
            if (0 < iVar6) {
              iVar6 = FUN_100c71a40(lVar11,0xffffffff,0x100,3,0,lVar9);
              if (iVar6 < 1) {
                uVar16 = 0x98;
LAB_100caf1f0:
                FUN_100c62ee0(0x21,0x84,uVar16,"pk7_doit.c");
                lVar12 = 0;
                bVar2 = false;
              }
              else {
                bVar2 = false;
                iVar6 = FUN_100c72290(lVar11,0,local_90,local_78);
                if (0 < iVar6) {
                  lVar12 = FUN_100bf3540(local_90[0],"pk7_doit.c",0xa7);
                  if (lVar12 == 0) {
                    uVar16 = 0x41;
                    goto LAB_100caf1f0;
                  }
                  iVar6 = FUN_100c72290(lVar11,lVar12,local_90,local_78);
                  if (iVar6 < 1) goto LAB_100caf1fb;
                  FUN_100c8b330(*(undefined8 *)(lVar9 + 0x18),lVar12,local_90[0]);
                  bVar2 = true;
                }
                lVar12 = 0;
              }
            }
LAB_100caf1fb:
            FUN_100c6d8c0(lVar10);
            FUN_100c71960(lVar11);
            if (lVar12 != 0) {
              FUN_100bf3910(lVar12);
            }
            if (!bVar2) goto LAB_100caf27a;
            iVar5 = iVar5 + 1;
            iVar6 = FUN_100c60800(uVar14);
          } while (iVar5 < iVar6);
        }
        _OPENSSL_cleanse(local_78,(long)iVar4);
        if (local_98 != 0) {
          FUN_100c591b0(local_98,lVar8);
          lVar8 = local_98;
        }
        goto LAB_100caf345;
      }
    }
  }
  else {
    iVar4 = FUN_100caf440(&local_98,lVar10);
    lVar8 = 0;
    if (iVar4 != 0) goto LAB_100caef56;
  }
LAB_100caf27a:
  if (local_98 != 0) {
    FUN_100c59480();
  }
  lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (lVar8 != 0) {
    FUN_100c59480(lVar8);
  }
  local_98 = 0;
  param_2 = 0;
  lVar10 = local_98;
LAB_100caf2af:
  local_98 = lVar10;
  if (lVar9 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_2;
}

