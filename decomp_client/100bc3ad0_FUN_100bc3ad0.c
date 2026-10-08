
undefined8 FUN_100bc3ad0(uint *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  size_t sVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  int iVar19;
  int local_108;
  void *local_e8;
  undefined1 local_e0 [52];
  undefined4 local_ac;
  long local_a8;
  undefined4 local_9c;
  undefined4 uStack_98;
  long local_88 [4];
  undefined1 local_68 [48];
  long local_38;
  
  lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_a8 = 0;
  local_38 = lVar9;
  FUN_100c65850(local_e0);
  if (param_1[0x12] != 0x2150) {
LAB_100bc47f8:
    param_1[0x12] = 0x2151;
    FUN_100c65c50(local_e0);
    uVar15 = FUN_100bd30a0(param_1,0x16);
    goto LAB_100bc48cf;
  }
  uVar15 = *(undefined8 *)(param_1 + 0x14);
  lVar14 = *(long *)(param_1 + 0x20);
  lVar12 = *(long *)(lVar14 + 0x3a8);
  uVar2 = *(ulong *)(lVar12 + 0x18);
  lVar13 = *(long *)(param_1 + 0x40);
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  if ((uVar2 & 1) == 0) {
    if ((uVar2 & 8) == 0) {
      if ((uVar2 & 0x80) == 0) {
        if ((uVar2 & 0x100) == 0) {
          if ((uVar2 & 0x400) == 0) {
            uVar15 = 0xfa;
            uVar18 = 0x761;
            goto LAB_100bc466c;
          }
          lVar12 = *(long *)(param_1 + 0xb4);
          if ((((lVar12 == 0) || (*(long *)(param_1 + 0xb6) == 0)) ||
              (*(long *)(param_1 + 0xb8) == 0)) || (*(long *)(param_1 + 0xba) == 0)) {
            uVar15 = 0x166;
            uVar18 = 0x755;
            goto LAB_100bc4858;
          }
          local_e8 = (void *)0x0;
          local_108 = 0;
          iVar6 = 0;
          iVar19 = 0;
          local_88[0] = lVar12;
          local_88[1] = *(long *)(param_1 + 0xb6);
          local_88[2] = *(long *)(param_1 + 0xb8);
          local_88[3] = *(long *)(param_1 + 0xba);
        }
        else {
          sVar11 = _strlen(*(char **)(*(long *)(param_1 + 0x5c) + 0x208));
          iVar19 = (int)sVar11 + 2;
          lVar12 = 0;
          local_e8 = (void *)0x0;
          local_108 = 0;
          iVar6 = 0;
        }
        goto LAB_100bc3c2a;
      }
      if (*(long *)(lVar13 + 0x50) == 0) {
        if ((*(code **)(lVar13 + 0x58) == (code *)0x0) ||
           (lVar14 = (**(code **)(lVar13 + 0x58))
                               (param_1,*(uint *)(lVar12 + 0x40) & 2,
                                (~(*(uint *)(lVar12 + 0x40) << 6) & 0x200) + 0x200), lVar14 == 0)) {
          uVar15 = 0x137;
          uVar18 = 0x6dc;
          goto LAB_100bc466c;
        }
        lVar14 = *(long *)(param_1 + 0x20);
      }
      if (*(long *)(lVar14 + 0x3b8) != 0) {
        uVar15 = 0x44;
        uVar18 = 0x6e2;
        goto LAB_100bc4858;
      }
      lVar12 = FUN_100c3f3c0();
      if (lVar12 == 0) {
        uVar15 = 0x2b;
        uVar18 = 0x6ec;
      }
      else {
        *(long *)(*(long *)(param_1 + 0x20) + 0x3b8) = lVar12;
        lVar14 = FUN_100c3fb70(lVar12);
        if ((((lVar14 == 0) || (lVar14 = FUN_100c3fb20(lVar12), lVar14 == 0)) ||
            ((*(byte *)((long)param_1 + 0x1aa) & 8) != 0)) &&
           (iVar19 = FUN_100c3f4a0(lVar12), iVar19 == 0)) {
          uVar15 = 0x2b;
          uVar18 = 0x6f6;
        }
        else {
          lVar13 = FUN_100c3fad0(lVar12);
          if (((lVar13 == 0) || (lVar14 = FUN_100c3fb70(lVar12), lVar14 == 0)) ||
             (lVar14 = FUN_100c3fb20(lVar12), lVar14 == 0)) {
            uVar15 = 0x2b;
            uVar18 = 0x6fe;
          }
          else if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 0x3a8) + 0x40) & 2) == 0) ||
                  (iVar19 = FUN_100c36e50(lVar13), iVar19 < 0xa4)) {
            uVar7 = FUN_100c36c50(lVar13);
            iVar6 = FUN_100bd7290(uVar7);
            if (iVar6 != 0) {
              uVar18 = FUN_100c3fb70(lVar12);
              iVar19 = FUN_100c45420(lVar13,uVar18,4,0,0,0);
              local_e8 = (void *)FUN_100bf3540(iVar19,"s3_srvr.c",0x720);
              lVar14 = FUN_100c27a20();
              if ((local_e8 == (void *)0x0) || (lVar14 == 0)) {
                uVar15 = 0x41;
                uVar18 = 0x724;
              }
              else {
                uVar18 = FUN_100c3fb70(lVar12);
                local_108 = FUN_100c45420(lVar13,uVar18,4,local_e8,(long)iVar19,lVar14);
                if (local_108 != 0) {
                  FUN_100c27ab0(lVar14);
                  iVar19 = local_108 + 4;
                  local_88[2] = 0;
                  local_88[3] = 0;
                  local_88[0] = 0;
                  local_88[1] = 0;
                  lVar12 = 0;
                  goto LAB_100bc3c2a;
                }
                uVar15 = 0x2b;
                uVar18 = 0x72e;
              }
              FUN_100c62ee0(0x14,0x9b,uVar15,"s3_srvr.c",uVar18);
              goto LAB_100bc48a1;
            }
            uVar15 = 0x13b;
            uVar18 = 0x712;
          }
          else {
            uVar15 = 0x136;
            uVar18 = 0x705;
          }
        }
      }
      FUN_100c62ee0(0x14,0x9b,uVar15,"s3_srvr.c",uVar18);
      lVar14 = 0;
    }
    else {
      if (*(long *)(lVar13 + 0x40) == 0) {
        if ((*(code **)(lVar13 + 0x48) == (code *)0x0) ||
           (lVar14 = (**(code **)(lVar13 + 0x48))
                               (param_1,*(uint *)(lVar12 + 0x40) & 2,
                                (~(*(uint *)(lVar12 + 0x40) << 6) & 0x200) + 0x200), lVar14 == 0)) {
          uVar15 = 0xab;
          uVar18 = 0x6b4;
          goto LAB_100bc466c;
        }
        lVar14 = *(long *)(param_1 + 0x20);
      }
      if (*(long *)(lVar14 + 0x3b0) == 0) {
        lVar14 = FUN_100c51320();
        if (lVar14 == 0) {
          uVar15 = 5;
          uVar18 = 0x6bf;
        }
        else {
          *(long *)(*(long *)(param_1 + 0x20) + 0x3b0) = lVar14;
          iVar19 = FUN_100c515f0(lVar14);
          if (iVar19 != 0) {
            lVar12 = *(long *)(lVar14 + 8);
            local_88[1] = *(long *)(lVar14 + 0x10);
            local_88[2] = *(long *)(lVar14 + 0x20);
            local_e8 = (void *)0x0;
            local_108 = 0;
            iVar6 = 0;
            iVar19 = 0;
            local_88[0] = lVar12;
            goto LAB_100bc3c2a;
          }
          uVar15 = 5;
          uVar18 = 0x6c5;
        }
      }
      else {
        uVar15 = 0x44;
        uVar18 = 0x6ba;
      }
LAB_100bc4858:
      FUN_100c62ee0(0x14,0x9b,uVar15,"s3_srvr.c",uVar18);
      lVar14 = 0;
    }
  }
  else {
    lVar8 = *(long *)(lVar13 + 0x30);
    if (lVar8 == 0) {
      if (*(code **)(lVar13 + 0x38) == (code *)0x0) {
        uVar15 = 0xac;
        uVar18 = 0x6a0;
      }
      else {
        lVar8 = (**(code **)(lVar13 + 0x38))
                          (param_1,*(uint *)(lVar12 + 0x40) & 2,
                           (~(*(uint *)(lVar12 + 0x40) << 6) & 0x200) + 0x200);
        if (lVar8 != 0) {
          FUN_100c47750(lVar8);
          *(long *)(lVar13 + 0x30) = lVar8;
          lVar14 = *(long *)(param_1 + 0x20);
          goto LAB_100bc3bf4;
        }
        uVar15 = 0x11a;
        uVar18 = 0x697;
      }
LAB_100bc466c:
      FUN_100c62ee0(0x14,0x9b,uVar15,"s3_srvr.c",uVar18);
      uVar18 = 0x28;
      local_e8 = (void *)0x0;
LAB_100bc4892:
      FUN_100bd2dc0(param_1,2,uVar18);
      lVar14 = 0;
    }
    else {
LAB_100bc3bf4:
      lVar12 = *(long *)(lVar8 + 0x20);
      local_88[1] = *(long *)(lVar8 + 0x28);
      *(undefined4 *)(lVar14 + 1000) = 1;
      local_e8 = (void *)0x0;
      local_108 = 0;
      iVar6 = 0;
      iVar19 = 0;
      local_88[0] = lVar12;
LAB_100bc3c2a:
      local_ac = 0;
      lVar9 = lVar12;
      if ((uVar2 & 0x400) == 0) {
        for (; lVar9 != 0; lVar9 = local_88[lVar9 + 1]) {
          iVar5 = FUN_100c26610(lVar9);
          iVar5 = (int)(iVar5 + 7 + ((uint)(iVar5 + 7 >> 0x1f) >> 0x1d)) >> 3;
          lVar9 = (long)local_ac;
          (&uStack_98)[lVar9] = iVar5;
          iVar19 = iVar5 + 2 + iVar19;
          local_ac = local_ac + 1;
          if (3 < local_ac) break;
        }
      }
      else {
        for (; lVar9 != 0; lVar9 = local_88[lVar9 + 1]) {
          iVar5 = FUN_100c26610(lVar9);
          iVar5 = (int)(iVar5 + 7 + ((uint)(iVar5 + 7 >> 0x1f) >> 0x1d)) >> 3;
          lVar9 = (long)local_ac;
          (&uStack_98)[lVar9] = iVar5;
          iVar19 = (lVar9 != 2) + 1 + iVar5 + iVar19;
          local_ac = local_ac + 1;
          if (3 < local_ac) break;
        }
      }
      lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x3a8);
      piVar10 = (int *)0x0;
      iVar5 = 0;
      if ((*(ushort *)(lVar9 + 0x20) & 0x404) == 0) {
        piVar10 = (int *)0x0;
        iVar5 = 0;
        if ((*(byte *)(lVar9 + 0x19) & 1) == 0) {
          piVar10 = (int *)FUN_100be6290(param_1,lVar9,&local_a8);
          uVar18 = 0x32;
          if (piVar10 == (int *)0x0) {
            lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
            goto LAB_100bc4892;
          }
          iVar5 = FUN_100c6d160(piVar10);
        }
      }
      iVar5 = FUN_100c58060(uVar15,(long)(iVar19 + 4 + iVar5));
      if (iVar5 != 0) {
        puVar3 = *(undefined1 **)(*(long *)(param_1 + 0x14) + 8);
        puVar1 = puVar3 + 4;
        local_ac = 0;
        puVar16 = puVar1;
        if ((uVar2 & 0x400) == 0) {
          while (lVar12 != 0) {
            *puVar16 = *(undefined1 *)((long)&uStack_98 + (long)local_ac * 4 + 1);
            puVar16[1] = *(undefined1 *)(&uStack_98 + local_ac);
            FUN_100c26ff0(local_88[local_ac],puVar16 + 2);
            lVar9 = (long)local_ac;
            puVar16 = puVar16 + (long)(int)(&uStack_98)[lVar9] + 2;
            local_ac = local_ac + 1;
            if (3 < local_ac) break;
            lVar12 = local_88[lVar9 + 1];
          }
        }
        else {
          while (lVar12 != 0) {
            if (local_ac == 2) {
              *puVar16 = (char)(&uStack_98)[local_ac];
              puVar17 = puVar16 + 1;
              lVar9 = 1;
            }
            else {
              *puVar16 = (char)((uint)(&uStack_98)[local_ac] >> 8);
              puVar16[1] = *(undefined1 *)(&uStack_98 + local_ac);
              puVar17 = puVar16 + 2;
              lVar9 = 2;
            }
            FUN_100c26ff0(local_88[local_ac],puVar17);
            lVar14 = (long)local_ac;
            puVar16 = puVar16 + (int)(&uStack_98)[lVar14] + lVar9;
            local_ac = local_ac + 1;
            if (3 < local_ac) break;
            lVar12 = local_88[lVar14 + 1];
          }
        }
        if ((uVar2 & 0x80) != 0) {
          *puVar16 = 3;
          puVar16[1] = 0;
          puVar16[2] = (char)iVar6;
          puVar16[3] = (char)local_108;
          _memcpy(puVar16 + 4,local_e8,(long)local_108);
          FUN_100bf3910(local_e8);
          puVar16 = puVar16 + (long)local_108 + 4;
          local_e8 = (void *)0x0;
        }
        if ((uVar2 & 0x100) != 0) {
          sVar11 = _strlen(*(char **)(*(long *)(param_1 + 0x5c) + 0x208));
          *puVar16 = (char)(sVar11 >> 8);
          sVar11 = _strlen(*(char **)(*(long *)(param_1 + 0x5c) + 0x208));
          puVar16[1] = (char)sVar11;
          pcVar4 = *(char **)(*(long *)(param_1 + 0x5c) + 0x208);
          sVar11 = _strlen(pcVar4);
          _strncpy(puVar16 + 2,pcVar4,sVar11);
          sVar11 = _strlen(*(char **)(*(long *)(param_1 + 0x5c) + 0x208));
          puVar16 = puVar16 + sVar11 + 2;
        }
        if (piVar10 == (int *)0x0) {
LAB_100bc47bf:
          lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
          *puVar3 = 0xc;
          puVar3[1] = (char)((uint)iVar19 >> 0x10);
          puVar3[2] = (char)((uint)iVar19 >> 8);
          puVar3[3] = (char)iVar19;
          param_1[0x18] = iVar19 + 4;
          param_1[0x19] = 0;
          goto LAB_100bc47f8;
        }
        if ((*piVar10 == 6) && (((int)*param_1 < 0x303 || ((*param_1 & 0xffffff00) != 0x300)))) {
          FUN_100c6fcb0(local_e0,8);
          iVar6 = FUN_100c65920(local_e0,*(undefined8 *)(*(long *)(param_1 + 0x5c) + 0xe8),0);
          if (((0 < iVar6) &&
              (iVar6 = FUN_100c65b10(local_e0,*(long *)(param_1 + 0x20) + 0xc4,0x20), 0 < iVar6)) &&
             (iVar6 = FUN_100c65b10(local_e0,*(long *)(param_1 + 0x20) + 0xa4,0x20), 0 < iVar6)) {
            iVar6 = FUN_100c65b10(local_e0,puVar1,(long)iVar19);
            if ((0 < iVar6) &&
               (iVar5 = FUN_100c65bc0(local_e0,local_68,&local_ac), iVar6 = local_ac, 0 < iVar5)) {
              lVar9 = (long)local_ac;
              FUN_100c6fcb0(local_e0,8);
              iVar5 = FUN_100c65920(local_e0,*(undefined8 *)(*(long *)(param_1 + 0x5c) + 0xf0),0);
              if (((0 < iVar5) &&
                  (((iVar5 = FUN_100c65b10(local_e0,*(long *)(param_1 + 0x20) + 0xc4,0x20),
                    0 < iVar5 &&
                    (iVar5 = FUN_100c65b10(local_e0,*(long *)(param_1 + 0x20) + 0xa4,0x20),
                    0 < iVar5)) && (iVar5 = FUN_100c65b10(local_e0,puVar1,(long)iVar19), 0 < iVar5))
                  )) && (iVar5 = FUN_100c65bc0(local_e0,local_68 + lVar9,&local_ac), 0 < iVar5)) {
                iVar6 = FUN_100c47970(0x72,local_68,iVar6 + local_ac,puVar16 + 2,&local_9c,
                                      *(undefined8 *)(piVar10 + 8));
                if (iVar6 < 1) {
                  FUN_100c62ee0(0x14,0x9b,4,"s3_srvr.c",0x7d3);
                  lVar14 = 0;
                  lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
                  goto LAB_100bc48a1;
                }
                *puVar16 = local_9c._1_1_;
                puVar16[1] = (undefined1)local_9c;
                iVar19 = iVar19 + 2 + local_9c;
                goto LAB_100bc47bf;
              }
            }
          }
          uVar15 = 6;
          uVar18 = 0x7ca;
LAB_100bc487d:
          FUN_100c62ee0(0x14,0x9b,uVar15,"s3_srvr.c",uVar18);
          uVar18 = 0x50;
        }
        else {
          if (local_a8 != 0) {
            if ((0x302 < (int)*param_1) && ((*param_1 & 0xffffff00) == 0x300)) {
              iVar6 = FUN_100bda2d0(puVar16,piVar10,local_a8);
              if (iVar6 == 0) {
                uVar15 = 0x44;
                uVar18 = 0x7e3;
                goto LAB_100bc487d;
              }
              puVar16 = puVar16 + 2;
            }
            iVar6 = FUN_100c65920(local_e0,local_a8,0);
            if ((((0 < iVar6) &&
                 (iVar6 = FUN_100c65b10(local_e0,*(long *)(param_1 + 0x20) + 0xc4,0x20), 0 < iVar6))
                && (iVar6 = FUN_100c65b10(local_e0,*(long *)(param_1 + 0x20) + 0xa4,0x20), 0 < iVar6
                   )) && ((iVar6 = FUN_100c65b10(local_e0,puVar1,(long)iVar19), 0 < iVar6 &&
                          (iVar6 = FUN_100c6cd10(local_e0,puVar16 + 2,&local_ac,piVar10), 0 < iVar6)
                          ))) {
              *puVar16 = local_ac._1_1_;
              puVar16[1] = (undefined1)local_ac;
              iVar6 = iVar19 + 2 + local_ac;
              iVar19 = iVar19 + 4 + local_ac;
              if ((*param_1 & 0xffffff00) != 0x300) {
                iVar19 = iVar6;
              }
              if ((int)*param_1 < 0x303) {
                iVar19 = iVar6;
              }
              goto LAB_100bc47bf;
            }
            uVar15 = 6;
            uVar18 = 0x7f3;
            goto LAB_100bc487d;
          }
          FUN_100c62ee0(0x14,0x9b,0xfb,"s3_srvr.c",0x7ff);
          uVar18 = 0x28;
        }
        lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
        goto LAB_100bc4892;
      }
      FUN_100c62ee0(0x14,0x9b,7,"s3_srvr.c",0x77c);
      lVar14 = 0;
      lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
    }
LAB_100bc48a1:
    if (local_e8 != (void *)0x0) {
      FUN_100bf3910(local_e8);
    }
  }
  FUN_100c27ab0(lVar14);
  FUN_100c65c50(local_e0);
  param_1[0x12] = 5;
  uVar15 = 0xffffffff;
LAB_100bc48cf:
  if (lVar9 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar15;
}

