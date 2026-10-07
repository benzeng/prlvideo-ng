
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100507290(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  _Unwind_Exception *exception_object;
  undefined8 extraout_RAX;
  bool bVar6;
  
  plVar4 = operator_new(0x18);
  *plVar4 = (long)&PTR_FUN_100bc42b8;
  plVar4[2] = (long)PTR_shared_null_100ba20d8;
  plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (plVar5 != (long *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    plVar5[2] = (long)plVar4;
    *plVar5 = (long)&PTR_FUN_10111d3a0;
    plVar4[1] = param_1;
    iVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,param_3);
    if (iVar3 == 0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      plVar4 = (long *)*param_2;
      *param_2 = (long)plVar5;
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
    }
    LOCK();
    plVar4 = plVar5 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
    return iVar3;
  }
  exception_object = (_Unwind_Exception *)FUN_100507800(plVar4);
  LOCK();
  iVar3 = _DAT_00000008 + -1;
  UNLOCK();
  bVar6 = _DAT_00000008 == 1;
  _DAT_00000008 = iVar3;
  if (bVar6) {
    (**(code **)(lRam0000000000000000 + 0x10))(0);
  }
  __Unwind_Resume(exception_object);
                    /* WARNING: Subroutine does not return */
  FUN_10000c540(extraout_RAX);
}

