
bool FUN_1006c75a0(undefined8 param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  Data *pDVar2;
  int iVar3;
  QArrayData *pQVar4;
  Data *pDVar5;
  long lVar6;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  Data *local_38;
  undefined1 local_29;
  
  local_38 = (Data *)PTR_shared_null_100ba2188;
  pQVar4 = (QArrayData *)QString::fromAscii_helper("-U",2);
  local_40 = pQVar4;
  FUN_10000c490(&local_38,&local_40);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006c7613;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1006c7613:
  pQVar4 = (QArrayData *)QString::fromAscii_helper("-w1",3);
  local_48 = pQVar4;
  FUN_10000c490(&local_38,&local_48);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006c7663;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1006c7663:
  pQVar4 = (QArrayData *)QString::fromAscii_helper("-c1",3);
  local_50 = pQVar4;
  FUN_10000c490(&local_38,&local_50);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006c76b3;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1006c76b3:
  if (*(int *)(*param_2 + 4) != 0) {
    pQVar4 = (QArrayData *)QString::fromAscii_helper("-S",2);
    local_58 = pQVar4;
    FUN_10000c490(&local_38,&local_58);
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_29 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006c7711;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
LAB_1006c7711:
    FUN_10000c490(&local_38,param_2);
    pQVar4 = (QArrayData *)QString::fromAscii_helper("-s",2);
    local_60 = pQVar4;
    FUN_10000c490(&local_38,&local_60);
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_29 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006c776d;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
LAB_1006c776d:
    FUN_10000c490(&local_38,param_2);
  }
  pQVar4 = (QArrayData *)QString::fromAscii_helper("-e",2);
  local_68 = pQVar4;
  FUN_10000c490(&local_38,&local_68);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006c77c9;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1006c77c9:
  FUN_10000c490(&local_38,param_1);
  pQVar4 = (QArrayData *)QString::fromAscii_helper("-i",2);
  local_70 = pQVar4;
  FUN_10000c490(&local_38,&local_70);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006c7825;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1006c7825:
  FUN_10000c490(&local_38,param_1);
  FUN_10000c490(&local_38,param_3);
  iVar3 = FUN_1006c6ce0("/usr/sbin/prl_arpsend",&local_38);
  pDVar2 = local_38;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_1006c78e1;
      local_29 = 0;
    }
    iVar1 = *(int *)(local_38 + 0xc);
    if (iVar1 != *(int *)(local_38 + 8)) {
      lVar6 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = local_38 + (long)iVar1 * 8 + 8;
      do {
        pQVar4 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar4 == 0) {
LAB_1006c78c0:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar4 = *(QArrayData **)pDVar5;
            goto LAB_1006c78c0;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_1006c78e1:
  return iVar3 != 0;
}

