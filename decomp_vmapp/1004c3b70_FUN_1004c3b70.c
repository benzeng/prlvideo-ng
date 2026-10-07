
void FUN_1004c3b70(long param_1)

{
  FUN_1004c2650();
  if (*(char *)(param_1 + 0x48) != '\0') {
    FUN_1004c2f50(param_1,1,0,0,1,0);
    FUN_1004c2f50(param_1,0x18,0,0,1,0);
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}

