
bool FUN_100b24960(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_100ddc970(param_1[1]);
  if (iVar1 < 0) {
    *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
    param_1 = (long *)*param_1;
    (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x1a0))
              ((long)param_1 + *(long *)(*param_1 + -0x18));
  }
  return 0 < iVar1;
}

