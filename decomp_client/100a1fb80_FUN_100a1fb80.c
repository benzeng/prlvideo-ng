
undefined1 FUN_100a1fb80(char *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  Data *pDVar6;
  Data *pDVar7;
  QArrayData *pQVar8;
  undefined1 uVar9;
  bool bVar10;
  QVariant local_c8;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  uint local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  Data *local_58;
  QArrayData *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  lVar5 = QMetaEnum::name();
  if (lVar5 == 0) {
    return 0;
  }
  QString::toLatin1();
  QObject::property((char *)&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a1fc07;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100a1fc07:
  if ((local_48.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0) {
    uVar9 = 0;
    goto LAB_100a20211;
  }
  QVariant::toString();
  QString::split(&local_58,&local_60,0x2c,0,1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a1fc67;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100a1fc67:
  if (*(int *)(local_58 + 0xc) == *(int *)(local_58 + 8)) {
    uVar9 = 0;
  }
  else {
    iVar3 = QMetaEnum::keyCount();
    QBitArray::QBitArray((QBitArray *)&local_68,iVar3 + -1,false);
    local_88 = local_58;
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 == 0) {
        QListData::detach((int)&local_88);
        iVar3 = *(int *)(local_88 + 8);
        if (iVar3 != *(int *)(local_88 + 0xc)) {
          pDVar7 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
          pDVar6 = local_88 + (long)iVar3 * 8 + 0x10;
          lVar5 = (long)*(int *)(local_88 + 0xc) * 8 + (long)iVar3 * -8;
          do {
            piVar2 = *(int **)pDVar7;
            *(int **)pDVar6 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_31 = *piVar2 != 0;
              UNLOCK();
            }
            pDVar6 = pDVar6 + 8;
            pDVar7 = pDVar7 + 8;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
      }
      else {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + 1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
      }
    }
    local_80 = local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10;
    local_78 = local_88 + (long)*(int *)(local_88 + 0xc) * 8 + 0x10;
    local_70 = 1;
    if (*(int *)(local_88 + 8) != *(int *)(local_88 + 0xc)) {
      do {
        local_90 = *(QArrayData **)local_80;
        if (1 < *(int *)local_90 + 1U) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + 1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
        }
        iVar3 = 5;
        if (local_70 == 0) goto LAB_100a1feb8;
        if (*(int *)(local_90 + 4) == 0) {
LAB_100a1feb1:
          iVar3 = 5;
          local_70 = 0;
        }
        else {
          QString::trimmed();
          QString::toLatin1();
          iVar3 = QMetaEnum::keyToValue(param_2,(bool *)(local_98 + *(long *)(local_98 + 0x10)));
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a1fe20;
            }
            QArrayData::deallocate(local_98,1,8);
          }
LAB_100a1fe20:
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a1fe56;
            }
            QArrayData::deallocate(local_a0,2,8);
          }
LAB_100a1fe56:
          if (iVar3 != -1) {
            if ((1 < *(uint *)local_68) || (*(long *)(local_68 + 0x10) != 0x18)) {
              QByteArray::reallocData
                        (&local_68,*(uint *)(local_68 + 4) + 1,*(uint *)(local_68 + 8) >> 0x1f);
            }
            lVar5 = (long)((iVar3 >> 3) + 1) + *(long *)(local_68 + 0x10);
            local_68[lVar5] = (QArrayData)((byte)local_68[lVar5] | (byte)(1 << ((byte)iVar3 & 7)));
            goto LAB_100a1feb1;
          }
          local_b0 = local_90;
          if (1 < *(int *)local_90 + 1U) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + 1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_100df99c0("","MetaObjectUtils",0,"Invalid object availability flag: %s",
                        local_a8 + *(long *)(local_a8 + 0x10));
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a1ffb7;
            }
            QArrayData::deallocate(local_a8,1,8);
          }
LAB_100a1ffb7:
          iVar3 = 1;
          if (*(int *)local_b0 != -1) {
            if (*(int *)local_b0 != 0) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + -1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a1feb8;
            }
            QArrayData::deallocate(local_b0,2,8);
          }
        }
LAB_100a1feb8:
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a1feee;
          }
          QArrayData::deallocate(local_90,2,8);
        }
LAB_100a1feee:
        if (iVar3 != 5) goto LAB_100a2000c;
        local_80 = local_80 + 8;
        uVar4 = local_70 ^ 1;
        bVar10 = local_70 != 1;
        local_70 = uVar4;
      } while ((bVar10) && (local_80 != local_78));
    }
    iVar3 = 2;
LAB_100a2000c:
    pDVar7 = local_88;
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a200b6;
      }
      iVar1 = *(int *)(local_88 + 0xc);
      if (iVar1 != *(int *)(local_88 + 8)) {
        lVar5 = (long)*(int *)(local_88 + 8) * 8 + (long)iVar1 * -8;
        pDVar6 = local_88 + (long)iVar1 * 8 + 8;
        do {
          pQVar8 = *(QArrayData **)pDVar6;
          if (*(int *)pQVar8 == 0) {
LAB_100a2008f:
            QArrayData::deallocate(pQVar8,2,8);
          }
          else if (*(int *)pQVar8 != -1) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_31 = *(int *)pQVar8 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar8 = *(QArrayData **)pDVar6;
              goto LAB_100a2008f;
            }
          }
          pDVar6 = pDVar6 + -8;
          lVar5 = lVar5 + 8;
        } while (lVar5 != 0);
      }
      QListData::dispose(pDVar7);
    }
LAB_100a200b6:
    if (iVar3 == 2) {
      QString::toLatin1();
      pQVar8 = local_b8;
      lVar5 = *(long *)(local_b8 + 0x10);
      QVariant::QVariant(&local_c8,(QBitArray *)&local_68);
      QObject::setProperty(param_1,(QVariant *)(pQVar8 + lVar5));
      QVariant::~QVariant(&local_c8);
      uVar9 = 1;
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a20150;
        }
        QArrayData::deallocate(local_b8,1,8);
      }
    }
    else {
      uVar9 = 0;
    }
LAB_100a20150:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a20180;
      }
      QArrayData::deallocate(local_68,1,8);
    }
  }
LAB_100a20180:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a20211;
    }
    iVar3 = *(int *)(local_58 + 0xc);
    if (iVar3 != *(int *)(local_58 + 8)) {
      lVar5 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar3 * -8;
      pDVar7 = local_58 + (long)iVar3 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_100a201f0:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_100a201f0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_58);
  }
LAB_100a20211:
  QVariant::~QVariant(&local_48);
  return uVar9;
}

