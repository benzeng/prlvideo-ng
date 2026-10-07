
void FUN_100535910(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(bool *)param_2 = *(int *)(lVar1 + 0x20) != 0;
  *(bool *)param_3 = *(int *)(lVar1 + 0x24) != 0;
  return;
}

