
void FUN_1002ffe20(long param_1)

{
  QArrayData *pQVar1;
  
  pQVar1 = *(QArrayData **)(param_1 + 0x80);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1002ffe64;
      pQVar1 = *(QArrayData **)(param_1 + 0x80);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1002ffe64:
  pQVar1 = *(QArrayData **)(param_1 + 0x78);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1002ffe94;
      pQVar1 = *(QArrayData **)(param_1 + 0x78);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1002ffe94:
  pQVar1 = *(QArrayData **)(param_1 + 0x70);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1002ffec4;
      pQVar1 = *(QArrayData **)(param_1 + 0x70);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1002ffec4:
  pQVar1 = *(QArrayData **)(param_1 + 0x68);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1002ffef4;
      pQVar1 = *(QArrayData **)(param_1 + 0x68);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1002ffef4:
  QPixmap::~QPixmap((QPixmap *)(param_1 + 0x18));
  pQVar1 = *(QArrayData **)(param_1 + 0x10);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
      pQVar1 = *(QArrayData **)(param_1 + 0x10);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

