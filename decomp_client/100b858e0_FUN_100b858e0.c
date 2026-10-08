
QString * FUN_100b858e0(QString *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  QString local_40;
  undefined1 local_31;
  undefined1 local_30 [16];
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_20 = lVar1;
  iVar2 = FUN_100b8c5c0(param_2,local_30);
  if (iVar2 != 0) {
    FUN_100b8f390(&local_40,local_30);
    QString::operator=(param_1,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b85962;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_100b85962:
  if (lVar1 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

