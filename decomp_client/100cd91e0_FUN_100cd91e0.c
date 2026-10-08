
bool FUN_100cd91e0(void)

{
  char cVar1;
  long *plVar2;
  
  if (DAT_102311940 == (long *)0x0) {
    plVar2 = operator_new(0x60,(nothrow_t *)PTR_nothrow_1021e1620);
    if (plVar2 == (long *)0x0) {
      DAT_102311940 = (long *)0x0;
      FUN_100df99c0("","hid",0,"[CHIDThread] can\'t create thread object");
      return false;
    }
    FUN_100cd8df0(plVar2);
    DAT_102311940 = plVar2;
  }
  cVar1 = FUN_100cd8fb0(DAT_102311940);
  if (cVar1 == '\0') {
    (**(code **)(*DAT_102311940 + 0x68))();
  }
  return cVar1 != '\0';
}

