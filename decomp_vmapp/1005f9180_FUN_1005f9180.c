
undefined4
FUN_1005f9180(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  QString local_58;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(long **)(param_1 + 0x80);
  *(long *)(param_1 + 0x80) = lVar3;
  local_38 = lVar2;
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_1005fb7d0(param_1 + 0x88,param_3);
  (**(code **)(**(long **)(param_1 + 0x58) + 0x130))(&local_48);
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
  *(undefined8 *)(param_1 + 0x6a) = local_40;
  *(undefined8 *)(param_1 + 0x62) = local_48;
  QString::operator=((QString *)(param_1 + 0x78),&local_58);
  uVar5 = FUN_1005f6710(param_1,param_4,param_5);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_49 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1005f9275;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1005f9275:
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

