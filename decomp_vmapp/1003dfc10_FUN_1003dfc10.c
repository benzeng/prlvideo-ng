
void FUN_1003dfc10(long param_1)

{
  long *plVar1;
  undefined1 local_28 [16];
  long local_18;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,local_28);
    if (DAT_1011ccc18 != (code *)0x0) {
      (*DAT_1011ccc18)(1,0x22,local_18 << 8 | 1);
    }
    (**(code **)(**(long **)(param_1 + 0x20) + 0x38))
              (*(long **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

