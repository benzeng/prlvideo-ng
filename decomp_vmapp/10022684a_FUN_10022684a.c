
undefined4 FUN_10022684a(long param_1)

{
  undefined4 local_14;
  
  if (param_1 == 0) {
    local_14 = 0xffffffff;
  }
  else if (*(int *)(param_1 + 0x18) == 2) {
    local_14 = 0;
  }
  else if (*(long *)(param_1 + 0x70) == 0) {
    if (*(long *)(*(long *)(param_1 + 8) + 0x18) == 0) {
      *(undefined4 *)(param_1 + 0x18) = 2;
      local_14 = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x18);
      *(undefined4 *)(param_1 + 0x18) = 0;
      local_14 = 1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x18) != 4) {
      if (*(long *)(*(long *)(param_1 + 0x70) + 0x18) != 0) {
        *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x18);
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
        *(undefined4 *)(param_1 + 0x18) = 0;
        return 1;
      }
      if ((*(int *)(*(long *)(param_1 + 0x70) + 8) == 1) ||
         (*(int *)(*(long *)(param_1 + 0x70) + 8) == 2)) {
        *(undefined4 *)(param_1 + 0x18) = 4;
        return 1;
      }
    }
    if (*(long *)(*(long *)(param_1 + 0x70) + 0x30) == 0) {
      if (*(long *)(*(long *)(param_1 + 0x70) + 0x28) == 0) {
        *(undefined4 *)(param_1 + 0x18) = 2;
        local_14 = 1;
      }
      else if (*(int *)(*(long *)(*(long *)(param_1 + 0x70) + 0x28) + 8) == 9) {
        *(undefined4 *)(param_1 + 0x18) = 2;
        local_14 = 0;
      }
      else {
        *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x28);
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
        *(undefined4 *)(param_1 + 0x18) = 4;
        local_14 = 1;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x30);
      *(undefined4 *)(param_1 + 0x18) = 0;
      local_14 = 1;
    }
  }
  return local_14;
}

