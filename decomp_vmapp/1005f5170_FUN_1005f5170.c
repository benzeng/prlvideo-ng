
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005f5170(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  
  if (param_1 == (long *)0x0) {
    FUN_1008e3970("","vdisk",0,"Throttler[DeleteDisk]: mt can\'t be zero");
    uVar3 = 0x66;
  }
  else {
    if (param_2 != 0) {
      QMutex::lock();
      (**(code **)(*param_1 + 0x18))(param_1,param_2);
      for (plVar2 = DAT_1011cc9d8; plVar2 != &DAT_1011cc9d0; plVar2 = (long *)plVar2[1]) {
        if ((long *)plVar2[4] == param_1) goto LAB_1005f5252;
      }
      FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","it != m_Group.end()",
                    "CMergeThrottlerBase.cpp",0x75,"DeleteDisk");
      plVar2 = &DAT_1011cc9d0;
LAB_1005f5252:
      if ((long *)plVar2[4] != (long *)0x0) {
        (**(code **)(*(long *)plVar2[4] + 0x10))();
      }
      lVar1 = *plVar2;
      *(long *)(lVar1 + 8) = plVar2[1];
      *(long *)plVar2[1] = lVar1;
      _DAT_1011cc9e0 = _DAT_1011cc9e0 + -1;
      operator_delete(plVar2);
      QMutex::unlock();
      return;
    }
    FUN_1008e3970("","vdisk",0,"Throttler[DeleteDisk]: disk can\'t be zero");
    uVar3 = 0x6c;
  }
  FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","false","CMergeThrottlerBase.cpp",
                uVar3,"DeleteDisk");
  return;
}

