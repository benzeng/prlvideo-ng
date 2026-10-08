
undefined8 _xmlTextReaderExpand(long param_1)

{
  int iVar1;
  undefined8 local_18;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x70) == 0)) {
    local_18 = 0;
  }
  else if (*(long *)(param_1 + 8) == 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      local_18 = 0;
    }
    else {
      iVar1 = FUN_100958e38(param_1);
      if (iVar1 < 0) {
        local_18 = 0;
      }
      else {
        local_18 = *(undefined8 *)(param_1 + 0x70);
      }
    }
  }
  else {
    local_18 = *(undefined8 *)(param_1 + 0x70);
  }
  return local_18;
}

