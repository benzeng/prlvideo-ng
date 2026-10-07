
undefined8 _xmlXPathNextDescendantOrSelf(long param_1,long param_2)

{
  undefined8 local_20;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x18) == 0)) {
    local_20 = 0;
  }
  else if (param_2 == 0) {
    if (*(long *)(*(long *)(param_1 + 0x18) + 8) == 0) {
      local_20 = 0;
    }
    else if ((*(int *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 8) == 2) ||
            (*(int *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 8) == 0x12)) {
      local_20 = 0;
    }
    else {
      local_20 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 8);
    }
  }
  else {
    local_20 = _xmlXPathNextDescendant(param_1,param_2);
  }
  return local_20;
}

