
undefined1 FUN_100750570(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  undefined1 uVar6;
  bool bVar7;
  
  if ((((((int)param_1[2] == 0) || ((int)param_1[1] == 0)) || (*(int *)((long)param_1 + 0xc) == 0))
      || ((param_1[6] != 0 || (param_1[7] != 0)))) || (param_1[8] != 0)) {
    uVar6 = 0;
    FUN_1008e3970("","Compression",0,"Uncompress failed: invalid state");
  }
  else {
    QMutex::lock();
    if ((DAT_1011ccb78 == '\0') &&
       (DAT_1011ccb78 = (**(code **)(*param_1 + 0x28))(param_1), DAT_1011ccb78 == '\0')) {
      FUN_1008e3970("","Compression",0,"CCompressionEngine::init_engine() failed");
      QMutex::unlock();
      return 0;
    }
    QMutex::unlock();
    param_1[9] = -1;
    pvVar4 = operator_new(0x2b8);
    FUN_10074f800(pvVar4);
    plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    bVar7 = plVar5 == (long *)0x0;
    if (bVar7) {
      FUN_10074fa30(pvVar4);
      operator_delete(pvVar4);
      plVar5 = (long *)0x0;
    }
    else {
      *(undefined4 *)(plVar5 + 1) = 1;
      plVar5[2] = (long)pvVar4;
      *plVar5 = (long)&PTR_FUN_10119ea28;
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    plVar2 = (long *)param_1[10];
    param_1[10] = (long)plVar5;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    uVar6 = 1;
    if (!bVar7) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  return uVar6;
}

