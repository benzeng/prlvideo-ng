
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100806510(int *param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  uint uVar13;
  int iVar14;
  short *psVar15;
  int iVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  int local_64;
  ulong local_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar6;
  if (param_2 == 0) {
    lVar8 = FUN_100894720(*(undefined8 *)(param_1 + 0x36));
    if (lVar8 != 0) {
      uVar7 = FUN_100894720(*(undefined8 *)(param_1 + 0x36));
      iVar3 = FUN_1008946d0(uVar7);
      if (iVar3 < 0) {
        FUN_10081d560("t1_enc.c",0x307,"n >= 0");
      }
    }
    puVar21 = *(undefined8 **)(param_1 + 0x34);
    puVar20 = (undefined1 *)(*(long *)(param_1 + 0x20) + 0x120);
    lVar8 = 0;
    if (puVar21 == (undefined8 *)0x0) {
      puVar21 = (undefined8 *)0x0;
    }
    else {
      lVar8 = FUN_100894620(puVar21);
    }
  }
  else {
    lVar6 = FUN_100894720(*(undefined8 *)(param_1 + 0x3c));
    if (lVar6 != 0) {
      uVar7 = FUN_100894720(*(undefined8 *)(param_1 + 0x3c));
      iVar3 = FUN_1008946d0(uVar7);
      if (iVar3 < 0) {
        FUN_10081d560("t1_enc.c",0x2e8,"n >= 0");
      }
    }
    lVar6 = *(long *)(param_1 + 0x20);
    puVar21 = *(undefined8 **)(param_1 + 0x3a);
    puVar20 = (undefined1 *)(lVar6 + 0x158);
    lVar8 = 0;
    if (puVar21 == (undefined8 *)0x0) {
      puVar21 = (undefined8 *)0x0;
    }
    else {
      lVar8 = FUN_100894620(puVar21);
      if (0x301 < *param_1) {
        uVar9 = FUN_100894630(lVar8);
        if (((uVar9 & 0xf0007) == 2) && (iVar3 = FUN_100894660(lVar8), 1 < iVar3)) {
          if (*(long *)(lVar6 + 0x168) == *(long *)(lVar6 + 0x170)) {
            iVar3 = FUN_100886f00(*(long *)(lVar6 + 0x168),iVar3);
            uVar5 = 0xffffffff;
            lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
            if (iVar3 < 1) goto LAB_1008067ed;
            goto LAB_10080669c;
          }
          _fprintf(*(FILE **)PTR____stderrp_100ba2328,"%s:%d: rec->data != rec->input\n","t1_enc.c",
                   0x2ff);
        }
        lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
        goto LAB_10080669c;
      }
    }
    lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
LAB_10080669c:
  if (((lVar8 == 0) || (puVar21 == (undefined8 *)0x0)) || (*(long *)(param_1 + 0x4c) == 0)) {
    _memmove(*(void **)(puVar20 + 0x10),*(void **)(puVar20 + 0x18),(ulong)*(uint *)(puVar20 + 4));
    *(undefined8 *)(puVar20 + 0x18) = *(undefined8 *)(puVar20 + 0x10);
    uVar5 = 1;
    goto LAB_1008067ed;
  }
  uVar2 = *(uint *)(puVar20 + 4);
  uVar19 = (ulong)uVar2;
  uVar7 = FUN_1008945f0(*puVar21);
  uVar9 = FUN_100894630(*puVar21);
  iVar3 = (int)uVar7;
  if ((uVar9 & 0x200000) == 0) {
    if ((param_2 != 0) && (iVar3 != 1)) {
      iVar14 = (int)uVar2 % iVar3;
      uVar18 = iVar3 - iVar14;
      uVar13 = uVar18 - 1;
      if (((*(byte *)((long)param_1 + 0x1a9) & 2) != 0) && ((**(byte **)(param_1 + 0x20) & 8) != 0))
      {
        uVar13 = uVar18;
      }
      uVar19 = (long)(int)uVar18 + uVar19;
      if ((int)uVar2 < (int)uVar19) {
        lVar17 = (long)(int)uVar2;
        uVar12 = (undefined1)uVar13;
        if ((uVar18 & 3) != 0) {
          iVar16 = -(uVar18 & 3);
          do {
            *(undefined1 *)(*(long *)(puVar20 + 0x18) + lVar17) = uVar12;
            lVar17 = lVar17 + 1;
            iVar16 = iVar16 + 1;
          } while (iVar16 != 0);
        }
        lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
        if (2 < (uint)((iVar3 + -1) - iVar14)) {
          do {
            *(undefined1 *)(*(long *)(puVar20 + 0x18) + lVar17) = uVar12;
            *(undefined1 *)(*(long *)(puVar20 + 0x18) + 1 + lVar17) = uVar12;
            *(undefined1 *)(*(long *)(puVar20 + 0x18) + 2 + lVar17) = uVar12;
            *(undefined1 *)(*(long *)(puVar20 + 0x18) + 3 + lVar17) = uVar12;
            lVar17 = lVar17 + 4;
          } while ((uVar2 + iVar3) - iVar14 != (int)lVar17);
        }
      }
      *(uint *)(puVar20 + 4) = *(int *)(puVar20 + 4) + uVar18;
    }
    local_64 = 0;
    if (param_2 == 0) {
LAB_10080692b:
      uVar5 = 0;
      if ((uVar19 == 0) || (uVar5 = 0, uVar19 % (ulong)(long)iVar3 != 0)) goto LAB_1008067ed;
    }
  }
  else {
    puVar10 = (ulong *)(*(long *)(param_1 + 0x20) + 0xc);
    if (param_2 != 0) {
      puVar10 = (ulong *)(*(long *)(param_1 + 0x20) + 0x58);
    }
    iVar14 = *param_1;
    if ((iVar14 == 0x100) || (iVar14 == 0xfeff)) {
      psVar15 = (short *)(*(long *)(param_1 + 0x22) + 0x208);
      if (param_2 != 0) {
        psVar15 = (short *)(*(long *)(param_1 + 0x22) + 0x20a);
      }
      local_48 = (ulong)(ushort)(*psVar15 << 8) | (ulong)(byte)((ushort)*psVar15 >> 8) |
                 (ulong)*(uint6 *)((long)puVar10 + 2) << 0x10;
    }
    else {
      local_48 = *puVar10;
      pcVar1 = (char *)((long)puVar10 + 7);
      *pcVar1 = *pcVar1 + '\x01';
      if (*pcVar1 == '\0') {
        pcVar1 = (char *)((long)puVar10 + 6);
        *pcVar1 = *pcVar1 + '\x01';
        if (*pcVar1 == '\0') {
          pcVar1 = (char *)((long)puVar10 + 5);
          *pcVar1 = *pcVar1 + '\x01';
          if (*pcVar1 == '\0') {
            pcVar1 = (char *)((long)puVar10 + 4);
            *pcVar1 = *pcVar1 + '\x01';
            if (*pcVar1 == '\0') {
              pcVar1 = (char *)((long)puVar10 + 3);
              *pcVar1 = *pcVar1 + '\x01';
              if (*pcVar1 == '\0') {
                pcVar1 = (char *)((long)puVar10 + 2);
                *pcVar1 = *pcVar1 + '\x01';
                if (*pcVar1 == '\0') {
                  pcVar1 = (char *)((long)puVar10 + 1);
                  *pcVar1 = *pcVar1 + '\x01';
                  if (*pcVar1 == '\0') {
                    *(char *)puVar10 = (char)*puVar10 + '\x01';
                  }
                }
              }
            }
          }
        }
      }
      iVar14 = *param_1;
    }
    local_40 = *puVar20;
    local_3f = (undefined1)((uint)iVar14 >> 8);
    local_3e = (undefined1)iVar14;
    local_3d = puVar20[5];
    local_3c = puVar20[4];
    local_64 = FUN_10088b3a0(puVar21,0x16,0xd,&local_48);
    uVar5 = 0xffffffff;
    if (local_64 < 1) goto LAB_1008067ed;
    if (param_2 == 0) goto LAB_10080692b;
    uVar19 = uVar19 + (long)local_64;
    *(int *)(puVar20 + 4) = *(int *)(puVar20 + 4) + local_64;
  }
  iVar14 = FUN_100894610(puVar21,*(undefined8 *)(puVar20 + 0x10),*(undefined8 *)(puVar20 + 0x18),
                         uVar19 & 0xffffffff);
  uVar9 = FUN_100894630(*puVar21);
  uVar5 = 0xffffffff;
  if ((uVar9 & 0x100000) == 0) {
    lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (iVar14 == 0) goto LAB_1008067ed;
  }
  else {
    lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (iVar14 < 0) goto LAB_1008067ed;
  }
  uVar9 = FUN_100894630(lVar8);
  if ((param_2 == 0) && ((uVar9 & 0xf0007) == 6)) {
    lVar8 = *(long *)(puVar20 + 0x18) + _UNK_100b4dd78;
    *(long *)(puVar20 + 0x10) = *(long *)(puVar20 + 0x10) + _DAT_100b4dd70;
    *(long *)(puVar20 + 0x18) = lVar8;
    *(int *)(puVar20 + 4) = *(int *)(puVar20 + 4) + -8;
  }
  lVar8 = FUN_100894720(*(undefined8 *)(param_1 + 0x36));
  uVar4 = 0;
  if (lVar8 != 0) {
    uVar11 = FUN_100894720(*(undefined8 *)(param_1 + 0x36));
    uVar4 = FUN_1008946d0(uVar11);
  }
  uVar5 = 1;
  if ((param_2 == 0) && (iVar3 != 1)) {
    uVar5 = FUN_1007feb00(param_1,puVar20,uVar7,uVar4);
  }
  if ((param_2 == 0) && (local_64 != 0)) {
    *(int *)(puVar20 + 4) = *(int *)(puVar20 + 4) - local_64;
  }
LAB_1008067ed:
  if (lVar6 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

