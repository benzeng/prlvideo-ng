
void FUN_100058c20(long param_1)

{
  long lVar1;
  QArrayData *pQVar2;
  bool bVar3;
  QArrayData *local_28;
  undefined1 local_1b;
  undefined1 local_1a;
  
  *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x68) = *(undefined1 *)(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(char *)(lVar1 + 0x68) == '\0') {
    bVar3 = false;
  }
  else {
    bVar3 = *(char *)(lVar1 + 0x69) != '\0';
  }
  if ((bool)*(char *)(lVar1 + 0x6a) != bVar3) {
    *(bool *)(lVar1 + 0x6a) = bVar3;
    pQVar2 = *(QArrayData **)(*(long *)(param_1 + 0x10) + 0x70);
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_1b = *(int *)pQVar2 != 0;
      UNLOCK();
    }
    local_28 = pQVar2;
    FUN_100058130(&local_28);
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_1a = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_1a) {
          return;
        }
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
  }
  return;
}

