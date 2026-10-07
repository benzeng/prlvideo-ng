
void * FUN_1003dcef0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = *(undefined4 *)(param_2 + 1);
  local_50 = *param_2;
  local_48 = CONCAT44(uStack_2c,local_30);
  local_40 = param_2;
  local_38 = local_50;
  local_28 = lVar1;
  FUN_1003dd320(param_1 + 2,&local_50);
  pvVar6 = (void *)0x0;
  if (0x200 < (ulong)param_1[4]) {
    plVar2 = (long *)param_1[1];
    lVar3 = *plVar2;
    plVar4 = (long *)plVar2[1];
    plVar2[1] = 0;
    *plVar2 = 0;
    if (plVar4 != (long *)0x0) {
      *plVar4 = lVar3;
    }
    if (lVar3 != 0) {
      *(long **)(lVar3 + 8) = plVar4;
    }
    if ((long *)param_1[1] == plVar2) {
      param_1[1] = (long)plVar4;
    }
    if ((long *)*param_1 == plVar2) {
      *param_1 = lVar3;
    }
    pvVar5 = (void *)plVar2[2];
    FUN_1003dd440(param_1 + 2,pvVar5);
    pvVar6 = (void *)0x0;
    if (pvVar5 != (void *)0x0) {
      (*DAT_1011c5b70)(1,(long)pvVar5 + 0xc);
      operator_delete(pvVar5);
      pvVar6 = pvVar5;
    }
  }
  if (lVar1 == local_28) {
    return pvVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

