
undefined4 FUN_100067bc0(int param_1,char **param_2)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  QArrayData *pQVar8;
  size_t sVar9;
  Data *pDVar10;
  code *pcVar11;
  Data *pDVar12;
  long lVar13;
  undefined1 local_198 [120];
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QString local_f0;
  QFileInfo local_e8 [8];
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  Data *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  Data *local_98;
  Data *local_90;
  undefined **local_88 [2];
  long *local_78;
  int local_6c;
  QArrayData *local_68;
  undefined1 local_59;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_78 = (long *)0x0;
  local_6c = param_1;
  local_38 = lVar2;
  FUN_1000696b0("PVE::IDispatcherCommands",0,0);
  QCoreApplication::QCoreApplication((QCoreApplication *)local_88,&local_6c,param_2,0x50501);
  local_88[0] = &PTR_FUN_100ba8670;
  QCoreApplication::arguments();
  FUN_1007102d0(&local_90,&local_98);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_59 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_100067cd1;
    }
    iVar6 = *(int *)(local_98 + 0xc);
    if (iVar6 != *(int *)(local_98 + 8)) {
      lVar13 = (long)*(int *)(local_98 + 8) * 8 + (long)iVar6 * -8;
      pDVar12 = local_98 + (long)iVar6 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar12;
        if (*(int *)pQVar8 == 0) {
LAB_100067cb0:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_59 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_59) {
            pQVar8 = *(QArrayData **)pDVar12;
            goto LAB_100067cb0;
          }
        }
        pDVar12 = pDVar12 + -8;
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0);
    }
    QListData::dispose(local_98);
  }
LAB_100067cd1:
  FUN_1008e3970("","vm",0,"*****************************************************************");
  local_b0 = local_90;
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 == 0) {
      QListData::detach((int)&local_b0);
      iVar6 = *(int *)(local_b0 + 8);
      if (iVar6 != *(int *)(local_b0 + 0xc)) {
        pDVar12 = local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10;
        pDVar10 = local_b0 + (long)iVar6 * 8 + 0x10;
        lVar13 = (long)*(int *)(local_b0 + 0xc) * 8 + (long)iVar6 * -8;
        do {
          piVar3 = *(int **)pDVar12;
          *(int **)pDVar10 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            local_59 = *piVar3 != 0;
            UNLOCK();
          }
          pDVar10 = pDVar10 + 8;
          pDVar12 = pDVar12 + 8;
          lVar13 = lVar13 + -8;
        } while (lVar13 != 0);
      }
    }
    else {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + 1;
      local_59 = *(int *)local_90 != 0;
      UNLOCK();
    }
  }
  pQVar8 = (QArrayData *)QString::fromAscii_helper(" ",1);
  QtPrivate::QStringList_join
            ((QStringList *)&local_a8,(QChar *)&local_b0,
             (int)*(undefined8 *)(pQVar8 + 0x10) + (int)pQVar8);
  QString::toUtf8();
  FUN_1008e3970("","vm",0,"started \"%s\"",local_a0 + *(long *)(local_a0 + 0x10));
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_59 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_100067e22;
    }
    QArrayData::deallocate(local_a0,1,8);
  }
LAB_100067e22:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_59 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_100067e58;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100067e58:
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_59 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_100067e83;
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_100067e83:
  pDVar12 = local_b0;
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_59 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_100067f11;
    }
    iVar6 = *(int *)(local_b0 + 0xc);
    if (iVar6 != *(int *)(local_b0 + 8)) {
      lVar13 = (long)*(int *)(local_b0 + 8) * 8 + (long)iVar6 * -8;
      pDVar10 = local_b0 + (long)iVar6 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar10;
        if (*(int *)pQVar8 == 0) {
LAB_100067ef0:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_59 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_59) {
            pQVar8 = *(QArrayData **)pDVar10;
            goto LAB_100067ef0;
          }
        }
        pDVar10 = pDVar10 + -8;
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0);
    }
    QListData::dispose(pDVar12);
  }
LAB_100067f11:
  FUN_1008e3970("","vm",0,"*****************************************************************");
  puVar4 = PTR_s___uuid_10116da30;
  iVar6 = -1;
  if (PTR_s___uuid_10116da30 != (undefined *)0x0) {
    sVar9 = _strlen(PTR_s___uuid_10116da30);
    iVar6 = (int)sVar9;
  }
  local_c0 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar6);
  FUN_100710370(&local_b8,&local_90,&local_c0);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_59 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_100067fad;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100067fad:
  puVar4 = PTR_s___dir_uuid_10116da38;
  iVar6 = -1;
  if (PTR_s___dir_uuid_10116da38 != (undefined *)0x0) {
    sVar9 = _strlen(PTR_s___dir_uuid_10116da38);
    iVar6 = (int)sVar9;
  }
  local_d0 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar6);
  FUN_100710370(&local_c8,&local_90,&local_d0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_59 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_10006802b;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10006802b:
  puVar4 = PTR_s___mode_10116da68;
  iVar6 = -1;
  if (PTR_s___mode_10116da68 != (undefined *)0x0) {
    sVar9 = _strlen(PTR_s___mode_10116da68);
    iVar6 = (int)sVar9;
  }
  local_e0 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar6);
  FUN_100710370(&local_d8,&local_90,&local_e0);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_59 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_1000680a9;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1000680a9:
  puVar4 = PTR_s___openvm_10116da28;
  iVar6 = -1;
  if (PTR_s___openvm_10116da28 != (undefined *)0x0) {
    sVar9 = _strlen(PTR_s___openvm_10116da28);
    iVar6 = (int)sVar9;
  }
  local_f8 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar6);
  FUN_100710370(&local_f0,&local_90,&local_f8);
  QFileInfo::QFileInfo(local_e8,&local_f0);
  if (*(int *)local_f0.field0_0x0 != -1) {
    if (*(int *)local_f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
      local_59 = *(int *)local_f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_10006813a;
    }
    QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
  }
LAB_10006813a:
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_59 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_100068170;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_100068170:
  iVar6 = QString::compare_helper
                    (local_d8 + *(long *)(local_d8 + 0x10),*(int *)(local_d8 + 4),
                     PTR_s_cache_10116daa0,0xffffffff,1);
  if (iVar6 == 0) {
    uVar7 = 0;
    FUN_1008e3970("","vm",0,"VM Process is warming up");
  }
  else {
    FUN_1007d6920(local_48,&local_b8);
    cVar5 = FUN_1007ea210(local_48);
    if (cVar5 == '\0') {
      FUN_1007d6920(local_58,&local_c8);
      cVar5 = FUN_1007ea210(local_58);
      if (cVar5 == '\0') {
        _atexit(FUN_100068ed0);
        local_118 = (QArrayData *)QString::fromAscii_helper("%1-%2",5);
        QString::arg(&local_110,&local_118,&local_c8,0,0x20);
        QString::arg(&local_108,&local_110,&local_b8,0,0x20);
        QString::toLatin1();
        pQVar8 = local_100;
        lVar13 = *(long *)(local_100 + 0x10);
        cVar5 = FUN_1006d8230();
        pcVar11 = FUN_100421c90;
        if (cVar5 != '\0') {
          pcVar11 = (code *)PTR_FUN_100ba2108;
        }
        FUN_100420090(pQVar8 + lVar13,FUN_100420ba0,pcVar11,FUN_100068ee0);
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_59 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_59) goto LAB_1000682fa;
          }
          QArrayData::deallocate(local_100,1,8);
        }
LAB_1000682fa:
        if (*(int *)local_108 != -1) {
          if (*(int *)local_108 != 0) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + -1;
            local_59 = *(int *)local_108 != 0;
            UNLOCK();
            if ((bool)local_59) goto LAB_100068330;
          }
          QArrayData::deallocate(local_108,2,8);
        }
LAB_100068330:
        if (*(int *)local_110 != -1) {
          if (*(int *)local_110 != 0) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + -1;
            local_59 = *(int *)local_110 != 0;
            UNLOCK();
            if ((bool)local_59) goto LAB_100068366;
          }
          QArrayData::deallocate(local_110,2,8);
        }
LAB_100068366:
        if (*(int *)local_118 != -1) {
          if (*(int *)local_118 != 0) {
            LOCK();
            *(int *)local_118 = *(int *)local_118 + -1;
            local_59 = *(int *)local_118 != 0;
            UNLOCK();
            if ((bool)local_59) goto LAB_10006839c;
          }
          QArrayData::deallocate(local_118,2,8);
        }
LAB_10006839c:
        local_120 = local_d8;
        if (1 < *(int *)local_d8 + 1U) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + 1;
          local_59 = *(int *)local_d8 != 0;
          UNLOCK();
        }
        iVar6 = QString::compare_helper
                          (local_d8 + *(long *)(local_d8 + 0x10),*(int *)(local_d8 + 4),
                           PTR_s_ps_10116da70,0xffffffff,1);
        uVar7 = 0;
        if (iVar6 != 0) {
          uVar7 = 1;
          iVar6 = QString::compare_helper
                            (local_120 + *(long *)(local_120 + 0x10),*(int *)(local_120 + 4),
                             PTR_s_pdfm_10116da78,0xffffffff,1);
          if (iVar6 != 0) {
            iVar6 = QString::compare_helper
                              (local_120 + *(long *)(local_120 + 0x10),*(int *)(local_120 + 4),
                               PTR_s_pdfwl_10116da80,0xffffffff,1);
            uVar7 = 5;
            if (iVar6 != 0) {
              iVar6 = QString::compare_helper
                                (local_120 + *(long *)(local_120 + 0x10),*(int *)(local_120 + 4),
                                 PTR_s_pwe_10116da88,0xffffffff,1);
              uVar7 = 2;
              if (iVar6 != 0) {
                iVar6 = QString::compare_helper
                                  (local_120 + *(long *)(local_120 + 0x10),*(int *)(local_120 + 4),
                                   PTR_s_pp_10116da90,0xffffffff,1);
                uVar7 = 3;
                if (iVar6 != 0) {
                  QString::toUtf8();
                  FUN_1008e3970("","vm",0,"Wrong app execution mode \'%s\'",
                                local_68 + *(long *)(local_68 + 0x10));
                  uVar7 = 0xffff;
                  if (*(int *)local_68 != -1) {
                    if (*(int *)local_68 != 0) {
                      LOCK();
                      *(int *)local_68 = *(int *)local_68 + -1;
                      local_59 = *(int *)local_68 != 0;
                      UNLOCK();
                      if ((bool)local_59) goto LAB_100068537;
                    }
                    QArrayData::deallocate(local_68,1,8);
                  }
                }
              }
            }
          }
        }
LAB_100068537:
        if (*(int *)local_120 != -1) {
          if (*(int *)local_120 != 0) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + -1;
            local_59 = *(int *)local_120 != 0;
            UNLOCK();
            if ((bool)local_59) goto LAB_10006856d;
          }
          QArrayData::deallocate(local_120,2,8);
        }
LAB_10006856d:
        FUN_1006d6430(uVar7,0);
        iVar6 = FUN_1006d65a0();
        if (iVar6 == 0xffff) {
          FUN_1008e3970("","vm",0,"Wrong execute mode for application.");
          uVar7 = 0xffffffff;
          FUN_100067980();
        }
        else {
          FUN_100060650(local_198,&local_78,&local_b8,&local_c8);
          cVar5 = FUN_1000611c0(local_198,0);
          if (cVar5 == '\0') {
            uVar7 = 0xfffffffe;
            FUN_1008e3970("","vm",0,"Connection to dispatcher failed!");
          }
          else {
            uVar7 = QCoreApplication::exec();
            FUN_1008e3970("","vm",0,"Wait for PC thread completion.");
            QThread::wait(DAT_1011c3698);
            FUN_1008e3970("","vm",0,"OK! Now going to destruct VM Controller.");
          }
          FUN_100060d50(local_198);
        }
        goto LAB_1000686f6;
      }
    }
    uVar7 = 0xffffffff;
    FUN_100067980();
  }
LAB_1000686f6:
  QFileInfo::~QFileInfo(local_e8);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_59 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_100068738;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100068738:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_59 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_10006876e;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10006876e:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_59 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_1000687a4;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1000687a4:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_59 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_100068841;
    }
    iVar6 = *(int *)(local_90 + 0xc);
    if (iVar6 != *(int *)(local_90 + 8)) {
      lVar13 = (long)*(int *)(local_90 + 8) * 8 + (long)iVar6 * -8;
      pDVar12 = local_90 + (long)iVar6 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar12;
        if (*(int *)pQVar8 == 0) {
LAB_100068820:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_59 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_59) {
            pQVar8 = *(QArrayData **)pDVar12;
            goto LAB_100068820;
          }
        }
        pDVar12 = pDVar12 + -8;
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0);
    }
    QListData::dispose(local_90);
  }
LAB_100068841:
  QCoreApplication::~QCoreApplication((QCoreApplication *)local_88);
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

