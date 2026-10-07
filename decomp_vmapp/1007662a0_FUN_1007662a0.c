
undefined1 FUN_1007662a0(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined1 uVar11;
  long *plVar12;
  long **pplVar13;
  long **pplVar14;
  long **pplVar15;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long **local_48 [2];
  long local_38;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
  pplVar15 = &local_80;
  local_48[1] = &local_b0;
  local_b0 = param_2;
  local_80 = param_1;
  local_48[0] = pplVar15;
  local_38 = lVar8;
  cVar2 = (**(code **)(*param_1 + 0x68))(param_1,1);
  if (cVar2 == '\0') {
    (**(code **)(*param_1 + 0xe0))(&local_c0,param_1);
    QString::toUtf8();
    FUN_1008e3970("","etrace",0,"Failed to open %s to dump eTrace buffer",
                  local_b8 + *(long *)(local_b8 + 0x10));
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        UNLOCK();
        local_50 = (long *)CONCAT71(local_50._1_7_,*(int *)local_b8 != 0);
        if (*(int *)local_b8 != 0) goto LAB_100766400;
      }
      QArrayData::deallocate(local_b8,1,8);
    }
LAB_100766400:
    if (*(int *)local_c0 == -1) {
      uVar11 = 0;
      goto LAB_100766e13;
    }
    local_e0 = local_c0;
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      UNLOCK();
      local_50 = (long *)CONCAT71(local_50._1_7_,*(int *)local_c0 != 0);
      if (*(int *)local_c0 != 0) {
        uVar11 = 0;
        goto LAB_100766e13;
      }
    }
  }
  else {
    cVar2 = (**(code **)(*param_2 + 0x68))(param_2,1);
    if (cVar2 == '\0') {
      (**(code **)(*param_2 + 0xe0))(&local_d0,param_2);
      QString::toUtf8();
      FUN_1008e3970("","etrace",0,"Failed to open %s to dump eTrace buffer",
                    local_c8 + *(long *)(local_c8 + 0x10));
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          UNLOCK();
          local_50 = (long *)CONCAT71(local_50._1_7_,*(int *)local_c8 != 0);
          if (*(int *)local_c8 != 0) goto LAB_10076649e;
        }
        QArrayData::deallocate(local_c8,1,8);
      }
LAB_10076649e:
      if (*(int *)local_d0 == -1) {
        uVar11 = 0;
        goto LAB_100766e13;
      }
      local_e0 = local_d0;
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        UNLOCK();
        local_50 = (long *)CONCAT71(local_50._1_7_,*(int *)local_d0 != 0);
        if (*(int *)local_d0 != 0) {
          uVar11 = 0;
          goto LAB_100766e13;
        }
      }
    }
    else {
      cVar2 = (**(code **)(*param_3 + 0x68))(param_3,10);
      if (cVar2 != '\0') {
        lVar4 = (**(code **)(*param_1 + 0x80))(param_1);
        if ((0xfffff < lVar4) && (lVar4 = (**(code **)(*param_2 + 0x80))(param_2), 0xfffff < lVar4))
        {
          QIODevice::read((char *)local_80,(longlong)&local_50);
          local_68 = local_50;
          QIODevice::read((char *)local_b0,(longlong)&local_50);
          local_98 = local_50;
          if (local_68 != local_50) {
            FUN_1008e3970("","etrace",0,
                          "Files were written on different hosts, cpu_mhz mismatch: %lld %lld.");
          }
          QIODevice::read((char *)local_80,(longlong)&local_50);
          local_70 = local_50;
          QIODevice::read((char *)local_80,(longlong)&local_50);
          local_78 = local_50;
          QIODevice::read((char *)local_b0,(longlong)&local_50);
          local_a0 = local_50;
          QIODevice::read((char *)local_b0,(longlong)&local_50);
          local_a8 = local_50;
          if ((ulong)local_68 >> 0x20 == 0) {
            uVar5 = (ulong)local_70 / (ulong)local_68;
          }
          else {
            uVar5 = (((ulong)local_68 & 0xffffffff) * (long)local_70) /
                    (((ulong)local_68 >> 0x20) * 1000 & 0xfffffff8);
          }
          if (local_98 < (long *)0x100000000) {
            uVar6 = (ulong)local_a0 / (ulong)local_98;
          }
          else {
            uVar6 = (((ulong)local_98 & 0xffffffff) * (long)local_a0) /
                    (((ulong)local_98 >> 0x20) * 1000 & 0xfffffff8);
          }
          lVar8 = uVar5 - uVar6;
          bVar1 = uVar6 <= uVar5 && lVar8 != 0;
          uVar7 = (ulong)bVar1;
          if (uVar6 > uVar5 || lVar8 == 0) {
            lVar8 = uVar6 - uVar5;
          }
          lVar4 = 0;
          if (local_68 != local_98) {
            lVar4 = lVar8;
          }
          lVar8 = *(long *)(uVar7 * 8 | (ulong)local_48);
          local_50 = *(long **)(lVar8 + 0x18);
          QIODevice::write((char *)param_3,(longlong)&local_50);
          local_50 = *(long **)(lVar8 + 0x10);
          QIODevice::write((char *)param_3,(longlong)&local_50);
          local_50 = *(long **)(lVar8 + 8);
          QIODevice::write((char *)param_3,(longlong)&local_50);
          QIODevice::read((char *)local_80,(longlong)&local_50);
          local_60 = local_50;
          QIODevice::read((char *)local_80,(longlong)&local_50);
          local_58 = local_50;
          QIODevice::read((char *)local_b0,(longlong)&local_50);
          local_90 = local_50;
          QIODevice::read((char *)local_b0,(longlong)&local_50);
          local_88 = local_50;
          plVar10 = local_a0;
          plVar9 = local_70;
          if (lVar4 == 0) {
            plVar10 = (long *)0x0;
            plVar9 = (long *)0x0;
          }
          uVar5 = ((ulong)local_60 & 0xffffffffffff) * 0x100 - (long)plVar9;
          if (local_68 < (long *)0x100000000) {
            uVar5 = uVar5 / (ulong)local_68;
          }
          else {
            uVar5 = (((ulong)local_68 & 0xffffffff) * uVar5) /
                    (((ulong)local_68 >> 0x20) * 1000 & 0xfffffff8);
          }
          pplVar13 = &local_b0;
          uVar6 = ((ulong)local_90 & 0xffffffffffff) * 0x100 - (long)plVar10;
          if (local_98 < (long *)0x100000000) {
            uVar6 = uVar6 / (ulong)local_98;
          }
          else {
            uVar6 = (((ulong)local_98 & 0xffffffff) * uVar6) /
                    (((ulong)local_98 >> 0x20) * 1000 & 0xfffffff8);
          }
          if (uVar6 < uVar5) {
            pplVar15 = &local_b0;
            pplVar13 = &local_80;
            local_48[0] = pplVar15;
            local_48[1] = pplVar13;
            uVar7 = (ulong)(bVar1 ^ 1);
          }
          do {
            pplVar14 = pplVar13;
            iVar3 = (int)uVar7;
            lVar8 = lVar4;
            if (iVar3 == 0) {
              lVar8 = 0;
            }
            do {
              plVar9 = pplVar15[4];
              if (plVar9 == (long *)0x0) {
                plVar9 = pplVar14[4];
                local_48[0] = pplVar14;
                local_48[1] = pplVar15;
                if (plVar9 != (long *)0x0) {
                  if (iVar3 != 0) {
                    lVar4 = 0;
                  }
                  do {
                    uVar5 = ((ulong)plVar9 & 0xffffffffffff) * 0x100;
                    plVar10 = pplVar14[3];
                    if (plVar10 < (long *)0x100000000) {
                      uVar5 = uVar5 / (ulong)plVar10;
                    }
                    else {
                      uVar5 = (((ulong)plVar10 & 0xffffffff) * uVar5) /
                              (((ulong)plVar10 >> 0x20) * 1000 & 0xfffffff8);
                    }
                    plVar10 = local_48[iVar3 == 0][3];
                    if (plVar10 < (long *)0x100000000) {
                      uVar5 = (long)plVar10 * (uVar5 - lVar4);
                    }
                    else {
                      uVar5 = ((uVar5 - lVar4) * ((ulong)plVar10 >> 0x20) * 1000) /
                              ((ulong)plVar10 & 0xffffffff);
                    }
                    plVar9 = (long *)(uVar5 >> 8 & 0xffffffffffff |
                                     (ulong)plVar9 & 0xffff000000000000);
                    pplVar14[4] = plVar9;
                    local_50 = plVar9;
                    QIODevice::write((char *)param_3,(longlong)&local_50);
                    local_50 = pplVar14[5];
                    QIODevice::write((char *)param_3,(longlong)&local_50);
                    QIODevice::read((char *)*pplVar14,(longlong)&local_50);
                    pplVar14[4] = local_50;
                    QIODevice::read((char *)*pplVar14,(longlong)&local_50);
                    pplVar14[5] = local_50;
                    plVar9 = pplVar14[4];
                  } while (plVar9 != (long *)0x0);
                }
                local_50 = (long *)0x0;
                QIODevice::write((char *)param_3,(longlong)&local_50);
                local_50 = (long *)0x0;
                QIODevice::write((char *)param_3,(longlong)&local_50);
                QIODevice::read((char *)param_1,(longlong)&local_50);
                plVar9 = local_50;
                QIODevice::read((char *)param_2,(longlong)&local_50);
                if (local_50 < plVar9) {
                  local_50 = plVar9;
                }
                QIODevice::write((char *)param_3,(longlong)&local_50);
                lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
                (**(code **)(*param_1 + 0x70))();
                (**(code **)(*param_2 + 0x70))(param_2);
                (**(code **)(*param_3 + 0x70))(param_3);
                uVar11 = 1;
                goto LAB_100766e13;
              }
              uVar5 = ((ulong)plVar9 & 0xffffffffffff) * 0x100;
              plVar10 = pplVar15[3];
              if (plVar10 < (long *)0x100000000) {
                uVar5 = uVar5 / (ulong)plVar10;
              }
              else {
                uVar5 = (((ulong)plVar10 & 0xffffffff) * uVar5) /
                        (((ulong)plVar10 >> 0x20) * 1000 & 0xfffffff8);
              }
              plVar10 = local_48[iVar3][3];
              if (plVar10 < (long *)0x100000000) {
                uVar5 = (long)plVar10 * (uVar5 - lVar8);
              }
              else {
                uVar5 = ((uVar5 - lVar8) * ((ulong)plVar10 >> 0x20) * 1000) /
                        ((ulong)plVar10 & 0xffffffff);
              }
              plVar9 = (long *)(uVar5 >> 8 & 0xffffffffffff | (ulong)plVar9 & 0xffff000000000000);
              pplVar15[4] = plVar9;
              local_50 = plVar9;
              QIODevice::write((char *)param_3,(longlong)&local_50);
              local_50 = pplVar15[5];
              QIODevice::write((char *)param_3,(longlong)&local_50);
              QIODevice::read((char *)*pplVar15,(longlong)&local_50);
              pplVar15[4] = local_50;
              QIODevice::read((char *)*pplVar15,(longlong)&local_50);
              pplVar15[5] = local_50;
              plVar9 = pplVar15[3];
              plVar10 = pplVar15[2];
              if (lVar4 == 0) {
                plVar10 = (long *)0x0;
              }
              plVar12 = pplVar14[2];
              if (lVar4 == 0) {
                plVar12 = (long *)0x0;
              }
              uVar5 = ((ulong)pplVar15[4] & 0xffffffffffff) * 0x100 - (long)plVar10;
              if (plVar9 < (long *)0x100000000) {
                uVar5 = uVar5 / (ulong)plVar9;
              }
              else {
                uVar5 = (((ulong)plVar9 & 0xffffffff) * uVar5) /
                        (((ulong)plVar9 >> 0x20) * 1000 & 0xfffffff8);
              }
              uVar6 = ((ulong)pplVar14[4] & 0xffffffffffff) * 0x100 - (long)plVar12;
              plVar9 = pplVar14[3];
              if (plVar9 < (long *)0x100000000) {
                uVar6 = uVar6 / (ulong)plVar9;
              }
              else {
                uVar6 = (((ulong)plVar9 & 0xffffffff) * uVar6) /
                        (((ulong)plVar9 >> 0x20) * 1000 & 0xfffffff8);
              }
            } while (uVar5 <= uVar6);
            local_48[0] = pplVar14;
            local_48[1] = pplVar15;
            uVar7 = (ulong)(iVar3 == 0);
            pplVar13 = pplVar15;
            pplVar15 = pplVar14;
          } while( true );
        }
        uVar11 = 0;
        FUN_1008e3970("","etrace",0,"Input files are too small, not eTrace dumps");
        goto LAB_100766e13;
      }
      (**(code **)(*param_3 + 0xe0))(&local_e0,param_3);
      QString::toUtf8();
      FUN_1008e3970("","etrace",0,"Failed to open %s to dump eTrace buffer",
                    local_d8 + *(long *)(local_d8 + 0x10));
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          UNLOCK();
          local_50 = (long *)CONCAT71(local_50._1_7_,*(int *)local_d8 != 0);
          if (*(int *)local_d8 != 0) goto LAB_10076655d;
        }
        QArrayData::deallocate(local_d8,1,8);
      }
LAB_10076655d:
      if (*(int *)local_e0 == -1) {
        uVar11 = 0;
        goto LAB_100766e13;
      }
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        UNLOCK();
        local_50 = (long *)CONCAT71(local_50._1_7_,*(int *)local_e0 != 0);
        if (*(int *)local_e0 != 0) {
          uVar11 = 0;
          goto LAB_100766e13;
        }
      }
    }
  }
  QArrayData::deallocate(local_e0,2,8);
  uVar11 = 0;
LAB_100766e13:
  if (lVar8 == local_38) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

