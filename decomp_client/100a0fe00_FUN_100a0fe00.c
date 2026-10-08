
void FUN_100a0fe00(long param_1)

{
  FUN_100df99c0("","WebPortalCommunication",0,"Timeout occurred for request <%p>",param_1);
  if (((*(long *)(param_1 + 0x78) != 0) && (*(int *)(*(long *)(param_1 + 0x78) + 4) != 0)) &&
     (*(long **)(param_1 + 0x80) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000100a0fe4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x80) + 0xe8))();
    return;
  }
  return;
}

