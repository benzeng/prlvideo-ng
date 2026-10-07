
undefined8 * FUN_10065e7d0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  Data *pDVar2;
  long lVar3;
  long lVar4;
  Data *local_28;
  undefined1 local_1a;
  undefined1 local_19;
  
  local_28 = (Data *)*param_2;
  if ((Data *)*param_1 != local_28) {
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 == 0) {
        QListData::detach((int)&local_28);
        lVar3 = (long)*(int *)(local_28 + 8);
        lVar1 = *param_2;
        if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_28 + lVar3 * 8) &&
           (lVar4 = *(int *)(local_28 + 0xc) - lVar3,
           lVar4 != 0 && lVar3 <= *(int *)(local_28 + 0xc))) {
          _memcpy(local_28 + (lVar3 * 2 + 4) * 4,
                  (void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),lVar4 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + 1;
        local_1a = *(int *)local_28 != 0;
        UNLOCK();
      }
    }
    pDVar2 = (Data *)*param_1;
    *param_1 = local_28;
    if (*(int *)pDVar2 != -1) {
      if (*(int *)pDVar2 != 0) {
        LOCK();
        *(int *)pDVar2 = *(int *)pDVar2 + -1;
        UNLOCK();
        if (*(int *)pDVar2 != 0) {
          return param_1;
        }
        local_19 = 0;
      }
      local_28 = pDVar2;
      QListData::dispose(pDVar2);
    }
  }
  return param_1;
}

