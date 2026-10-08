
void FUN_100423d80(long param_1,char param_2,undefined8 param_3)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined8 extraout_RDX;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x60) + 0x90);
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x68);
  if (param_2 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10013ba10(plVar1);
    param_3 = extraout_RDX;
  }
                    /* WARNING: Could not recover jumptable at 0x000100423dba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,uVar2,param_3,UNRECOVERED_JUMPTABLE);
  return;
}

