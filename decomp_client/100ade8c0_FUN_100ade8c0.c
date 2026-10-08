
void FUN_100ade8c0(undefined8 param_1,char param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == '\0') {
    puVar1 = &DAT_1023119d0;
  }
  else {
    puVar1 = &DAT_1023119c8;
  }
                    /* WARNING: Could not recover jumptable at 0x000100ade8eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(FUN_100ae01d0,0x579,0);
  return;
}

