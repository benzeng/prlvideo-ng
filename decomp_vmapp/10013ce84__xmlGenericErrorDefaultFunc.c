
void _xmlGenericErrorDefaultFunc(undefined8 param_1,undefined8 param_2)

{
  byte in_AL;
  
                    /* WARNING: Could not recover jumptable at 0x00010013ceec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_10013cf0e + (ulong)in_AL * -4))
            (param_1,param_2,&LAB_10013cf0e + (ulong)in_AL * -4);
  return;
}

