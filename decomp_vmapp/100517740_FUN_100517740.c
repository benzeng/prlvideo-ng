
undefined8 FUN_100517740(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *local_30;
  
  uVar4 = 0xf0000003;
  if (*(short *)(param_2 + 0x16) != 0) {
    lVar2 = FUN_1002a6120(param_2,0,0);
    uVar5 = (ulong)*(uint *)(lVar2 + 8);
    pvVar3 = operator_new__(uVar5,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_30 = operator_new(0x18);
    *(undefined4 *)(local_30 + 1) = 1;
    local_30[2] = (long)pvVar3;
    *local_30 = (long)&PTR_FUN_100bef320;
    if (pvVar3 == (void *)0x0) {
      uVar4 = 0xf0000004;
    }
    else {
      FUN_1002a5990(lVar2,0,local_30[2],uVar5);
      FUN_100517280(param_1,&local_30,uVar5);
      uVar4 = 0;
    }
    if (local_30 != (long *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  return uVar4;
}

