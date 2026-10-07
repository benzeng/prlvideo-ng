
uint FUN_00408d20(long *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  long *plVar13;
  char *pcVar14;
  int iVar15;
  uint uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  bool bVar21;
  undefined8 in_stack_fffffffffffffe58;
  undefined4 uVar23;
  undefined8 uVar22;
  char *in_stack_fffffffffffffe60;
  undefined4 uVar25;
  undefined8 uVar24;
  undefined8 *in_stack_fffffffffffffe68;
  undefined4 uVar26;
  ulong in_stack_fffffffffffffe70;
  undefined8 uVar27;
  undefined4 local_120;
  int local_118;
  long local_110;
  undefined1 local_108 [200];
  undefined8 local_40 [2];
  
  lVar3 = *param_1;
  iVar10 = *(int *)(lVar3 + 0xe0);
  uVar22 = *(undefined8 *)(*(long *)(lVar3 + 0xe8) + 0x10 + (long)iVar10 * 0x80);
  puVar11 = (undefined4 *)FUN_004089a0(lVar3,iVar10);
  uVar26 = (undefined4)((ulong)in_stack_fffffffffffffe68 >> 0x20);
  uVar25 = (undefined4)((ulong)in_stack_fffffffffffffe60 >> 0x20);
  uVar23 = (undefined4)((ulong)in_stack_fffffffffffffe58 >> 0x20);
  if (puVar11 != (undefined4 *)0x0) {
    uVar16 = param_2[3];
    uVar1 = param_2[4];
    iVar7 = puVar11[6];
    iVar9 = puVar11[7];
    iVar2 = *param_2;
    bVar21 = true;
    if (uVar16 == puVar11[2]) {
      bVar21 = uVar1 != puVar11[3];
    }
    if (iVar2 < (int)puVar11[0xe]) {
      lVar18 = (long)iVar2 * 0x18;
      iVar15 = iVar2;
      do {
        while (((iVar15 < 1 || (*(int *)(*(long *)(puVar11 + 0xc) + 0x14 + lVar18) == 0)) ||
               (iVar6 = FUN_0040c990(param_1,iVar15,0), *(int *)PTR___log_level_0061bd30 < 2))) {
          iVar15 = iVar15 + 1;
          lVar18 = lVar18 + 0x18;
          if ((int)puVar11[0xe] <= iVar15) goto LAB_00408e90;
        }
        in_stack_fffffffffffffe60 = "FAILED";
        if (iVar6 != 0) {
          in_stack_fffffffffffffe60 = "";
        }
        plVar13 = (long *)(lVar18 + *(long *)(puVar11 + 0xc));
        lVar18 = lVar18 + 0x18;
        iVar6 = iVar15 + 1;
        in_stack_fffffffffffffe58 = *(undefined8 *)(*plVar13 + 0x10);
        FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                     "Dynamic Resolution: disconnect Output %d {id=%d, name=%s}%s",iVar15,plVar13[1]
                     ,in_stack_fffffffffffffe58,in_stack_fffffffffffffe60);
        iVar15 = iVar6;
      } while (iVar6 < (int)puVar11[0xe]);
    }
LAB_00408e90:
    if (0 < (int)puVar11[0xe]) {
      iVar15 = 0;
      lVar18 = 0;
      do {
        iVar6 = *(int *)(*(long *)(puVar11 + 0xc) + 0x10 + lVar18);
        if (iVar6 != -1) {
          lVar19 = (long)iVar6 * 0x18;
          plVar13 = (long *)(lVar19 + *(long *)(puVar11 + 8));
          lVar4 = *plVar13;
          if ((*(long *)(lVar4 + 0x18) != 0) &&
             (((bVar21 || (iVar2 <= iVar15)) ||
              ((uVar16 < (uint)(*(int *)(lVar4 + 0x10) + *(int *)(lVar4 + 8)) ||
               (uVar1 < (uint)(*(int *)(lVar4 + 0x14) + *(int *)(lVar4 + 0xc)))))))) {
            in_stack_fffffffffffffe70 = in_stack_fffffffffffffe70 & 0xffffffff00000000;
            in_stack_fffffffffffffe68 = (undefined8 *)0x0;
            in_stack_fffffffffffffe60 =
                 (char *)CONCAT44((int)((ulong)in_stack_fffffffffffffe60 >> 0x20),1);
            in_stack_fffffffffffffe58 = 0;
            (**(code **)(*(long *)(PTR_g_PrlXLibAPI_0061bcf0 + 0x10) + 0x40))
                      (*param_1,*(undefined8 *)(puVar11 + 0x10),plVar13[1],0,0,0,0,
                       in_stack_fffffffffffffe60,0,in_stack_fffffffffffffe70);
            if (1 < *(int *)PTR___log_level_0061bd30) {
              in_stack_fffffffffffffe58 =
                   CONCAT44((int)((ulong)in_stack_fffffffffffffe58 >> 0x20),
                            (int)*(undefined8 *)(*(long *)(puVar11 + 0xc) + 8 + lVar18));
              FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                           "Dynamic Resolution: reset crtc {id=%d} on Output %d {id=%d}",
                           *(undefined8 *)(lVar19 + 8 + *(long *)(puVar11 + 8)),iVar15,
                           in_stack_fffffffffffffe58);
            }
          }
        }
        iVar15 = iVar15 + 1;
        lVar18 = lVar18 + 0x18;
      } while (iVar15 < (int)puVar11[0xe]);
    }
    if (param_3 != 0) {
      if (1 < *(int *)PTR___log_level_0061bd30) {
        in_stack_fffffffffffffe58 =
             CONCAT44((int)((ulong)in_stack_fffffffffffffe58 >> 0x20),*param_2);
        FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                     "Dynamic Resolution: send request with new heads config {extend=%dx%d, heads_count=%d}..."
                     ,param_2[3],param_2[4],in_stack_fffffffffffffe58);
      }
      FUN_0040ca90(param_1,param_2);
    }
    if (1 < *(int *)PTR___log_level_0061bd30) {
      in_stack_fffffffffffffe58 = CONCAT44((int)((ulong)in_stack_fffffffffffffe58 >> 0x20),uVar16);
      in_stack_fffffffffffffe60 =
           (char *)CONCAT44((int)((ulong)in_stack_fffffffffffffe60 >> 0x20),uVar1);
      FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution: resize screen {%dx%d}->{%dx%d}...",
                   puVar11[2],puVar11[3],in_stack_fffffffffffffe58,in_stack_fffffffffffffe60);
    }
    bVar21 = false;
    (**(code **)(*(long *)(PTR_g_PrlXLibAPI_0061bcf0 + 0x10) + 0x48))(lVar3,uVar22,1);
    (**(code **)(*(long *)(PTR_g_PrlXLibAPI_0061bcf0 + 0x10) + 0x38))
              (lVar3,uVar22,uVar16,uVar1,
               (long)(int)((float)uVar16 * DAT_00417968 + (float)(iVar7 / 2)) / (long)iVar7 &
               0xffffffff,
               (long)(int)((float)uVar1 * DAT_00417968 + (float)(iVar9 / 2)) / (long)iVar9 &
               0xffffffff);
    puVar5 = PTR_prl_xfunctions_0061bd60;
    (**(code **)(PTR_prl_xfunctions_0061bd60 + 0x1c0))(lVar3,0);
    while (iVar7 = (**(code **)(puVar5 + 0x1c8))(lVar3,*puVar11,local_108), iVar7 != 0) {
      bVar21 = true;
      (**(code **)(*(long *)(PTR_g_PrlXLibAPI_0061bcf0 + 0x10) + 0x50))(local_108);
    }
    (**(code **)(*(long *)(PTR_g_PrlXLibAPI_0061bcf0 + 0x10) + 0x48))(lVar3,uVar22,0);
    if ((!bVar21) && (0 < *(int *)PTR___log_level_0061bd30)) {
      FUN_0040fffa(&DAT_0041913e,"prlcc",1);
    }
    uVar26 = (undefined4)((ulong)in_stack_fffffffffffffe68 >> 0x20);
    uVar25 = (undefined4)((ulong)in_stack_fffffffffffffe60 >> 0x20);
    uVar23 = (undefined4)((ulong)in_stack_fffffffffffffe58 >> 0x20);
    lVar18 = (long)iVar10 * 0x80 + *(long *)(lVar3 + 0xe8);
    iVar7 = *(int *)(lVar18 + 0x18);
    iVar9 = *(int *)(lVar18 + 0x1c);
    if ((param_2[3] != iVar7) || (param_2[4] != iVar9)) {
      uVar16 = 0xfffffffc;
      FUN_0040fffa(&DAT_0041913e,"prlcc",0,
                   "Error: Dynamic Resolution: failed to resize screen! Actual size {%dx%d}.",iVar7,
                   iVar9);
      goto LAB_00409190;
    }
    if ((0 < (int)puVar11[0xe]) && (0 < *param_2)) {
      iVar7 = 0;
      lVar18 = 0;
      do {
        iVar9 = FUN_0040c990(param_1,iVar7,1);
        if (1 < *(int *)PTR___log_level_0061bd30) {
          in_stack_fffffffffffffe60 = " FAILED";
          if (iVar9 != 0) {
            in_stack_fffffffffffffe60 = "";
          }
          in_stack_fffffffffffffe58 =
               *(undefined8 *)(*(long *)(lVar18 + *(long *)(puVar11 + 0xc)) + 0x10);
          FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                       "Dynamic Resolution: reconnect Output %d {id=%d, name=%s}%s",iVar7,
                       ((long *)(lVar18 + *(long *)(puVar11 + 0xc)))[1],in_stack_fffffffffffffe58,
                       in_stack_fffffffffffffe60);
        }
        iVar7 = iVar7 + 1;
      } while ((iVar7 < (int)puVar11[0xe]) && (lVar18 = lVar18 + 0x18, iVar7 < *param_2));
    }
    FUN_004088e0(puVar11);
    puVar11 = (undefined4 *)FUN_004089a0(lVar3,iVar10);
    uVar26 = (undefined4)((ulong)in_stack_fffffffffffffe68 >> 0x20);
    uVar25 = (undefined4)((ulong)in_stack_fffffffffffffe60 >> 0x20);
    uVar23 = (undefined4)((ulong)in_stack_fffffffffffffe58 >> 0x20);
    if (puVar11 != (undefined4 *)0x0) {
      uVar16 = 0xffffffff;
      lVar3 = *param_1;
      lVar18 = FUN_004089a0(lVar3,*(undefined4 *)(lVar3 + 0xe0));
      uVar26 = (undefined4)((ulong)in_stack_fffffffffffffe68 >> 0x20);
      uVar25 = (undefined4)((ulong)in_stack_fffffffffffffe60 >> 0x20);
      uVar23 = (undefined4)((ulong)in_stack_fffffffffffffe58 >> 0x20);
      if (lVar18 != 0) {
        if (((*(int *)(lVar18 + 0x28) < 1) || (*(int *)(lVar18 + 0x38) < 1)) || (*param_2 < 1)) {
          uVar16 = 0;
        }
        else {
          local_118 = 0;
          local_110 = 0;
          piVar20 = param_2;
          while( true ) {
            uVar26 = (undefined4)((ulong)in_stack_fffffffffffffe68 >> 0x20);
            uVar23 = (undefined4)((ulong)in_stack_fffffffffffffe58 >> 0x20);
            uVar25 = (undefined4)((ulong)in_stack_fffffffffffffe60 >> 0x20);
            uVar8 = (undefined4)(in_stack_fffffffffffffe70 >> 0x20);
            local_40[0] = *(undefined8 *)(*(long *)(lVar18 + 0x30) + 8 + local_110);
            uVar22 = *(undefined8 *)(*(long *)(lVar18 + 0x20) + 8 + local_110);
            lVar19 = *(long *)(lVar18 + 0x40);
            if (*(int *)(lVar19 + 0x30) < 1) break;
            puVar17 = *(undefined8 **)(lVar19 + 0x38);
            iVar10 = 0;
            while ((*(int *)(puVar17 + 1) != piVar20[7] ||
                   (*(int *)((long)puVar17 + 0xc) != piVar20[8]))) {
              iVar10 = iVar10 + 1;
              puVar17 = puVar17 + 10;
              if (iVar10 == *(int *)(lVar19 + 0x30)) goto LAB_004095df;
            }
            iVar10 = piVar20[5];
            iVar7 = piVar20[6];
            iVar9 = param_2[1];
            iVar2 = param_2[2];
            if (1 < *(int *)PTR___log_level_0061bd30) {
              uVar27 = CONCAT44(uVar8,iVar10 - iVar9);
              local_120 = (undefined4)uVar22;
              uVar24 = CONCAT44(uVar25,local_120);
              FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                           "Dynamic Resolution: set Output %d {id=%d, name=%s} crtc {id=%d} mode {id=%d, x=%d, y=%d, width=%d, height=%d}..."
                           ,local_118,local_40[0],
                           *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x30) + local_110) + 0x10),
                           uVar24,CONCAT44(uVar26,(int)*puVar17),uVar27,iVar7 - iVar2,
                           *(undefined4 *)(puVar17 + 1),*(int *)((long)puVar17 + 0xc));
              uVar25 = (undefined4)((ulong)uVar24 >> 0x20);
              uVar8 = (undefined4)((ulong)uVar27 >> 0x20);
              lVar19 = *(long *)(lVar18 + 0x40);
            }
            in_stack_fffffffffffffe68 = local_40;
            in_stack_fffffffffffffe70 = CONCAT44(uVar8,1);
            in_stack_fffffffffffffe60 = (char *)CONCAT44(uVar25,1);
            in_stack_fffffffffffffe58 = *puVar17;
            iVar10 = (**(code **)(*(long *)(PTR_g_PrlXLibAPI_0061bcf0 + 0x10) + 0x40))
                               (lVar3,lVar19,uVar22,0,iVar10 - iVar9,iVar7 - iVar2,
                                in_stack_fffffffffffffe58,in_stack_fffffffffffffe60,
                                in_stack_fffffffffffffe68,in_stack_fffffffffffffe70);
            uVar16 = ~-(uint)(iVar10 == 0) & 0xfffffffd;
            if (1 < *(int *)PTR___log_level_0061bd30) {
              pcVar14 = "SUCCESS";
              if (uVar16 != 0) {
                pcVar14 = "ERROR";
              }
              FUN_0040fffa(&DAT_0041913e,"prlcc",2,"Dynamic Resolution:  %s set Output %d mode",
                           pcVar14,local_118);
            }
            uVar26 = (undefined4)((ulong)in_stack_fffffffffffffe68 >> 0x20);
            uVar25 = (undefined4)((ulong)in_stack_fffffffffffffe60 >> 0x20);
            uVar23 = (undefined4)((ulong)in_stack_fffffffffffffe58 >> 0x20);
            if (((uVar16 != 0) || (local_118 = local_118 + 1, *(int *)(lVar18 + 0x28) <= local_118))
               || (*(int *)(lVar18 + 0x38) <= local_118)) goto LAB_0040957c;
            local_110 = local_110 + 0x18;
            piVar20 = piVar20 + 4;
            if (*param_2 <= local_118) goto LAB_0040957c;
          }
LAB_004095df:
          uVar16 = 0xfffffffe;
          if (1 < *(int *)PTR___log_level_0061bd30) {
            uVar16 = 0xfffffffe;
            uVar22 = CONCAT44(uVar23,param_2[(long)local_118 * 4 + 8]);
            FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                         "Dynamic Resolution:  No mode for Output %d geometry {%dx%d}",local_118,
                         param_2[(long)local_118 * 4 + 7],uVar22);
            uVar23 = (undefined4)((ulong)uVar22 >> 0x20);
          }
        }
LAB_0040957c:
        FUN_004088e0(lVar18);
      }
      goto LAB_00409190;
    }
    FUN_0040fffa(&DAT_0041913e,"prlcc",0);
  }
  uVar16 = 0xffffffff;
LAB_00409190:
  if (1 < *(int *)PTR___log_level_0061bd30) {
    pcVar14 = "FAILED";
    if (uVar16 == 0) {
      pcVar14 = "OK";
    }
    uVar12 = 0;
    uVar8 = 0;
    if (puVar11 != (undefined4 *)0x0) {
      uVar8 = puVar11[7];
      uVar12 = puVar11[6];
    }
    FUN_0040fffa(&DAT_0041913e,"prlcc",2,
                 "Dynamic Resolution: RandR12 set new screen size {%dx%d}, dpi {%dx%d}, result=%d %s"
                 ,param_2[3],param_2[4],CONCAT44(uVar23,uVar12),CONCAT44(uVar25,uVar8),
                 CONCAT44(uVar26,uVar16),pcVar14);
  }
  if (puVar11 != (undefined4 *)0x0) {
    FUN_004088e0(puVar11);
  }
  return uVar16;
}

