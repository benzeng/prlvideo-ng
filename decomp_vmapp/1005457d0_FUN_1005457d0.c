
undefined1
FUN_1005457d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 uVar2;
  QArrayData *local_c0 [6];
  undefined1 local_90 [112];
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_20 = lVar1;
  FUN_10054fff0(local_c0,param_1,param_2,param_3,param_4);
  uVar2 = FUN_100550060(local_c0);
  FUN_100554680(local_90);
  if (*(int *)local_c0[0] != -1) {
    if (*(int *)local_c0[0] != 0) {
      LOCK();
      *(int *)local_c0[0] = *(int *)local_c0[0] + -1;
      UNLOCK();
      if (*(int *)local_c0[0] != 0) goto LAB_10054585c;
    }
    QArrayData::deallocate(local_c0[0],2,8);
  }
LAB_10054585c:
  if (lVar1 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

