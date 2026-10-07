
undefined8 FUN_1006c29a0(undefined8 param_1)

{
  long lVar1;
  QArrayData *local_148;
  undefined1 local_139;
  char local_138 [264];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  _strerror_r(DAT_1011bd254,local_138,0x100);
  _strlen(local_138);
  QString::fromUtf8_helper((char *)&local_148,(int)local_138);
  QString::normalized(param_1,&local_148,1,0);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_139 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_139) goto LAB_1006c2a48;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1006c2a48:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

