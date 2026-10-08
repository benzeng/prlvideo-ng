
undefined8 FUN_100c43150(undefined8 param_1,long param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 uVar11;
  char *pcVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  bool bVar16;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined1 local_b8;
  undefined1 local_b7 [127];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (param_2 == 0) {
    uVar9 = 0x43;
LAB_100c4327b:
    lVar15 = 0;
    lVar5 = 0;
    lVar6 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d0 = 0;
    local_d8 = 0;
    lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
LAB_100c432b9:
    FUN_100c62ee0(0x10,0x95,uVar9,"eck_prn.c",0x139);
    uVar11 = 0;
LAB_100c432d7:
    if (lVar6 != 0) {
      FUN_100c266b0(lVar6);
    }
    if (local_c0 != 0) {
      FUN_100c266b0();
    }
    if (local_c8 != 0) {
      FUN_100c266b0();
    }
    if (local_e0 != 0) {
      FUN_100c266b0();
    }
    if (local_d0 != 0) {
      FUN_100c266b0();
    }
    if (local_d8 != 0) {
      FUN_100c266b0();
    }
    if (lVar5 == 0) goto LAB_100c43346;
  }
  else {
    lVar5 = FUN_100c27a20();
    uVar9 = 0x41;
    if (lVar5 == 0) goto LAB_100c4327b;
    iVar2 = FUN_100c36c70(param_2);
    if (iVar2 == 0) {
      uVar9 = FUN_100c36a70(param_2);
      iVar2 = FUN_100c36a80(uVar9);
      lVar6 = FUN_100c26720();
      if (lVar6 == 0) {
        local_c0 = 0;
        lVar6 = 0;
        local_c8 = 0;
        local_e0 = 0;
        local_d0 = 0;
        local_d8 = 0;
LAB_100c434d9:
        lVar15 = 0;
        lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
        uVar9 = 0x41;
        goto LAB_100c432b9;
      }
      local_c0 = FUN_100c26720();
      if (local_c0 == 0) {
        local_c8 = 0;
        local_c0 = 0;
LAB_100c4355d:
        local_d0 = 0;
LAB_100c43566:
        local_e0 = 0;
        local_d8 = 0;
        lVar15 = 0;
        lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
        uVar9 = 0x41;
        goto LAB_100c432b9;
      }
      local_c8 = FUN_100c26720();
      if (local_c8 == 0) {
        local_c8 = 0;
        goto LAB_100c4355d;
      }
      local_d0 = FUN_100c26720();
      if (local_d0 == 0) goto LAB_100c4355d;
      local_d8 = FUN_100c26720();
      if (local_d8 == 0) goto LAB_100c43566;
      if (iVar2 == 0x197) {
        iVar3 = FUN_100c36e10(param_2,lVar6,local_c0,local_c8,lVar5);
      }
      else {
        iVar3 = FUN_100c36d90(param_2,lVar6,local_c0,local_c8,lVar5);
      }
      if ((iVar3 == 0) || (lVar7 = FUN_100c36bc0(param_2), lVar7 == 0)) {
        local_e0 = 0;
        lVar15 = 0;
        uVar9 = 0x10;
        lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
        goto LAB_100c432b9;
      }
      iVar3 = FUN_100c36bd0(param_2,local_d0,0);
      if ((iVar3 == 0) || (iVar3 = FUN_100c36c00(param_2,local_d8,0), iVar3 == 0)) {
        local_e0 = 0;
        uVar9 = 0x10;
        lVar15 = 0;
        lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
        goto LAB_100c432b9;
      }
      iVar3 = FUN_100c36c90(param_2);
      lVar15 = 0;
      local_e0 = FUN_100c3c820(param_2,lVar7,iVar3,0,lVar5);
      if (local_e0 == 0) {
        local_e0 = 0;
        uVar9 = 0x10;
        lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
        goto LAB_100c432b9;
      }
      iVar4 = FUN_100c26610(lVar6);
      uVar14 = (int)(iVar4 + 7 + ((uint)(iVar4 + 7 >> 0x1f) >> 0x1d)) >> 3;
      iVar4 = FUN_100c26610(local_c0);
      uVar10 = (int)(iVar4 + 7 + ((uint)(iVar4 + 7 >> 0x1f) >> 0x1d)) >> 3;
      if (uVar10 <= uVar14) {
        uVar10 = uVar14;
      }
      iVar4 = FUN_100c26610(local_c8);
      uVar14 = (int)(iVar4 + 7 + ((uint)(iVar4 + 7 >> 0x1f) >> 0x1d)) >> 3;
      if (uVar14 <= uVar10) {
        uVar14 = uVar10;
      }
      iVar4 = FUN_100c26610(local_e0);
      uVar10 = (int)(iVar4 + 7 + ((uint)(iVar4 + 7 >> 0x1f) >> 0x1d)) >> 3;
      if (uVar10 <= uVar14) {
        uVar10 = uVar14;
      }
      iVar4 = FUN_100c26610(local_d0);
      uVar14 = (int)(iVar4 + 7 + ((uint)(iVar4 + 7 >> 0x1f) >> 0x1d)) >> 3;
      if (uVar14 <= uVar10) {
        uVar14 = uVar10;
      }
      iVar4 = FUN_100c26610(local_d8);
      uVar10 = (int)(iVar4 + 7 + ((uint)(iVar4 + 7 >> 0x1f) >> 0x1d)) >> 3;
      if (uVar10 <= uVar14) {
        uVar10 = uVar14;
      }
      lVar7 = FUN_100c36d30(param_2);
      uVar8 = 0;
      if (lVar7 != 0) {
        uVar8 = FUN_100c36d40(param_2);
      }
      lVar15 = FUN_100bf3540(uVar10 + 10,"eck_prn.c",0xf9);
      if (lVar15 == 0) goto LAB_100c434d9;
      iVar4 = FUN_100c58c20(param_1,param_3,0x80);
      uVar9 = 0x20;
      if (iVar4 == 0) {
        lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
        goto LAB_100c432b9;
      }
      uVar9 = FUN_100bf70a0(iVar2);
      iVar4 = FUN_100c5c0c0(param_1,"Field Type: %s\n",uVar9);
      if (iVar4 < 1) {
LAB_100c438ad:
        lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
        uVar9 = 0x20;
        goto LAB_100c432b9;
      }
      if (iVar2 == 0x197) {
        iVar2 = FUN_100c3cb10(param_2);
        if ((iVar2 != 0) && (iVar4 = FUN_100c58c20(param_1,param_3,0x80), iVar4 != 0)) {
          uVar9 = FUN_100bf70a0(iVar2);
          iVar2 = FUN_100c5c0c0(param_1,"Basis Type: %s\n",uVar9);
          if (0 < iVar2) {
            pcVar12 = "Polynomial:";
            goto LAB_100c438d9;
          }
        }
        goto LAB_100c438ad;
      }
      pcVar12 = "Prime:";
LAB_100c438d9:
      iVar2 = FUN_100c7f970(param_1,pcVar12,lVar6,lVar15,param_3);
      if (((iVar2 == 0) ||
          (iVar2 = FUN_100c7f970(param_1,"A:   ",local_c0,lVar15,param_3), iVar2 == 0)) ||
         (iVar2 = FUN_100c7f970(param_1,"B:   ",local_c8,lVar15,param_3), iVar2 == 0)) {
LAB_100c43b3e:
        lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
        uVar9 = 0x20;
        goto LAB_100c432b9;
      }
      if (iVar3 == 4) {
        pcVar12 = "Generator (uncompressed):";
      }
      else if (iVar3 == 2) {
        pcVar12 = "Generator (compressed):";
      }
      else {
        pcVar12 = "Generator (hybrid):";
      }
      iVar2 = FUN_100c7f970(param_1,pcVar12,local_e0,lVar15,param_3);
      if (((iVar2 == 0) ||
          (iVar2 = FUN_100c7f970(param_1,"Order: ",local_d0,lVar15,param_3), iVar2 == 0)) ||
         (iVar2 = FUN_100c7f970(param_1,"Cofactor: ",local_d8,lVar15,param_3), iVar2 == 0))
      goto LAB_100c43b3e;
      uVar11 = 1;
      if (lVar7 != 0) {
        iVar2 = 0;
        if (0 < param_3) {
          iVar2 = 0x80;
          if (param_3 < 0x81) {
            iVar2 = param_3;
          }
          ___memset_chk(&local_b8,0x20,(long)iVar2,0x80);
          iVar3 = FUN_100c58980(param_1,&local_b8,iVar2);
          if (iVar3 < 1) goto LAB_100c43b3e;
        }
        iVar3 = FUN_100c5c0c0(param_1,"%s","Seed:");
        if (0 < iVar3) {
          uVar13 = 0;
          do {
            if (uVar8 <= uVar13) {
              uVar11 = 1;
              iVar2 = FUN_100c58980(param_1,"\n",1);
              uVar9 = 0x20;
              lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
              if (iVar2 < 1) goto LAB_100c432b9;
              goto LAB_100c432d7;
            }
            if (uVar13 == (uVar13 / 0xf) * 0xf) {
              local_b8 = 10;
              ___memset_chk(local_b7,0x20,(long)(iVar2 + 4),0x7f);
              iVar3 = FUN_100c58980(param_1,&local_b8,iVar2 + 5);
              if (iVar3 < 1) break;
            }
            puVar1 = (undefined1 *)(lVar7 + uVar13);
            bVar16 = uVar8 - 1 == uVar13;
            uVar13 = uVar13 + 1;
            pcVar12 = ":";
            if (bVar16) {
              pcVar12 = "";
            }
            iVar3 = FUN_100c5c0c0(param_1,"%02x%s",*puVar1,pcVar12);
          } while (0 < iVar3);
        }
        goto LAB_100c43b3e;
      }
      lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
      goto LAB_100c432d7;
    }
    iVar2 = FUN_100c58c20(param_1,param_3,0x80);
    uVar9 = 0x20;
    if (iVar2 == 0) {
      local_c0 = 0;
      local_c8 = 0;
      local_e0 = 0;
      local_d0 = 0;
      local_d8 = 0;
      lVar15 = 0;
      lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
      lVar6 = 0;
      goto LAB_100c432b9;
    }
    iVar2 = FUN_100c36c50(param_2);
    if (iVar2 == 0) {
      lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
LAB_100c43521:
      local_c0 = 0;
      local_c8 = 0;
      local_d0 = 0;
      local_d8 = 0;
      local_e0 = 0;
      lVar15 = 0;
      uVar9 = 0x20;
      lVar6 = 0;
      goto LAB_100c432b9;
    }
    uVar9 = FUN_100bf70a0(iVar2);
    iVar2 = FUN_100c5c0c0(param_1,"ASN1 OID: %s",uVar9);
    lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
    if (iVar2 < 1) goto LAB_100c43521;
    lVar6 = 0;
    iVar2 = FUN_100c5c0c0(param_1,"\n");
    uVar11 = 1;
    local_c0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d0 = 0;
    local_d8 = 0;
    lVar15 = 0;
    uVar9 = 0x20;
    if (iVar2 < 1) goto LAB_100c432b9;
  }
  FUN_100c27ab0(lVar5);
LAB_100c43346:
  if (lVar15 != 0) {
    FUN_100bf3910(lVar15);
  }
  if (lVar7 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar11;
}

