
bool FUN_10012c6c0(undefined8 param_1)

{
  int iVar1;
  QArrayData *pQVar2;
  QArrayData *local_30;
  undefined1 local_22;
  
  pQVar2 = (QArrayData *)QString::fromAscii_helper("vm_delete_snapshot_merge_sign",0x1d);
  local_30 = pQVar2;
  iVar1 = FUN_10011d510(param_1,&local_30);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_22 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_10012c724;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10012c724:
  return iVar1 != 0;
}

