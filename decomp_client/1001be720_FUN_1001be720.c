
void FUN_1001be720(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long local_28;
  
  local_28 = 0;
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x14) != 0) {
    plVar1 = (long *)FUN_1001bfdb0((long *)(param_1 + 0x18),param_3,0);
    if (*plVar1 == *(long *)(param_1 + 0x18)) {
      plVar1 = &local_28;
    }
    else {
      plVar1 = (long *)(*plVar1 + 0x18);
    }
    lVar2 = *plVar1;
    if (lVar2 != 0) goto LAB_1001be77b;
  }
  lVar2 = FUN_1001be580(param_1,param_3);
LAB_1001be77b:
  *(undefined2 *)(lVar2 + 0x28) = 0x101;
  *(undefined1 *)(lVar2 + 0x2a) = 0;
  FUN_1001bd750();
  return;
}

