
void FUN_100334cc0(QObject *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  QMapNodeBase *pQVar6;
  ulong *puVar7;
  QMapNodeBase *pQVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  char *pcVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  QArrayData *pQVar17;
  long lVar18;
  QArrayData *pQVar19;
  QArrayData *pQVar20;
  undefined1 auVar21 [16];
  QMapNodeBase *local_110;
  undefined4 local_108;
  undefined4 local_104;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QMapNodeBase *local_68;
  QMapNodeBase *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_31;
  
  uVar10 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)
     ) {
    uVar10 = *(undefined8 *)(param_1 + 0x18);
  }
  iVar3 = FUN_100319d30(uVar10);
  if (iVar3 != 1) {
    if (DAT_10230ffd0 < 3) {
      return;
    }
    pcVar13 = " VM Desktop IO is not started yet, skipping layoutGuestScreens";
    uVar10 = 3;
    goto LAB_100334d9a;
  }
  if (param_1[0x20] == (QObject)0x0) {
    uVar10 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar10 = *(undefined8 *)(param_1 + 0x18);
    }
    cVar2 = FUN_10031c1c0(uVar10);
    if (cVar2 == '\0') {
      pcVar13 = " VM Dynamic Resolution is not available in a guest, skipping layoutGuestScreens";
    }
    else {
      if (param_1[0x30] == (QObject)0x0) {
        FUN_100335d70(&local_60,param_1);
        FUN_100336250(&local_68,param_1,&local_60);
        if (1 < DAT_10230ffd0) {
          (*(code *)**(undefined8 **)param_1)(param_1);
          uVar5 = QMetaObject::className();
          uVar10 = 0;
          if ((*(long *)(param_1 + 0x10) != 0) &&
             (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
            uVar10 = *(undefined8 *)(param_1 + 0x18);
          }
          FUN_1003193e0(&local_78,uVar10);
          QString::toUtf8();
          pQVar19 = local_70 + *(long *)(local_70 + 0x10);
          FUN_1003379a0(&local_88,&local_60);
          QString::toUtf8();
          pQVar17 = local_80 + *(long *)(local_80 + 0x10);
          FUN_1003379a0(&local_98,&local_68);
          QString::toUtf8();
          pQVar20 = local_90 + *(long *)(local_90 + 0x10);
          FUN_1003379a0(&local_a8,param_1 + 0x28);
          QString::toUtf8();
          FUN_100df99c0("GUI_DDLL","prl_client_app",2,
                        ">>>LAYOUT GUEST SCREENS by DDLL [%p] \'%s\'.<<<\nCurrent VM [%s] screens layout:\n%s\nCalculated screens layout:\n%s\nLast applied layout:\n%s\n"
                        ,param_1,uVar5,pQVar19,pQVar17,pQVar20,local_a0 + *(long *)(local_a0 + 0x10)
                       );
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100334f26;
            }
            QArrayData::deallocate(local_a0,1,8);
          }
LAB_100334f26:
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100334f5c;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
LAB_100334f5c:
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100334f92;
            }
            QArrayData::deallocate(local_90,1,8);
          }
LAB_100334f92:
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100334fc8;
            }
            QArrayData::deallocate(local_98,2,8);
          }
LAB_100334fc8:
          if (*(int *)local_80 != -1) {
            if (*(int *)local_80 != 0) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + -1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100334ff8;
            }
            QArrayData::deallocate(local_80,1,8);
          }
LAB_100334ff8:
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100335028;
            }
            QArrayData::deallocate(local_88,2,8);
          }
LAB_100335028:
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100335058;
            }
            QArrayData::deallocate(local_70,1,8);
          }
LAB_100335058:
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              local_31 = *(int *)local_78 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100335088;
            }
            QArrayData::deallocate(local_78,2,8);
          }
        }
LAB_100335088:
        if (param_2 == 0) {
          cVar2 = FUN_100339c20(&local_68,&local_60);
          if (cVar2 == '\0') {
            cVar2 = FUN_100339c20(param_1 + 0x28,&local_68);
            if (cVar2 == '\0') goto LAB_1003350f5;
            FUN_100df99c0("GUI_DDLL","prl_client_app",0,
                          "The requested screens layout has been already applied, skipping layoutGuestScreens"
                         );
          }
          else {
            FUN_100df99c0("GUI_DDLL","prl_client_app",0,
                          "The requested screens layout equals to the current one, skipping layoutGuestScreens"
                         );
          }
        }
        else {
LAB_1003350f5:
          pQVar8 = local_68;
          local_b0 = (QArrayData *)PTR_shared_null_1021e1288;
          if ((int)(*(uint *)(PTR_shared_null_1021e1288 + 8) & 0x7fffffff) < *(int *)(local_68 + 4))
          {
            FUN_1003228c0(&local_b0,*(undefined4 *)(PTR_shared_null_1021e1288 + 4),
                          *(int *)(local_68 + 4),0);
          }
          pQVar17 = local_b0;
          if (*(uint *)local_b0 < 2) {
            local_b0[0xb] = (QArrayData)((byte)local_b0[0xb] | 0x80);
          }
          pQVar6 = pQVar8;
          if (*(int *)pQVar8 != -1) {
            if (*(int *)pQVar8 == 0) {
              pQVar6 = (QMapNodeBase *)QMapDataBase::createData();
              if (*(long *)(pQVar8 + 0x10) != 0) {
                puVar7 = (ulong *)FUN_100322740(*(long *)(pQVar8 + 0x10),pQVar6);
                *(ulong **)(pQVar6 + 0x10) = puVar7;
                *puVar7 = *puVar7 & 3 | (ulong)(pQVar6 + 8);
                QMapDataBase::recalcMostLeftNode();
              }
            }
            else {
              LOCK();
              *(int *)pQVar8 = *(int *)pQVar8 + 1;
              local_31 = *(int *)pQVar8 != 0;
              UNLOCK();
            }
          }
          if (*(long *)(pQVar6 + 0x10) != 0) {
            pQVar8 = *(QMapNodeBase **)(pQVar6 + 0x20);
            while (pQVar8 != pQVar6 + 8) {
              local_b8 = *(undefined4 *)(pQVar8 + 0x3c);
              local_c0 = *(undefined8 *)(pQVar8 + 0x34);
              local_c8 = *(undefined8 *)(pQVar8 + 0x2c);
              local_d8 = *(undefined8 *)(pQVar8 + 0x1c);
              local_d0 = *(undefined8 *)(pQVar8 + 0x24);
              lVar18 = (long)(int)*(uint *)(pQVar17 + 4);
              uVar4 = *(uint *)(pQVar17 + 4) + 1;
              uVar15 = *(uint *)(pQVar17 + 8) & 0x7fffffff;
              if ((*(uint *)pQVar17 < 2) && (uVar4 <= uVar15)) {
                pQVar19 = pQVar17 + *(long *)(pQVar17 + 0x10);
                *(undefined4 *)(pQVar19 + lVar18 * 0x24 + 0x20) = local_b8;
                *(undefined8 *)(pQVar19 + lVar18 * 0x24 + 0x18) = local_c0;
                *(undefined8 *)(pQVar19 + lVar18 * 0x24 + 0x10) = local_c8;
                uVar10 = local_d8;
                uVar5 = local_d0;
              }
              else {
                uVar1 = uVar15;
                if (uVar15 < uVar4) {
                  uVar1 = uVar4;
                }
                local_58 = local_d8;
                local_50 = local_d0;
                local_48 = local_c8;
                local_40 = local_c0;
                local_38 = local_b8;
                FUN_1003228c0(&local_b0,lVar18,uVar1,(ulong)(uVar15 < uVar4) << 3);
                pQVar19 = local_b0 + *(long *)(local_b0 + 0x10);
                lVar18 = (long)(int)*(uint *)(local_b0 + 4);
                *(undefined4 *)(pQVar19 + lVar18 * 0x24 + 0x20) = local_38;
                *(undefined8 *)(pQVar19 + lVar18 * 0x24 + 0x18) = local_40;
                *(undefined8 *)(pQVar19 + lVar18 * 0x24 + 0x10) = local_48;
                uVar10 = local_58;
                uVar5 = local_50;
                pQVar17 = local_b0;
              }
              *(undefined8 *)(pQVar19 + lVar18 * 0x24 + 8) = uVar5;
              *(undefined8 *)(pQVar19 + lVar18 * 0x24) = uVar10;
              *(uint *)(pQVar17 + 4) = *(uint *)(pQVar17 + 4) + 1;
              pQVar8 = (QMapNodeBase *)QMapNodeBase::nextNode();
            }
          }
          if (*(int *)pQVar6 != -1) {
            if (*(int *)pQVar6 != 0) {
              LOCK();
              *(int *)pQVar6 = *(int *)pQVar6 + -1;
              local_31 = *(int *)pQVar6 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100335344;
            }
            if (*(long *)(pQVar6 + 0x10) != 0) {
              QMapDataBase::freeTree(pQVar6,(int)*(long *)(pQVar6 + 0x10));
            }
            QMapDataBase::freeData((QMapDataBase *)pQVar6);
          }
LAB_100335344:
          uVar10 = 0;
          if ((*(long *)(param_1 + 0x10) != 0) &&
             (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
            uVar10 = *(undefined8 *)(param_1 + 0x18);
          }
          FUN_1003193b0(&local_e0,uVar10);
          lVar18 = local_e0;
          if (1 < *(uint *)pQVar17) {
            if ((*(uint *)(pQVar17 + 8) & 0x7fffffff) == 0) {
              pQVar17 = (QArrayData *)QArrayData::allocate(0x24,8,0,2);
              local_b0 = pQVar17;
            }
            else {
              FUN_1003228c0(&local_b0,*(uint *)(pQVar17 + 4),*(uint *)(pQVar17 + 8) & 0x7fffffff,0);
              pQVar17 = local_b0;
            }
          }
          iVar3 = _PrlDevDisplay_SetDpiConfiguration
                            (lVar18,pQVar17 + *(long *)(pQVar17 + 0x10),*(undefined4 *)(pQVar17 + 4)
                            );
          if (local_e0 != 0) {
            _PrlHandle_Free();
          }
          if (iVar3 < 0) {
            FUN_100321d40(param_1 + 0x28);
            uVar10 = FUN_100dddcf0(iVar3);
            FUN_100df99c0("GUI_DDLL","prl_client_app",0,
                          "Failed to set VM screen size. PrlDevDisplay_SetConfiguration failed with RC = %.8X [%s]"
                          ,iVar3,uVar10);
          }
          else {
            FUN_100339d10(param_1 + 0x28,&local_68);
            param_1[0x30] = (QObject)0x1;
            QTimer::singleShot(0x9c4,param_1,"1onGuestScreensConfigurationChangeFinished()");
            if (1 < DAT_10230ffd0) {
              uVar10 = 0;
              if ((*(long *)(param_1 + 0x10) != 0) &&
                 (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
                uVar10 = *(undefined8 *)(param_1 + 0x18);
              }
              FUN_1003193e0(&local_f0,uVar10);
              QString::toUtf8();
              pQVar19 = local_e8 + *(long *)(local_e8 + 0x10);
              FUN_1003379a0(&local_100,&local_68);
              QString::toUtf8();
              FUN_100df99c0("GUI_DDLL","prl_client_app",2,
                            "DDLL [%p] STARTED VM [%s] guest screens configuration change to\n%s",
                            param_1,pQVar19,local_f8 + *(long *)(local_f8 + 0x10));
              if (*(int *)local_f8 != -1) {
                if (*(int *)local_f8 != 0) {
                  LOCK();
                  *(int *)local_f8 = *(int *)local_f8 + -1;
                  local_31 = *(int *)local_f8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003354f1;
                }
                QArrayData::deallocate(local_f8,1,8);
              }
LAB_1003354f1:
              if (*(int *)local_100 != -1) {
                if (*(int *)local_100 != 0) {
                  LOCK();
                  *(int *)local_100 = *(int *)local_100 + -1;
                  local_31 = *(int *)local_100 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100335527;
                }
                QArrayData::deallocate(local_100,2,8);
              }
LAB_100335527:
              if (*(int *)local_e8 != -1) {
                if (*(int *)local_e8 != 0) {
                  LOCK();
                  *(int *)local_e8 = *(int *)local_e8 + -1;
                  local_31 = *(int *)local_e8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10033555d;
                }
                QArrayData::deallocate(local_e8,1,8);
              }
LAB_10033555d:
              if (*(int *)local_f0 != -1) {
                if (*(int *)local_f0 != 0) {
                  LOCK();
                  *(int *)local_f0 = *(int *)local_f0 + -1;
                  local_31 = *(int *)local_f0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100335593;
                }
                QArrayData::deallocate(local_f0,2,8);
              }
            }
LAB_100335593:
            FUN_100339dd0();
            uVar10 = 0;
            if ((*(long *)(param_1 + 0x10) != 0) &&
               (uVar10 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
              uVar10 = *(undefined8 *)(param_1 + 0x18);
            }
            plVar9 = (long *)FUN_100319950(uVar10);
            local_110 = (QMapNodeBase *)*plVar9;
            if (*(int *)local_110 == 0) {
              local_110 = (QMapNodeBase *)QMapDataBase::createData();
              if (*(long *)(*plVar9 + 0x10) != 0) {
                puVar7 = (ulong *)FUN_1000340b0(*(long *)(*plVar9 + 0x10),local_110);
                *(ulong **)(local_110 + 0x10) = puVar7;
                *puVar7 = *puVar7 & 3 | (ulong)(local_110 + 8);
                QMapDataBase::recalcMostLeftNode();
              }
            }
            else if (*(int *)local_110 != -1) {
              LOCK();
              *(int *)local_110 = *(int *)local_110 + 1;
              local_31 = *(int *)local_110 != 0;
              UNLOCK();
              local_110 = (QMapNodeBase *)*plVar9;
            }
            if (*(long *)(local_110 + 0x10) != 0) {
              pQVar8 = *(QMapNodeBase **)(local_110 + 0x20);
              while (pQVar6 = local_68, pQVar8 != local_110 + 8) {
                if ((((*(long *)(pQVar8 + 0x20) != 0) &&
                     (*(int *)(*(long *)(pQVar8 + 0x20) + 4) != 0)) &&
                    (lVar18 = *(long *)(pQVar8 + 0x28), lVar18 != 0)) &&
                   (lVar11 = FUN_100325f60(lVar18), lVar11 != 0)) {
                  uVar4 = FUN_100323e20(lVar18);
                  lVar11 = *(long *)(pQVar6 + 0x10);
                  lVar16 = 0;
                  if (*(long *)(pQVar6 + 0x10) != 0) {
                    do {
                      while (lVar14 = lVar11, uVar15 = *(uint *)(lVar14 + 0x18), uVar4 <= uVar15) {
                        lVar11 = *(long *)(lVar14 + 8);
                        lVar16 = lVar14;
                        if (*(long *)(lVar14 + 8) == 0) goto LAB_10033571c;
                      }
                      lVar11 = *(long *)(lVar14 + 0x10);
                    } while (*(long *)(lVar14 + 0x10) != 0);
                    if (lVar16 != 0) {
                      uVar15 = *(uint *)(lVar16 + 0x18);
LAB_10033571c:
                      if (uVar15 <= uVar4) {
                        local_104 = FUN_100323e20(lVar18);
                        puVar12 = (undefined8 *)FUN_100321eb0(&local_68,&local_104);
                        uVar10 = *puVar12;
                        uVar5 = FUN_100325f60(lVar18);
                        auVar21 = FUN_100343710(uVar5);
                        local_108 = FUN_100323e20(lVar18);
                        puVar12 = (undefined8 *)FUN_100339f40(param_1 + 0x38,&local_108);
                        *puVar12 = uVar10;
                        puVar12[1] = CONCAT44((auVar21._12_4_ + 1) - auVar21._4_4_,
                                              (auVar21._8_4_ + 1) - auVar21._0_4_);
                      }
                    }
                  }
                }
                pQVar8 = (QMapNodeBase *)QMapNodeBase::nextNode();
              }
            }
            if (*(int *)local_110 != -1) {
              if (*(int *)local_110 != 0) {
                LOCK();
                *(int *)local_110 = *(int *)local_110 + -1;
                local_31 = *(int *)local_110 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100335824;
              }
              if (*(long *)(local_110 + 0x10) != 0) {
                FUN_100034170();
                QMapDataBase::freeTree(local_110,(int)*(undefined8 *)(local_110 + 0x10));
              }
              QMapDataBase::freeData((QMapDataBase *)local_110);
            }
          }
LAB_100335824:
          if (*(int *)pQVar17 != -1) {
            if (*(int *)pQVar17 != 0) {
              LOCK();
              *(int *)pQVar17 = *(int *)pQVar17 + -1;
              local_31 = *(int *)pQVar17 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100335851;
            }
            QArrayData::deallocate(pQVar17,0x24,8);
          }
        }
LAB_100335851:
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10033588c;
          }
          if (*(long *)(local_68 + 0x10) != 0) {
            QMapDataBase::freeTree(local_68,(int)*(long *)(local_68 + 0x10));
          }
          QMapDataBase::freeData((QMapDataBase *)local_68);
        }
LAB_10033588c:
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) {
              return;
            }
          }
          if (*(long *)(local_60 + 0x10) != 0) {
            QMapDataBase::freeTree(local_60,(int)*(long *)(local_60 + 0x10));
          }
          QMapDataBase::freeData((QMapDataBase *)local_60);
        }
        return;
      }
      pcVar13 = " VM displays layout reconfiguration is in progress, skipping layoutGuestScreens";
    }
  }
  else {
    pcVar13 = " VM Desktop Dynamic Layout Logic is BLOCKED, skipping layoutGuestScreens";
  }
  uVar10 = 0;
LAB_100334d9a:
  FUN_100df99c0("GUI_DDLL","prl_client_app",uVar10,pcVar13);
  return;
}

