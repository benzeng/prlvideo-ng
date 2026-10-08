
undefined8 FUN_100239240(long param_1)

{
  if (((*(long *)(param_1 + 0x48) != 0) && (*(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) &&
     (*(long **)(param_1 + 0x50) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x20))();
  }
  return 0;
}

