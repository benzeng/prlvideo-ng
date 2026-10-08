
void FUN_100a20c60(undefined8 param_1,QList *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  Data *pDVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  Data *pDVar7;
  Data *pDVar8;
  QSslError *pQVar9;
  QSslError *this;
  QArrayData *pQVar10;
  QSslCertificate *pQVar11;
  Data *pDVar12;
  int iVar13;
  QSslCertificate *pQVar14;
  Data *pDVar15;
  long lVar16;
  bool bVar17;
  Data *local_f8;
  Data *local_d8;
  QSslCertificate local_d0 [8];
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  Data *local_a8;
  QSslError *local_a0;
  QSslError *local_98;
  undefined4 local_90;
  QSslCertificate local_88 [8];
  QSslConfiguration local_80 [8];
  Data *local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  uint local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  FUN_10029f1d0(&local_50,param_3);
  FUN_10029f1d0(&local_70,param_3);
  local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
  local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
  local_58 = 1;
  if (*(int *)(local_70 + 8) == *(int *)(local_70 + 0xc)) {
    local_d8 = (Data *)PTR_shared_null_1021e15e8;
  }
  else {
    local_f8 = (Data *)PTR_shared_null_1021e15e8;
    local_d8 = (Data *)PTR_shared_null_1021e15e8;
    pDVar8 = (Data *)PTR_shared_null_1021e15e8;
    pDVar12 = (Data *)PTR_shared_null_1021e15e8;
    pDVar7 = (Data *)PTR_shared_null_1021e15e8;
    do {
      pDVar3 = local_68;
      if (local_58 == 0) {
LAB_100a21057:
        local_68 = local_68 + 8;
        local_58 = 1;
      }
      else {
        uVar5 = QSslError::error();
        if ((0x11 < uVar5) || ((0x20e02U >> (uVar5 & 0x1f) & 1) == 0)) {
LAB_100a20f80:
          uVar5 = *(uint *)(local_50 + 8);
          if ((int)uVar5 < (int)*(uint *)(local_50 + 0xc)) {
            pDVar15 = local_50 + (long)(int)uVar5 * 8 + 8;
            lVar16 = (long)(int)*(uint *)(local_50 + 0xc) * 8 + (long)(int)uVar5 * -8;
            do {
              if (lVar16 == 0) goto LAB_100a21057;
              cVar4 = QSslError::operator==((QSslError *)(pDVar15 + 8),(QSslError *)pDVar3);
              pDVar15 = pDVar15 + 8;
              lVar16 = lVar16 + -8;
            } while (cVar4 == '\0');
            uVar5 = *(uint *)(local_50 + 8);
            iVar13 = (int)((ulong)((long)pDVar15 - (long)(local_50 + (long)(int)uVar5 * 8 + 0x10))
                          >> 3);
            if ((-1 < iVar13) && (iVar13 < (int)(*(uint *)(local_50 + 0xc) - uVar5))) {
              if (1 < *(uint *)local_50) {
                FUN_100a22270(&local_50,*(uint *)(local_50 + 4));
                uVar5 = *(uint *)(local_50 + 8);
              }
              QSslError::~QSslError
                        ((QSslError *)(local_50 + ((long)iVar13 + (long)(int)uVar5) * 8 + 0x10));
              QListData::remove((int)&local_50);
            }
          }
          goto LAB_100a21057;
        }
        if (*(int *)(pDVar8 + 0xc) != *(int *)(pDVar8 + 8)) {
LAB_100a20ec4:
          QSslError::certificate();
          iVar13 = *(int *)(local_f8 + 8);
          pQVar11 = (QSslCertificate *)(local_f8 + (long)iVar13 * 8 + 0x10);
          iVar1 = *(int *)(local_f8 + 0xc);
          pQVar14 = pQVar11;
          if (iVar13 != iVar1) {
            lVar16 = (long)iVar1 * 8 + (long)iVar13 * -8;
            do {
              cVar4 = QSslCertificate::operator==(pQVar11,local_88);
              pQVar14 = pQVar11;
              if (cVar4 != '\0') break;
              pQVar11 = pQVar11 + 8;
              lVar16 = lVar16 + -8;
              pQVar14 = (QSslCertificate *)(local_f8 + (long)iVar1 * 8 + 0x10);
            } while (lVar16 != 0);
          }
          QSslCertificate::~QSslCertificate(local_88);
          pDVar8 = local_f8;
          pDVar12 = local_f8;
          pDVar7 = local_f8;
          if (pQVar14 != (QSslCertificate *)(local_f8 + (long)iVar1 * 8 + 0x10)) goto LAB_100a21057;
          goto LAB_100a20f80;
        }
        QNetworkReply::sslConfiguration();
        QSslConfiguration::peerCertificateChain();
        pDVar8 = pDVar12;
        if (pDVar7 != local_78) {
          FUN_100a221d0(&local_40,&local_78);
          pDVar7 = local_40;
          local_48 = local_40;
          pDVar8 = pDVar7;
          if (*(int *)pDVar12 == -1) {
LAB_100a20dcc:
            local_d8 = local_40;
            local_f8 = local_40;
            local_40 = pDVar12;
          }
          else {
            if (*(int *)pDVar12 != 0) {
              LOCK();
              *(int *)pDVar12 = *(int *)pDVar12 + -1;
              local_31 = *(int *)pDVar12 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a20dcc;
            }
            iVar13 = *(int *)(pDVar12 + 0xc);
            local_40 = pDVar12;
            if (iVar13 != *(int *)(pDVar12 + 8)) {
              lVar16 = (long)*(int *)(pDVar12 + 8) * 8 + (long)iVar13 * -8;
              pQVar11 = (QSslCertificate *)(pDVar12 + (long)iVar13 * 8 + 8);
              do {
                QSslCertificate::~QSslCertificate(pQVar11);
                pQVar11 = pQVar11 + -8;
                lVar16 = lVar16 + 8;
              } while (lVar16 != 0);
            }
            QListData::dispose(pDVar12);
            local_d8 = pDVar7;
            local_f8 = pDVar7;
          }
        }
        pDVar12 = local_78;
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a20eae;
          }
          iVar13 = *(int *)(local_78 + 0xc);
          if (iVar13 != *(int *)(local_78 + 8)) {
            lVar16 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar13 * -8;
            pQVar11 = (QSslCertificate *)(local_78 + (long)iVar13 * 8 + 8);
            do {
              QSslCertificate::~QSslCertificate(pQVar11);
              pQVar11 = pQVar11 + -8;
              lVar16 = lVar16 + 8;
            } while (lVar16 != 0);
          }
          QListData::dispose(pDVar12);
        }
LAB_100a20eae:
        QSslConfiguration::~QSslConfiguration(local_80);
        cVar4 = FUN_100a20840(&local_48);
        if (cVar4 != '\0') goto LAB_100a20ec4;
        FUN_100a22040(&local_50);
        local_68 = local_68 + 8;
        uVar5 = local_58 ^ 1;
        bVar17 = local_58 == 1;
        pDVar12 = pDVar8;
        pDVar8 = pDVar7;
        local_58 = uVar5;
        if (bVar17) break;
      }
    } while (local_68 != local_60);
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a210ed;
    }
    iVar13 = *(int *)(local_70 + 0xc);
    if (iVar13 != *(int *)(local_70 + 8)) {
      lVar16 = (long)*(int *)(local_70 + 8) * 8 + (long)iVar13 * -8;
      pQVar9 = (QSslError *)(local_70 + (long)iVar13 * 8 + 8);
      do {
        QSslError::~QSslError(pQVar9);
        pQVar9 = pQVar9 + -8;
        lVar16 = lVar16 + 8;
      } while (lVar16 != 0);
    }
    QListData::dispose(local_70);
  }
LAB_100a210ed:
  if ((int)(*(uint *)(local_50 + 0xc) - *(uint *)(local_50 + 8)) <
      *(int *)(*param_3 + 0xc) - *(int *)(*param_3 + 8)) {
    FUN_100a23460(param_1,param_2,param_3,&local_50);
    FUN_10029f1d0(&local_a8,param_3);
    pQVar9 = (QSslError *)(local_a8 + (long)*(int *)(local_a8 + 8) * 8 + 0x10);
    local_98 = (QSslError *)(local_a8 + (long)*(int *)(local_a8 + 0xc) * 8 + 0x10);
    local_a0 = pQVar9;
    if (*(int *)(local_a8 + 8) != *(int *)(local_a8 + 0xc)) {
      do {
        pDVar7 = local_50;
        local_90 = 1;
        uVar5 = *(uint *)(local_50 + 8);
        this = (QSslError *)(local_50 + (long)(int)uVar5 * 8 + 0x10);
        uVar2 = *(uint *)(local_50 + 0xc);
        local_a0 = pQVar9;
        if (uVar5 == uVar2) {
LAB_100a211b0:
          if (this == (QSslError *)(pDVar7 + (long)(int)uVar2 * 8 + 0x10)) goto LAB_100a211be;
        }
        else {
          lVar16 = (long)(int)uVar2 * 8 + (long)(int)uVar5 * -8;
          do {
            cVar4 = QSslError::operator==(this,pQVar9);
            if (cVar4 != '\0') goto LAB_100a211b0;
            this = this + 8;
            lVar16 = lVar16 + -8;
          } while (lVar16 != 0);
LAB_100a211be:
          uVar6 = QSslError::error();
          QSslError::errorString();
          QString::toUtf8();
          pQVar10 = local_b0 + *(long *)(local_b0 + 0x10);
          QSslError::certificate();
          QSslCertificate::toText();
          QString::toUtf8();
          FUN_100df99c0("","TrustHelper",0,"SSL Error: %d, %s, %s",uVar6,pQVar10,
                        local_c0 + *(long *)(local_c0 + 0x10));
          if (*(int *)local_c0 != -1) {
            if (*(int *)local_c0 != 0) {
              LOCK();
              *(int *)local_c0 = *(int *)local_c0 + -1;
              local_31 = *(int *)local_c0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a21295;
            }
            QArrayData::deallocate(local_c0,1,8);
          }
LAB_100a21295:
          if (*(int *)local_c8 != -1) {
            if (*(int *)local_c8 != 0) {
              LOCK();
              *(int *)local_c8 = *(int *)local_c8 + -1;
              local_31 = *(int *)local_c8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a212cb;
            }
            QArrayData::deallocate(local_c8,2,8);
          }
LAB_100a212cb:
          QSslCertificate::~QSslCertificate(local_d0);
          if (*(int *)local_b0 != -1) {
            if (*(int *)local_b0 != 0) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + -1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a21309;
            }
            QArrayData::deallocate(local_b0,1,8);
          }
LAB_100a21309:
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              local_31 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a21340;
            }
            QArrayData::deallocate(local_b8,2,8);
          }
        }
LAB_100a21340:
        pQVar9 = local_a0 + 8;
        local_a0 = pQVar9;
      } while (pQVar9 != local_98);
    }
    local_90 = 1;
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a213da;
      }
      iVar13 = *(int *)(local_a8 + 0xc);
      if (iVar13 != *(int *)(local_a8 + 8)) {
        lVar16 = (long)*(int *)(local_a8 + 8) * 8 + (long)iVar13 * -8;
        pQVar9 = (QSslError *)(local_a8 + (long)iVar13 * 8 + 8);
        do {
          QSslError::~QSslError(pQVar9);
          pQVar9 = pQVar9 + -8;
          lVar16 = lVar16 + 8;
        } while (lVar16 != 0);
      }
      QListData::dispose(local_a8);
    }
  }
LAB_100a213da:
  if (*(uint *)(local_50 + 0xc) != *(uint *)(local_50 + 8)) {
    QNetworkReply::ignoreSslErrors(param_2);
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a2145a;
    }
    iVar13 = *(int *)(local_50 + 0xc);
    if (iVar13 != *(int *)(local_50 + 8)) {
      lVar16 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar13 * -8;
      pQVar9 = (QSslError *)(local_50 + (long)iVar13 * 8 + 8);
      do {
        QSslError::~QSslError(pQVar9);
        pQVar9 = pQVar9 + -8;
        lVar16 = lVar16 + 8;
      } while (lVar16 != 0);
    }
    QListData::dispose(local_50);
  }
LAB_100a2145a:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    iVar13 = *(int *)(local_d8 + 0xc);
    if (iVar13 != *(int *)(local_d8 + 8)) {
      lVar16 = (long)*(int *)(local_d8 + 8) * 8 + (long)iVar13 * -8;
      pQVar11 = (QSslCertificate *)(local_d8 + (long)iVar13 * 8 + 8);
      do {
        QSslCertificate::~QSslCertificate(pQVar11);
        pQVar11 = pQVar11 + -8;
        lVar16 = lVar16 + 8;
      } while (lVar16 != 0);
    }
    QListData::dispose(local_d8);
  }
  return;
}

