
void FUN_100a30a20(undefined8 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  void *local_40;
  void *local_38;
  undefined8 *local_28;
  
  local_28 = param_1 + 6;
  FUN_100ab03a0();
  if (param_1[5] != 0) {
    lVar2 = param_1[3];
    FUN_100a32b40(&local_40,lVar2 + 0x18);
    uVar1 = *(undefined4 *)(lVar2 + 0x10);
    plVar3 = (long *)param_1[3];
    lVar2 = *plVar3;
    *(long *)(lVar2 + 8) = plVar3[1];
    *(long *)plVar3[1] = lVar2;
    param_1[5] = param_1[5] + -1;
    pvVar4 = (void *)plVar3[3];
    if (pvVar4 != (void *)0x0) {
      if ((void *)plVar3[4] != pvVar4) {
        plVar3[4] = (long)pvVar4;
      }
      operator_delete(pvVar4);
    }
    operator_delete(plVar3);
    FUN_100ab03c0(&local_28);
    (*(code *)**(undefined8 **)param_1[2])((undefined8 *)param_1[2],uVar1,&local_40);
    _CFRunLoopSourceSignal(param_1[1]);
    _CFRunLoopWakeUp(*param_1);
    if (local_40 != (void *)0x0) {
      if (local_38 != local_40) {
        local_38 = local_40;
      }
      operator_delete(local_40);
    }
  }
  FUN_100ab03c0(&local_28);
  return;
}

