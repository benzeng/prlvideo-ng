
bool FUN_10056e180(long param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*(long **)(param_1 + 0x1218) == (long *)0x0) {
    bVar2 = false;
  }
  else {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x1218) + 0x20))();
    bVar2 = true;
    if (iVar1 == 0) {
      bVar2 = *(long *)(param_1 + 0x1228) != param_1 + 0x1228;
    }
  }
  return bVar2;
}

