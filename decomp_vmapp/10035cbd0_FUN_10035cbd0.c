
undefined8 FUN_10035cbd0(long param_1)

{
  undefined8 in_RAX;
  int local_14;
  
  local_14 = (int)((ulong)in_RAX >> 0x20);
  if ((*(int *)(param_1 + 0x2c) == -1) &&
     ((*DAT_1011c6130)(*(undefined4 *)(param_1 + 0x28),0x8867,&local_14), local_14 == 0)) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x34) == -1) &&
     ((*DAT_1011c6130)(*(undefined4 *)(param_1 + 0x30),0x8867,&local_14), local_14 == 0)) {
    return 0;
  }
  return 1;
}

