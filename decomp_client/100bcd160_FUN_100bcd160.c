
undefined * FUN_100bcd160(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if (param_1 < 0x7d) {
    puVar1 = &DAT_102300350 + (0x7c - (ulong)param_1) * 0x58;
  }
  return puVar1;
}

