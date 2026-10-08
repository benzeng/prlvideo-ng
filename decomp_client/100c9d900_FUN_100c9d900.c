
undefined8 FUN_100c9d900(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (((*(long *)(param_1 + 0x30) != 0) && (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0))
     && (UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(param_1 + 0x28),
        UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000100c9d922. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  FUN_100c62ee0(0x22,0x8f,0x94,"v3_conf.c",0x18a);
  return 0;
}

