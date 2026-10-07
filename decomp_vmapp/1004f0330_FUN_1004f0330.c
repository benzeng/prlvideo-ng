
undefined8 * FUN_1004f0330(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  QArrayData *pQVar2;
  short sVar3;
  int iVar4;
  undefined1 local_70 [80];
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_20 = lVar1;
  sVar3 = _FSFindFolder(0xffff8005,param_2,0,local_70);
  if (sVar3 == 0) {
    *param_1 = PTR_shared_null_100ba20d0;
    iVar4 = FUN_1004efc00(local_70,param_1);
    if (iVar4 == 0) goto LAB_1004f03b0;
    pQVar2 = (QArrayData *)*param_1;
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        UNLOCK();
        if (*(int *)pQVar2 != 0) goto LAB_1004f03a6;
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
  }
LAB_1004f03a6:
  *param_1 = PTR_shared_null_100ba20d0;
LAB_1004f03b0:
  if (lVar1 == local_20) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

