
void FUN_10078da00(QObject *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  void *pvVar5;
  QObject *pQVar6;
  long *local_60;
  long *local_58;
  long *local_50;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_100bcf850;
  pQVar6 = param_1 + 0x10;
  FUN_10078e7f0(pQVar6,param_2,param_3,1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_100bcf5f0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100bcf700;
  *(undefined ***)(param_1 + 0x68) = &PTR_FUN_100bcf728;
  *(undefined ***)(param_1 + 0x70) = &PTR_FUN_100bcf790;
  pvVar5 = operator_new(0x3c8);
  local_50 = *(long **)(param_1 + 0x18);
  if (local_50 != (long *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  local_58 = *(long **)(param_1 + 0x38);
  if (local_58 != (long *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  FUN_1007d6870(local_48);
  local_60 = (long *)0x0;
  FUN_10079bf40(pvVar5,&local_50,param_1 + 0x40,uVar2,1,param_1 + 0x28,uVar3,&local_58,0,
                param_1 + 0x68,param_1 + 0x70,0xffffffff,local_48,&local_60,param_5,0,1,pQVar6);
  if (local_60 != (long *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if (local_58 != (long *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  *(void **)(param_1 + 0x78) = pvVar5;
  FUN_10078d550();
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

