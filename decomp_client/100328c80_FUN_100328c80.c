
void FUN_100328c80(long param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  long local_28;
  
  if (((*(long *)(param_1 + 0x28) != 0) && (*(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) &&
     (plVar1 = *(long **)(param_1 + 0x30), plVar1 != (long *)0x0)) {
    pcVar2 = *(code **)(*plVar1 + 0x70);
    local_28 = *param_2;
    if (local_28 != 0) {
      _PrlHandle_AddRef();
    }
    uVar3 = CSdkEvent::type();
    (*pcVar2)(plVar1,&local_28,uVar3);
    if (local_28 != 0) {
      _PrlHandle_Free();
    }
  }
  return;
}

