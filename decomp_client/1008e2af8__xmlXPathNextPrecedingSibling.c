
undefined8 _xmlXPathNextPrecedingSibling(long param_1,long param_2)

{
  undefined8 local_20;
  undefined8 local_18;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x18) == 0)) {
    local_20 = 0;
  }
  else if ((*(int *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 8) == 2) ||
          (*(int *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 8) == 0x12)) {
    local_20 = 0;
  }
  else if (**(long **)(param_1 + 0x18) == param_2) {
    local_20 = 0;
  }
  else if (param_2 == 0) {
    local_20 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x38);
  }
  else {
    local_18 = param_2;
    if (((*(long *)(param_2 + 0x38) == 0) || (*(int *)(*(long *)(param_2 + 0x38) + 8) != 0xe)) ||
       (local_18 = *(long *)(param_2 + 0x38), local_18 != 0)) {
      local_20 = *(undefined8 *)(local_18 + 0x38);
    }
    else {
      local_20 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x38);
    }
  }
  return local_20;
}

