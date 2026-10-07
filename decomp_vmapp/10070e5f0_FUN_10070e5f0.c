
void FUN_10070e5f0(long param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = (**(code **)(**(long **)(param_2 + 0x40) + 0x20))(*(long **)(param_2 + 0x40),1,1,1);
    *(undefined4 *)(param_2 + 0x38) = uVar2;
    plVar1 = *(long **)(param_1 + 0x10);
    *(int *)((long)plVar1 + 0x24) = *(int *)((long)plVar1 + 0x24) + 1;
    *(undefined8 *)(param_2 + 0x20) = 0;
    if (plVar1[1] == 0) {
      *plVar1 = param_2;
    }
    else {
      *(long *)(plVar1[1] + 0x20) = param_2;
    }
    plVar1[1] = param_2;
    return;
  }
  FUN_1008e3970("","AbstractFile",0,"!priv");
  FUN_10070aef0(param_2,0xe);
  return;
}

