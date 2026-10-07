
undefined8 FUN_100694d30(long *param_1)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = *(long *)(*param_1 + -0x38);
  (**(code **)(*(long *)((long)param_1 + lVar1 + 0x180f8) + 0x18))((long)param_1 + lVar1 + 0x180f8);
  (**(code **)(*(long *)((long)param_1 + lVar1) + 0x40))((long)param_1 + lVar1);
  pvVar2 = *(void **)((long)param_1 + lVar1 + 0x18900);
  if (pvVar2 != (void *)0x0) {
    _free(pvVar2);
  }
  *(undefined8 *)((long)param_1 + lVar1 + 0x18900) = 0;
  return 0;
}

