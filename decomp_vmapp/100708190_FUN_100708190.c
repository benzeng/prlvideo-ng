
void FUN_100708190(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  
  if (*(long *)(param_2 + 0x40) == 0) {
    *(long *)(param_2 + 0x40) = param_1 + 0x48;
  }
  plVar1 = *(long **)(param_2 + 0x30);
  iVar2 = 1;
  if (*(int *)((long)plVar1 + 0xc) != 0) {
    FUN_1008e3970("","AbstractFile",0,"AIO Wait/Submit recursion detected!");
    iVar2 = *(int *)((long)plVar1 + 0xc) + 1;
  }
  *(int *)((long)plVar1 + 0xc) = iVar2;
  (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
  *(int *)((long)plVar1 + 0xc) = *(int *)((long)plVar1 + 0xc) + -1;
  return;
}

