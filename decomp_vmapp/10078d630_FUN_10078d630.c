
void FUN_10078d630(QObject *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined4 param_5,undefined1 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  void *pvVar8;
  long *local_68;
  long *local_60;
  long *local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_100bcf850;
  *(undefined ***)(param_1 + 0x10) = &PTR____cxa_pure_virtual_1011a57e0;
  puVar6 = operator_new(4);
  *puVar6 = 0x14;
  puVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar7 == (undefined8 *)0x0) {
    operator_delete(puVar6);
    puVar7 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar7 + 1) = 1;
    puVar7[2] = puVar6;
    *puVar7 = &PTR_FUN_10110ceb0;
  }
  *(undefined8 **)(param_1 + 0x18) = puVar7;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x24) = 0;
  piVar4 = (int *)*param_4;
  *(int **)(param_1 + 0x28) = piVar4;
  if (1 < *piVar4 + 1U) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    local_49 = *piVar4 != 0;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x30) = param_5;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_100792f50(param_1 + 0x40,param_2);
  *(undefined ***)param_1 = &PTR_FUN_100bcf5f0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_100bcf700;
  *(undefined ***)(param_1 + 0x68) = &PTR_FUN_100bcf728;
  *(undefined ***)(param_1 + 0x70) = &PTR_FUN_100bcf790;
  pvVar8 = operator_new(0x3c8);
  local_58 = *(long **)(param_1 + 0x18);
  if (local_58 != (long *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  local_60 = (long *)0x0;
  FUN_1007d6870(local_48);
  local_68 = (long *)0x0;
  FUN_10079bf40(pvVar8,&local_58,param_1 + 0x40,uVar2,0,param_1 + 0x28,uVar3,&local_60,0,
                param_1 + 0x68,param_1 + 0x70,0xffffffff,local_48,&local_68,param_7,param_6,1);
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if (local_60 != (long *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if (local_58 != (long *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  *(void **)(param_1 + 0x78) = pvVar8;
  FUN_10078d550();
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

