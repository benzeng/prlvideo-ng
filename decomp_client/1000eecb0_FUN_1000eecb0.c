
bool FUN_1000eecb0(void)

{
  long *plVar1;
  char local_19;
  
  plVar1 = operator_new(0x98);
  FUN_1000ac970(plVar1,&local_19);
  DAT_102311ec8 = plVar1;
  if (local_19 == '\0') {
    (**(code **)(*plVar1 + 0x20))(plVar1);
    DAT_102311ec8 = (long *)0x0;
  }
  return DAT_102311ec8 != (long *)0x0;
}

