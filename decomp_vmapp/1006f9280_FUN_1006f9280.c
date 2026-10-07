
bool FUN_1006f9280(void)

{
  long lVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  undefined1 local_c1;
  undefined1 local_c0 [80];
  undefined1 local_70 [80];
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_d0 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_d8 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_20 = lVar1;
  QString::toUtf8();
  QByteArray::operator=((QByteArray *)&local_d0,(QByteArray *)&local_e0);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_c1 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_c1) goto LAB_1006f9315;
    }
    QArrayData::deallocate(local_e0,1,8);
  }
LAB_1006f9315:
  iVar3 = _FSPathMakeRefWithOptions(local_d0 + *(long *)(local_d0 + 0x10),1,local_70,0);
  if (iVar3 == 0) {
    QString::toUtf8();
    QByteArray::operator=((QByteArray *)&local_d8,(QByteArray *)&local_e8);
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_c1 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_c1) goto LAB_1006f9399;
      }
      QArrayData::deallocate(local_e8,1,8);
    }
LAB_1006f9399:
    iVar3 = _FSPathMakeRefWithOptions(local_d8 + *(long *)(local_d8 + 0x10),1,local_c0,0);
    if (iVar3 == 0) {
      sVar2 = _FSCompareFSRefs(local_70,local_c0);
      bVar4 = sVar2 == 0;
    }
    else {
      bVar4 = false;
    }
  }
  else {
    bVar4 = false;
  }
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_c1 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_c1) goto LAB_1006f9411;
    }
    QArrayData::deallocate(local_d8,1,8);
  }
LAB_1006f9411:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_70[0] = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_70[0]) goto LAB_1006f9447;
    }
    QArrayData::deallocate(local_d0,1,8);
  }
LAB_1006f9447:
  if (lVar1 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar4;
}

