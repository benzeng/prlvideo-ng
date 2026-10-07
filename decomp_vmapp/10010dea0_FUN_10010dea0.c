
void FUN_10010dea0(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = (code *)_CFArrayGetValueAtIndex(param_2,0);
  uVar1 = _CFArrayGetValueAtIndex(param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010010dece. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}

