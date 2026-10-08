
void FUN_1002fb9f0(long *param_1,uint param_2,int param_3)

{
  int *piVar1;
  AnonymousUnion0 AVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  Data *pDVar8;
  Data *pDVar9;
  QArrayData *pQVar10;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  Data *local_b8;
  Data *local_b0;
  Data *local_a8;
  Data *local_a0;
  int local_98;
  Data_conflict local_90;
  undefined4 local_88;
  QArrayData *local_80;
  int *local_78 [4];
  QVariant local_58 [2];
  Data *local_40;
  AnonymousUnion0 local_38;
  undefined1 local_29;
  
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2,"Check free disk sapce finished %d %d",param_2,param_3);
  }
  QObject::sender();
  lVar5 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1580);
  if ((lVar5 == 0) || (param_3 != 0)) {
LAB_1002fbde7:
                    /* WARNING: Could not recover jumptable at 0x0001002fbe05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0);
    return;
  }
  if ((param_2 & 0xfffffffd) != 8) {
    if (param_2 != 9) goto LAB_1002fbde7;
    QProcess::readAllStandardOutput();
    pQVar10 = local_d0 + *(long *)(local_d0 + 0x10);
    if ((pQVar10 != (QArrayData *)0x0) && (*(uint *)(local_d0 + 4) != 0)) {
      lVar5 = 0;
      do {
        if (pQVar10[lVar5] == (QArrayData)0x0) break;
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < *(uint *)(local_d0 + 4));
      if ((int)lVar5 == -1) {
        _strlen((char *)pQVar10);
      }
    }
    QString::fromUtf8_helper((char *)&local_c8,(int)pQVar10);
    QString::normalized(&local_c0,&local_c8,1,0);
    local_d8 = (QArrayData *)QString::fromAscii_helper("\n",1);
    QString::split(&local_b8,&local_c0,&local_d8,0,1);
    local_b0 = local_b8;
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 == 0) {
        QListData::detach((int)&local_b0);
        iVar4 = *(int *)(local_b0 + 8);
        if (iVar4 != *(int *)(local_b0 + 0xc)) {
          pDVar9 = local_b8 + (long)*(int *)(local_b8 + 8) * 8 + 0x10;
          pDVar8 = local_b0 + (long)iVar4 * 8 + 0x10;
          lVar5 = (long)*(int *)(local_b0 + 0xc) * 8 + (long)iVar4 * -8;
          do {
            piVar1 = *(int **)pDVar9;
            *(int **)pDVar8 = piVar1;
            if (1 < *piVar1 + 1U) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              local_29 = *piVar1 != 0;
              UNLOCK();
            }
            pDVar8 = pDVar8 + 8;
            pDVar9 = pDVar9 + 8;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
      }
      else {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + 1;
        local_29 = *(int *)local_b8 != 0;
        UNLOCK();
      }
    }
    local_a8 = local_b0 + (long)*(int *)(local_b0 + 8) * 8 + 0x10;
    local_a0 = local_b0 + (long)*(int *)(local_b0 + 0xc) * 8 + 0x10;
    local_98 = 1;
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_29 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002fbed0;
      }
      iVar4 = *(int *)(local_b8 + 0xc);
      if (iVar4 != *(int *)(local_b8 + 8)) {
        lVar5 = (long)*(int *)(local_b8 + 8) * 8 + (long)iVar4 * -8;
        pDVar9 = local_b8 + (long)iVar4 * 8 + 8;
        do {
          pQVar10 = *(QArrayData **)pDVar9;
          if (*(int *)pQVar10 == 0) {
LAB_1002fbeaf:
            QArrayData::deallocate(pQVar10,2,8);
          }
          else if (*(int *)pQVar10 != -1) {
            LOCK();
            *(int *)pQVar10 = *(int *)pQVar10 + -1;
            local_29 = *(int *)pQVar10 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar10 = *(QArrayData **)pDVar9;
              goto LAB_1002fbeaf;
            }
          }
          pDVar9 = pDVar9 + -8;
          lVar5 = lVar5 + 8;
        } while (lVar5 != 0);
      }
      QListData::dispose(local_b8);
    }
LAB_1002fbed0:
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_29 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002fbf06;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_1002fbf06:
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_29 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002fbf3c;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_1002fbf3c:
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_29 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002fbf72;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_1002fbf72:
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_29 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002fbfa8;
      }
      QArrayData::deallocate(local_d0,1,8);
    }
LAB_1002fbfa8:
    if (local_98 != 0) {
      for (; local_a8 != local_a0; local_a8 = local_a8 + 8) {
        FUN_1002fc500(param_1);
        local_98 = 1;
      }
    }
    pDVar9 = local_b0;
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_29 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002fc100;
      }
      iVar4 = *(int *)(local_b0 + 0xc);
      if (iVar4 != *(int *)(local_b0 + 8)) {
        lVar5 = (long)*(int *)(local_b0 + 8) * 8 + (long)iVar4 * -8;
        pDVar8 = local_b0 + (long)iVar4 * 8 + 8;
        do {
          pQVar10 = *(QArrayData **)pDVar8;
          if (*(int *)pQVar10 == 0) {
LAB_1002fc0df:
            QArrayData::deallocate(pQVar10,2,8);
          }
          else if (*(int *)pQVar10 != -1) {
            LOCK();
            *(int *)pQVar10 = *(int *)pQVar10 + -1;
            local_29 = *(int *)pQVar10 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar10 = *(QArrayData **)pDVar8;
              goto LAB_1002fc0df;
            }
          }
          pDVar8 = pDVar8 + -8;
          lVar5 = lVar5 + 8;
        } while (lVar5 != 0);
      }
      QListData::dispose(pDVar9);
    }
LAB_1002fc100:
    cVar3 = FUN_1002fc710(param_1);
    if (cVar3 != '\0') {
      return;
    }
    (**(code **)(*param_1 + 0xb0))(param_1,0x80015475);
    return;
  }
  iVar4 = CMessageManager::instance();
  uVar6 = 0x80015476;
  if (param_2 != 10) {
    uVar6 = 0;
  }
  uVar7 = 0x80015477;
  if (param_2 != 8) {
    uVar7 = uVar6;
  }
  local_38.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  local_80 = (QArrayData *)QString::fromAscii_helper("1subTaskCompleted(PRL_RESULT)",0x1d);
  local_88 = 0x80000000;
  local_90.field7 = 0;
  FUN_100a1c600(local_78,param_1,&local_80,&local_90);
  CMessageManager::showMessageBox
            (iVar4,(QWidget *)(ulong)uVar7,(QStringList *)0x0,(QStringList *)&local_38.field0,
             (CSlotInfo *)&local_40,SUB81(local_78,0));
  QVariant::~QVariant(local_58);
  if (local_78[0] != (int *)0x0) {
    LOCK();
    *local_78[0] = *local_78[0] + -1;
    local_29 = *local_78[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_78[0] != (int *)0x0)) {
      operator_delete(local_78[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_90);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002fbb6c;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1002fbb6c:
  pDVar9 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002fbc01;
    }
    iVar4 = *(int *)(local_40 + 0xc);
    if (iVar4 != *(int *)(local_40 + 8)) {
      lVar5 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar4 * -8;
      pDVar8 = local_40 + (long)iVar4 * 8 + 8;
      do {
        pQVar10 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar10 == 0) {
LAB_1002fbbe0:
          QArrayData::deallocate(pQVar10,2,8);
        }
        else if (*(int *)pQVar10 != -1) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + -1;
          local_29 = *(int *)pQVar10 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar10 = *(QArrayData **)pDVar8;
            goto LAB_1002fbbe0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar9);
  }
LAB_1002fbc01:
  AVar2 = local_38;
  if (*(int *)local_38.field1 != -1) {
    if (*(int *)local_38.field1 != 0) {
      LOCK();
      *(int *)local_38.field1 = *(int *)local_38.field1 + -1;
      UNLOCK();
      if (*(int *)local_38.field1 != 0) {
        return;
      }
      local_29 = 0;
    }
    iVar4 = *(int *)(local_38.field1 + 0xc);
    if (iVar4 != *(int *)(local_38.field1 + 8)) {
      lVar5 = (long)*(int *)(local_38.field1 + 8) * 8 + (long)iVar4 * -8;
      pDVar9 = (Data *)(local_38.field1 + (long)iVar4 * 8 + 8);
      do {
        pQVar10 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar10 == 0) {
LAB_1002fbc70:
          QArrayData::deallocate(pQVar10,2,8);
        }
        else if (*(int *)pQVar10 != -1) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + -1;
          local_29 = *(int *)pQVar10 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar10 = *(QArrayData **)pDVar9;
            goto LAB_1002fbc70;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
  return;
}

