
void FUN_100b22c60(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x40);
  if (*(char *)((long)param_1 + lVar1 + 0x180d8) != '\0') {
    (**(code **)(*(long *)((long)param_1 + lVar1) + 0x80))();
  }
  FUN_100b0d600(lVar1 + *(long *)(*(long *)((long)param_1 + lVar1) + -0x18) + (long)param_1);
  return;
}

