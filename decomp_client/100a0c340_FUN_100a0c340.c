
void FUN_100a0c340(void)

{
  long *plVar1;
  
  if (DAT_102311290 == (long *)0x0) {
    plVar1 = operator_new(0x20);
    FUN_100a0cb00(plVar1);
    DAT_102280a60 = 1;
    DAT_102311290 = plVar1;
  }
  (**(code **)(*DAT_102311290 + 0x20))(DAT_102311290);
  DAT_102311290 = (long *)0x0;
  return;
}

