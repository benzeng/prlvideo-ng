
undefined4 FUN_100b4bd50(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  Data *pDVar2;
  undefined4 uVar3;
  QArrayData *pQVar4;
  Data *pDVar5;
  long lVar6;
  QArrayData *local_60;
  QArrayData *local_58;
  undefined1 local_4e [6];
  QArrayData *local_48;
  QArrayData *local_40;
  Data *local_38;
  undefined1 local_29;
  
  local_38 = (Data *)PTR_shared_null_1021e15e8;
  pQVar4 = (QArrayData *)QString::fromAscii_helper("-S",2);
  local_40 = pQVar4;
  FUN_1000341d0(&local_38,&local_40);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b4bdc0;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100b4bdc0:
  FUN_1000341d0(&local_38,param_1);
  if (*(int *)(*param_3 + 4) == 0) {
    pQVar4 = (QArrayData *)QString::fromAscii_helper("auto",4);
    local_48 = pQVar4;
    FUN_1000341d0(&local_38,&local_48);
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_29 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b4be7d;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
  }
  else {
    FUN_100b40740(param_3,local_4e);
    FUN_100b3f3a0(&local_58,local_4e);
    FUN_1000341d0(&local_38,&local_58);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b4be7d;
      }
      QArrayData::deallocate(local_58,2,8);
    }
  }
LAB_100b4be7d:
  pQVar4 = (QArrayData *)QString::fromAscii_helper("pub",3);
  local_60 = pQVar4;
  FUN_1000341d0(&local_38,&local_60);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b4becd;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100b4becd:
  uVar3 = FUN_100b4c130("/usr/sbin/arp",&local_38);
  pDVar2 = local_38;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar3;
      }
      local_29 = 0;
    }
    iVar1 = *(int *)(local_38 + 0xc);
    if (iVar1 != *(int *)(local_38 + 8)) {
      lVar6 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = local_38 + (long)iVar1 * 8 + 8;
      do {
        pQVar4 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar4 == 0) {
LAB_100b4bf50:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar4 = *(QArrayData **)pDVar5;
            goto LAB_100b4bf50;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar2);
  }
  return uVar3;
}

