
void FUN_100059630(long param_1)

{
  QArrayData *pQVar1;
  QArrayData *local_28;
  undefined1 local_1b;
  undefined1 local_1a;
  
  QString::operator=((QString *)(*(long *)(param_1 + 0x10) + 0x70),(QString *)(param_1 + 0x18));
  if ((*(char *)(param_1 + 0x20) != '\0') && (*(char *)(*(long *)(param_1 + 0x10) + 0x6a) != '\0'))
  {
    pQVar1 = *(QArrayData **)(*(long *)(param_1 + 0x10) + 0x70);
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_1b = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    local_28 = pQVar1;
    FUN_100058130(&local_28,1);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_1a = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_1a) {
          return;
        }
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
  }
  return;
}

