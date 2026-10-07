
int FUN_100892f40(long param_1,void *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  undefined8 *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  undefined1 *puVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined1 *puVar26;
  long lVar27;
  void *pvVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  void *pvVar32;
  void *local_40;
  int local_34;
  
  iVar16 = 0;
  if (((param_2 != (void *)0x0) && (piVar4 = *(int **)(param_1 + 0x30), piVar4 != (int *)0x0)) &&
     (*(long *)(param_1 + 0x38) != 0)) {
    FUN_10087d610(param_1,0xf);
    if (piVar4[4] != 2) {
      piVar4[4] = 2;
      piVar4[0] = 0;
      piVar4[1] = 0;
      piVar4[2] = 0;
      FUN_10088a240(piVar4 + 7);
    }
    iVar16 = *piVar4;
    if (iVar16 < 1) {
      iVar12 = 0;
      local_40 = param_2;
    }
    else {
      iVar13 = piVar4[1];
      if (iVar16 < iVar13) {
        FUN_10081d560("bio_b64.c",0xad,"ctx->buf_len >= ctx->buf_off");
        iVar16 = *piVar4;
        iVar13 = piVar4[1];
      }
      iVar12 = iVar16 - iVar13;
      if (param_3 < iVar16 - iVar13) {
        iVar12 = param_3;
      }
      if (0x5dd < iVar12 + iVar13) {
        FUN_10081d560("bio_b64.c",0xb1,"ctx->buf_off + i < (int)sizeof(ctx->buf)");
        iVar13 = piVar4[1];
      }
      _memcpy(param_2,(void *)((long)piVar4 + (long)iVar13 + 0x7c),(long)iVar12);
      local_40 = (void *)((long)param_2 + (long)iVar12);
      param_3 = param_3 - iVar12;
      iVar16 = piVar4[1];
      piVar4[1] = iVar12 + iVar16;
      if (*piVar4 == iVar12 + iVar16) {
        piVar4[0] = 0;
        piVar4[1] = 0;
      }
    }
    iVar16 = 0;
    if (0 < param_3) {
      pvVar3 = (void *)((long)piVar4 + 0x65a);
      piVar1 = piVar4 + 7;
      piVar2 = piVar4 + 0x1f;
      iVar16 = 0;
LAB_100893140:
      iVar13 = piVar4[6];
      do {
        if (iVar13 < 1) break;
        iVar13 = FUN_10087d6a0(*(undefined8 *)(param_1 + 0x38),
                               (long)piVar4 + (long)piVar4[2] + 0x65a,0x400 - piVar4[2]);
        if (iVar13 < 1) {
          iVar22 = FUN_10087d620(*(undefined8 *)(param_1 + 0x38),8);
          iVar16 = iVar13;
          if (iVar22 != 0) break;
          piVar4[6] = iVar13;
          iVar22 = piVar4[2];
          iVar13 = 0;
          if (iVar22 == 0) break;
        }
        else {
          iVar22 = piVar4[2];
        }
        uVar29 = iVar22 + iVar13;
        piVar4[2] = uVar29;
        if (piVar4[5] != 0) {
          uVar14 = FUN_10087d620(param_1,0xffffffff);
          if ((uVar14 & 0x100) != 0) {
            piVar4[2] = 0;
            goto LAB_10089357c;
          }
          if (piVar4[5] != 0) {
            local_34 = 0;
            lVar23 = 0;
            pvVar28 = pvVar3;
            pvVar32 = pvVar3;
            if ((int)uVar29 < 1) goto LAB_100893408;
            goto LAB_100893220;
          }
        }
        if ((0x3ff < (int)uVar29) || (iVar13 = piVar4[6], iVar13 < 1)) goto LAB_10089357c;
      } while( true );
    }
LAB_10089365f:
    FUN_10087e580(param_1);
    if (iVar12 != 0) {
      iVar16 = iVar12;
    }
  }
  return iVar16;
LAB_100893220:
  pvVar32 = (void *)((long)piVar4 + lVar23 + 0x65b);
  if (*(char *)((long)piVar4 + lVar23 + 0x65a) != '\n') goto LAB_100893289;
  if (piVar4[3] != 0) {
    piVar4[3] = 0;
    pvVar28 = pvVar32;
    goto LAB_100893289;
  }
  iVar22 = (int)pvVar28;
  iVar13 = FUN_10088a260(piVar1,piVar2,&local_34,pvVar28,(int)pvVar32 - iVar22);
  if (((iVar13 < 1) && (local_34 == 0)) && (piVar4[5] != 0)) {
    FUN_10088a240(piVar1);
    pvVar28 = pvVar32;
    goto LAB_100893289;
  }
  uVar31 = uVar29;
  if (pvVar28 != pvVar3) {
    iVar13 = (int)pvVar3;
    uVar31 = (uVar29 + iVar13) - iVar22;
    if (0 < (int)uVar31) {
      uVar14 = (long)pvVar3 + ((ulong)uVar29 - (long)pvVar28);
      uVar19 = (ulong)((int)uVar14 - 1);
      lVar24 = (uVar19 + 1) - (uVar14 & 0x1f);
      lVar27 = 0;
      if ((lVar24 != 0) &&
         (((void *)((long)pvVar28 + uVar19) < pvVar3 ||
          (lVar27 = 0, (void *)((long)piVar4 + uVar19 + 0x65a) < pvVar28)))) {
        puVar15 = (undefined8 *)((long)pvVar28 + 0x10);
        lVar20 = ((ulong)(((int)piVar4 + 0x659 + uVar29) - iVar22) + 1) -
                 ((ulong)((iVar13 + uVar29) - iVar22) & 0x1f);
        puVar25 = (undefined8 *)((long)piVar4 + 0x66a);
        do {
          uVar6 = *(undefined4 *)((long)puVar15 + -0xc);
          uVar7 = *(undefined4 *)(puVar15 + -1);
          uVar8 = *(undefined4 *)((long)puVar15 + -4);
          uVar9 = *puVar15;
          uVar10 = puVar15[1];
          *(undefined4 *)(puVar25 + -2) = *(undefined4 *)(puVar15 + -2);
          *(undefined4 *)((long)puVar25 + -0xc) = uVar6;
          *(undefined4 *)(puVar25 + -1) = uVar7;
          *(undefined4 *)((long)puVar25 + -4) = uVar8;
          *puVar25 = uVar9;
          puVar25[1] = uVar10;
          puVar25 = puVar25 + 4;
          puVar15 = puVar15 + 4;
          lVar20 = lVar20 + -0x20;
          lVar27 = lVar24;
        } while (lVar20 != 0);
      }
      if (uVar19 + 1 != lVar27) {
        iVar18 = (iVar13 + uVar29) - iVar22;
        iVar30 = (int)lVar27;
        if ((iVar18 - iVar30 & 3U) != 0) {
          iVar17 = -((byte)((((char)uVar29 + (char)pvVar3) - (char)pvVar28) - (char)lVar27) & 3);
          do {
            *(undefined1 *)((long)piVar4 + lVar27 + 0x65a) = *(undefined1 *)((long)pvVar28 + lVar27)
            ;
            lVar27 = lVar27 + 1;
            iVar17 = iVar17 + 1;
          } while (iVar17 != 0);
        }
        if (2 < (uint)((iVar18 + -1) - iVar30)) {
          puVar21 = (undefined1 *)((long)pvVar28 + lVar27 + 3);
          puVar26 = (undefined1 *)((long)piVar4 + lVar27 + 0x65d);
          iVar13 = (((uVar29 + iVar13) - iVar22) + 3) - ((int)lVar27 + 3);
          do {
            puVar26[-3] = puVar21[-3];
            puVar26[-2] = puVar21[-2];
            puVar26[-1] = puVar21[-1];
            *puVar26 = *puVar21;
            puVar21 = puVar21 + 4;
            puVar26 = puVar26 + 4;
            iVar13 = iVar13 + -4;
          } while (iVar13 != 0);
        }
      }
    }
  }
  FUN_10088a240(piVar1);
  piVar4[5] = 0;
  pvVar32 = (void *)((long)piVar4 + lVar23 + 0x65b);
  uVar29 = uVar31;
LAB_100893408:
  if (((uint)lVar23 == uVar29) && (local_34 == 0)) {
    if (pvVar28 == pvVar3) {
      if ((uint)lVar23 == 0x400) {
        piVar4[2] = 0;
        piVar4[3] = 1;
      }
    }
    else if (pvVar28 != pvVar32) {
      iVar22 = (int)pvVar32;
      iVar13 = (int)pvVar28;
      if (0 < iVar22 - iVar13) {
        uVar14 = (long)pvVar32 - (long)pvVar28;
        uVar19 = (ulong)((int)uVar14 - 1);
        lVar27 = (uVar19 + 1) - (uVar14 & 0x1f);
        lVar23 = 0;
        if ((lVar27 != 0) &&
           (((void *)((long)pvVar28 + uVar19) < pvVar3 ||
            (lVar23 = 0, (void *)((long)piVar4 + uVar19 + 0x65a) < pvVar28)))) {
          puVar15 = (undefined8 *)((long)pvVar28 + 0x10);
          lVar24 = ((ulong)(uint)((iVar22 + -1) - iVar13) + 1) -
                   ((ulong)(uint)(iVar22 - iVar13) & 0x1f);
          puVar25 = (undefined8 *)((long)piVar4 + 0x66a);
          do {
            uVar9 = puVar15[-1];
            uVar10 = *puVar15;
            uVar11 = puVar15[1];
            puVar25[-2] = puVar15[-2];
            puVar25[-1] = uVar9;
            *puVar25 = uVar10;
            puVar25[1] = uVar11;
            puVar25 = puVar25 + 4;
            puVar15 = puVar15 + 4;
            lVar24 = lVar24 + -0x20;
            lVar23 = lVar27;
          } while (lVar24 != 0);
        }
        if (uVar19 + 1 != lVar23) {
          iVar30 = (int)lVar23;
          if (((iVar22 - iVar13) - iVar30 & 3U) != 0) {
            iVar18 = -((byte)((char)uVar14 - (char)lVar23) & 3);
            do {
              *(undefined1 *)((long)piVar4 + lVar23 + 0x65a) =
                   *(undefined1 *)((long)pvVar28 + lVar23);
              lVar23 = lVar23 + 1;
              iVar18 = iVar18 + 1;
            } while (iVar18 != 0);
          }
          if (2 < (uint)(((iVar22 - iVar13) + -1) - iVar30)) {
            puVar21 = (undefined1 *)((long)pvVar28 + lVar23 + 3);
            puVar26 = (undefined1 *)((long)piVar4 + lVar23 + 0x65d);
            iVar30 = ((iVar22 - iVar13) + 3) - ((int)lVar23 + 3);
            do {
              puVar26[-3] = puVar21[-3];
              puVar26[-2] = puVar21[-2];
              puVar26[-1] = puVar21[-1];
              *puVar26 = *puVar21;
              puVar21 = puVar21 + 4;
              puVar26 = puVar26 + 4;
              iVar30 = iVar30 + -4;
            } while (iVar30 != 0);
          }
        }
      }
      piVar4[2] = iVar22 - iVar13;
    }
  }
  else {
    piVar4[2] = 0;
LAB_10089357c:
    uVar14 = FUN_10087d620(param_1,0xffffffff);
    if ((uVar14 & 0x100) == 0) {
      iVar13 = FUN_10088a260(piVar1,piVar2,piVar4,pvVar3,uVar29);
      piVar4[2] = 0;
    }
    else {
      uVar31 = uVar29 & 0xfffffffc;
      iVar13 = FUN_10088a4b0(piVar2,pvVar3,uVar31);
      if ((2 < (int)uVar31) && (*(char *)((long)(int)uVar31 + 0x659 + (long)piVar4) == '=')) {
        iVar22 = -2;
        if (*(char *)((long)(int)uVar31 + 0x658 + (long)piVar4) != '=') {
          iVar22 = -1;
        }
        iVar13 = iVar13 + iVar22;
      }
      iVar22 = uVar29 - uVar31;
      if (iVar22 != 0) {
        _memmove(pvVar3,(void *)((long)piVar4 + (long)(int)uVar31 + 0x65a),(long)iVar22);
        piVar4[2] = iVar22;
      }
      iVar22 = 0;
      if (-1 < iVar13) {
        iVar22 = iVar13;
      }
      *piVar4 = iVar22;
    }
    piVar4[1] = 0;
    if (iVar13 < 0) {
      *piVar4 = 0;
      iVar16 = 0;
      goto LAB_10089365f;
    }
    iVar13 = *piVar4;
    if (param_3 < *piVar4) {
      iVar13 = param_3;
    }
    _memcpy(local_40,piVar2,(long)iVar13);
    piVar4[1] = iVar13;
    if (iVar13 == *piVar4) {
      piVar4[0] = 0;
      piVar4[1] = 0;
    }
    iVar12 = iVar12 + iVar13;
    local_40 = (void *)((long)local_40 + (long)iVar13);
    iVar22 = param_3 - iVar13;
    bVar5 = param_3 < iVar13;
    param_3 = iVar22;
    if (iVar22 == 0 || bVar5) goto LAB_10089365f;
  }
  goto LAB_100893140;
LAB_100893289:
  lVar23 = lVar23 + 1;
  if ((int)uVar29 <= (int)lVar23) goto LAB_100893408;
  goto LAB_100893220;
}

