
void FUN_1005185b0(long param_1)

{
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0x68) != '\0') {
    *(undefined1 *)(param_1 + 0x68) = 0;
    local_c = 1;
    FUN_100518f50(param_1,&local_c,4);
  }
  return;
}

