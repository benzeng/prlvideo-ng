
int FUN_100263a30(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *pvVar4;
  long *plVar5;
  long *plVar6;
  
  *(undefined4 *)(*(long *)(param_1 + 0x90) + 4) = 0;
  if ((*(char *)(param_1 + 0xb8) != '\0') && (iVar1 = CVmDevice::getEmulatedType(), iVar1 == 3)) {
    **(undefined4 **)(param_1 + 0x90) = 1;
    return -0x7fffffed;
  }
  *(undefined1 *)(param_1 + 0xb8) = 0;
  uVar2 = CVmDevice::getEmulatedType();
  iVar1 = -0x7fffffe8;
  switch(uVar2) {
  case 0:
    plVar5 = operator_new(0x120,(nothrow_t *)PTR_nothrow_100ba21c8);
    plVar6 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      *plVar5 = (long)&PTR_FUN_100baf140;
      CVmParallelPort::CVmParallelPort((CVmParallelPort *)(plVar5 + 1));
      *plVar5 = (long)&PTR_FUN_100baf1e0;
      QMutex::QMutex((QMutex *)(plVar5 + 0x21),0);
      plVar5[0x23] = (long)PTR_shared_null_100ba20d0;
      plVar6 = plVar5;
    }
    *(long **)(param_1 + 0x98) = plVar6;
    *(undefined4 *)(*(long *)(param_1 + 0x90) + 4) = 1;
    goto LAB_100263bd3;
  case 1:
    pvVar3 = operator_new(0x138,(nothrow_t *)PTR_nothrow_100ba21c8);
    pvVar4 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      FUN_100268500(pvVar3);
      pvVar4 = pvVar3;
    }
    plVar6 = (long *)((long)pvVar4 + 0x10);
    if (pvVar4 == (void *)0x0) {
      plVar6 = (long *)0x0;
    }
    break;
  case 2:
    plVar5 = operator_new(0x120,(nothrow_t *)PTR_nothrow_100ba21c8);
    plVar6 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      FUN_100265e00(plVar5);
      plVar6 = plVar5;
    }
    break;
  case 3:
    plVar5 = operator_new(0x118,(nothrow_t *)PTR_nothrow_100ba21c8);
    plVar6 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      FUN_1003dd590(plVar5);
      plVar6 = plVar5;
    }
    break;
  default:
    goto switchD_100263ab2_default;
  }
  *(long **)(param_1 + 0x98) = plVar6;
LAB_100263bd3:
  if (plVar6 == (long *)0x0) {
    FUN_1008e3970("","LocalDevices",0,"Error allocating memory for LPT target");
    iVar1 = -0x7ffffffe;
  }
  else {
    iVar1 = (**(code **)(*plVar6 + 0x10))(plVar6,param_2);
    if (iVar1 < 0) {
      plVar6 = *(long **)(param_1 + 0x98);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
      *(long *)(param_1 + 0x98) = 0;
    }
    else {
      **(undefined4 **)(param_1 + 0x90) = 1;
    }
  }
switchD_100263ab2_default:
  return iVar1;
}

