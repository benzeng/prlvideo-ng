
void FUN_100a30890(undefined8 *param_1,undefined4 param_2,void *param_3,ulong param_4)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  long local_48;
  undefined8 *local_38;
  
  local_38 = param_1 + 6;
  FUN_100ab03a0();
  plVar3 = operator_new(0x30);
  plVar3[5] = 0;
  plVar3[4] = 0;
  plVar3[3] = 0;
  plVar3[1] = (long)(param_1 + 3);
  lVar1 = param_1[3];
  *plVar3 = lVar1;
  *(long **)(lVar1 + 8) = plVar3;
  param_1[3] = plVar3;
  param_1[5] = param_1[5] + 1;
  *(undefined4 *)(plVar3 + 2) = param_2;
  local_48 = 0;
  if (param_4 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if ((long)param_4 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    pvVar4 = operator_new(param_4);
    local_48 = (long)pvVar4 + param_4;
    _memcpy(pvVar4,param_3,param_4);
    plVar3 = (long *)param_1[3];
  }
  pvVar2 = (void *)plVar3[3];
  plVar3[3] = (long)pvVar4;
  plVar3[4] = local_48;
  plVar3[5] = local_48;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  FUN_100ab03c0(&local_38);
  _CFRunLoopSourceSignal(param_1[1]);
  _CFRunLoopWakeUp(*param_1);
  FUN_100ab03c0(&local_38);
  return;
}

