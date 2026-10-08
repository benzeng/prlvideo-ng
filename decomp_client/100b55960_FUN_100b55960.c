
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100b55960(undefined8 param_1,QString *param_2,QString *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  Data *pDVar8;
  uint uVar9;
  QArrayData *pQVar10;
  long lVar11;
  QString local_90;
  QArrayData *local_88;
  QString local_80;
  QString local_78;
  QHostAddress local_70 [8];
  QString local_68;
  uint local_60;
  Data *local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  QHostAddress::QHostAddress((QHostAddress *)&local_50);
  iVar3 = QString::indexOf(param_1,0x2f,0,1);
  if (iVar3 == -1) {
    cVar2 = QHostAddress::setAddress(&local_50);
    if (cVar2 == '\0') {
      uVar7 = 0;
      goto LAB_100b55f41;
    }
    iVar3 = QHostAddress::protocol();
    if (iVar3 == 0) {
      QString::fromUtf8_helper((char *)&local_48,0x1ed553f);
      QString::operator=(param_3,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_31 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b55eea;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
    }
    else {
      QString::fromUtf8_helper((char *)&local_40,0x1efbfeb);
      QString::operator=(param_3,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b55eea;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
    }
  }
  else {
    bVar1 = true;
    QString::split(&local_58,param_1,0x2f,0,1);
    if (*(uint *)(local_58 + 0xc) - *(uint *)(local_58 + 8) == 2) {
      if (1 < *(uint *)local_58) {
        FUN_100036c40(&local_58,*(uint *)(local_58 + 4));
      }
      cVar2 = QHostAddress::setAddress(&local_50);
      if (cVar2 != '\0') {
        QHostAddress::parseSubnet(&local_68);
        bVar1 = true;
        if (local_60 != 0xffffffff) {
          iVar3 = QHostAddress::protocol();
          if (iVar3 == 0) {
            if (0 < (int)local_60) {
              uVar9 = 0;
              if (local_60 != 0) {
                uVar9 = local_60 & 0xfffffff8;
                if (uVar9 == 0) {
                  uVar9 = 0;
                }
                else {
                  uVar5 = (local_60 & 0xfffffff8) - 8;
                  if (((uVar5 >> 3) + 1 & 1) == 0) {
                    uVar4 = 0;
                  }
                  else {
                    uVar4 = 8;
                  }
                  if (uVar5 != 0) {
                    do {
                      uVar4 = uVar4 + 0x10;
                    } while (uVar4 != uVar9);
                  }
                }
                if (local_60 == uVar9) goto LAB_100b55ddb;
              }
              uVar5 = uVar9 + 1;
              uVar4 = uVar5;
              if ((int)uVar5 <= (int)local_60) {
                uVar4 = local_60;
              }
              uVar6 = (uVar4 - 1) - uVar9;
              if ((uVar4 & 3) != 0) {
                if ((int)uVar5 <= (int)local_60) {
                  uVar5 = local_60;
                }
                iVar3 = -(uVar5 & 3);
                do {
                  uVar9 = uVar9 + 1;
                  iVar3 = iVar3 + 1;
                } while (iVar3 != 0);
              }
              if (2 < uVar6) {
                do {
                  uVar9 = uVar9 + 4;
                } while ((int)uVar9 < (int)local_60);
              }
            }
LAB_100b55ddb:
            QHostAddress::QHostAddress(local_70);
            QHostAddress::setAddress((uint)local_70);
            QHostAddress::toString();
            QString::operator=(param_3,&local_78);
            if (*(int *)local_78.field0_0x0 != -1) {
              if (*(int *)local_78.field0_0x0 != 0) {
                LOCK();
                *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
                local_31 = *(int *)local_78.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100b55e38;
              }
              QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
            }
LAB_100b55e38:
            bVar1 = false;
            QHostAddress::~QHostAddress(local_70);
          }
          else {
            local_88 = (QArrayData *)QString::fromAscii_helper("%1",2);
            QString::arg(&local_80,&local_88,(long)(int)local_60,0,10,0x20);
            QString::operator=(param_3,&local_80);
            if (*(int *)local_80.field0_0x0 != -1) {
              if (*(int *)local_80.field0_0x0 != 0) {
                LOCK();
                *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
                local_31 = *(int *)local_80.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100b55aa2;
              }
              QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
            }
LAB_100b55aa2:
            bVar1 = false;
            if (*(int *)local_88 != -1) {
              bVar1 = false;
              if (*(int *)local_88 != 0) {
                LOCK();
                *(int *)local_88 = *(int *)local_88 + -1;
                local_31 = *(int *)local_88 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100b55e44;
              }
              QArrayData::deallocate(local_88,2,8);
            }
          }
        }
LAB_100b55e44:
        QHostAddress::~QHostAddress((QHostAddress *)&local_68);
      }
    }
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b55ee1;
      }
      iVar3 = *(int *)(local_58 + 0xc);
      if (iVar3 != *(int *)(local_58 + 8)) {
        lVar11 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar3 * -8;
        pDVar8 = local_58 + (long)iVar3 * 8 + 8;
        do {
          pQVar10 = *(QArrayData **)pDVar8;
          if (*(int *)pQVar10 == 0) {
LAB_100b55ec0:
            QArrayData::deallocate(pQVar10,2,8);
          }
          else if (*(int *)pQVar10 != -1) {
            LOCK();
            *(int *)pQVar10 = *(int *)pQVar10 + -1;
            local_31 = *(int *)pQVar10 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar10 = *(QArrayData **)pDVar8;
              goto LAB_100b55ec0;
            }
          }
          pDVar8 = pDVar8 + -8;
          lVar11 = lVar11 + 8;
        } while (lVar11 != 0);
      }
      QListData::dispose(local_58);
    }
LAB_100b55ee1:
    if (bVar1) {
      uVar7 = 0;
      goto LAB_100b55f41;
    }
  }
LAB_100b55eea:
  QHostAddress::toString();
  QString::operator=(param_2,&local_90);
  uVar7 = 1;
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b55f41;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_100b55f41:
  QHostAddress::~QHostAddress((QHostAddress *)&local_50);
  return uVar7;
}

