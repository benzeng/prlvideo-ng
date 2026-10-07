
int FUN_10012b450(undefined8 param_1)

{
  int iVar1;
  QArrayData *pQVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  pQVar2 = (QArrayData *)QString::fromAscii_helper("perfstats_action",0x10);
  local_28 = pQVar2;
  iVar1 = FUN_10011d510(param_1,&local_28);
  if (2 < iVar1 - 1U) {
    iVar1 = 0;
  }
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_1a = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_1a) {
        return iVar1;
      }
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
  return iVar1;
}

