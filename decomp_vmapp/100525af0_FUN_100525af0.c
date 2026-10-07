
void FUN_100525af0(long param_1,undefined8 param_2,int param_3)

{
  undefined8 local_10;
  
  if ((param_3 == 1) && (*(char *)(param_1 + 0x68) != '\0')) {
    *(undefined1 *)(param_1 + 0x68) = 1;
    local_10 = 0x100000001;
    FUN_1005253a0(param_1,&local_10,8);
  }
  return;
}

