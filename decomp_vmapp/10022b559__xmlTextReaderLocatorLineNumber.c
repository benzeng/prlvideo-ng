
undefined4 _xmlTextReaderLocatorLineNumber(long param_1)

{
  long lVar1;
  undefined4 local_34;
  undefined4 local_14;
  undefined8 local_10;
  
  if (param_1 == 0) {
    local_34 = 0xffffffff;
  }
  else {
    if (*(long *)(param_1 + 0x50) == 0) {
      local_10 = *(long *)(param_1 + 0x38);
      if ((*(long *)(local_10 + 8) == 0) && (1 < *(int *)(param_1 + 0x40))) {
        local_10 = *(long *)(*(long *)(param_1 + 0x48) + (long)*(int *)(param_1 + 0x40) * 8 + -0x10)
        ;
      }
      if (local_10 == 0) {
        local_14 = 0xffffffff;
      }
      else {
        local_14 = *(undefined4 *)(local_10 + 0x34);
      }
    }
    else {
      lVar1 = _xmlGetLineNo(*(xmlNodePtr *)(param_1 + 0x50));
      local_14 = (undefined4)lVar1;
    }
    local_34 = local_14;
  }
  return local_34;
}

