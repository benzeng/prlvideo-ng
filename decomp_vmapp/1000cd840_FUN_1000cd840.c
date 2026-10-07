
void FUN_1000cd840(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x204) != param_2) {
    FUN_1000bea50(*(undefined8 *)(param_1 + 0x2b0),param_2);
    *(int *)(param_1 + 0x204) = param_2;
  }
  return;
}

