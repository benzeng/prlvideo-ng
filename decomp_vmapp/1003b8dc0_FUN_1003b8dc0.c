
undefined8 FUN_1003b8dc0(long param_1,long param_2)

{
  char *extraout_RDX;
  char *pcVar1;
  char *extraout_RDX_00;
  char *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  
  FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"BasicBlock[ %d ]: ParentFB=%d ",
                *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(*(long *)(param_2 + 0x48) + 0x20));
  if (*(long *)(param_2 + 0x38) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"Inputs(");
    plVar3 = *(long **)(param_2 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 8);
    pcVar1 = extraout_RDX;
    if (plVar3 != (long *)0x0) {
      pcVar2 = "";
      do {
        FUN_10038e8e0(uVar4,"%s%d",pcVar2,*(undefined4 *)(plVar3[1] + 0x20));
        plVar3 = (long *)*plVar3;
        uVar4 = *(undefined8 *)(param_1 + 8);
        pcVar1 = ", ";
        pcVar2 = ", ";
      } while (plVar3 != (long *)0x0);
    }
    FUN_10038e8e0(uVar4,") ",pcVar1);
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"Outputs(");
    plVar3 = *(long **)(param_2 + 0x40);
    uVar4 = *(undefined8 *)(param_1 + 8);
    pcVar1 = extraout_RDX_00;
    if (plVar3 != (long *)0x0) {
      pcVar2 = "";
      do {
        FUN_10038e8e0(uVar4,"%s%d",pcVar2,*(undefined4 *)(plVar3[1] + 0x20));
        plVar3 = (long *)*plVar3;
        uVar4 = *(undefined8 *)(param_1 + 8);
        pcVar1 = ", ";
        pcVar2 = ", ";
      } while (plVar3 != (long *)0x0);
    }
    FUN_10038e8e0(uVar4,")",pcVar1);
  }
  FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"\n");
  return 0;
}

