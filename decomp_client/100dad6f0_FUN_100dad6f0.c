
ulong FUN_100dad6f0(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if (((*param_1 != 0) && (plVar1 = *(long **)(*param_1 + 0x10), plVar1 != (long *)0x0)) &&
     (uVar2 = (ulong)*(uint *)(plVar1 + 2), *(uint *)(plVar1 + 2) == 0)) {
    uVar2 = (**(code **)(*plVar1 + 0x40))(plVar1);
    *(int *)(plVar1 + 2) = (int)uVar2;
  }
  return uVar2;
}

