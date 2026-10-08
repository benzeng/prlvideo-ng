
void FUN_10076ed20(long param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x48);
  plVar1 = *(long **)(lVar2 + 0x20);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
    lVar2 = *(long *)(param_1 + 0x48);
  }
  plVar1 = *(long **)(lVar2 + 0x28);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
    lVar2 = *(long *)(param_1 + 0x48);
  }
  *(undefined4 *)(lVar2 + 0x18) = param_2;
  *(undefined4 *)(lVar2 + 0x1c) = param_3;
  FUN_10076e840();
  FUN_10076e970(*(undefined8 *)(param_1 + 0x48),1);
  return;
}

