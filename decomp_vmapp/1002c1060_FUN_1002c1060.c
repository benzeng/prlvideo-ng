
void FUN_1002c1060(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)FUN_10070bb60(3,0x200);
  *(long **)(param_1 + 0x310) = plVar1;
  if (plVar1 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x28);
    uVar2 = FUN_1002eefa0(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x0001002c10ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1,uVar2);
    return;
  }
  if (-1 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[USB] Failed to create AIO worker, AIO disabled");
    return;
  }
  return;
}

