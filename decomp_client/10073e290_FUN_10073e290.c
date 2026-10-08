
QString * FUN_10073e290(QString *param_1,long *param_2)

{
  int iVar1;
  Data *pDVar2;
  QArrayData *pQVar3;
  long lVar4;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (*(int *)(*param_2 + 4) == 0) {
    return param_1;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper(".",1);
  QString::split(&local_40,param_2,&local_48,0,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073e31b;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10073e31b:
  QString::operator=(param_1,(QString *)(local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x20));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar4 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = local_40 + (long)iVar1 * 8 + 8;
      do {
        pQVar3 = *(QArrayData **)pDVar2;
        if (*(int *)pQVar3 == 0) {
LAB_10073e3a0:
          QArrayData::deallocate(pQVar3,2,8);
        }
        else if (*(int *)pQVar3 != -1) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar3 = *(QArrayData **)pDVar2;
            goto LAB_10073e3a0;
          }
        }
        pDVar2 = pDVar2 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(local_40);
  }
  return param_1;
}

