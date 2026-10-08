
undefined8 _xmlXPathNextFollowingSibling(long param_1,long param_2)

{
  undefined8 local_20;
  
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
    local_20 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x30);
  }
  else {
    local_20 = *(undefined8 *)(param_2 + 0x30);
  }
  return local_20;
}

