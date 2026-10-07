
undefined8 FUN_100470440(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar3 = CVmGuestOsInformation::getGuestToolsList();
  if (*(int *)(*(long *)(lVar3 + 0x98) + 8) < *(int *)(*(long *)(lVar3 + 0x98) + 0xc)) {
    lVar4 = 0;
    do {
      CGuestToolInfo::getToolId();
      iVar2 = QString::compare(&local_40,param_2,1);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004704f5;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_1004704f5:
      lVar1 = *(long *)(lVar3 + 0x98);
      if (iVar2 == 0) {
        return *(undefined8 *)(lVar1 + 0x10 + (*(int *)(lVar1 + 8) + lVar4) * 8);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < (long)*(int *)(lVar1 + 0xc) - (long)*(int *)(lVar1 + 8));
  }
  return 0;
}

