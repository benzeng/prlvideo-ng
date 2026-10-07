
void FUN_100273d40(long param_1,char param_2)

{
  uint uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x188);
  if (plVar2 == (long *)0x0) {
    return;
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 0x160) + 0x10);
  if (((uVar1 & 7) != 0) && (param_2 != '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x000100273d77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x30))(plVar2,uVar1 >> 3 & 1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100273d7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))();
  return;
}

