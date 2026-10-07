
int FUN_100563210(long *param_1,long param_2,long param_3)

{
  int iVar1;
  void *pvVar2;
  undefined1 local_b0 [32];
  size_t local_90;
  undefined1 local_88 [48];
  QArrayData *local_58;
  QArrayData *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  FUN_100098d30(local_b0);
  iVar1 = (**(code **)(*param_1 + 0x90))(param_1,local_b0);
  if (iVar1 < 0) {
    FUN_1008e3970("","StatesUtils",0,"Error : Failed to get disk image params, error 0x%X",iVar1);
  }
  else {
    pvVar2 = *(void **)(param_3 + 8);
    if (*(size_t *)(param_3 + 0x10) == local_90) {
      iVar1 = -0x7ffeffed;
      if (pvVar2 != (void *)0x0) {
LAB_1005632f2:
        iVar1 = (**(code **)(*param_1 + 0xf8))
                          (param_1,pvVar2,local_90 & 0xffffffff,*(undefined8 *)(param_2 + 8));
      }
    }
    else {
      if (pvVar2 != (void *)0x0) {
        _free(pvVar2);
        *(undefined8 *)(param_3 + 0x10) = 0;
        *(undefined8 *)(param_3 + 8) = 0;
      }
      iVar1 = -0x7ffeffed;
      if (local_90 != 0) {
        pvVar2 = _valloc(local_90);
        *(undefined8 *)(param_3 + 8) = pvVar2;
        if (pvVar2 != (void *)0x0) {
          *(size_t *)(param_3 + 0x10) = local_90;
          goto LAB_1005632f2;
        }
      }
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100563348;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100563348:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) goto LAB_10056337e;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_10056337e:
  FUN_100098f20(local_88);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar1;
}

