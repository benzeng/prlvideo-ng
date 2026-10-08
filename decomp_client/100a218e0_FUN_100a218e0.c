
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_100a218e0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  Data *pDVar1;
  char cVar2;
  int iVar3;
  Data *pDVar4;
  QSslError *pQVar5;
  QArrayData *pQVar6;
  Data *pDVar7;
  long lVar8;
  QSslCertificate local_90 [8];
  Data *local_88;
  QSslCertificate local_80 [8];
  Data *local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  undefined4 local_58;
  Data *local_50;
  QUrl local_48 [8];
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_2 == 0) goto LAB_100a21c74;
  if ((DAT_102313800 == '\0') && (iVar3 = ___cxa_guard_acquire(&DAT_102313800), iVar3 != 0)) {
    _DAT_1023137f8 = QString::fromAscii_helper(".parallels.com",0xe);
    ___cxa_atexit(FUN_100054e40,&DAT_1023137f8,0x100000000);
    ___cxa_guard_release(&DAT_102313800);
  }
  QNetworkReply::url();
  QUrl::host(&local_40,local_48,0x7f00000);
  cVar2 = QString::endsWith(&local_40,&DAT_1023137f8,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a219c5;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100a219c5:
  QUrl::~QUrl(local_48);
  if (cVar2 == '\0') {
LAB_100a21c74:
    *param_1 = PTR_shared_null_1021e15e8;
    return param_1;
  }
  local_50 = (Data *)PTR_shared_null_1021e15e8;
  FUN_10029f1d0(&local_70,param_3);
  pDVar7 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
  local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
  local_68 = pDVar7;
  if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
    do {
      local_58 = 1;
      local_68 = pDVar7;
      iVar3 = QSslError::error();
      if (iVar3 == 0x16) {
        QSslError::certificate();
        QSslCertificate::subjectInfo(&local_78,local_80,1);
        if (*(int *)(local_78 + 0xc) == *(int *)(local_78 + 8)) {
          cVar2 = '\0';
        }
        else {
          QSslError::certificate();
          QSslCertificate::subjectInfo(&local_88,local_90,1);
          if (1 < *(uint *)local_88) {
            FUN_100036c40(&local_88,*(uint *)(local_88 + 4));
          }
          cVar2 = QString::endsWith(local_88 + (long)(int)*(uint *)(local_88 + 8) * 8 + 0x10,
                                    &DAT_1023137f8,1);
          pDVar1 = local_88;
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a21b6f;
            }
            iVar3 = *(int *)(local_88 + 0xc);
            if (iVar3 != *(int *)(local_88 + 8)) {
              lVar8 = (long)*(int *)(local_88 + 8) * 8 + (long)iVar3 * -8;
              pDVar4 = local_88 + (long)iVar3 * 8 + 8;
              do {
                pQVar6 = *(QArrayData **)pDVar4;
                if (*(int *)pQVar6 == 0) {
LAB_100a21b40:
                  QArrayData::deallocate(pQVar6,2,8);
                }
                else if (*(int *)pQVar6 != -1) {
                  LOCK();
                  *(int *)pQVar6 = *(int *)pQVar6 + -1;
                  local_31 = *(int *)pQVar6 != 0;
                  UNLOCK();
                  if (!(bool)local_31) {
                    pQVar6 = *(QArrayData **)pDVar4;
                    goto LAB_100a21b40;
                  }
                }
                pDVar4 = pDVar4 + -8;
                lVar8 = lVar8 + 8;
              } while (lVar8 != 0);
            }
            QListData::dispose(pDVar1);
          }
LAB_100a21b6f:
          QSslCertificate::~QSslCertificate(local_90);
        }
        pDVar1 = local_78;
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a21c1f;
          }
          iVar3 = *(int *)(local_78 + 0xc);
          if (iVar3 != *(int *)(local_78 + 8)) {
            lVar8 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar3 * -8;
            pDVar4 = local_78 + (long)iVar3 * 8 + 8;
            do {
              pQVar6 = *(QArrayData **)pDVar4;
              if (*(int *)pQVar6 == 0) {
LAB_100a21bf0:
                QArrayData::deallocate(pQVar6,2,8);
              }
              else if (*(int *)pQVar6 != -1) {
                LOCK();
                *(int *)pQVar6 = *(int *)pQVar6 + -1;
                local_31 = *(int *)pQVar6 != 0;
                UNLOCK();
                if (!(bool)local_31) {
                  pQVar6 = *(QArrayData **)pDVar4;
                  goto LAB_100a21bf0;
                }
              }
              pDVar4 = pDVar4 + -8;
              lVar8 = lVar8 + 8;
            } while (lVar8 != 0);
          }
          QListData::dispose(pDVar1);
        }
LAB_100a21c1f:
        QSslCertificate::~QSslCertificate(local_80);
        if (cVar2 != '\0') {
          FUN_100a22350(&local_50,pDVar7);
        }
      }
      pDVar7 = local_68 + 8;
      local_68 = pDVar7;
    } while (pDVar7 != local_60);
  }
  local_58 = 1;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a21cfd;
    }
    iVar3 = *(int *)(local_70 + 0xc);
    if (iVar3 != *(int *)(local_70 + 8)) {
      lVar8 = (long)*(int *)(local_70 + 8) * 8 + (long)iVar3 * -8;
      pQVar5 = (QSslError *)(local_70 + (long)iVar3 * 8 + 8);
      do {
        QSslError::~QSslError(pQVar5);
        pQVar5 = pQVar5 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(local_70);
  }
LAB_100a21cfd:
  FUN_10029f1d0(param_1,&local_50);
  pDVar7 = local_50;
  if (*(int *)local_50 == -1) {
    return param_1;
  }
  if (*(int *)local_50 != 0) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + -1;
    UNLOCK();
    if (*(int *)local_50 != 0) {
      return param_1;
    }
    local_31 = 0;
  }
  iVar3 = *(int *)(local_50 + 0xc);
  if (iVar3 != *(int *)(local_50 + 8)) {
    lVar8 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar3 * -8;
    pQVar5 = (QSslError *)(local_50 + (long)iVar3 * 8 + 8);
    do {
      QSslError::~QSslError(pQVar5);
      pQVar5 = pQVar5 + -8;
      lVar8 = lVar8 + 8;
    } while (lVar8 != 0);
  }
  QListData::dispose(pDVar7);
  return param_1;
}

