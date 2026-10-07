
void FUN_1004db1a0(long param_1,undefined8 param_2,ulong *param_3)

{
  int iVar1;
  
  iVar1 = FUN_1004e34e0(*(undefined8 *)(param_1 + 0x20));
  if (iVar1 == 0) {
    *param_3 = (ulong)((int)*param_3 + 0x1ffU & 0xfffffe00);
  }
  return;
}

