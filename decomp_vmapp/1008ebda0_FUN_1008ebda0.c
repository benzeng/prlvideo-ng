
void FUN_1008ebda0(void)

{
  long *plVar1;
  
  plVar1 = DAT_1011c3570;
  if (DAT_1011c3570 != (long *)0x0) {
    if (*DAT_1011c3570 != 0) {
      _dlclose();
    }
    operator_delete(plVar1);
  }
  DAT_1011c3568 = 0xfffffffe;
  return;
}

