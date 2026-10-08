
QStringList * FUN_100640930(QStringList *param_1,long param_2)

{
  int iVar1;
  Data *pDVar2;
  QArrayData *pQVar3;
  Data *pDVar4;
  long lVar5;
  QArrayData *local_50;
  QArrayData *local_48;
  Data *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_10061e3b0(&local_38,*(undefined8 *)(*(long *)(param_2 + 0x48) + 0x88));
  iVar1 = *(int *)(local_38 + 4);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10064098d;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10064098d:
  if (iVar1 == 0) {
    FUN_10061e1a0(param_1,*(undefined8 *)(*(long *)(param_2 + 0x48) + 0x88));
    return param_1;
  }
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  FUN_10061e1a0(&local_48,*(undefined8 *)(*(long *)(param_2 + 0x48) + 0x88));
  FUN_1000341d0(&local_40,&local_48);
  FUN_10061e3b0(&local_50,*(undefined8 *)(*(long *)(param_2 + 0x48) + 0x88));
  FUN_1000341d0(&local_40,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100640a13;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100640a13:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100640a43;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100640a43:
  pQVar3 = (QArrayData *)QString::fromAscii_helper(";",1);
  QtPrivate::QStringList_join
            (param_1,(QChar *)&local_40,(int)*(undefined8 *)(pQVar3 + 0x10) + (int)pQVar3);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100640a98;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100640a98:
  pDVar2 = local_40;
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
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar5 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = local_40 + (long)iVar1 * 8 + 8;
      do {
        pQVar3 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar3 == 0) {
LAB_100640b10:
          QArrayData::deallocate(pQVar3,2,8);
        }
        else if (*(int *)pQVar3 != -1) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_29 = *(int *)pQVar3 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar3 = *(QArrayData **)pDVar4;
            goto LAB_100640b10;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar2);
  }
  return param_1;
}

