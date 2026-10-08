
long FUN_10078f600(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  Data *pDVar9;
  Data *pDVar10;
  QArrayData *pQVar11;
  uint uVar12;
  bool bVar13;
  long local_d0;
  long local_c0;
  QVariant local_b8;
  QRegExp local_a8 [8];
  QArrayData *local_a0;
  Data *local_98;
  Data *local_90;
  Data *local_88;
  uint local_80;
  long local_78;
  QString local_70;
  long local_68;
  long local_60;
  Data_conflict local_58;
  uint local_50;
  QString local_48;
  long local_40;
  undefined1 local_31;
  
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_50 = 0x80000000;
  local_58.field7 = 0;
  local_60 = *param_1;
  if (local_60 != 0) {
    _PrlHandle_AddRef();
  }
  uVar3 = SdkUtils::getEventParamCount(&local_60);
  if (local_60 != 0) {
    _PrlHandle_Free();
  }
  local_d0 = 0;
  if (uVar3 != 0) {
    uVar12 = 0;
    local_d0 = 0;
    do {
      local_68 = 0;
      iVar4 = _PrlEvent_GetParam(*param_1,uVar12,&local_68);
      if (-1 < iVar4) {
        local_78 = local_68;
        if (local_68 != 0) {
          _PrlHandle_AddRef();
        }
        SdkUtils::getParamName(&local_70,&local_78);
        QString::operator=(&local_48,&local_70);
        if (*(int *)local_70.field0_0x0 != -1) {
          if (*(int *)local_70.field0_0x0 != 0) {
            LOCK();
            *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
            local_31 = *(int *)local_70.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10078f718;
          }
          QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
        }
LAB_10078f718:
        if (local_78 != 0) {
          _PrlHandle_Free();
        }
        local_98 = (Data *)*param_2;
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 == 0) {
            QListData::detach((int)&local_98);
            iVar4 = *(int *)(local_98 + 8);
            if (iVar4 != *(int *)(local_98 + 0xc)) {
              puVar8 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
              pDVar9 = local_98 + (long)iVar4 * 8 + 0x10;
              lVar5 = (long)*(int *)(local_98 + 0xc) * 8 + (long)iVar4 * -8;
              do {
                piVar1 = (int *)*puVar8;
                *(int **)pDVar9 = piVar1;
                if (1 < *piVar1 + 1U) {
                  LOCK();
                  *piVar1 = *piVar1 + 1;
                  local_31 = *piVar1 != 0;
                  UNLOCK();
                }
                pDVar9 = pDVar9 + 8;
                puVar8 = puVar8 + 1;
                lVar5 = lVar5 + -8;
              } while (lVar5 != 0);
            }
          }
          else {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + 1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
          }
        }
        local_90 = local_98 + (long)*(int *)(local_98 + 8) * 8 + 0x10;
        local_88 = local_98 + (long)*(int *)(local_98 + 0xc) * 8 + 0x10;
        local_80 = 1;
        if (*(int *)(local_98 + 8) != *(int *)(local_98 + 0xc)) {
          do {
            local_a0 = *(QArrayData **)local_90;
            if (1 < *(int *)local_a0 + 1U) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + 1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
            }
            if (local_80 != 0) {
              QRegExp::QRegExp(local_a8,&local_a0,1,0);
              iVar4 = QRegExp::indexIn(local_a8,&local_48,0,0);
              if (iVar4 != -1) {
                local_c0 = local_68;
                if (local_68 != 0) {
                  _PrlHandle_AddRef();
                }
                SdkUtils::getParamValue(&local_b8,&local_c0);
                QVariant::operator=((QVariant *)&local_58,&local_b8);
                QVariant::~QVariant(&local_b8);
                if (local_c0 != 0) {
                  _PrlHandle_Free();
                }
                if (((local_50 & 0x3fffffff) != 0) &&
                   (cVar2 = QVariant::canConvert((int)&local_58), cVar2 != '\0')) {
                  iVar4 = QVariant::userType();
                  if (iVar4 == 4) {
                    plVar6 = (long *)QVariant::constData();
                    local_d0 = local_d0 + *plVar6;
                  }
                  else {
                    cVar2 = QVariant::convert((int)&local_58,(void *)0x4);
                    lVar5 = local_40;
                    if (cVar2 == '\0') {
                      lVar5 = 0;
                    }
                    local_d0 = local_d0 + lVar5;
                  }
                }
              }
              QRegExp::~QRegExp(local_a8);
              local_80 = 0;
            }
            if (*(int *)local_a0 != -1) {
              if (*(int *)local_a0 != 0) {
                LOCK();
                *(int *)local_a0 = *(int *)local_a0 + -1;
                local_31 = *(int *)local_a0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10078f965;
              }
              QArrayData::deallocate(local_a0,2,8);
            }
LAB_10078f965:
            local_90 = local_90 + 8;
            uVar7 = local_80 ^ 1;
            bVar13 = local_80 != 1;
            local_80 = uVar7;
          } while ((bVar13) && (local_90 != local_88));
        }
        pDVar9 = local_98;
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10078fa70;
          }
          iVar4 = *(int *)(local_98 + 0xc);
          if (iVar4 != *(int *)(local_98 + 8)) {
            lVar5 = (long)*(int *)(local_98 + 8) * 8 + (long)iVar4 * -8;
            pDVar10 = local_98 + (long)iVar4 * 8 + 8;
            do {
              pQVar11 = *(QArrayData **)pDVar10;
              if (*(int *)pQVar11 == 0) {
LAB_10078fa30:
                QArrayData::deallocate(pQVar11,2,8);
              }
              else if (*(int *)pQVar11 != -1) {
                LOCK();
                *(int *)pQVar11 = *(int *)pQVar11 + -1;
                local_31 = *(int *)pQVar11 != 0;
                UNLOCK();
                if (!(bool)local_31) {
                  pQVar11 = *(QArrayData **)pDVar10;
                  goto LAB_10078fa30;
                }
              }
              pDVar10 = pDVar10 + -8;
              lVar5 = lVar5 + 8;
            } while (lVar5 != 0);
          }
          QListData::dispose(pDVar9);
        }
      }
LAB_10078fa70:
      if (local_68 != 0) {
        _PrlHandle_Free();
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar3);
  }
  QVariant::~QVariant((QVariant *)&local_58);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return local_d0;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return local_d0;
}

