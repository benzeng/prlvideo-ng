
undefined8 * FUN_100526800(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  QVariant *this;
  long lVar5;
  Data *pDVar6;
  long lVar7;
  Data *pDVar8;
  QArrayData *pQVar9;
  Data *pDVar10;
  long lVar11;
  Data_conflict local_118;
  undefined4 local_110;
  Data *local_108;
  Data *local_100;
  Data *local_f8;
  undefined4 local_f0;
  Data *local_e8;
  QArrayData *local_e0;
  QVariant local_d8;
  Data *local_c8;
  Data *local_c0;
  Data *local_b8;
  undefined4 local_b0;
  Data *local_a8;
  QVariant local_a0;
  QVariant local_90;
  Data *local_80;
  QVariant local_78;
  QArrayData *local_68;
  QArrayData *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15d0;
  local_58 = (Data *)*param_3;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar5 = (long)*(int *)(local_58 + 8);
      lVar11 = *param_3;
      if (((Data *)(lVar11 + (long)*(int *)(lVar11 + 8) * 8) != local_58 + lVar5 * 8) &&
         (lVar7 = *(int *)(local_58 + 0xc) - lVar5, lVar7 != 0 && lVar5 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar5 * 8 + 0x10,(void *)(lVar11 + 0x10 + (long)*(int *)(lVar11 + 8) * 8)
                ,lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      if ((*(byte *)(*(long *)(*(long *)local_50 + 0x28) + 9) & 0x80) != 0) {
        QObject::objectName();
        local_68 = (QArrayData *)QString::fromAscii_helper("qt_",3);
        cVar3 = QString::startsWith(&local_60,&local_68,1);
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100526934;
          }
          QArrayData::deallocate(local_68,2,8);
        }
LAB_100526934:
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100526964;
          }
          QArrayData::deallocate(local_60,2,8);
        }
LAB_100526964:
        if (cVar3 == '\0') {
          QObject::property((char *)&local_78);
          cVar3 = QVariant::toBool();
          QVariant::~QVariant(&local_78);
          if (cVar3 == '\0') {
            QObject::property((char *)&local_90);
            QVariant::toStringList();
            cVar3 = FUN_100526250(&local_80);
            pDVar6 = local_80;
            if (*(int *)local_80 != -1) {
              if (*(int *)local_80 != 0) {
                LOCK();
                *(int *)local_80 = *(int *)local_80 + -1;
                local_31 = *(int *)local_80 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100526a7c;
              }
              iVar1 = *(int *)(local_80 + 0xc);
              if (iVar1 != *(int *)(local_80 + 8)) {
                lVar11 = (long)*(int *)(local_80 + 8) * 8 + (long)iVar1 * -8;
                pDVar10 = local_80 + (long)iVar1 * 8 + 8;
                do {
                  pQVar9 = *(QArrayData **)pDVar10;
                  if (*(int *)pQVar9 == 0) {
LAB_100526a50:
                    QArrayData::deallocate(pQVar9,2,8);
                  }
                  else if (*(int *)pQVar9 != -1) {
                    LOCK();
                    *(int *)pQVar9 = *(int *)pQVar9 + -1;
                    local_31 = *(int *)pQVar9 != 0;
                    UNLOCK();
                    if (!(bool)local_31) {
                      pQVar9 = *(QArrayData **)pDVar10;
                      goto LAB_100526a50;
                    }
                  }
                  pDVar10 = pDVar10 + -8;
                  lVar11 = lVar11 + 8;
                } while (lVar11 != 0);
              }
              QListData::dispose(pDVar6);
            }
LAB_100526a7c:
            QVariant::~QVariant(&local_90);
            if (cVar3 != '\0') {
              QObject::property((char *)&local_a0);
              QVariant::toStringList();
              local_c8 = local_a8;
              if (*(int *)local_a8 != -1) {
                if (*(int *)local_a8 == 0) {
                  QListData::detach((int)&local_c8);
                  iVar1 = *(int *)(local_c8 + 8);
                  if (iVar1 != *(int *)(local_c8 + 0xc)) {
                    pDVar6 = local_a8 + (long)*(int *)(local_a8 + 8) * 8 + 0x10;
                    pDVar10 = local_c8 + (long)iVar1 * 8 + 0x10;
                    lVar11 = (long)*(int *)(local_c8 + 0xc) * 8 + (long)iVar1 * -8;
                    do {
                      piVar2 = *(int **)pDVar6;
                      *(int **)pDVar10 = piVar2;
                      if (1 < *piVar2 + 1U) {
                        LOCK();
                        *piVar2 = *piVar2 + 1;
                        local_31 = *piVar2 != 0;
                        UNLOCK();
                      }
                      pDVar10 = pDVar10 + 8;
                      pDVar6 = pDVar6 + 8;
                      lVar11 = lVar11 + -8;
                    } while (lVar11 != 0);
                  }
                }
                else {
                  LOCK();
                  *(int *)local_a8 = *(int *)local_a8 + 1;
                  local_31 = *(int *)local_a8 != 0;
                  UNLOCK();
                }
              }
              pDVar6 = local_c8 + (long)*(int *)(local_c8 + 8) * 8 + 0x10;
              local_b8 = local_c8 + (long)*(int *)(local_c8 + 0xc) * 8 + 0x10;
              local_c0 = pDVar6;
              if (*(int *)(local_c8 + 8) != *(int *)(local_c8 + 0xc)) {
                do {
                  local_b0 = 1;
                  local_c0 = pDVar6;
                  QString::toLatin1();
                  QObject::property((char *)&local_d8);
                  if (*(int *)local_e0 != -1) {
                    if (*(int *)local_e0 != 0) {
                      LOCK();
                      *(int *)local_e0 = *(int *)local_e0 + -1;
                      local_31 = *(int *)local_e0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100526be7;
                    }
                    QArrayData::deallocate(local_e0,1,8);
                  }
LAB_100526be7:
                  QVariant::toStringList();
                  local_108 = local_e8;
                  if (*(int *)local_e8 != -1) {
                    if (*(int *)local_e8 == 0) {
                      QListData::detach((int)&local_108);
                      iVar1 = *(int *)(local_108 + 8);
                      if (iVar1 != *(int *)(local_108 + 0xc)) {
                        pDVar10 = local_e8 + (long)*(int *)(local_e8 + 8) * 8 + 0x10;
                        pDVar8 = local_108 + (long)iVar1 * 8 + 0x10;
                        lVar11 = (long)*(int *)(local_108 + 0xc) * 8 + (long)iVar1 * -8;
                        do {
                          piVar2 = *(int **)pDVar10;
                          *(int **)pDVar8 = piVar2;
                          if (1 < *piVar2 + 1U) {
                            LOCK();
                            *piVar2 = *piVar2 + 1;
                            local_31 = *piVar2 != 0;
                            UNLOCK();
                          }
                          pDVar8 = pDVar8 + 8;
                          pDVar10 = pDVar10 + 8;
                          lVar11 = lVar11 + -8;
                        } while (lVar11 != 0);
                      }
                    }
                    else {
                      LOCK();
                      *(int *)local_e8 = *(int *)local_e8 + 1;
                      local_31 = *(int *)local_e8 != 0;
                      UNLOCK();
                    }
                  }
                  pDVar10 = local_108 + (long)*(int *)(local_108 + 8) * 8 + 0x10;
                  local_f8 = local_108 + (long)*(int *)(local_108 + 0xc) * 8 + 0x10;
                  local_100 = pDVar10;
                  if (*(int *)(local_108 + 8) != *(int *)(local_108 + 0xc)) {
                    do {
                      local_f0 = 1;
                      local_100 = pDVar10;
                      uVar4 = FUN_1003ae480(param_1,pDVar6);
                      this = (QVariant *)FUN_1002edf40(uVar4,pDVar10);
                      local_110 = 0x80000000;
                      local_118.field7 = 0;
                      QVariant::operator=(this,(QVariant *)&local_118);
                      QVariant::~QVariant((QVariant *)&local_118);
                      pDVar10 = local_100 + 8;
                      local_100 = pDVar10;
                    } while (pDVar10 != local_f8);
                  }
                  pDVar6 = local_108;
                  local_f0 = 1;
                  if (*(int *)local_108 != -1) {
                    if (*(int *)local_108 != 0) {
                      LOCK();
                      *(int *)local_108 = *(int *)local_108 + -1;
                      local_31 = *(int *)local_108 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100526dd5;
                    }
                    iVar1 = *(int *)(local_108 + 0xc);
                    if (iVar1 != *(int *)(local_108 + 8)) {
                      lVar11 = (long)*(int *)(local_108 + 8) * 8 + (long)iVar1 * -8;
                      pDVar10 = local_108 + (long)iVar1 * 8 + 8;
                      do {
                        pQVar9 = *(QArrayData **)pDVar10;
                        if (*(int *)pQVar9 == 0) {
LAB_100526db0:
                          QArrayData::deallocate(pQVar9,2,8);
                        }
                        else if (*(int *)pQVar9 != -1) {
                          LOCK();
                          *(int *)pQVar9 = *(int *)pQVar9 + -1;
                          local_31 = *(int *)pQVar9 != 0;
                          UNLOCK();
                          if (!(bool)local_31) {
                            pQVar9 = *(QArrayData **)pDVar10;
                            goto LAB_100526db0;
                          }
                        }
                        pDVar10 = pDVar10 + -8;
                        lVar11 = lVar11 + 8;
                      } while (lVar11 != 0);
                    }
                    QListData::dispose(pDVar6);
                  }
LAB_100526dd5:
                  pDVar6 = local_e8;
                  if (*(int *)local_e8 != -1) {
                    if (*(int *)local_e8 != 0) {
                      LOCK();
                      *(int *)local_e8 = *(int *)local_e8 + -1;
                      local_31 = *(int *)local_e8 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100526e75;
                    }
                    iVar1 = *(int *)(local_e8 + 0xc);
                    if (iVar1 != *(int *)(local_e8 + 8)) {
                      lVar11 = (long)*(int *)(local_e8 + 8) * 8 + (long)iVar1 * -8;
                      pDVar10 = local_e8 + (long)iVar1 * 8 + 8;
                      do {
                        pQVar9 = *(QArrayData **)pDVar10;
                        if (*(int *)pQVar9 == 0) {
LAB_100526e50:
                          QArrayData::deallocate(pQVar9,2,8);
                        }
                        else if (*(int *)pQVar9 != -1) {
                          LOCK();
                          *(int *)pQVar9 = *(int *)pQVar9 + -1;
                          local_31 = *(int *)pQVar9 != 0;
                          UNLOCK();
                          if (!(bool)local_31) {
                            pQVar9 = *(QArrayData **)pDVar10;
                            goto LAB_100526e50;
                          }
                        }
                        pDVar10 = pDVar10 + -8;
                        lVar11 = lVar11 + 8;
                      } while (lVar11 != 0);
                    }
                    QListData::dispose(pDVar6);
                  }
LAB_100526e75:
                  QVariant::~QVariant(&local_d8);
                  pDVar6 = local_c0 + 8;
                  local_c0 = pDVar6;
                } while (pDVar6 != local_b8);
              }
              pDVar6 = local_c8;
              local_b0 = 1;
              if (*(int *)local_c8 != -1) {
                if (*(int *)local_c8 != 0) {
                  LOCK();
                  *(int *)local_c8 = *(int *)local_c8 + -1;
                  local_31 = *(int *)local_c8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100526f41;
                }
                iVar1 = *(int *)(local_c8 + 0xc);
                if (iVar1 != *(int *)(local_c8 + 8)) {
                  lVar11 = (long)*(int *)(local_c8 + 8) * 8 + (long)iVar1 * -8;
                  pDVar10 = local_c8 + (long)iVar1 * 8 + 8;
                  do {
                    pQVar9 = *(QArrayData **)pDVar10;
                    if (*(int *)pQVar9 == 0) {
LAB_100526f20:
                      QArrayData::deallocate(pQVar9,2,8);
                    }
                    else if (*(int *)pQVar9 != -1) {
                      LOCK();
                      *(int *)pQVar9 = *(int *)pQVar9 + -1;
                      local_31 = *(int *)pQVar9 != 0;
                      UNLOCK();
                      if (!(bool)local_31) {
                        pQVar9 = *(QArrayData **)pDVar10;
                        goto LAB_100526f20;
                      }
                    }
                    pDVar10 = pDVar10 + -8;
                    lVar11 = lVar11 + 8;
                  } while (lVar11 != 0);
                }
                QListData::dispose(pDVar6);
              }
LAB_100526f41:
              pDVar6 = local_a8;
              if (*(int *)local_a8 != -1) {
                if (*(int *)local_a8 != 0) {
                  LOCK();
                  *(int *)local_a8 = *(int *)local_a8 + -1;
                  local_31 = *(int *)local_a8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100526fd1;
                }
                iVar1 = *(int *)(local_a8 + 0xc);
                if (iVar1 != *(int *)(local_a8 + 8)) {
                  lVar11 = (long)*(int *)(local_a8 + 8) * 8 + (long)iVar1 * -8;
                  pDVar10 = local_a8 + (long)iVar1 * 8 + 8;
                  do {
                    pQVar9 = *(QArrayData **)pDVar10;
                    if (*(int *)pQVar9 == 0) {
LAB_100526fb0:
                      QArrayData::deallocate(pQVar9,2,8);
                    }
                    else if (*(int *)pQVar9 != -1) {
                      LOCK();
                      *(int *)pQVar9 = *(int *)pQVar9 + -1;
                      local_31 = *(int *)pQVar9 != 0;
                      UNLOCK();
                      if (!(bool)local_31) {
                        pQVar9 = *(QArrayData **)pDVar10;
                        goto LAB_100526fb0;
                      }
                    }
                    pDVar10 = pDVar10 + -8;
                    lVar11 = lVar11 + 8;
                  } while (lVar11 != 0);
                }
                QListData::dispose(pDVar6);
              }
LAB_100526fd1:
              QVariant::~QVariant(&local_a0);
            }
          }
        }
      }
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return param_1;
}

