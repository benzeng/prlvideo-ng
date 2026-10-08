
undefined8 FUN_1002ff6b0(long param_1)

{
  int iVar1;
  Data *pDVar2;
  QArrayData *pQVar3;
  Data *pDVar4;
  long lVar5;
  QArrayData *local_48;
  Data *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  pQVar3 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)(pQVar3 + 4) == 0) {
    MacUtils::getBundlePath();
  }
  else {
    local_38 = pQVar3;
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
    }
  }
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  pQVar3 = (QArrayData *)QString::fromAscii_helper("Parallels Desktop application bundle",0x24);
  local_48 = pQVar3;
  FUN_1000341d0(&local_40,&local_48);
  FUN_100df2ca0(&local_38,&local_40);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002ff751;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1002ff751:
  pDVar2 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002ff7e1;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar5 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = local_40 + (long)iVar1 * 8 + 8;
      do {
        pQVar3 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar3 == 0) {
LAB_1002ff7c0:
          QArrayData::deallocate(pQVar3,2,8);
        }
        else if (*(int *)pQVar3 != -1) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_29 = *(int *)pQVar3 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar3 = *(QArrayData **)pDVar4;
            goto LAB_1002ff7c0;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_1002ff7e1:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return 0;
}

