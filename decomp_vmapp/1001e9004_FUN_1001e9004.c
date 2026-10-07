
undefined4 FUN_1001e9004(int *param_1,long param_2)

{
  undefined4 local_1c;
  
  if (param_2 == 0) {
    if ((*param_1 == 2) && (*(long *)(param_1 + 0x2e) != 0)) {
      local_1c = **(undefined4 **)(param_1 + 0x2e);
    }
    else {
      local_1c = 0xffffffff;
    }
  }
  else {
    local_1c = *(undefined4 *)(param_2 + 8);
  }
  return local_1c;
}

