
/* CXmlModelHelper::printConfigDiff(CVmConfiguration const&, CVmConfiguration const&, unsigned int,
   QString const&) */

void CXmlModelHelper::printConfigDiff
               (CVmConfiguration *param_1,CVmConfiguration *param_2,uint param_3,QString *param_4)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  QArrayData *pQVar8;
  Data *pDVar9;
  Data *pDVar10;
  Data *pDVar11;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QVariant local_b0 [16];
  QArrayData *local_a0;
  QArrayData *local_98;
  QVariant local_90 [16];
  QArrayData *local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  undefined4 local_58;
  Data *local_50;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  pDVar10 = (Data *)PTR_shared_null_100ba2188;
  local_50 = (Data *)PTR_shared_null_100ba2188;
  FUN_100016080(param_1 + 0x10,param_2,&local_50);
  if (*(int *)(local_50 + 0xc) != *(int *)(local_50 + 8)) {
    local_70 = local_50;
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 == 0) {
        QListData::detach((int)&local_70);
        iVar1 = *(int *)(local_70 + 8);
        if (iVar1 != *(int *)(local_70 + 0xc)) {
          pDVar9 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
          pDVar11 = local_70 + (long)iVar1 * 8 + 0x10;
          lVar7 = (long)*(int *)(local_70 + 0xc) * 8 + (long)iVar1 * -8;
          do {
            piVar2 = *(int **)pDVar9;
            *(int **)pDVar11 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_31 = *piVar2 != 0;
              UNLOCK();
            }
            pDVar11 = pDVar11 + 8;
            pDVar9 = pDVar9 + 8;
            lVar7 = lVar7 + -8;
          } while (lVar7 != 0);
        }
      }
      else {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + 1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
      }
    }
    pDVar9 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
    local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
    local_68 = pDVar9;
    if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
      do {
        local_58 = 1;
        local_68 = pDVar9;
        local_40 = pDVar10;
        pQVar8 = (QArrayData *)QString::fromAscii_helper("Identification.ChangeDateTime",0x1d);
        local_48 = pQVar8;
        FUN_10000c490(&local_40,&local_48);
        local_78 = local_40;
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 == 0) {
            QListData::detach((int)&local_78);
            iVar1 = *(int *)(local_78 + 8);
            if (iVar1 != *(int *)(local_78 + 0xc)) {
              pDVar10 = local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10;
              pDVar11 = local_78 + (long)iVar1 * 8 + 0x10;
              lVar7 = (long)*(int *)(local_78 + 0xc) * 8 + (long)iVar1 * -8;
              do {
                piVar2 = *(int **)pDVar10;
                *(int **)pDVar11 = piVar2;
                if (1 < *piVar2 + 1U) {
                  LOCK();
                  *piVar2 = *piVar2 + 1;
                  local_31 = *piVar2 != 0;
                  UNLOCK();
                }
                pDVar11 = pDVar11 + 8;
                pDVar10 = pDVar10 + 8;
                lVar7 = lVar7 + -8;
                pQVar8 = local_48;
              } while (lVar7 != 0);
            }
          }
          else {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + 1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
          }
        }
        if (*(int *)pQVar8 != -1) {
          if (*(int *)pQVar8 != 0) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_31 = *(int *)pQVar8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100014480;
          }
          QArrayData::deallocate(pQVar8,2,8);
        }
LAB_100014480:
        pDVar10 = local_40;
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10001451b;
          }
          iVar1 = *(int *)(local_40 + 0xc);
          if (iVar1 != *(int *)(local_40 + 8)) {
            lVar7 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
            pDVar11 = local_40 + (long)iVar1 * 8 + 8;
            do {
              pQVar8 = *(QArrayData **)pDVar11;
              if (*(int *)pQVar8 == 0) {
LAB_1000144f0:
                QArrayData::deallocate(pQVar8,2,8);
              }
              else if (*(int *)pQVar8 != -1) {
                LOCK();
                *(int *)pQVar8 = *(int *)pQVar8 + -1;
                local_31 = *(int *)pQVar8 != 0;
                UNLOCK();
                if (!(bool)local_31) {
                  pQVar8 = *(QArrayData **)pDVar11;
                  goto LAB_1000144f0;
                }
              }
              pDVar11 = pDVar11 + -8;
              lVar7 = lVar7 + 8;
            } while (lVar7 != 0);
          }
          QListData::dispose(pDVar10);
        }
LAB_10001451b:
        cVar6 = QtPrivate::QStringList_contains(&local_78,pDVar9,1);
        pDVar10 = local_78;
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000145cf;
          }
          iVar1 = *(int *)(local_78 + 0xc);
          if (iVar1 != *(int *)(local_78 + 8)) {
            lVar7 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar1 * -8;
            pDVar11 = local_78 + (long)iVar1 * 8 + 8;
            do {
              pQVar8 = *(QArrayData **)pDVar11;
              if (*(int *)pQVar8 == 0) {
LAB_1000145a0:
                QArrayData::deallocate(pQVar8,2,8);
              }
              else if (*(int *)pQVar8 != -1) {
                LOCK();
                *(int *)pQVar8 = *(int *)pQVar8 + -1;
                local_31 = *(int *)pQVar8 != 0;
                UNLOCK();
                if (!(bool)local_31) {
                  pQVar8 = *(QArrayData **)pDVar11;
                  goto LAB_1000145a0;
                }
              }
              pDVar11 = pDVar11 + -8;
              lVar7 = lVar7 + 8;
            } while (lVar7 != 0);
          }
          QListData::dispose(pDVar10);
        }
LAB_1000145cf:
        if (cVar6 == '\0') {
          pcVar3 = *(code **)(*(long *)param_1 + 0x80);
          local_98 = *(QArrayData **)pDVar9;
          if (1 < *(int *)local_98 + 1U) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + 1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
          }
          (*pcVar3)(local_90,param_1,&local_98);
          QVariant::toString();
          QVariant::~QVariant(local_90);
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100014661;
            }
            QArrayData::deallocate(local_98,2,8);
          }
LAB_100014661:
          pcVar3 = *(code **)(*(long *)param_2 + 0x80);
          local_b8 = *(QArrayData **)pDVar9;
          if (1 < *(int *)local_b8 + 1U) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + 1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
          }
          (*pcVar3)(local_b0,param_2,&local_b8);
          QVariant::toString();
          QVariant::~QVariant(local_b0);
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              local_31 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000146ea;
            }
            QArrayData::deallocate(local_b8,2,8);
          }
LAB_1000146ea:
          if (((param_3 & 0xf) == 0) || ((int)(param_3 & 0xf) <= DAT_1011b55f8)) {
            QString::toUtf8();
            lVar7 = *(long *)(local_c0 + 0x10);
            QString::toUtf8();
            lVar4 = *(long *)(local_c8 + 0x10);
            QString::toUtf8();
            lVar5 = *(long *)(local_d0 + 0x10);
            QString::toUtf8();
            FUN_1008e3970("","vm",param_3,"%s: Key: \'%s\', New value: \'%s\', Old value: \'%s\'",
                          local_c0 + lVar7,local_c8 + lVar4,local_d0 + lVar5,
                          local_d8 + *(long *)(local_d8 + 0x10));
            if (*(int *)local_d8 != -1) {
              if (*(int *)local_d8 != 0) {
                LOCK();
                *(int *)local_d8 = *(int *)local_d8 + -1;
                local_31 = *(int *)local_d8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000147e9;
              }
              QArrayData::deallocate(local_d8,1,8);
            }
LAB_1000147e9:
            if (*(int *)local_d0 != -1) {
              if (*(int *)local_d0 != 0) {
                LOCK();
                *(int *)local_d0 = *(int *)local_d0 + -1;
                local_31 = *(int *)local_d0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100014829;
              }
              QArrayData::deallocate(local_d0,1,8);
            }
LAB_100014829:
            if (*(int *)local_c8 != -1) {
              if (*(int *)local_c8 != 0) {
                LOCK();
                *(int *)local_c8 = *(int *)local_c8 + -1;
                local_31 = *(int *)local_c8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10001485f;
              }
              QArrayData::deallocate(local_c8,1,8);
            }
LAB_10001485f:
            if (*(int *)local_c0 != -1) {
              if (*(int *)local_c0 != 0) {
                LOCK();
                *(int *)local_c0 = *(int *)local_c0 + -1;
                local_31 = *(int *)local_c0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100014895;
              }
              QArrayData::deallocate(local_c0,1,8);
            }
          }
LAB_100014895:
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000148cb;
            }
            QArrayData::deallocate(local_a0,2,8);
          }
LAB_1000148cb:
          if (*(int *)local_80 != -1) {
            if (*(int *)local_80 != 0) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + -1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100014900;
            }
            QArrayData::deallocate(local_80,2,8);
          }
        }
LAB_100014900:
        pDVar9 = local_68 + 8;
        pDVar10 = (Data *)PTR_shared_null_100ba2188;
        local_68 = pDVar9;
      } while (pDVar9 != local_60);
    }
    pDVar10 = local_70;
    local_58 = 1;
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000149b1;
      }
      iVar1 = *(int *)(local_70 + 0xc);
      if (iVar1 != *(int *)(local_70 + 8)) {
        lVar7 = (long)*(int *)(local_70 + 8) * 8 + (long)iVar1 * -8;
        pDVar9 = local_70 + (long)iVar1 * 8 + 8;
        do {
          pQVar8 = *(QArrayData **)pDVar9;
          if (*(int *)pQVar8 == 0) {
LAB_100014990:
            QArrayData::deallocate(pQVar8,2,8);
          }
          else if (*(int *)pQVar8 != -1) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_31 = *(int *)pQVar8 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar8 = *(QArrayData **)pDVar9;
              goto LAB_100014990;
            }
          }
          pDVar9 = pDVar9 + -8;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      QListData::dispose(pDVar10);
    }
  }
LAB_1000149b1:
  pDVar10 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_50 + 0xc);
    if (iVar1 != *(int *)(local_50 + 8)) {
      lVar7 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = local_50 + (long)iVar1 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar8 == 0) {
LAB_100014a20:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar9;
            goto LAB_100014a20;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0);
    }
    QListData::dispose(pDVar10);
  }
  return;
}

