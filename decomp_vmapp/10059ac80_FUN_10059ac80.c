
long * FUN_10059ac80(undefined8 param_1,undefined4 param_2,int *param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  QArrayData *local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_58 = (QArrayData *)QString::fromAscii_helper(".vmdk",5);
  uVar2 = QString::endsWith(param_1,&local_58,1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_49 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10059ad07;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10059ad07:
  plVar4 = operator_new(0x13b8,(nothrow_t *)PTR_nothrow_100ba21c8);
  iVar3 = -0x7ffffffe;
  plVar5 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    FUN_100568500(plVar4,uVar2);
    pcVar1 = *(code **)(*plVar4 + 0x2f0);
    FUN_1007d6870(local_48);
    iVar3 = (*pcVar1)(plVar4,param_1,param_2,local_48);
    plVar5 = plVar4;
    if (iVar3 < 0) {
      FUN_1008e3970("","vdisk",0,"OpenDisk() returned error 0x%x",iVar3);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      plVar5 = (long *)0x0;
    }
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar3;
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return plVar5;
}

