
undefined8 FUN_100ab0710(long *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined8 uVar3;
  pthread_attr_t local_70;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  do {
    do {
    } while ((*(uint *)((long)param_1 + 0x1c) & 1) != 0);
    local_30 = lVar1;
    if (*(uint *)((long)param_1 + 0x1c) != 0) goto LAB_100ab07bd;
    LOCK();
    iVar2 = *(int *)((long)param_1 + 0x1c);
    if (iVar2 == 0) {
      *(int *)((long)param_1 + 0x1c) = 1;
      iVar2 = 0;
    }
    UNLOCK();
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 3) = 0;
  _pthread_attr_init(&local_70);
  _pthread_attr_setdetachstate(&local_70,2);
  if (param_2 != 0) {
    iVar2 = -param_2;
    if (0 < param_2) {
      iVar2 = param_2;
    }
    _pthread_attr_setstacksize(&local_70,(long)iVar2);
  }
  iVar2 = _pthread_create((pthread_t *)(param_1 + 2),&local_70,(void **)FUN_100ab0910,param_1);
  if (iVar2 == 0) {
    *(undefined4 *)((long)param_1 + 0x1c) = 2;
    iVar2 = _pthread_attr_destroy(&local_70);
    uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),1);
  }
  else {
    _pthread_attr_destroy(&local_70);
    (**(code **)(*param_1 + 0x18))(param_1);
LAB_100ab07bd:
    uVar3 = 0;
  }
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

