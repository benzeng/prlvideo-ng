
undefined4 FUN_100b4c740(undefined8 param_1)

{
  int iVar1;
  Data *pDVar2;
  undefined4 uVar3;
  QArrayData *pQVar4;
  Data *pDVar5;
  long lVar6;
  QArrayData *local_48;
  QArrayData *local_40;
  Data *local_38;
  undefined1 local_29;
  
  local_38 = (Data *)PTR_shared_null_1021e15e8;
  pQVar4 = (QArrayData *)QString::fromAscii_helper("-d",2);
  local_40 = pQVar4;
  FUN_1000341d0(&local_38,&local_40);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b4c7ad;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100b4c7ad:
  FUN_1000341d0(&local_38,param_1);
  pQVar4 = (QArrayData *)QString::fromAscii_helper("pub",3);
  local_48 = pQVar4;
  FUN_1000341d0(&local_38,&local_48);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b4c809;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100b4c809:
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
LAB_100b4c880:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar4 = *(QArrayData **)pDVar5;
            goto LAB_100b4c880;
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

