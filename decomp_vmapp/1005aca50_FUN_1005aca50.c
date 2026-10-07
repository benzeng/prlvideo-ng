
void FUN_1005aca50(long *param_1,undefined8 *param_2,long *param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  QMutex::lock();
  if (-1 < param_4) {
    puVar7 = param_2 + 5;
    puVar1 = (undefined8 *)param_2[5];
    plVar8 = param_1 + 4;
    if (puVar1 == puVar7) {
      lVar3 = param_1[4];
      *(undefined8 **)(lVar3 + 8) = puVar7;
      param_2[5] = lVar3;
      param_2[6] = plVar8;
      param_1[4] = (long)puVar7;
      *(int *)(param_1 + 6) = (int)param_1[6] + 1;
      if (*(long *)(*param_1 + 0x1390) != 0) {
        plVar8 = (long *)(*(long *)(*param_1 + 0x1390) + 0xf0);
        *plVar8 = *plVar8 + 1;
      }
    }
    else {
      puVar2 = (undefined8 *)param_2[6];
      puVar1[1] = puVar2;
      *puVar2 = puVar1;
      lVar3 = *plVar8;
      *(undefined8 **)(lVar3 + 8) = puVar7;
      param_2[5] = lVar3;
      param_2[6] = plVar8;
      *plVar8 = (long)puVar7;
    }
  }
  pvVar4 = (void *)param_2[4];
  pvVar6 = (void *)0x0;
  if (pvVar4 != (void *)0x0) {
    param_2[4] = 0;
    pvVar6 = pvVar4;
  }
  if (param_4 < 0) {
    if ((void *)*param_2 != (void *)0x0) {
      operator_delete__((void *)*param_2);
      *param_2 = 0;
    }
    if ((void *)param_2[1] != (void *)0x0) {
      operator_delete__((void *)param_2[1]);
      param_2[1] = 0;
    }
  }
  QMutex::unlock();
  plVar8 = (long *)*param_3;
  if (plVar8 != param_3) {
    do {
      local_50 = 0xffffffffffffffff;
      local_58 = 0xffffffffffffffff;
      local_40 = 0;
      local_48 = 0;
      puVar7 = (undefined8 *)0x0;
      if ((-1 < param_4) &&
         (param_4 = FUN_1005abbf0(param_1,(int)plVar8[4],param_2,plVar8[5],&local_58),
         puVar7 = &local_58, param_4 < 0)) {
        FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","BlockGroup.cpp",0x299,
                      "LoadGroupCompletion");
      }
      (*(code *)plVar8[2])(plVar8[3],param_4,puVar7);
      lVar3 = *plVar8;
      plVar5 = (long *)plVar8[1];
      *(long **)(lVar3 + 8) = plVar5;
      *plVar5 = lVar3;
      *plVar8 = 0x112233;
      plVar8[1] = (long)&DAT_00445566;
      if (plVar8 != (long *)0x0) {
        operator_delete(plVar8);
      }
      plVar8 = (long *)*param_3;
    } while (plVar8 != param_3);
  }
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

