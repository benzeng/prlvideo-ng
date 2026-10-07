
void FUN_10004fe60(undefined8 param_1,undefined8 param_2,int *param_3,ulong param_4,
                  undefined1 param_5,undefined1 param_6)

{
  QArrayData *pQVar1;
  long lVar2;
  QArrayData *local_d0;
  QArrayData *local_c8;
  undefined1 local_b9;
  undefined1 local_b8 [12];
  undefined1 local_ac [116];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar2;
  if (*param_3 != 8) {
    FUN_1000502d0(param_1,param_3,param_4,param_5,param_6);
    return;
  }
  local_c8 = (QArrayData *)PTR_shared_null_100ba20d0;
  if (param_4 < 0x80) {
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("UIEMU","vm",3,
                    "Invalid ctl size %u (must be >= %lu) for UIEMU_CONTROL_QUERY_ELEMENT_AT_POS",
                    param_4 & 0xffffffff,0x80);
    }
  }
  else {
    QString::toUtf8();
    QByteArray::operator=((QByteArray *)&local_c8,(QByteArray *)&local_d0);
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_b9 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_b9) goto LAB_10004ff7c;
      }
      QArrayData::deallocate(local_d0,1,8);
    }
LAB_10004ff7c:
    pQVar1 = local_c8;
    if (*(uint *)(local_c8 + 4) < 0x28) {
      _memcpy(local_b8,param_3,0x80);
      _memcpy(local_ac,pQVar1 + *(long *)(pQVar1 + 0x10),(long)*(int *)(pQVar1 + 4) + 1);
      FUN_1000502d0(param_1,local_b8,0x80,param_5,param_6);
      lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
    else {
      lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (2 < DAT_1011b55f8) {
        FUN_1008e3970("UIEMU","vm",3,
                      "Invalid handle size %u (must be < %lu) for UIEMU_CONTROL_QUERY_ELEMENT_AT_POS"
                      ,*(uint *)(local_c8 + 4),0x28);
      }
    }
  }
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_b9 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_b9) goto LAB_100050065;
    }
    QArrayData::deallocate(local_c8,1,8);
  }
LAB_100050065:
  if (lVar2 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

