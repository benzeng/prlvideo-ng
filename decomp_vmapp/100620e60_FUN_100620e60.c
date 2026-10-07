
long FUN_100620e60(long *param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  Data *pDVar3;
  Data *this;
  long lVar4;
  int local_38;
  undefined1 local_31;
  
  lVar4 = *param_1;
  iVar1 = *(int *)(lVar4 + 8);
  local_38 = param_2;
  pDVar3 = (Data *)QListData::detach_grow((int *)param_1,(int)&local_38);
  lVar2 = *param_1;
  FUN_100621000(param_1,lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8,
                lVar2 + 0x10 + ((long)local_38 + (long)*(int *)(lVar2 + 8)) * 8,
                lVar4 + 0x10 + (long)iVar1 * 8);
  lVar2 = *param_1;
  FUN_100621000(param_1,lVar2 + 0x10 +
                        ((long)param_3 + (long)*(int *)(lVar2 + 8) + (long)local_38) * 8,
                lVar2 + 0x10 + (long)*(int *)(lVar2 + 0xc) * 8,
                lVar4 + 0x10 + ((long)iVar1 + (long)local_38) * 8);
  if (*(int *)pDVar3 != -1) {
    if (*(int *)pDVar3 != 0) {
      LOCK();
      *(int *)pDVar3 = *(int *)pDVar3 + -1;
      local_31 = *(int *)pDVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100620f4a;
    }
    iVar1 = *(int *)(pDVar3 + 0xc);
    if (iVar1 != *(int *)(pDVar3 + 8)) {
      lVar4 = (long)*(int *)(pDVar3 + 8) * 8 + (long)iVar1 * -8;
      this = pDVar3 + (long)iVar1 * 8 + 8;
      do {
        QSslCertificate::~QSslCertificate((QSslCertificate *)this);
        this = this + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_100620f4a:
  return *param_1 + 0x10 + ((long)local_38 + (long)*(int *)(*param_1 + 8)) * 8;
}

