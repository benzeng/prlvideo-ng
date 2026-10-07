
undefined4 FUN_1002425dc(void)

{
  undefined4 local_c;
  
  if (DAT_1011b8930 == 0) {
    DAT_1011b8928 = _xmlNewRMutex();
    if (DAT_1011b8928 == (xmlRMutexPtr)0x0) {
      local_c = 0;
    }
    else {
      DAT_1011b8930 = 1;
      local_c = 1;
    }
  }
  else {
    local_c = 1;
  }
  return local_c;
}

