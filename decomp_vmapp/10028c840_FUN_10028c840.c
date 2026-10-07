
undefined8 FUN_10028c840(uint param_1)

{
  undefined8 uVar1;
  
  if (0x2fffffff < param_1) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010028c85d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(&PTR_FUN_100bb1050)[param_1 >> 0x1c])();
  return uVar1;
}

