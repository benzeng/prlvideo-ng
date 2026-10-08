
void FUN_100a654d0(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_100a653c0();
  if (plVar1 != (long *)0x0) {
    FUN_100a64b70(plVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a654f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
  }
  return;
}

