
undefined8 FUN_100472970(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  QArrayData *pQVar3;
  long lVar4;
  Data *pDVar5;
  Data *pDVar6;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  Data *local_48;
  Data *local_40;
  undefined1 local_31;
  
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  local_50 = (QArrayData *)QString::fromAscii_helper("bps",3);
  FUN_1000341d0(&local_48,&local_50);
  local_58 = (QArrayData *)QString::fromAscii_helper("kbps",4);
  FUN_1000341d0(&local_48,&local_58);
  pQVar3 = (QArrayData *)QString::fromAscii_helper("mbps",4);
  local_60 = pQVar3;
  FUN_1000341d0(&local_48,&local_60);
  local_40 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_40);
      iVar1 = *(int *)(local_40 + 8);
      if (iVar1 != *(int *)(local_40 + 0xc)) {
        pDVar5 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
        pDVar6 = local_40 + (long)iVar1 * 8 + 0x10;
        lVar4 = (long)*(int *)(local_40 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)pDVar5;
          *(int **)pDVar6 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          pDVar6 = pDVar6 + 8;
          pDVar5 = pDVar5 + 8;
          lVar4 = lVar4 + -8;
          pQVar3 = local_60;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      pQVar3 = local_60;
      if ((bool)local_31) goto LAB_100472ab2;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100472ab2:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100472ade;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100472ade:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100472b0a;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100472b0a:
  pDVar5 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100472bbb;
    }
    iVar1 = *(int *)(local_48 + 0xc);
    if (iVar1 != *(int *)(local_48 + 8)) {
      lVar4 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = local_48 + (long)iVar1 * 8 + 8;
      do {
        pQVar3 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar3 == 0) {
LAB_100472b90:
          QArrayData::deallocate(pQVar3,2,8);
        }
        else if (*(int *)pQVar3 != -1) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar3 = *(QArrayData **)pDVar6;
            goto LAB_100472b90;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_100472bbb:
  local_70 = (QArrayData *)QString::fromAscii_helper("%1 %2",5);
  QString::arg(&local_68,&local_70,param_2,0,0x20);
  QString::arg(param_1,&local_68,
               local_40 + ((long)param_3 + (long)*(int *)(local_40 + 8)) * 8 + 0x10,0,0x20);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100472c3f;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100472c3f:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100472c6f;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100472c6f:
  pDVar5 = local_40;
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
      pDVar6 = local_40 + (long)iVar1 * 8 + 8;
      do {
        pQVar3 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar3 == 0) {
LAB_100472ce0:
          QArrayData::deallocate(pQVar3,2,8);
        }
        else if (*(int *)pQVar3 != -1) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar3 = *(QArrayData **)pDVar6;
            goto LAB_100472ce0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar5);
  }
  return param_1;
}

