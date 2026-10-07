
int FUN_1008c0e60(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(ulong *)*param_1 <= *(ulong *)*param_2) {
    iVar1 = -(uint)(*(ulong *)*param_1 < *(ulong *)*param_2);
  }
  return iVar1;
}

