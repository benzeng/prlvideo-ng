
void FUN_10076a8b0(long param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_2;
  FUN_1005fa4b0(param_1 + 0x18,&local_18);
  if ((((*(int *)(*(long *)(param_1 + 0x18) + 0xc) == *(int *)(*(long *)(param_1 + 0x18) + 8)) &&
       (*(long *)(param_1 + 0x20) != 0)) && (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) &&
     (*(long **)(param_1 + 0x28) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010076a8f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x28) + 0x20))();
    return;
  }
  return;
}

