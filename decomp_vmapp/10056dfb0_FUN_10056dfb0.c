
bool FUN_10056dfb0(long *param_1,undefined4 param_2)

{
  long *plVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x108))();
  plVar1 = (long *)param_1[0x243];
  iVar2 = 1;
  if (*(int *)((long)plVar1 + 0xc) != 0) {
    FUN_1008e3970("","vdisk",0,"AIO Wait/Submit recursion detected!");
    iVar2 = *(int *)((long)plVar1 + 0xc) + 1;
  }
  *(int *)((long)plVar1 + 0xc) = iVar2;
  iVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
  *(int *)((long)plVar1 + 0xc) = *(int *)((long)plVar1 + 0xc) + -1;
  return iVar2 != 0;
}

