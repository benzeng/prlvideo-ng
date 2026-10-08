
void FUN_100a22f20(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  Data *pDVar3;
  QArrayData *pQVar4;
  QSslCertificate *this;
  long lVar5;
  bool bVar6;
  QArrayData *local_78;
  QArrayData *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  undefined4 local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QSslCertificate::serialNumber();
  QSslCertificate::digest(&local_48,param_1,2);
  FUN_100a221d0(&local_68,param_2);
  pDVar3 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
  local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
  local_50 = 1;
  iVar2 = 2;
  local_60 = pDVar3;
  if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
    do {
      local_50 = 1;
      local_60 = pDVar3;
      QSslCertificate::serialNumber();
      if (*(int *)(local_40 + 4) == *(int *)(local_70 + 4)) {
        iVar2 = _memcmp(local_40 + *(long *)(local_40 + 0x10),local_70 + *(long *)(local_70 + 0x10),
                        (long)*(int *)(local_40 + 4));
        if (iVar2 == 0) {
          QSslCertificate::digest(&local_78,pDVar3,2);
          pQVar4 = local_78;
          if (*(int *)(local_48 + 4) == *(int *)(local_78 + 4)) {
            iVar2 = _memcmp(local_48 + *(long *)(local_48 + 0x10),
                            local_78 + *(long *)(local_78 + 0x10),(long)*(int *)(local_48 + 4));
            bVar6 = iVar2 == 0;
          }
          else {
            bVar6 = false;
          }
          if (*(int *)pQVar4 != -1) {
            if (*(int *)pQVar4 != 0) {
              LOCK();
              *(int *)pQVar4 = *(int *)pQVar4 + -1;
              local_31 = *(int *)pQVar4 != 0;
              UNLOCK();
              pQVar4 = local_78;
              if ((bool)local_31) goto LAB_100a22fe3;
            }
            QArrayData::deallocate(pQVar4,1,8);
          }
        }
        else {
          bVar6 = false;
        }
      }
      else {
        bVar6 = false;
      }
LAB_100a22fe3:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a23013;
        }
        QArrayData::deallocate(local_70,1,8);
      }
LAB_100a23013:
      iVar2 = 1;
      if (bVar6) break;
      pDVar3 = local_60 + 8;
      local_50 = 1;
      iVar2 = 2;
      local_60 = pDVar3;
    } while (pDVar3 != local_58);
  }
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a2316a;
    }
    iVar1 = *(int *)(local_68 + 0xc);
    if (iVar1 != *(int *)(local_68 + 8)) {
      lVar5 = (long)*(int *)(local_68 + 8) * 8 + (long)iVar1 * -8;
      this = (QSslCertificate *)(local_68 + (long)iVar1 * 8 + 8);
      do {
        QSslCertificate::~QSslCertificate(this);
        this = this + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_68);
  }
LAB_100a2316a:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a2319e;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100a2319e:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a231ce;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100a231ce:
  if (iVar2 == 2) {
    FUN_1009e5f40(param_2,param_1);
  }
  return;
}

