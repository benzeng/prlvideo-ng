
undefined4 FUN_100975f04(void)

{
  undefined4 local_c;
  
  if (DAT_1023136b0 == 0) {
    DAT_1023136a8 = _xmlNewRMutex();
    if (DAT_1023136a8 == (xmlRMutexPtr)0x0) {
      local_c = 0;
    }
    else {
      DAT_1023136b0 = 1;
      local_c = 1;
    }
  }
  else {
    local_c = 1;
  }
  return local_c;
}

