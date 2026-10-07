
bool FUN_1006c7b50(undefined8 param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  Data *pDVar2;
  int iVar3;
  QArrayData *pQVar4;
  Data *pDVar5;
  long lVar6;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  Data *local_38;
  undefined1 local_29;
  
  local_38 = (Data *)PTR_shared_null_100ba2188;
  if (param_3 == '\0') {
    pQVar4 = (QArrayData *)QString::fromAscii_helper("-n",2);
    local_50 = pQVar4;
    FUN_10000c490(&local_38,&local_50);
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_29 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006c7c85;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
LAB_1006c7c85:
    pQVar4 = (QArrayData *)QString::fromAscii_helper("delete",6);
    local_58 = pQVar4;
    FUN_10000c490(&local_38,&local_58);
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_29 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006c7cd5;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
LAB_1006c7cd5:
    FUN_10000c490(&local_38,param_1);
  }
  else {
    pQVar4 = (QArrayData *)QString::fromAscii_helper("-n",2);
    local_40 = pQVar4;
    FUN_10000c490(&local_38,&local_40);
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_29 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006c7bc8;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
LAB_1006c7bc8:
    pQVar4 = (QArrayData *)QString::fromAscii_helper("add",3);
    local_48 = pQVar4;
    FUN_10000c490(&local_38,&local_48);
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_29 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006c7c18;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
LAB_1006c7c18:
    FUN_10000c490(&local_38,param_1);
    FUN_10000c490(&local_38,param_2);
  }
  iVar3 = FUN_1006c6ce0("/sbin/route",&local_38);
  pDVar2 = local_38;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_1006c7d81;
      local_29 = 0;
    }
    iVar1 = *(int *)(local_38 + 0xc);
    if (iVar1 != *(int *)(local_38 + 8)) {
      lVar6 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = local_38 + (long)iVar1 * 8 + 8;
      do {
        pQVar4 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar4 == 0) {
LAB_1006c7d60:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar4 = *(QArrayData **)pDVar5;
            goto LAB_1006c7d60;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_1006c7d81:
  return iVar3 != 0;
}

