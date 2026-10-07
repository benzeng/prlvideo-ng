
undefined * FUN_1008bf840(ulong param_1)

{
  undefined *puVar1;
  
  if (((uint)param_1 < 0x37) && ((0x7ffffffffffffdU >> (param_1 & 0x3f) & 1) != 0)) {
    puVar1 = (&PTR_s_ok_100be2f00)[(int)(uint)param_1];
  }
  else {
    FUN_1008823b0(&DAT_1011c2990,100,"error number %ld");
    puVar1 = &DAT_1011c2990;
  }
  return puVar1;
}

