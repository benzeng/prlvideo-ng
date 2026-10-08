
bool FUN_10011bfc0(void)

{
  int iVar1;
  int iVar2;
  Data *local_28;
  
  MacUtils::getHiDPIDisplays();
  iVar1 = *(int *)(local_28 + 0xc);
  iVar2 = *(int *)(local_28 + 8);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) goto LAB_10011c001;
    }
    QListData::dispose(local_28);
  }
LAB_10011c001:
  return iVar1 != iVar2;
}

