
void _htmlInitAutoClose(void)

{
  int local_10;
  int local_c;
  
  local_c = 0;
  if (DAT_1023128c8 == 0) {
    for (local_10 = 0; local_10 < 100; local_10 = local_10 + 1) {
      *(undefined8 *)(&DAT_1023128e0 + (long)local_10 * 8) = 0;
    }
    local_10 = 0;
    while (((&PTR_s_form_1022785c0)[local_c] != (undefined *)0x0 && (local_10 < 99))) {
      *(undefined ***)(&DAT_1023128e0 + (long)local_10 * 8) = &PTR_s_form_1022785c0 + local_c;
      local_10 = local_10 + 1;
      for (; (&PTR_s_form_1022785c0)[local_c] != (undefined *)0x0; local_c = local_c + 1) {
      }
      local_c = local_c + 1;
    }
    DAT_1023128c8 = 1;
  }
  return;
}

