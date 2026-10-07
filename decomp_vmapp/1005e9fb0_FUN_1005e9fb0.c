
/* WARNING: Removing unreachable block (ram,0x0001005ea909) */
/* WARNING: Removing unreachable block (ram,0x0001005ea923) */
/* WARNING: Removing unreachable block (ram,0x0001005ea953) */
/* WARNING: Removing unreachable block (ram,0x0001005ea956) */
/* WARNING: Removing unreachable block (ram,0x0001005ea967) */

undefined8 FUN_1005e9fb0(long param_1,long ***param_2,long *param_3)

{
  long ***ppplVar1;
  long ***ppplVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  long ****pppplVar6;
  long *****ppppplVar7;
  long *plVar8;
  long lVar9;
  long *****ppppplVar10;
  long *****ppppplVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *puVar15;
  bool bVar16;
  QDateTime local_138 [8];
  QString local_130;
  QFileInfo local_128 [8];
  QArrayData *local_120;
  long ****local_118;
  long ****local_110;
  long local_108;
  long ****local_100;
  long ****local_f8;
  long local_f0;
  undefined *local_e8;
  undefined1 uStack_d9;
  long ***local_d8;
  long ***local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 ****local_98;
  undefined8 ****ppppuStack_90;
  undefined8 local_88;
  long ***local_78;
  long ***local_70;
  long **local_68;
  long **local_60;
  long **local_58;
  long **local_50;
  long *local_48;
  long *local_40;
  long local_38;
  
  lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar12;
  QMutex::lock();
  uVar13 = 0x80021011;
  if (((param_2 != (long ***)0x0) && (*(long *)(param_1 + 0x68) != 0)) &&
     (*(long *)(*(long *)(param_1 + 0x68) + 0x10) != 0)) {
    FUN_1005d5ed0(param_2 + 6);
    FUN_1007d6870(&local_48);
    param_2[1] = (long **)local_40;
    *param_2 = (long **)local_48;
    local_e8 = PTR_shared_null_100ba2188;
    FUN_10051afa0(param_2 + 2,&local_e8);
    FUN_100013180(&local_e8);
    *(undefined1 *)(param_2 + 3) = 0;
    param_2[4] = (long **)0x0;
    local_f0 = 0;
    local_100 = (long ****)&local_100;
    local_f8 = (long ****)&local_100;
    FUN_1007d6870(&local_68);
    local_50 = local_60;
    local_58 = local_68;
    pppplVar6 = operator_new(0x28);
    pppplVar6[2] = param_2;
    pppplVar6[4] = (long ***)local_50;
    pppplVar6[3] = (long ***)local_58;
    pppplVar6[1] = (long ***)&local_100;
    *pppplVar6 = (long ***)local_100;
    local_100[1] = (long ***)pppplVar6;
    local_100 = pppplVar6;
    uVar13 = 0;
    local_f0 = local_f0 + 1;
    if (local_f0 != 0) {
      do {
        local_118 = (long ****)&local_118;
        local_110 = (long ****)&local_118;
        local_108 = 0;
        ppppplVar10 = &local_118;
        ppppplVar7 = &local_100;
        ppppplVar11 = (long *****)local_f8;
        if ((long *****)local_f8 != &local_100) {
          do {
            pppplVar6 = ppppplVar11[2];
            local_70 = (long ***)ppppplVar11[4];
            local_78 = (long ***)ppppplVar11[3];
            if (*(long **)(param_1 + 0x20) != (long *)(param_1 + 0x28)) {
              plVar8 = *(long **)(param_1 + 0x20);
              do {
                lVar12 = 0;
                if (plVar8[6] != 0) {
                  lVar12 = *(long *)(plVar8[6] + 0x10);
                }
                iVar5 = FUN_1007ea6f0(&local_78,lVar12 + 0x228);
                if (iVar5 == 0) {
                  local_98 = (undefined8 ****)0x0;
                  ppppuStack_90 = (undefined8 ****)0x0;
                  local_a8 = 0;
                  uStack_a0 = 0;
                  local_b8 = (undefined *)0x0;
                  uStack_b0 = 0;
                  local_c8 = 0;
                  uStack_c0 = 0;
                  local_88 = 0;
                  FUN_1007d6870(&local_c8);
                  local_b8 = PTR_shared_null_100ba2188;
                  QDateTime::QDateTime((QDateTime *)&uStack_a0);
                  local_88 = 0;
                  local_98 = &local_98;
                  ppppuStack_90 = &local_98;
                  FUN_1005d52c0(pppplVar6 + 6,&local_c8);
                  FUN_1005d5e30(&local_98);
                  QDateTime::~QDateTime((QDateTime *)&uStack_a0);
                  FUN_100013180(&local_b8);
                  ppplVar1 = pppplVar6[6];
                  lVar12 = 0;
                  if (plVar8[6] != 0) {
                    lVar12 = *(long *)(plVar8[6] + 0x10);
                  }
                  ppplVar2 = *(long ****)(lVar12 + 0x218);
                  ppplVar1[3] = *(long ***)(lVar12 + 0x220);
                  ppplVar1[2] = (long **)ppplVar2;
                  lVar12 = plVar8[6];
                  *(bool *)(ppplVar1 + 5) = lVar12 == *(long *)(param_1 + 0x68);
                  ppplVar1[6] = (long **)0x0;
                  if ((undefined8 *)*param_3 != (undefined8 *)param_3[1]) {
                    puVar15 = (undefined8 *)*param_3;
                    do {
                      lVar9 = 0;
                      if (lVar12 != 0) {
                        lVar9 = *(long *)(lVar12 + 0x10);
                      }
                      FUN_100594a40(&local_120,*puVar15,lVar9 + 0x218);
                      FUN_10000c490(ppplVar1 + 4,&local_120);
                      FUN_100585d90(&local_130,*puVar15,&local_120);
                      QFileInfo::QFileInfo(local_128,&local_130);
                      if (*(int *)local_130.field0_0x0 != -1) {
                        if (*(int *)local_130.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
                          uStack_d9 = *(int *)local_130.field0_0x0 != 0;
                          UNLOCK();
                          if ((bool)uStack_d9) goto LAB_1005ea37a;
                        }
                        QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
                      }
LAB_1005ea37a:
                      cVar4 = QDateTime::isValid();
                      if (cVar4 == '\0') {
                        QFileInfo::created();
                        QDateTime::operator=((QDateTime *)(ppplVar1 + 7),local_138);
                        QDateTime::~QDateTime(local_138);
                      }
                      lVar12 = QFileInfo::size();
                      ppplVar1[6] = (long **)((long)ppplVar1[6] + lVar12);
                      QFileInfo::~QFileInfo(local_128);
                      if (*(int *)local_120 != -1) {
                        if (*(int *)local_120 != 0) {
                          LOCK();
                          *(int *)local_120 = *(int *)local_120 + -1;
                          uStack_d9 = *(int *)local_120 != 0;
                          UNLOCK();
                          if ((bool)uStack_d9) goto LAB_1005ea418;
                        }
                        QArrayData::deallocate(local_120,2,8);
                      }
LAB_1005ea418:
                      if (puVar15 + 1 == (undefined8 *)param_3[1]) break;
                      lVar12 = plVar8[6];
                      puVar15 = puVar15 + 1;
                    } while( true );
                  }
                  local_d8 = (long ***)plVar8[4];
                  local_d0 = (long ***)plVar8[5];
                  ppppplVar7 = operator_new(0x28);
                  ppppplVar7[2] = (long ****)(ppplVar1 + 2);
                  ppppplVar7[4] = (long ****)local_d0;
                  ppppplVar7[3] = (long ****)local_d8;
                  ppppplVar7[1] = (long ****)&local_118;
                  *ppppplVar7 = local_118;
                  local_118[1] = (long ***)ppppplVar7;
                  local_118 = (long ****)ppppplVar7;
                  local_108 = local_108 + 1;
                }
                plVar3 = (long *)plVar8[1];
                if ((long *)plVar8[1] == (long *)0x0) {
                  do {
                    plVar14 = (long *)plVar8[2];
                    bVar16 = (long *)*plVar14 != plVar8;
                    plVar8 = plVar14;
                  } while (bVar16);
                }
                else {
                  do {
                    plVar14 = plVar3;
                    plVar3 = (long *)*plVar14;
                  } while ((long *)*plVar14 != (long *)0x0);
                }
                plVar8 = plVar14;
              } while (plVar14 != (long *)(param_1 + 0x28));
            }
            ppppplVar7 = ppppplVar11 + 1;
            ppppplVar11 = (long *****)*ppppplVar7;
          } while ((long *****)*ppppplVar7 != &local_100);
          ppppplVar11 = (long *****)local_110;
          for (ppppplVar7 = (long *****)local_f8;
              (ppppplVar10 = &local_118, ppppplVar11 != &local_118 &&
              (ppppplVar10 = ppppplVar11, ppppplVar7 != &local_100));
              ppppplVar7 = (long *****)ppppplVar7[1]) {
            ppppplVar7[2] = ppppplVar11[2];
            pppplVar6 = ppppplVar11[3];
            ppppplVar7[4] = ppppplVar11[4];
            ppppplVar7[3] = pppplVar6;
            ppppplVar11 = (long *****)ppppplVar11[1];
          }
        }
        if (ppppplVar7 == &local_100) {
          FUN_1005f3210(&local_100,&local_100,ppppplVar10,&local_118,0);
        }
        else {
          pppplVar6 = *ppppplVar7;
          pppplVar6[1] = local_100[1];
          *local_100[1] = (long **)pppplVar6;
          do {
            ppppplVar10 = (long *****)ppppplVar7[1];
            local_f0 = local_f0 + -1;
            operator_delete(ppppplVar7);
            ppppplVar7 = ppppplVar10;
          } while (ppppplVar10 != &local_100);
        }
        if (local_108 != 0) {
          pppplVar6 = (long ****)*local_110;
          pppplVar6[1] = local_118[1];
          *local_118[1] = (long **)pppplVar6;
          local_108 = 0;
          ppppplVar7 = (long *****)local_110;
          while (ppppplVar7 != &local_118) {
            ppppplVar10 = (long *****)ppppplVar7[1];
            operator_delete(ppppplVar7);
            ppppplVar7 = ppppplVar10;
          }
        }
        uVar13 = 0;
        lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
      } while (local_f0 != 0);
    }
  }
  QMutex::unlock();
  if (lVar12 == local_38) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

