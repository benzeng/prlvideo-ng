
undefined8 _xmlXPathNextSelf(long param_1,long param_2)

{
  undefined8 local_20;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x18) == 0)) {
    local_20 = 0;
  }
  else if (param_2 == 0) {
    local_20 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 8);
  }
  else {
    local_20 = 0;
  }
  return local_20;
}

