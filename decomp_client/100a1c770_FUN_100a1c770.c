
undefined8 * FUN_100a1c770(undefined8 *param_1)

{
  QArrayData *pQVar1;
  QArrayData **ppQVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  undefined1 local_19;
  
  ppQVar2 = &local_28;
  FUN_100226f20(ppQVar2);
  if (*(int *)(local_28 + 4) != 0) {
    ppQVar2 = (QArrayData **)QString::insert(&local_28,0,0x31);
  }
  pQVar1 = *ppQVar2;
  *param_1 = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_1a = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return param_1;
}

