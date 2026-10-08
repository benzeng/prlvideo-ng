
bool FUN_1001c4c80(void)

{
  long *plVar1;
  bool bVar2;
  char local_19;
  
  if (DAT_102310908 == (long *)0x0) {
    local_19 = '\0';
    plVar1 = operator_new(0x18);
    FUN_1001c5020(plVar1,&local_19);
    DAT_102310908 = plVar1;
    if (local_19 == '\0') {
      (**(code **)(*plVar1 + 0x20))(plVar1);
      DAT_102310908 = (long *)0x0;
    }
    bVar2 = local_19 != '\0';
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

