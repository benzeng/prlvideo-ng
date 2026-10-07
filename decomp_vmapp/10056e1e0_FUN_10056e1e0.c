
bool FUN_10056e1e0(long param_1)

{
  int iVar1;
  
  if (*(long **)(param_1 + 0x1218) != (long *)0x0) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x1218) + 0x20))();
    if (iVar1 != 0) {
      return true;
    }
    if (*(long *)(param_1 + 0x1228) != param_1 + 0x1228) {
      return true;
    }
  }
  return *(long *)(param_1 + 0x1238) != param_1 + 0x1238;
}

