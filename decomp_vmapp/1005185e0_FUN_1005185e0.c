
void FUN_1005185e0(long param_1)

{
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0x68) == '\0') {
    *(undefined1 *)(param_1 + 0x68) = 1;
    local_c = 0;
    FUN_100518f50(param_1,&local_c,4);
  }
  return;
}

