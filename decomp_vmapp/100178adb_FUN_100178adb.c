
void FUN_100178adb(long param_1,ulong param_2)

{
  undefined8 local_28;
  undefined4 local_c;
  
  if (param_1 != 0) {
    local_28 = param_2;
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      **(undefined1 **)(param_1 + 0x30) = (char)local_28;
      local_28 = local_28 >> 8;
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
    }
  }
  return;
}

