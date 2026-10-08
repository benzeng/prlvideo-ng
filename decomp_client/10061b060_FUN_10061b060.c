
undefined8 FUN_10061b060(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  Data *pDVar2;
  QArrayData *pQVar3;
  long lVar4;
  QArrayData *local_48;
  QArrayData *local_40;
  Data *local_38;
  undefined4 local_30;
  undefined1 local_29;
  
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  local_30 = 0x80011000;
  FUN_100616a30(param_2,&local_30,&local_40);
  local_48 = (QArrayData *)QString::fromAscii_helper(";",1);
  QString::split(&local_38,&local_40,&local_48,0,1);
  QString::trimmed();
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10061b161;
    }
    iVar1 = *(int *)(local_38 + 0xc);
    if (iVar1 != *(int *)(local_38 + 8)) {
      lVar4 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      pDVar2 = local_38 + (long)iVar1 * 8 + 8;
      do {
        pQVar3 = *(QArrayData **)pDVar2;
        if (*(int *)pQVar3 == 0) {
LAB_10061b140:
          QArrayData::deallocate(pQVar3,2,8);
        }
        else if (*(int *)pQVar3 != -1) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_29 = *(int *)pQVar3 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar3 = *(QArrayData **)pDVar2;
            goto LAB_10061b140;
          }
        }
        pDVar2 = pDVar2 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(local_38);
  }
LAB_10061b161:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10061b191;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10061b191:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return param_1;
}

