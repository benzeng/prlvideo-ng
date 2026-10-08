
undefined8 FUN_1009e5bf0(undefined8 param_1)

{
  long lVar1;
  size_t sVar2;
  QArrayData *local_148;
  QArrayData *local_140;
  size_t local_138;
  undefined1 local_129;
  char local_128 [256];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_138 = 0x100;
  local_28 = lVar1;
  _sysctlbyname("hw.model",local_128,&local_138,(void *)0x0,0);
  local_140 = (QArrayData *)QString::fromAscii_helper("%1",2);
  sVar2 = _strlen(local_128);
  local_148 = (QArrayData *)QString::fromAscii_helper(local_128,(int)sVar2);
  QString::arg(param_1,&local_140,&local_148,0,0x20);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_129 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_129) goto LAB_1009e5cc9;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1009e5cc9:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_129 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_129) goto LAB_1009e5d05;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1009e5d05:
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

