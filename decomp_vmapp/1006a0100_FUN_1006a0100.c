
int FUN_1006a0100(long *param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  char cVar12;
  int iVar13;
  undefined4 uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  QArrayData *pQVar24;
  undefined8 *puVar25;
  
  uVar20 = (ulong)&stack0xffffffffffffffd0 & 0xfffffffffffff000;
  *(undefined8 *)(uVar20 - 0x40) = *(undefined8 *)PTR____stack_chk_guard_100ba2320;
  *(undefined4 *)(uVar20 - 0x2008) = 0;
  *(undefined8 *)(uVar20 - 0x2010) = 0;
  if ((param_3 & 2) == 0) {
    iVar13 = -0x7ffdefef;
    *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0173;
    FUN_1008e3970("","dimg",0,
                  "Error: can\'t create VMDK sparsed image without write access specified");
    goto LAB_1006a0be8;
  }
  *(undefined8 *)(uVar20 - 0x2050) = param_4;
  pcVar6 = *(code **)(*param_1 + 0x38);
  plVar8 = param_2 + 2;
  *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0199;
  iVar13 = (*pcVar6)(param_1,plVar8,param_3,1);
  if (iVar13 < 0) {
    piVar7 = (int *)*plVar8;
    *(int **)(uVar20 - 0x2020) = piVar7;
    if (1 < *piVar7 + 1U) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
      *(bool *)(uVar20 - 0x2001) = *piVar7 != 0;
    }
    *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0253;
    QString::toLocal8Bit();
    lVar22 = *(long *)(uVar20 - 0x2018);
    lVar18 = *(long *)(lVar22 + 0x10);
    *(undefined8 *)(uVar20 - 0x3008) = 0x1006a027d;
    FUN_1008e3970("","dimg",0,"Error: can\'t init values for VMDK image %s",lVar22 + lVar18);
    pQVar24 = *(QArrayData **)(uVar20 - 0x2018);
    if (*(int *)pQVar24 != -1) {
      if (*(int *)pQVar24 != 0) {
        LOCK();
        *(int *)pQVar24 = *(int *)pQVar24 + -1;
        UNLOCK();
        *(bool *)(uVar20 - 0x2001) = *(int *)pQVar24 != 0;
        if (*(char *)(uVar20 - 0x2001) != '\0') goto LAB_1006a02bd;
        pQVar24 = *(QArrayData **)(uVar20 - 0x2018);
      }
      *(undefined8 *)(uVar20 - 0x3008) = 0x1006a02bd;
      QArrayData::deallocate(pQVar24,1,8);
    }
LAB_1006a02bd:
    pQVar24 = *(QArrayData **)(uVar20 - 0x2020);
    if (*(int *)pQVar24 != -1) {
      if (*(int *)pQVar24 != 0) {
        LOCK();
        *(int *)pQVar24 = *(int *)pQVar24 + -1;
        UNLOCK();
        *(bool *)(uVar20 - 0x2001) = *(int *)pQVar24 != 0;
        if (*(char *)(uVar20 - 0x2001) != '\0') goto LAB_1006a0be8;
        pQVar24 = *(QArrayData **)(uVar20 - 0x2020);
      }
      *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0305;
      QArrayData::deallocate(pQVar24,2,8);
    }
    goto LAB_1006a0be8;
  }
  *(undefined1 *)(param_1 + 0x3028) = 1;
  uVar23 = (ulong)*(uint *)(param_2 + 1);
  *(ulong *)((long)param_1 + 0x1810c) = uVar23;
  uVar4 = *(uint *)((long)param_1 + 0x18124);
  uVar21 = uVar4 * uVar23;
  uVar21 = (*param_2 + -1 + uVar21) / uVar21;
  uVar2 = (uVar23 - 1) + *param_2;
  lVar22 = uVar2 - uVar2 % uVar23;
  *(long *)((long)param_1 + 0x18104) = lVar22;
  if (*(int *)((long)param_2 + 0xc) == 0x5d) {
    *(undefined8 *)((long)param_1 + 0x1811c) = 0;
    *(undefined8 *)((long)param_1 + 0x18114) = 0;
    lVar22 = 1;
LAB_1006a0371:
    uVar23 = uVar21 * 4 + 0x1ff >> 9;
    param_1[0x3025] = lVar22;
    lVar18 = (uVar4 * uVar21 * 4 + 0x1ff >> 9) + uVar23;
    lVar22 = lVar22 + lVar18;
    param_1[0x3026] = lVar22;
    uVar2 = lVar18 + *(ulong *)((long)param_1 + 0x1810c) + -1 + lVar22;
    lVar22 = uVar2 - uVar2 % *(ulong *)((long)param_1 + 0x1810c);
    param_1[0x3027] = lVar22;
    if (*(ulong *)((long)param_1 + 0x18104) < 0x100000000U - lVar22) {
      *(long *)(uVar20 - 0x2060) = (long)param_1 + 0x1811c;
      *(ulong *)(uVar20 - 0x2068) = uVar23;
      *(ulong *)(uVar20 - 0x2058) = uVar21;
      *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0409;
      cVar12 = FUN_100684b20(plVar8,lVar22 * 0x200);
      iVar13 = -0x7ffdefde;
      if (cVar12 != '\0') {
        pcVar6 = *(code **)(*param_1 + 0x50);
        *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0424;
        iVar13 = (*pcVar6)(param_1);
        if (iVar13 < 0) {
          iVar13 = -0x7ffdefe0;
          *(undefined8 *)(uVar20 - 0x3008) = 0x1006a063a;
          FUN_1008e3970("","dimg",0,"Error: memory allocation failed");
        }
        else {
          lVar18 = *(long *)(*param_1 + -0x18);
          pcVar6 = *(code **)(*(long *)((long)param_1 + lVar18) + 0x178);
          uVar17 = *(undefined8 *)(uVar20 - 0x2050);
          *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0454;
          iVar13 = (*pcVar6)((long)param_1 + lVar18,0,lVar22,uVar17);
          if (iVar13 < 0) {
            *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0660;
            FUN_1008e3970("","dimg",0,"Error: FillFileRange failed [%x]",iVar13);
          }
          else {
            pvVar3 = (void *)(uVar20 - 0x2000);
            *(undefined8 *)(uVar20 - 0x3008) = 0x1006a047c;
            ___bzero(pvVar3,0x1000);
            *(undefined8 *)(uVar20 - 0x3008) = 0x1006a048c;
            _memcpy(pvVar3,param_1 + 0x301f,0x200);
            plVar8 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
            pcVar6 = *(code **)(*plVar8 + 0x48);
            *(undefined8 *)(uVar20 - 0x3008) = 0x1006a04af;
            cVar12 = (*pcVar6)(plVar8,pvVar3,0x1000,0,0);
            if (cVar12 == '\0') {
              *(undefined8 *)(uVar20 - 0x3008) = 0x1006a067f;
              QString::toUtf8();
              lVar22 = *(long *)(uVar20 - 0x2030);
              lVar18 = *(long *)(lVar22 + 0x10);
              *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0690;
              uVar14 = FUN_100768f60();
              *(undefined8 *)(uVar20 - 0x3008) = 0x1006a06ba;
              FUN_1008e3970("","dimg",0,"Error: write header to VMDK \'%s\' failed, err %d",
                            lVar22 + lVar18,uVar14);
              pQVar24 = *(QArrayData **)(uVar20 - 0x2030);
              iVar13 = -0x7ffdefd9;
              if (*(int *)pQVar24 != -1) {
                if (*(int *)pQVar24 != 0) {
                  LOCK();
                  *(int *)pQVar24 = *(int *)pQVar24 + -1;
                  UNLOCK();
                  *(bool *)(uVar20 - 0x2001) = *(int *)pQVar24 != 0;
                  if (*(char *)(uVar20 - 0x2001) != '\0') goto LAB_1006a0b3e;
                  pQVar24 = *(QArrayData **)(uVar20 - 0x2030);
                }
                *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0708;
                QArrayData::deallocate(pQVar24,1,8);
              }
            }
            else {
              lVar18 = **(long **)(uVar20 - 0x2060);
              if (lVar18 != 0) {
                plVar8 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
                pcVar6 = *(code **)(*plVar8 + 0x48);
                uVar17 = 0;
                if (*(long *)(uVar20 - 0x2010) != 0) {
                  uVar17 = *(undefined8 *)(*(long *)(uVar20 - 0x2010) + 0x10);
                }
                lVar9 = *(long *)((long)param_1 + 0x18114);
                *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0507;
                cVar12 = (*pcVar6)(plVar8,uVar17,lVar18 << 9,uVar20 - 0x2008,lVar9 << 9);
                if (cVar12 == '\0') {
                  *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0843;
                  QString::toUtf8();
                  lVar22 = *(long *)(uVar20 - 0x2038);
                  lVar18 = *(long *)(lVar22 + 0x10);
                  *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0854;
                  uVar14 = FUN_100768f60();
                  *(undefined8 *)(uVar20 - 0x3008) = 0x1006a087e;
                  FUN_1008e3970("","dimg",0,
                                "Error: write embedded descriptor to VMDK \'%s\' failed, err %d",
                                lVar22 + lVar18,uVar14);
                  pQVar24 = *(QArrayData **)(uVar20 - 0x2038);
                  iVar13 = -0x7ffdefd9;
                  if (*(int *)pQVar24 != -1) {
                    if (*(int *)pQVar24 != 0) {
                      LOCK();
                      *(int *)pQVar24 = *(int *)pQVar24 + -1;
                      UNLOCK();
                      *(bool *)(uVar20 - 0x2001) = *(int *)pQVar24 != 0;
                      if (*(char *)(uVar20 - 0x2001) != '\0') goto LAB_1006a0b3e;
                      pQVar24 = *(QArrayData **)(uVar20 - 0x2038);
                    }
                    *(undefined8 *)(uVar20 - 0x3008) = 0x1006a08cc;
                    QArrayData::deallocate(pQVar24,1,8);
                  }
                  goto LAB_1006a0b3e;
                }
              }
              uVar21 = param_1[0x3025];
              *(long *)(uVar20 - 0x2060) = param_1[0x3026];
              *(ulong *)(uVar20 - 0x2070) = (uVar21 & 0xfffffffffffffff8) << 9;
              plVar8 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
              pcVar6 = *(code **)(*plVar8 + 0x40);
              uVar2 = uVar20 - 0x2000;
              *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0560;
              cVar12 = (*pcVar6)(plVar8,uVar2,0x1000,0);
              iVar13 = -0x7ffdefd7;
              uVar23 = *(ulong *)(uVar20 - 0x2058);
              if (cVar12 != '\0') {
                *(long *)(uVar20 - 0x2080) = lVar22 * 0x200;
                uVar17 = *(undefined8 *)(uVar20 - 0x2068);
                lVar22 = uVar21 << 9;
                *(long *)(uVar20 - 0x2078) = lVar22;
                uVar16 = 0;
                while( true ) {
                  uVar15 = lVar22 + uVar16 * 4;
                  uVar19 = uVar16;
                  do {
                    if (uVar23 <= uVar19) {
                      lVar22 = (*(ulong *)(uVar20 - 0x2060) & 0xfffffffffffffff8) << 9;
                      plVar8 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
                      pcVar6 = *(code **)(*plVar8 + 0x40);
                      uVar2 = uVar20 - 0x2000;
                      *(undefined8 *)(uVar20 - 0x3008) = 0x1006a07ec;
                      cVar12 = (*pcVar6)(plVar8,uVar2,0x1000,0,lVar22);
                      if (cVar12 == '\0') goto LAB_1006a0b3e;
                      *(long *)(uVar20 - 0x2070) = lVar22;
                      uVar17 = *(undefined8 *)(uVar20 - 0x2068);
                      lVar22 = *(long *)(uVar20 - 0x2060);
                      uVar16 = lVar22 << 9 | 4;
                      *(ulong *)(uVar20 - 0x2060) = uVar16;
                      uVar21 = 0;
                      goto LAB_1006a08f8;
                    }
                    uVar16 = uVar19 + 1;
                    *(uint *)(uVar15 & 0xffc | uVar2) =
                         (int)uVar19 * (*(uint *)((long)param_1 + 0x18124) >> 7) +
                         (int)uVar21 + (int)uVar17;
                  } while ((uVar16 != uVar23) &&
                          (uVar15 = uVar15 + 4, uVar19 = uVar16, (uVar15 & 0xffc) != 0));
                  plVar8 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
                  pcVar6 = *(code **)(*plVar8 + 0x48);
                  uVar10 = *(undefined8 *)(uVar20 - 0x2070);
                  *(undefined8 *)(uVar20 - 0x3008) = 0x1006a07a1;
                  cVar12 = (*pcVar6)(plVar8,uVar2,0x1000,0,uVar10);
                  if (cVar12 == '\0') break;
                  *(undefined8 *)(uVar20 - 0x3008) = 0x1006a071a;
                  ___bzero(uVar2,0x1000);
                  *(long *)(uVar20 - 0x2070) = *(long *)(uVar20 - 0x2070) + 0x1000;
                  uVar23 = *(ulong *)(uVar20 - 0x2058);
                  lVar22 = *(long *)(uVar20 - 0x2078);
                }
LAB_1006a0978:
                *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0992;
                QString::toUtf8();
                lVar22 = *(long *)(uVar20 - 0x2040);
                lVar18 = *(long *)(lVar22 + 0x10);
                *(undefined8 *)(uVar20 - 0x3008) = 0x1006a09a3;
                uVar14 = FUN_100768f60();
                *(undefined8 *)(uVar20 - 0x3008) = 0x1006a09cd;
                FUN_1008e3970("","dimg",0,"Error: write to VMDK \'%s\' failed, err %d",
                              lVar22 + lVar18,uVar14);
                pQVar24 = *(QArrayData **)(uVar20 - 0x2040);
                iVar13 = -0x7ffdefd9;
                if (*(int *)pQVar24 != -1) {
                  if (*(int *)pQVar24 != 0) {
                    LOCK();
                    *(int *)pQVar24 = *(int *)pQVar24 + -1;
                    UNLOCK();
                    *(bool *)(uVar20 - 0x2001) = *(int *)pQVar24 != 0;
                    if (*(char *)(uVar20 - 0x2001) != '\0') goto LAB_1006a0b3e;
                    pQVar24 = *(QArrayData **)(uVar20 - 0x2040);
                  }
                  *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0a1b;
                  QArrayData::deallocate(pQVar24,1,8);
                }
              }
            }
          }
        }
      }
    }
    else {
      iVar13 = -0x7ffffffd;
      *(undefined8 *)(uVar20 - 0x3008) = 0x1006a05c5;
      FUN_1008e3970("","dimg",0,"Error: required size %llu is too big for VMDK image");
    }
  }
  else if (*(int *)((long)param_2 + 0xc) == 0x5b) {
    *(undefined8 *)(uVar20 - 0x2028) = 0;
    *(undefined8 *)(uVar20 - 0x3008) = 0x1006a033e;
    iVar13 = FUN_1006a0df0(lVar22,plVar8,uVar20 - 0x2010,uVar20 - 0x2028);
    if (-1 < iVar13) {
      *(undefined8 *)((long)param_1 + 0x18114) = 1;
      lVar22 = *(long *)(uVar20 - 0x2028);
      *(long *)((long)param_1 + 0x1811c) = lVar22;
      lVar22 = lVar22 + 1;
      goto LAB_1006a0371;
    }
    *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0611;
    FUN_1008e3970("","dimg",0,"Error: can\'t create embedded descriptor");
  }
  else {
    iVar13 = -0x7ffdefef;
    *(undefined8 *)(uVar20 - 0x3008) = 0x1006a05ee;
    FUN_1008e3970("","dimg",0,"Error: invalid image type: %d");
  }
LAB_1006a0b3e:
  pcVar6 = *(code **)(*param_1 + 0x40);
  *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0b4b;
  (*pcVar6)(param_1);
  pcVar6 = *(code **)(*param_1 + 0x178);
  *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0b5b;
  (*pcVar6)(param_1);
  *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0b75;
  QString::toUtf8();
  lVar22 = *(long *)(uVar20 - 0x2048);
  lVar18 = *(long *)(lVar22 + 0x10);
  *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0b86;
  _remove((char *)(lVar22 + lVar18));
  pQVar24 = *(QArrayData **)(uVar20 - 0x2048);
  if (*(int *)pQVar24 != -1) {
    if (*(int *)pQVar24 != 0) {
      LOCK();
      *(int *)pQVar24 = *(int *)pQVar24 + -1;
      UNLOCK();
      *(bool *)(uVar20 - 0x2001) = *(int *)pQVar24 != 0;
      if (*(char *)(uVar20 - 0x2001) != '\0') goto LAB_1006a0bc6;
      pQVar24 = *(QArrayData **)(uVar20 - 0x2048);
    }
    *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0bc6;
    QArrayData::deallocate(pQVar24,1,8);
  }
  goto LAB_1006a0bc6;
LAB_1006a08f8:
  uVar16 = uVar16 + uVar21 * 4;
  uVar15 = uVar21;
  do {
    if (uVar23 <= uVar15) {
      iVar13 = 1000;
      puVar25 = *(undefined8 **)(uVar20 - 0x2050);
      goto LAB_1006a0a33;
    }
    uVar21 = uVar15 + 1;
    *(uint *)((ulong)((int)uVar16 - 4) & 0xffc | uVar2) =
         (int)uVar15 * (*(uint *)((long)param_1 + 0x18124) >> 7) + (int)uVar17 + (int)lVar22;
  } while ((uVar21 != uVar23) &&
          (uVar19 = uVar16 & 0xffc, uVar16 = uVar16 + 4, uVar15 = uVar21, uVar19 != 0));
  plVar8 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
  pcVar6 = *(code **)(*plVar8 + 0x48);
  uVar10 = *(undefined8 *)(uVar20 - 0x2070);
  *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0970;
  cVar12 = (*pcVar6)(plVar8,uVar2,0x1000,0,uVar10);
  if (cVar12 == '\0') goto LAB_1006a0978;
  *(undefined8 *)(uVar20 - 0x3008) = 0x1006a08de;
  ___bzero(uVar2,0x1000);
  *(long *)(uVar20 - 0x2070) = *(long *)(uVar20 - 0x2070) + 0x1000;
  uVar16 = *(ulong *)(uVar20 - 0x2060);
  goto LAB_1006a08f8;
LAB_1006a0a33:
  pcVar6 = (code *)*puVar25;
  if ((pcVar6 == (code *)0x0) && (puVar25[4] == 0)) goto LAB_1006a0aa1;
  if ((-1 < iVar13) && (1 < *(uint *)(puVar25 + 2))) {
    iVar5 = *(int *)((long)puVar25 + 0x14);
    if (iVar13 < *(int *)((long)puVar25 + 0x14)) {
      *(int *)((long)puVar25 + 0x14) = iVar13;
      goto LAB_1006a0aa1;
    }
    *(int *)((long)puVar25 + 0x14) = iVar13;
    iVar13 = (uint)(iVar13 - iVar5) / *(uint *)(puVar25 + 2) + *(int *)(puVar25 + 3);
    *(int *)(puVar25 + 3) = iVar13;
  }
  if (pcVar6 != (code *)0x0) goto code_r0x0001006a0a69;
  puVar25 = (undefined8 *)puVar25[4];
  goto LAB_1006a0a33;
code_r0x0001006a0a69:
  uVar17 = puVar25[1];
  *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0a71;
  cVar12 = (*pcVar6)(iVar13,uVar17);
  if (cVar12 == '\0') {
    iVar13 = -0x7ffdefc8;
    *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0a99;
    FUN_1008e3970("","dimg",0,"Error: interrupting create at completion");
    goto LAB_1006a0b3e;
  }
LAB_1006a0aa1:
  pcVar6 = *(code **)(*param_1 + 0x28);
  *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0aae;
  iVar13 = (*pcVar6)(param_1);
  uVar17 = *(undefined8 *)(uVar20 - 0x2080);
  if (iVar13 < 0) {
    *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0b3e;
    FUN_1008e3970("","dimg",0,"Error: flush failed, 0x%x",iVar13);
    goto LAB_1006a0b3e;
  }
  lVar22 = *(long *)(*param_1 + -0x18);
  pcVar6 = *(code **)(*(long *)((long)param_1 + lVar22) + 0x180);
  *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0ad9;
  (*pcVar6)((long)param_1 + lVar22,uVar17);
  lVar22 = (long)param_1 + *(long *)(*param_1 + -0x18);
  lVar18 = *(long *)((long)param_1 + *(long *)(*param_1 + -0x18));
  pcVar6 = *(code **)(lVar18 + 0x160);
  pcVar11 = *(code **)(lVar18 + 0x188);
  *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0afe;
  uVar17 = (*pcVar6)(lVar22);
  *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0b07;
  (*pcVar11)(lVar22,uVar17);
  *(undefined1 *)(*(long *)(*param_1 + -0x18) + 0x48 + (long)param_1) = 1;
  iVar13 = 0;
LAB_1006a0bc6:
  plVar8 = *(long **)(uVar20 - 0x2010);
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar22 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar22 == 1) {
      pcVar6 = *(code **)(*plVar8 + 0x10);
      *(undefined8 *)(uVar20 - 0x3008) = 0x1006a0be8;
      (*pcVar6)();
    }
  }
LAB_1006a0be8:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != *(long *)(uVar20 - 0x40)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(uVar20 - 0x3008) = &UNK_1006a0c43;
    ___stack_chk_fail();
  }
  return iVar13;
}

