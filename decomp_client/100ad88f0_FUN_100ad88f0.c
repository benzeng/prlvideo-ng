
void FUN_100ad88f0(long param_1,long param_2)

{
  long lVar1;
  QArrayData *local_88;
  undefined1 local_79;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 8;
  uStack_70 = 0x50;
  local_58 = (ulong)*(uint *)(param_2 + 8);
  local_88 = (QArrayData *)PTR_shared_null_1021e1288;
  local_28 = lVar1;
  QByteArray::append((char *)&local_88,(int)&local_78);
  FUN_100ace5e0(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_2 + 0x38),&local_88);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_79 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_100ad899d;
    }
    QArrayData::deallocate(local_88,1,8);
  }
LAB_100ad899d:
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

