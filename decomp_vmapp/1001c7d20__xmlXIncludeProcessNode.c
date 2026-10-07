
int _xmlXIncludeProcessNode(long param_1,long param_2)

{
  undefined4 local_2c;
  undefined4 local_c;
  
  if (((param_2 == 0) || (*(long *)(param_2 + 0x40) == 0)) || (param_1 == 0)) {
    local_2c = -1;
  }
  else {
    local_c = FUN_1001c7852(param_1,*(undefined8 *)(param_2 + 0x40),param_2);
    if ((-1 < local_c) && (0 < *(int *)(param_1 + 0x50))) {
      local_c = -1;
    }
    local_2c = local_c;
  }
  return local_2c;
}

