
void FUN_100401de0(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  
  *(undefined8 *)(param_1 + 0x18) = param_2;
  if (*(long *)(param_1 + 8) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 8) + 0x48) = param_2;
  }
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    auVar2 = (**(code **)(**(long **)(param_1 + 0x38) + 0x250))();
    plVar1 = auVar2._0_8_;
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100401e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x28))(plVar1,param_2,auVar2._8_8_,*(code **)(*plVar1 + 0x28));
      return;
    }
  }
  return;
}

