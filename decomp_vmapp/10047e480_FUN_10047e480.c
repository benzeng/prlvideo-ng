
void FUN_10047e480(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 local_30 [16];
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar2 = *param_2;
  *param_1 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[1] = 0;
  local_20 = lVar1;
  FUN_1007d6bd0(local_30);
  FUN_1007d6a70(param_1 + 2,local_30);
  puVar3 = PTR_shared_null_100ba2188;
  param_1[3] = (long)PTR_shared_null_100ba2188;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((long)param_1 + 0x21) = 0;
  *(undefined1 *)((long)param_1 + 0x22) = 0;
  param_1[5] = 0;
  param_1[6] = (long)puVar3;
  if (lVar1 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

