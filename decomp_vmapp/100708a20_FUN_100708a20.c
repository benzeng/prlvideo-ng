
void FUN_100708a20(long param_1,long param_2)

{
  long *plVar1;
  
  if (*(long *)(param_2 + 0x40) == 0) {
    *(long *)(param_2 + 0x40) = param_1 + 0x48;
  }
  plVar1 = *(long **)(param_2 + 0x30);
  if (*(int *)((long)plVar1 + 0xc) == 0) {
    FUN_1008e3970("","AbstractFile",0,"This call intended for use from dio completion callback only"
                 );
  }
                    /* WARNING: Could not recover jumptable at 0x000100708a72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
  return;
}

