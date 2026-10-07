
int FUN_10056e2e0(long param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined1 local_b8 [24];
  undefined4 local_a0;
  code *local_98;
  long *local_90;
  long local_88;
  undefined8 local_80;
  undefined4 local_78;
  int local_74;
  char local_70;
  undefined8 local_6f;
  undefined8 local_67;
  undefined8 local_5f;
  undefined8 local_57;
  QMutex local_48;
  QMutex local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar3 = FUN_1005abe90(param_1 + 0x10,0xffffffff);
  if (iVar3 == -0x7ffddffd) {
    local_67 = 0xffffffffffffffff;
    local_6f = 0xffffffffffffffff;
    local_57 = 0;
    local_5f = 0;
    QMutex::QMutex(&local_48,0);
    QWaitCondition::QWaitCondition((QWaitCondition *)&local_40);
    local_74 = 0;
    local_70 = '\0';
    local_98 = FUN_10056e230;
    local_90 = &local_88;
    local_a0 = 0;
    local_88 = param_1;
    local_80 = param_3;
    local_78 = param_2;
    cVar2 = (**(code **)(**(long **)(param_1 + 0x1210) + 0x18))
                      (*(long **)(param_1 + 0x1210),local_b8);
    if (cVar2 == '\0') {
      iVar3 = -0x7ffdefdb;
      FUN_1008e3970("","vdisk",0,"Error: device sync request was not acked");
    }
    else {
      QMutex::lock();
      if (local_70 == '\0') {
        QWaitCondition::wait(&local_40,(ulong)&local_48);
      }
      QMutex::unlock();
      if (local_74 < 0) {
        FUN_1008e3970("","vdisk",0,"Error: failed to get group, err %x");
        iVar3 = local_74;
      }
      else {
        param_4[3] = local_57;
        param_4[2] = local_5f;
        param_4[1] = local_67;
        *param_4 = local_6f;
        iVar3 = 0;
      }
    }
    QWaitCondition::~QWaitCondition((QWaitCondition *)&local_40);
    QMutex::~QMutex(&local_48);
  }
  else if (iVar3 == 0) {
    iVar3 = 0;
    if (*(long *)(param_1 + 0x1380) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x1380) + 0xf0);
      *plVar1 = *plVar1 + 1;
    }
  }
  else {
    FUN_1008e3970("","vdisk",0,"Error: failed to get group, err %x",iVar3);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

