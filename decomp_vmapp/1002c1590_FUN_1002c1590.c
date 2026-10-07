
undefined8 FUN_1002c1590(long param_1,undefined4 param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x310);
  if (plVar1 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    iVar2 = 1;
    if (*(int *)((long)plVar1 + 0xc) != 0) {
      FUN_1008e3970("","USB",0,"AIO Wait/Submit recursion detected!");
      iVar2 = *(int *)((long)plVar1 + 0xc) + 1;
    }
    *(int *)((long)plVar1 + 0xc) = iVar2;
    uVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
    *(int *)((long)plVar1 + 0xc) = *(int *)((long)plVar1 + 0xc) + -1;
  }
  return uVar3;
}

