
undefined8 FUN_100550ca0(long param_1,uint param_2)

{
  long lVar1;
  long *plVar2;
  
  if (((param_1 != 0) && (lVar1 = *(long *)(param_1 + 0x20), lVar1 != 0)) &&
     (*(uint *)(param_1 + 0x28) < param_2)) {
    plVar2 = *(long **)(lVar1 + 0x38);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))
                (plVar2,0,(int)(*(ulong *)(lVar1 + 0x10) / 100) *
                          (param_2 - *(uint *)(param_1 + 0x28)),0);
    }
    *(uint *)(param_1 + 0x28) = param_2;
  }
  return 1;
}

