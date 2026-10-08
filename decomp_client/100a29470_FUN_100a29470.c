
void FUN_100a29470(long *param_1,undefined4 param_2,undefined1 *param_3,ulong param_4)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puStack_40;
  undefined1 *local_38;
  
  plVar3 = operator_new(0x30);
  plVar3[5] = 0;
  plVar3[4] = 0;
  plVar3[3] = 0;
  *(undefined4 *)(plVar3 + 2) = param_2;
  plVar3[1] = (long)param_1;
  lVar1 = *param_1;
  *plVar3 = lVar1;
  *(long **)(lVar1 + 8) = plVar3;
  *param_1 = (long)plVar3;
  param_1[2] = param_1[2] + 1;
  puStack_40 = (undefined1 *)0x0;
  local_38 = (undefined1 *)0x0;
  if (param_4 == 0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    if ((long)param_4 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar4 = operator_new(param_4);
    local_38 = puVar4 + param_4;
    puStack_40 = puVar4;
    do {
      *puStack_40 = *param_3;
      param_3 = param_3 + 1;
      puStack_40 = puStack_40 + 1;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
    plVar3 = (long *)*param_1;
  }
  pvVar2 = (void *)plVar3[3];
  plVar3[3] = (long)puVar4;
  plVar3[4] = (long)puStack_40;
  plVar3[5] = (long)local_38;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  return;
}

