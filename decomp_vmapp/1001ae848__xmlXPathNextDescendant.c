
long _xmlXPathNextDescendant(long param_1,long param_2)

{
  long local_18;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x18) == 0)) {
    return 0;
  }
  if (param_2 == 0) {
    if (*(long *)(*(long *)(param_1 + 0x18) + 8) == 0) {
      return 0;
    }
    if ((*(int *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 8) != 2) &&
       (*(int *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 8) != 0x12)) {
      if (*(long *)(*(long *)(param_1 + 0x18) + 8) == **(long **)(param_1 + 0x18)) {
        return *(long *)(**(long **)(param_1 + 0x18) + 0x18);
      }
      return *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x18);
    }
    return 0;
  }
  local_18 = param_2;
  if (((*(long *)(param_2 + 0x18) != 0) && (*(int *)(*(long *)(param_2 + 0x18) + 8) != 0x11)) &&
     (local_18 = *(long *)(param_2 + 0x18), *(int *)(local_18 + 8) != 0xe)) {
    return local_18;
  }
  if (*(long *)(*(long *)(param_1 + 0x18) + 8) == local_18) {
    return 0;
  }
  while (*(long *)(local_18 + 0x30) != 0) {
    local_18 = *(long *)(local_18 + 0x30);
    if ((*(int *)(local_18 + 8) != 0x11) && (*(int *)(local_18 + 8) != 0xe)) {
      return local_18;
    }
  }
  do {
    local_18 = *(long *)(local_18 + 0x28);
    if (local_18 == 0) {
      return 0;
    }
    if (*(long *)(*(long *)(param_1 + 0x18) + 8) == local_18) {
      return 0;
    }
    if (*(long *)(local_18 + 0x30) != 0) {
      return *(long *)(local_18 + 0x30);
    }
  } while (local_18 != 0);
  return 0;
}

