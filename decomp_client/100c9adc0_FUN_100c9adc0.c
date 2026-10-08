
undefined * FUN_100c9adc0(ulong param_1)

{
  undefined *puVar1;
  
  if (((uint)param_1 < 0x37) && ((0x7ffffffffffffdU >> (param_1 & 0x3f) & 1) != 0)) {
    puVar1 = (&PTR_s_ok_102253510)[(int)(uint)param_1];
  }
  else {
    FUN_100c5d5b0(&DAT_1023183d0,100,"error number %ld");
    puVar1 = &DAT_1023183d0;
  }
  return puVar1;
}

