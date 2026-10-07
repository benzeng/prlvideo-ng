
/* WARNING: Removing unreachable block (ram,0x000100434e68) */

undefined8 *
FUN_100434b30(undefined8 *param_1,long param_2,QString *param_3,uint param_4,int param_5,
             uint *param_6,byte param_7,undefined8 param_8,undefined4 param_9)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  void *pvVar10;
  long *plVar11;
  long *plVar12;
  void *pvVar13;
  uint *puVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  long *plVar22;
  bool bVar23;
  int iVar24;
  long *plVar25;
  long lVar26;
  ulong uVar27;
  uint local_458;
  ulong local_440;
  long *local_410;
  undefined4 local_408;
  undefined4 local_404;
  int local_400;
  int local_3fc;
  undefined8 *local_3f8;
  ulong uStack_3f0;
  undefined4 local_3e8;
  char local_3e4;
  undefined1 local_3d8 [12];
  char local_3cc;
  int local_3c8;
  long *local_38;
  
  if (0xf < param_4) {
    FUN_1008e3970("","IODesktopServer",0,
                  " Error: display \'%d\' is greater than PRL_IO_MAX_DISPLAYS",param_4);
    *param_1 = 0;
    return param_1;
  }
  if (((int)param_6[2] < (int)*param_6) || ((int)param_6[3] < (int)param_6[1])) {
    FUN_1008e3970("","IODesktopServer",0," Error: rectangle is null or is invalid!");
    *param_1 = 0;
    return param_1;
  }
  local_38 = (long *)0x0;
  QMutex::lock();
  bVar23 = true;
  if (*(long *)(param_2 + 0x4278) == 0) {
    FUN_1008e3970("","IODesktopServer",0,"Error: video mem is zero!");
    *param_1 = 0;
    goto LAB_1004354ee;
  }
  plVar12 = *(long **)(param_2 + 0x20);
  uVar1 = *(uint *)(plVar12 + 4);
  if (uVar1 != 0) {
    uVar5 = qHash(param_3,*(uint *)((long)plVar12 + 0x24));
    uVar27 = (ulong)uVar5 % (ulong)uVar1;
    plVar11 = *(long **)(plVar12[1] + uVar27 * 8);
    if (plVar11 != plVar12) {
      plVar22 = (long *)(plVar12[1] + uVar27 * 8);
      do {
        plVar16 = plVar11;
        plVar25 = plVar12;
        if (*(uint *)(plVar11 + 1) == uVar5) {
          cVar4 = operator==(param_3,(QString *)(plVar11 + 2));
          plVar12 = (long *)*plVar22;
          plVar25 = *(long **)(param_2 + 0x20);
          plVar16 = plVar12;
          if (cVar4 != '\0') break;
        }
        plVar12 = plVar25;
        plVar11 = (long *)*plVar16;
        plVar22 = plVar16;
        plVar25 = plVar12;
      } while (plVar11 != plVar12);
      if (plVar12 != plVar25) {
        lVar26 = (ulong)param_4 * 0x424;
        uVar1 = *(uint *)(param_2 + 0x40 + lVar26);
        uVar5 = *(uint *)(param_2 + 0x44 + lVar26);
        uVar17 = 0;
        uVar2 = param_6[3];
        local_458 = *param_6;
        uVar18 = param_6[1];
        uVar7 = param_6[2];
        if ((int)param_6[3] < (int)param_6[1] || (int)param_6[2] < (int)*param_6) {
          uVar2 = uVar5 - 1;
          local_458 = uVar17;
          uVar18 = uVar17;
          uVar7 = uVar1 - 1;
        }
        if (uVar1 <= local_458) {
          local_458 = uVar17;
        }
        if (uVar1 < uVar7 + 1) {
          uVar7 = uVar1 - 1;
        }
        if (uVar5 <= uVar18) {
          uVar18 = 0;
        }
        uVar17 = *(uint *)(param_2 + 0x3c + lVar26);
        if (uVar5 < uVar2 + 1) {
          uVar2 = uVar5 - 1;
        }
        iVar21 = *(int *)(param_2 + 0x48 + lVar26);
        iVar24 = *(int *)(param_2 + 0x4c + lVar26);
        lVar26 = (long)iVar24;
        uVar9 = FUN_100436170((undefined8 *)(param_2 + 0x20),param_3);
        FUN_100436d60(local_3d8,uVar9);
        if (param_5 == 0) {
          param_5 = local_3c8;
        }
        lVar15 = *(long *)(param_2 + 0x4278);
        QMutex::unlock();
        uVar6 = uVar2;
        if (local_3cc == '\0') {
          uVar9 = FUN_1004399e0();
          plVar12 = (long *)FUN_10043b310(uVar9,param_5);
          uVar20 = iVar21 + 7U >> 3;
          if ((param_5 - 0x14U < 0x20) && (plVar12 != (long *)0x0)) {
            local_458 = local_458 & 0xfffffffe;
            uVar18 = uVar18 & 0xfffffffe;
            uVar6 = uVar7 + 1;
            if ((uVar7 + 1 & 1) == 0) {
              uVar6 = uVar7;
            }
            if (uVar1 < uVar7 + 2) {
              uVar6 = uVar7;
            }
            uVar7 = uVar6;
            uVar6 = uVar2 + 1;
            if ((uVar2 + 1 & 1) == 0) {
              uVar6 = uVar2;
            }
            if (uVar5 < uVar2 + 2) {
              uVar6 = uVar2;
            }
          }
          pvVar10 = (void *)(lVar15 + (ulong)(local_458 * uVar20) +
                                      (long)(int)(iVar24 * uVar18) + (ulong)uVar17);
          if (plVar12 == (long *)0x0) {
            iVar24 = (uVar7 + 1) - local_458;
            iVar21 = (uVar6 + 1) - uVar18;
            local_440 = (ulong)(iVar21 * uVar20 * iVar24 + 0x18);
            pvVar13 = operator_new__(local_440);
            plVar11 = operator_new(0x18);
            *(undefined4 *)(plVar11 + 1) = 1;
            plVar11[2] = (long)pvVar13;
            *plVar11 = (long)&PTR_FUN_100bef320;
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            plVar12 = plVar11;
            if (local_38 != (long *)0x0) {
              LOCK();
              plVar22 = local_38 + 1;
              lVar15 = *plVar22;
              *(int *)plVar22 = (int)*plVar22 + -1;
              UNLOCK();
              if ((int)lVar15 == 1) {
                lVar15 = *local_38;
                local_38 = plVar11;
                (**(code **)(lVar15 + 0x10))();
                plVar12 = local_38;
              }
            }
            local_38 = plVar12;
            LOCK();
            plVar12 = plVar11 + 1;
            lVar15 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
            lVar15 = 0;
            if (local_38 != (long *)0x0) {
              lVar15 = local_38[2];
            }
            if (iVar21 < 1) {
              param_5 = 0;
            }
            else {
              pvVar13 = (void *)(lVar15 + 0x18);
              uVar27 = (ulong)(iVar24 * uVar20);
              iVar8 = (uVar18 - 2) - uVar6;
              iVar24 = -2;
              if (-3 < iVar8) {
                iVar24 = iVar8;
              }
              if (((uVar6 + 3 + iVar24) - uVar18 & 3) != 0) {
                iVar19 = -2;
                if (-3 < iVar8) {
                  iVar19 = iVar8;
                }
                iVar8 = -((uVar6 + 3 + iVar19) - uVar18 & 3);
                do {
                  iVar21 = iVar21 + -1;
                  _memcpy(pvVar13,pvVar10,uVar27);
                  pvVar10 = (void *)((long)pvVar10 + lVar26);
                  pvVar13 = (void *)((long)pvVar13 + uVar27);
                  iVar8 = iVar8 + 1;
                } while (iVar8 != 0);
              }
              if ((uVar6 + 2 + iVar24) - uVar18 < 3) {
                param_5 = 0;
              }
              else {
                iVar21 = iVar21 + 1;
                do {
                  _memcpy(pvVar13,pvVar10,uVar27);
                  _memcpy((void *)((long)pvVar13 + uVar27),(void *)((long)pvVar10 + lVar26),uVar27);
                  pvVar10 = (void *)((long)pvVar10 + lVar26 + lVar26);
                  _memcpy((void *)((long)pvVar13 + uVar27 * 2),pvVar10,uVar27);
                  pvVar10 = (void *)((long)pvVar10 + lVar26);
                  _memcpy((void *)((long)pvVar13 + uVar27 * 3),pvVar10,uVar27);
                  iVar21 = iVar21 + -4;
                  pvVar10 = (void *)((long)pvVar10 + lVar26);
                  pvVar13 = (void *)((long)pvVar13 + uVar27 * 4);
                } while (1 < iVar21);
                param_5 = 0;
              }
            }
            goto LAB_100435407;
          }
          local_3f8 = operator_new__(0x80000);
          local_3e8 = 0x80000;
          local_3e4 = '\x01';
          local_3f8[2] = 0;
          local_3f8[1] = 0;
          *local_3f8 = 0;
          uStack_3f0 = 0x1800000018;
          local_408 = 0;
          local_404 = 0;
          local_400 = uVar7 - local_458;
          local_3fc = uVar6 - uVar18;
          cVar4 = (**(code **)(*plVar12 + 0x10))
                            (plVar12,&local_408,pvVar10,lVar26,iVar21,&local_3f8);
          puVar3 = local_3f8;
          if (cVar4 == '\0') {
            local_440 = 0;
            FUN_1008e3970("","IODesktopServer",0,"Can\'t encode rectangle!");
            *param_1 = 0;
            bVar23 = true;
          }
          else {
            local_440 = uStack_3f0 & 0xffffffff;
            local_3f8 = (undefined8 *)0x0;
            uStack_3f0 = 0;
            local_3e4 = '\0';
            local_3e8 = 0;
            plVar11 = operator_new(0x18);
            *(undefined4 *)(plVar11 + 1) = 1;
            plVar11[2] = (long)puVar3;
            *plVar11 = (long)&PTR_FUN_100bef320;
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            plVar12 = plVar11;
            if (local_38 != (long *)0x0) {
              LOCK();
              plVar22 = local_38 + 1;
              lVar26 = *plVar22;
              *(int *)plVar22 = (int)*plVar22 + -1;
              UNLOCK();
              if ((int)lVar26 == 1) {
                lVar26 = *local_38;
                local_38 = plVar11;
                (**(code **)(lVar26 + 0x10))();
                plVar12 = local_38;
              }
            }
            local_38 = plVar12;
            LOCK();
            plVar12 = plVar11 + 1;
            lVar26 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar26 == 1) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
            bVar23 = false;
            if (param_7 != 0) {
              uStack_3f0 = 0;
            }
          }
          if ((local_3e4 != '\0') && (local_3f8 != (undefined8 *)0x0)) {
            operator_delete__(local_3f8);
          }
          if (!bVar23) goto LAB_100435407;
        }
        else {
          pvVar10 = operator_new__(0x18);
          plVar11 = operator_new(0x18);
          *(undefined4 *)(plVar11 + 1) = 1;
          plVar11[2] = (long)pvVar10;
          *plVar11 = (long)&PTR_FUN_100bef320;
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          plVar12 = plVar11;
          if (local_38 != (long *)0x0) {
            LOCK();
            plVar22 = local_38 + 1;
            lVar26 = *plVar22;
            *(int *)plVar22 = (int)*plVar22 + -1;
            UNLOCK();
            if ((int)lVar26 == 1) {
              lVar26 = *local_38;
              local_38 = plVar11;
              (**(code **)(lVar26 + 0x10))();
              plVar12 = local_38;
            }
          }
          local_38 = plVar12;
          param_5 = 0;
          local_440 = 0x18;
          LOCK();
          plVar12 = plVar11 + 1;
          lVar26 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar26 == 1) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
LAB_100435407:
          puVar14 = (uint *)0x0;
          if (local_38 != (long *)0x0) {
            puVar14 = (uint *)local_38[2];
          }
          if (local_3cc == '\0') {
            *puVar14 = (uint)param_7;
          }
          else {
            *puVar14 = uVar17;
          }
          puVar14[1] = local_458;
          puVar14[2] = uVar18;
          puVar14[3] = (uVar7 + 1) - local_458;
          puVar14[4] = (uVar6 + 1) - uVar18;
          puVar14[5] = param_4;
          FUN_100791610(&local_410,param_9,param_5,&local_38,local_440,param_8,1);
          *param_1 = local_410;
          if (local_410 != (long *)0x0) {
            LOCK();
            *(int *)(local_410 + 1) = (int)local_410[1] + 1;
            UNLOCK();
            if (local_410 != (long *)0x0) {
              LOCK();
              plVar12 = local_410 + 1;
              lVar26 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar26 == 1) {
                (**(code **)(*local_410 + 0x10))();
              }
            }
          }
        }
        bVar23 = false;
        FUN_100436a80(local_3d8);
        goto LAB_1004354ee;
      }
    }
  }
  FUN_1008e3970("","IODesktopServer",0,"Error: client has been disconnected!");
  *param_1 = 0;
LAB_1004354ee:
  if (bVar23) {
    QMutex::unlock();
  }
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar12 = local_38 + 1;
    lVar26 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar26 == 1) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  return param_1;
}

