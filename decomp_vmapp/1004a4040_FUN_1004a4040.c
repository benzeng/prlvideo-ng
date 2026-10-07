
void FUN_1004a4040(long param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(char *)(param_1 + 0xa8) == '\0') {
    *(undefined1 *)(param_1 + 0xa8) = 1;
    local_18 = 0x100020000;
    local_10 = 0x1000000000;
    FUN_100434830(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0xf0),0x1896d,&local_18,0x10,
                  &DAT_1011ccb98,0);
  }
  return;
}

