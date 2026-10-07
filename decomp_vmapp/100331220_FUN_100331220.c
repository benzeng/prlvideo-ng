
void FUN_100331220(long param_1,undefined4 *param_2,long *param_3)

{
  char cVar1;
  long local_18;
  
  local_18 = *param_3;
  cVar1 = FUN_1002fce50(*(undefined8 *)(param_1 + 0x10),*param_2,&local_18);
  if (cVar1 == '\0') {
    if (*param_3 != 0) {
      FUN_1002a5f70();
    }
    *param_3 = 0;
  }
  return;
}

