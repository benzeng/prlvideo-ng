
void FUN_10029eb40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  QSslError *this;
  long lVar3;
  bool bVar4;
  QArrayData *local_70;
  QArrayData *local_68;
  QSslError local_60 [8];
  Data *local_58;
  QSslError *local_50;
  QSslError *local_48;
  uint local_40;
  undefined1 local_31;
  
  FUN_10029f1d0(&local_58,param_3);
  local_50 = (QSslError *)(local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10);
  local_48 = (QSslError *)(local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10);
  local_40 = 1;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      QSslError::QSslError(local_60,local_50);
      if (local_40 != 0) {
        QSslError::errorString();
        QString::toUtf8();
        FUN_100df99c0("","prl_client_app",0,"(!)SSL error == %s",
                      local_68 + *(long *)(local_68 + 0x10));
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10029ec26;
          }
          QArrayData::deallocate(local_68,1,8);
        }
LAB_10029ec26:
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10029ec56;
          }
          QArrayData::deallocate(local_70,2,8);
        }
LAB_10029ec56:
        local_40 = 0;
      }
      QSslError::~QSslError(local_60);
      local_50 = local_50 + 8;
      uVar2 = local_40 ^ 1;
      bVar4 = local_40 != 1;
      local_40 = uVar2;
    } while ((bVar4) && (local_50 != local_48));
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_58 + 0xc);
    if (iVar1 != *(int *)(local_58 + 8)) {
      lVar3 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
      this = (QSslError *)(local_58 + (long)iVar1 * 8 + 8);
      do {
        QSslError::~QSslError(this);
        this = this + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(local_58);
  }
  return;
}

