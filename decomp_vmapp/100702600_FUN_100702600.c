
ulong FUN_100702600(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  
  uVar2 = 0xffffffff;
  if (((*param_1 != 0) && (plVar1 = *(long **)(*param_1 + 0x10), plVar1 != (long *)0x0)) &&
     (uVar2 = (ulong)*(uint *)((long)plVar1 + 0x14), *(uint *)((long)plVar1 + 0x14) == 0xffffffff))
  {
    uVar2 = (**(code **)(*plVar1 + 0x38))(plVar1);
    *(int *)((long)plVar1 + 0x14) = (int)uVar2;
  }
  return uVar2;
}

