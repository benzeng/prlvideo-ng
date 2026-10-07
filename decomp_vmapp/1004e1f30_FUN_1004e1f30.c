
undefined8 FUN_1004e1f30(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  QArrayData *pQVar2;
  char cVar3;
  ssize_t sVar4;
  undefined8 uVar5;
  QArrayData *local_468;
  QString local_460;
  QString local_458;
  QArrayData *local_450;
  QArrayData *local_448;
  undefined1 local_439;
  char local_438 [1032];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_458.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x18);
  if (1 < *(int *)local_458.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_458.field0_0x0 = *(int *)local_458.field0_0x0 + 1;
    local_439 = *(int *)local_458.field0_0x0 != 0;
    UNLOCK();
  }
  local_30 = lVar1;
  cVar3 = QString::endsWith(&local_458,0x2f,1);
  if (cVar3 == '\0') {
    QString::append(&local_458,0x2f);
  }
  QString::append(&local_458);
  ___bzero(local_438,0x400);
  QString::normalized(&local_450,&local_458,0,0);
  QString::toUtf8_helper(&local_460);
  if (*(int *)local_450 != -1) {
    if (*(int *)local_450 != 0) {
      LOCK();
      *(int *)local_450 = *(int *)local_450 + -1;
      local_439 = *(int *)local_450 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_1004e2027;
    }
    QArrayData::deallocate(local_450,2,8);
  }
LAB_1004e2027:
  sVar4 = _readlink((char *)(local_460.field0_0x0 + *(long *)(local_460.field0_0x0 + 0x10)),
                    local_438,0x400);
  if (*(int *)local_460.field0_0x0 != -1) {
    if (*(int *)local_460.field0_0x0 != 0) {
      LOCK();
      *(int *)local_460.field0_0x0 = *(int *)local_460.field0_0x0 + -1;
      local_439 = *(int *)local_460.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_1004e2082;
    }
    QArrayData::deallocate((QArrayData *)local_460.field0_0x0,1,8);
  }
LAB_1004e2082:
  uVar5 = 0xf0000018;
  if (-1 < sVar4) {
    QByteArray::QByteArray((QByteArray *)&local_448,local_438,-1);
    FUN_1006fcdd0(&local_468,&local_448);
    if (*(int *)local_448 != -1) {
      if (*(int *)local_448 != 0) {
        LOCK();
        *(int *)local_448 = *(int *)local_448 + -1;
        local_439 = *(int *)local_448 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_1004e20f8;
      }
      QArrayData::deallocate(local_448,1,8);
    }
LAB_1004e20f8:
    pQVar2 = (QArrayData *)*param_3;
    *param_3 = local_468;
    uVar5 = 0;
    local_468 = pQVar2;
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_439 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_439) goto LAB_1004e2144;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
  }
LAB_1004e2144:
  if (*(int *)local_458.field0_0x0 != -1) {
    if (*(int *)local_458.field0_0x0 != 0) {
      LOCK();
      *(int *)local_458.field0_0x0 = *(int *)local_458.field0_0x0 + -1;
      local_438[0] = *(int *)local_458.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_438[0]) goto LAB_1004e2180;
    }
    QArrayData::deallocate((QArrayData *)local_458.field0_0x0,2,8);
  }
LAB_1004e2180:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

