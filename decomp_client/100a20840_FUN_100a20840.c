
undefined1 FUN_100a20840(long *param_1)

{
  int iVar1;
  undefined1 uVar2;
  QSslCertificate *this;
  long lVar3;
  QArrayData *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined *local_38;
  undefined1 local_29;
  
  local_38 = PTR_shared_null_1021e15e8;
  if (*(int *)(PTR_shared_null_1021e15e8 + 4) < *(int *)(*param_1 + 0xc) - *(int *)(*param_1 + 8)) {
    if (*(uint *)PTR_shared_null_1021e15e8 < 2) {
      QListData::realloc((int)&local_38);
    }
    else {
      FUN_100a63160(&local_38);
    }
  }
  FUN_100a221d0(&local_58,param_1);
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      QSslCertificate::toDer();
      FUN_1000ee480(&local_38,&local_60);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_29 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100a20913;
        }
        QArrayData::deallocate(local_60,1,8);
      }
LAB_100a20913:
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a2098a;
    }
    iVar1 = *(int *)(local_58 + 0xc);
    if (iVar1 != *(int *)(local_58 + 8)) {
      lVar3 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
      this = (QSslCertificate *)(local_58 + (long)iVar1 * 8 + 8);
      do {
        QSslCertificate::~QSslCertificate(this);
        this = this + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(local_58);
  }
LAB_100a2098a:
  uVar2 = FUN_100a20670(&local_38);
  FUN_1000ee530(&local_38);
  return uVar2;
}

