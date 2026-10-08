
QString * FUN_100d445e0(QString *param_1,undefined4 param_2)

{
  long lVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  int iVar3;
  size_t sVar4;
  QArrayData *pQVar5;
  QString local_1048;
  undefined4 local_1040;
  undefined1 local_1039;
  char local_1038 [4104];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_1040 = 0x1000;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_30 = lVar1;
  iVar3 = _PrlApi_GetResultDescription(param_2,1,0,local_1038,&local_1040);
  if (-1 < iVar3) {
    sVar4 = _strlen(local_1038);
    local_1048.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(local_1038,(int)sVar4);
    QString::operator=(param_1,&local_1048);
    if (*(int *)local_1048.field0_0x0 != -1) {
      if (*(int *)local_1048.field0_0x0 != 0) {
        LOCK();
        *(int *)local_1048.field0_0x0 = *(int *)local_1048.field0_0x0 + -1;
        local_1039 = *(int *)local_1048.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_1039) goto LAB_100d446a7;
      }
      QArrayData::deallocate((QArrayData *)local_1048.field0_0x0,2,8);
    }
  }
LAB_100d446a7:
  local_1040 = 0x1000;
  iVar3 = _PrlApi_GetResultDescription(param_2,0,0,local_1038,&local_1040);
  if (iVar3 < 0) goto LAB_100d447cd;
  pQVar2 = param_1->field0_0x0;
  iVar3 = QString::compare_helper
                    (pQVar2 + *(long *)(pQVar2 + 0x10),*(undefined4 *)(pQVar2 + 4),local_1038,
                     0xffffffff,1);
  if (iVar3 == 0) goto LAB_100d447cd;
  pQVar5 = (QArrayData *)QString::fromAscii_helper(" ",1);
  QString::append(param_1);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_1039 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_1039) goto LAB_100d44762;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100d44762:
  sVar4 = _strlen(local_1038);
  pQVar5 = (QArrayData *)QString::fromAscii_helper(local_1038,(int)sVar4);
  QString::append(param_1);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_1039 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_1039) goto LAB_100d447cd;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100d447cd:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

