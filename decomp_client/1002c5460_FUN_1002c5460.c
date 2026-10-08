
void FUN_1002c5460(long *param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  Data *pDVar5;
  long lVar6;
  Data *pDVar7;
  QArrayData *pQVar8;
  bool bVar9;
  undefined4 uVar10;
  bool bVar11;
  QArrayData *local_d8;
  Data *local_d0;
  Data *local_c8;
  Data *local_c0;
  uint local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  Data *local_a0;
  QArrayData *local_98;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  undefined4 local_78;
  AnonymousUnion0 local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  uVar10 = 0x80000009;
  if ((((param_3 != 0) || (param_1[3] == 0)) || (*(int *)(param_1[3] + 4) == 0)) ||
     (param_1[4] == 0)) goto LAB_1002c5df1;
  QProcess::readAllStandardOutput();
  pQVar8 = local_58 + *(long *)(local_58 + 0x10);
  if ((pQVar8 != (QArrayData *)0x0) && (*(uint *)(local_58 + 4) != 0)) {
    lVar6 = 0;
    do {
      if (pQVar8[lVar6] == (QArrayData)0x0) break;
      lVar6 = lVar6 + 1;
    } while ((uint)lVar6 < *(uint *)(local_58 + 4));
    if ((int)lVar6 == -1) {
      _strlen((char *)pQVar8);
    }
  }
  QString::fromUtf8_helper((char *)&local_50,(int)pQVar8);
  QString::normalized(&local_48,&local_50,1,0);
  local_60 = (QArrayData *)QString::fromAscii_helper("\n",1);
  QString::split(&local_40,&local_48,&local_60,0,1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c556b;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1002c556b:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c559b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002c559b:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c55cb;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002c55cb:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c55fb;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1002c55fb:
  if (3 < DAT_10230ffd0) {
    pQVar8 = (QArrayData *)QString::fromAscii_helper("\n",1);
    QtPrivate::QStringList_join
              ((QStringList *)&local_70.field0,(QChar *)&local_40,
               (int)*(undefined8 *)(pQVar8 + 0x10) + (int)pQVar8);
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",4,"result == %s",local_68 + *(long *)(local_68 + 0x10));
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002c569d;
      }
      QArrayData::deallocate(local_68,1,8);
    }
LAB_1002c569d:
    if (*(int *)local_70.field1 != -1) {
      if (*(int *)local_70.field1 != 0) {
        LOCK();
        *(int *)local_70.field1 = *(int *)local_70.field1 + -1;
        local_31 = *(int *)local_70.field1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002c56cd;
      }
      QArrayData::deallocate((QArrayData *)local_70.field1,2,8);
    }
LAB_1002c56cd:
    if (*(int *)pQVar8 != -1) {
      if (*(int *)pQVar8 != 0) {
        LOCK();
        *(int *)pQVar8 = *(int *)pQVar8 + -1;
        local_31 = *(int *)pQVar8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002c56fa;
      }
      QArrayData::deallocate(pQVar8,2,8);
    }
  }
LAB_1002c56fa:
  iVar3 = CAbstractTask::getCurrentSubTask();
  if (iVar3 == 0) {
    local_90 = local_40;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 == 0) {
        QListData::detach((int)&local_90);
        iVar3 = *(int *)(local_90 + 8);
        if (iVar3 != *(int *)(local_90 + 0xc)) {
          pDVar5 = local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10;
          pDVar7 = local_90 + (long)iVar3 * 8 + 0x10;
          lVar6 = (long)*(int *)(local_90 + 0xc) * 8 + (long)iVar3 * -8;
          do {
            piVar1 = *(int **)pDVar5;
            *(int **)pDVar7 = piVar1;
            if (1 < *piVar1 + 1U) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              local_31 = *piVar1 != 0;
              UNLOCK();
            }
            pDVar7 = pDVar7 + 8;
            pDVar5 = pDVar5 + 8;
            lVar6 = lVar6 + -8;
          } while (lVar6 != 0);
        }
      }
      else {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
    }
    pDVar5 = local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10;
    local_80 = local_90 + (long)*(int *)(local_90 + 0xc) * 8 + 0x10;
    uVar10 = 0x80000009;
    local_88 = pDVar5;
    if (*(int *)(local_90 + 8) != *(int *)(local_90 + 0xc)) {
      uVar10 = 0x80000009;
      do {
        local_78 = 1;
        local_88 = pDVar5;
        local_98 = (QArrayData *)QString::fromAscii_helper("version:",8);
        cVar2 = QString::startsWith(pDVar5,&local_98,1);
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002c58d5;
          }
          QArrayData::deallocate(local_98,2,8);
        }
LAB_1002c58d5:
        if (cVar2 != '\0') {
          pQVar8 = (QArrayData *)QString::fromAscii_helper("version: ",9);
          QString::right((int)&local_a8);
          local_b0 = (QArrayData *)QString::fromAscii_helper(".",1);
          QString::split(&local_a0,&local_a8,&local_b0,0,1);
          if (*(int *)local_b0 != -1) {
            if (*(int *)local_b0 != 0) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + -1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002c597d;
            }
            QArrayData::deallocate(local_b0,2,8);
          }
LAB_1002c597d:
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002c59b3;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
LAB_1002c59b3:
          if (*(int *)pQVar8 != -1) {
            if (*(int *)pQVar8 != 0) {
              LOCK();
              *(int *)pQVar8 = *(int *)pQVar8 + -1;
              local_31 = *(int *)pQVar8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002c59e2;
            }
            QArrayData::deallocate(pQVar8,2,8);
          }
LAB_1002c59e2:
          if ((*(int *)(local_a0 + 0xc) - *(int *)(local_a0 + 8) == 3) &&
             ((iVar3 = QString::toInt((bool *)(local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x10),0
                                     ), 1 < iVar3 ||
              ((iVar3 = QString::toInt((bool *)(local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x10),
                                       0), iVar3 == 1 &&
               (iVar3 = QString::toInt((bool *)(local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x18),
                                       0), 4 < iVar3)))))) {
            uVar10 = 0;
          }
          pDVar5 = local_a0;
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002c5ae0;
            }
            iVar3 = *(int *)(local_a0 + 0xc);
            if (iVar3 != *(int *)(local_a0 + 8)) {
              lVar6 = (long)*(int *)(local_a0 + 8) * 8 + (long)iVar3 * -8;
              pDVar7 = local_a0 + (long)iVar3 * 8 + 8;
              do {
                pQVar8 = *(QArrayData **)pDVar7;
                if (*(int *)pQVar8 == 0) {
LAB_1002c5abf:
                  QArrayData::deallocate(pQVar8,2,8);
                }
                else if (*(int *)pQVar8 != -1) {
                  LOCK();
                  *(int *)pQVar8 = *(int *)pQVar8 + -1;
                  local_31 = *(int *)pQVar8 != 0;
                  UNLOCK();
                  if (!(bool)local_31) {
                    pQVar8 = *(QArrayData **)pDVar7;
                    goto LAB_1002c5abf;
                  }
                }
                pDVar7 = pDVar7 + -8;
                lVar6 = lVar6 + 8;
              } while (lVar6 != 0);
            }
            QListData::dispose(pDVar5);
          }
        }
LAB_1002c5ae0:
        pDVar5 = local_88 + 8;
        local_88 = pDVar5;
      } while (pDVar5 != local_80);
    }
    pDVar5 = local_90;
    local_78 = 1;
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002c5d5a;
      }
      iVar3 = *(int *)(local_90 + 0xc);
      if (iVar3 != *(int *)(local_90 + 8)) {
        lVar6 = (long)*(int *)(local_90 + 8) * 8 + (long)iVar3 * -8;
        pDVar7 = local_90 + (long)iVar3 * 8 + 8;
        do {
          pQVar8 = *(QArrayData **)pDVar7;
          if (*(int *)pQVar8 == 0) {
LAB_1002c5b72:
            QArrayData::deallocate(pQVar8,2,8);
          }
          else if (*(int *)pQVar8 != -1) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_31 = *(int *)pQVar8 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar8 = *(QArrayData **)pDVar7;
              goto LAB_1002c5b72;
            }
          }
          pDVar7 = pDVar7 + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose(pDVar5);
    }
  }
  else {
    iVar3 = CAbstractTask::getCurrentSubTask();
    if (iVar3 == 1) {
      local_d0 = local_40;
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 == 0) {
          QListData::detach((int)&local_d0);
          iVar3 = *(int *)(local_d0 + 8);
          if (iVar3 != *(int *)(local_d0 + 0xc)) {
            pDVar5 = local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10;
            pDVar7 = local_d0 + (long)iVar3 * 8 + 0x10;
            lVar6 = (long)*(int *)(local_d0 + 0xc) * 8 + (long)iVar3 * -8;
            do {
              piVar1 = *(int **)pDVar5;
              *(int **)pDVar7 = piVar1;
              if (1 < *piVar1 + 1U) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                local_31 = *piVar1 != 0;
                UNLOCK();
              }
              pDVar7 = pDVar7 + 8;
              pDVar5 = pDVar5 + 8;
              lVar6 = lVar6 + -8;
            } while (lVar6 != 0);
          }
        }
        else {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + 1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
        }
      }
      local_c8 = local_d0 + (long)*(int *)(local_d0 + 8) * 8 + 0x10;
      local_c0 = local_d0 + (long)*(int *)(local_d0 + 0xc) * 8 + 0x10;
      local_b8 = 1;
      if (*(int *)(local_d0 + 8) == *(int *)(local_d0 + 0xc)) {
        bVar9 = false;
      }
      else {
        bVar9 = false;
        do {
          pDVar5 = local_c8;
          if (local_b8 == 0) {
LAB_1002c5c92:
            local_c8 = local_c8 + 8;
            local_b8 = 1;
          }
          else {
            local_d8 = (QArrayData *)QString::fromAscii_helper("vagrant-parallels",0x11);
            cVar2 = QString::startsWith(pDVar5,&local_d8,1);
            if (*(int *)local_d8 != -1) {
              if (*(int *)local_d8 != 0) {
                LOCK();
                *(int *)local_d8 = *(int *)local_d8 + -1;
                local_31 = *(int *)local_d8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1002c5c57;
              }
              QArrayData::deallocate(local_d8,2,8);
            }
LAB_1002c5c57:
            if (cVar2 == '\0') goto LAB_1002c5c92;
            local_c8 = local_c8 + 8;
            uVar4 = local_b8 ^ 1;
            bVar9 = true;
            bVar11 = local_b8 == 1;
            local_b8 = uVar4;
            if (bVar11) break;
          }
        } while (local_c8 != local_c0);
      }
      pDVar5 = local_d0;
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002c5d4a;
        }
        iVar3 = *(int *)(local_d0 + 0xc);
        if (iVar3 != *(int *)(local_d0 + 8)) {
          lVar6 = (long)*(int *)(local_d0 + 8) * 8 + (long)iVar3 * -8;
          pDVar7 = local_d0 + (long)iVar3 * 8 + 8;
          do {
            pQVar8 = *(QArrayData **)pDVar7;
            if (*(int *)pQVar8 == 0) {
LAB_1002c5d29:
              QArrayData::deallocate(pQVar8,2,8);
            }
            else if (*(int *)pQVar8 != -1) {
              LOCK();
              *(int *)pQVar8 = *(int *)pQVar8 + -1;
              local_31 = *(int *)pQVar8 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar8 = *(QArrayData **)pDVar7;
                goto LAB_1002c5d29;
              }
            }
            pDVar7 = pDVar7 + -8;
            lVar6 = lVar6 + 8;
          } while (lVar6 != 0);
        }
        QListData::dispose(pDVar5);
      }
LAB_1002c5d4a:
      uVar10 = 0x80000009;
      if (!bVar9) {
        uVar10 = 0;
      }
    }
    else {
      uVar10 = 0x80000009;
    }
  }
LAB_1002c5d5a:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002c5df1;
    }
    iVar3 = *(int *)(local_40 + 0xc);
    if (iVar3 != *(int *)(local_40 + 8)) {
      lVar6 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = local_40 + (long)iVar3 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar8 == 0) {
LAB_1002c5dd0:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar5;
            goto LAB_1002c5dd0;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_40);
  }
LAB_1002c5df1:
  if (((param_1[3] != 0) && (*(int *)(param_1[3] + 4) != 0)) && ((long *)param_1[4] != (long *)0x0))
  {
    (**(code **)(*(long *)param_1[4] + 0x20))();
  }
  (**(code **)(*param_1 + 0xb0))(param_1,uVar10);
  return;
}

