
void FUN_10046b010(void)

{
  undefined8 uVar1;
  long *plVar2;
  
  uVar1 = FUN_100472f90();
  plVar2 = (long *)FUN_100473400(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010046b028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x60))(plVar2);
  return;
}

