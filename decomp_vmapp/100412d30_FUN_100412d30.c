
void FUN_100412d30(long param_1)

{
  int iVar1;
  Data *pDVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  Data *pDVar5;
  long lVar6;
  QArrayData *local_60;
  QArrayData *local_58;
  Data *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (1 < DAT_1011b55f8) {
    QString::toUtf8();
    pQVar3 = local_38;
    lVar6 = *(long *)(local_38 + 0x10);
    QString::toUtf8();
    FUN_1008e3970("","PrlPsConverter",2,
                  "[PrlPostscript] Convert postscript started: ps: %s to pdf: %s.",pQVar3 + lVar6,
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100412dd6;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_100412dd6:
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100412e06;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
LAB_100412e06:
  local_48 = (QArrayData *)QString::fromAscii_helper("pstopdf",7);
  local_50 = (Data *)PTR_shared_null_100ba2188;
  FUN_10000c490(&local_50,param_1 + 0x10);
  pQVar3 = (QArrayData *)QString::fromAscii_helper("-o",2);
  local_58 = pQVar3;
  FUN_10000c490(&local_50,&local_58);
  FUN_10000c490(&local_50,param_1 + 0x18);
  pQVar4 = (QArrayData *)QString::fromAscii_helper("-p",2);
  local_60 = pQVar4;
  FUN_10000c490(&local_50,&local_60);
  QProcess::start(param_1 + 0x20,&local_48,&local_50,3);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100412ecd;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100412ecd:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100412efa;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100412efa:
  pDVar2 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100412f81;
    }
    iVar1 = *(int *)(local_50 + 0xc);
    if (iVar1 != *(int *)(local_50 + 8)) {
      lVar6 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = local_50 + (long)iVar1 * 8 + 8;
      do {
        pQVar3 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar3 == 0) {
LAB_100412f60:
          QArrayData::deallocate(pQVar3,2,8);
        }
        else if (*(int *)pQVar3 != -1) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_29 = *(int *)pQVar3 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar3 = *(QArrayData **)pDVar5;
            goto LAB_100412f60;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_100412f81:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return;
}

