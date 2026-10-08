
void FUN_100d72e30(void)

{
  long *plVar1;
  
  plVar1 = DAT_102318908;
  if (DAT_102318908 != (long *)0x0) {
    if (*DAT_102318908 != 0) {
      _dlclose();
    }
    operator_delete(plVar1);
  }
  DAT_102318900 = 0xfffffffe;
  return;
}

