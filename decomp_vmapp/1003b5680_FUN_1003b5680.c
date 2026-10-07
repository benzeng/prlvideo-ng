
undefined8 FUN_1003b5680(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  long *local_68;
  long local_60;
  long *local_58;
  long lStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  void *local_30;
  void *local_28;
  undefined8 local_20;
  
  if (param_2[1] == 0) {
    pvVar3 = (void *)**(long **)(param_1 + 8);
    if (pvVar3 == (void *)0x0) {
      pvVar3 = operator_new(0x98);
      *(void **)pvVar3 = pvVar3;
      *(void **)((long)pvVar3 + 8) = pvVar3;
      *(void **)((long)pvVar3 + 0x10) = pvVar3;
      *(void **)((long)pvVar3 + 0x18) = pvVar3;
      *(long *)((long)pvVar3 + 0x20) = (long)pvVar3 + 0x18;
      *(long *)((long)pvVar3 + 0x28) = (long)pvVar3 + 0x18;
      *(void **)((long)pvVar3 + 0x30) = pvVar3;
      *(long *)((long)pvVar3 + 0x38) = (long)pvVar3 + 0x30;
      *(long *)((long)pvVar3 + 0x40) = (long)pvVar3 + 0x30;
      *(undefined8 *)((long)pvVar3 + 0x48) = 0;
      *(long *)((long)pvVar3 + 0x50) = (long)pvVar3 + 0x48;
      *(long *)((long)pvVar3 + 0x58) = (long)pvVar3 + 0x48;
      *(undefined8 *)((long)pvVar3 + 0x60) = 0;
      *(long *)((long)pvVar3 + 0x68) = (long)pvVar3 + 0x60;
      *(long *)((long)pvVar3 + 0x70) = (long)pvVar3 + 0x60;
      *(undefined4 *)((long)pvVar3 + 0x78) = 0;
      *(undefined1 *)((long)pvVar3 + 0x7c) = 0;
      *(undefined8 *)((long)pvVar3 + 0x90) = 0;
      *(undefined8 *)((long)pvVar3 + 0x88) = 0;
      *(undefined8 *)((long)pvVar3 + 0x80) = 0;
    }
    else {
      lVar2 = *(long *)((long)pvVar3 + 0x10);
      *(undefined8 *)(lVar2 + 8) = *(undefined8 *)((long)pvVar3 + 8);
      *(long *)(*(long *)((long)pvVar3 + 8) + 0x10) = lVar2;
      *(void **)((long)pvVar3 + 8) = pvVar3;
      *(void **)((long)pvVar3 + 0x10) = pvVar3;
    }
    lVar2 = *(long *)(param_1 + 0x18);
    *(long *)((long)pvVar3 + 8) = lVar2 + 0x100;
    *(undefined8 *)((long)pvVar3 + 0x10) = *(undefined8 *)(lVar2 + 0x110);
    *(void **)(*(long *)(lVar2 + 0x110) + 8) = pvVar3;
    *(void **)(lVar2 + 0x110) = pvVar3;
    plVar1 = param_2 + 2;
    lVar2 = param_2[4];
    *(long *)(lVar2 + 8) = param_2[3];
    *(long *)(param_2[3] + 0x10) = lVar2;
    param_2[4] = (long)plVar1;
    param_2[1] = (long)pvVar3;
    param_2[3] = (long)pvVar3 + 0x60;
    param_2[4] = *(long *)((long)pvVar3 + 0x70);
    *(long **)(*(long *)((long)pvVar3 + 0x70) + 8) = plVar1;
    *(long **)((long)pvVar3 + 0x70) = plVar1;
  }
  FUN_1003b5fc0(param_1,param_2);
  FUN_1003b67a0(param_1,param_2);
  if (((*(byte *)((long)param_2 + 0x39) & 1) == 0) && ((*(byte *)((long)param_2 + 0x35) & 6) == 4))
  {
    local_20 = 0;
    local_28 = (void *)0x0;
    local_30 = (void *)0x0;
    local_48 = 0;
    local_38 = (undefined1)param_2[6];
    lStack_50 = *param_2;
    local_40 = *(undefined8 *)(lStack_50 + 0x38);
    local_68 = param_2;
    local_60 = param_1;
    local_58 = param_2;
    FUN_1003c4d20(&local_58,&local_68);
    if (local_30 != (void *)0x0) {
      if (local_28 != local_30) {
        local_28 = (void *)((~((long)local_28 + (-4 - (long)local_30)) & 0xfffffffffffffffcU) +
                           (long)local_28);
      }
      operator_delete(local_30);
    }
  }
  return 0;
}

