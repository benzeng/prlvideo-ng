
void FUN_100adbaf0(long param_1,int param_2,undefined1 param_3)

{
  if (*(int *)(param_1 + 0x810) != param_2) {
    *(int *)(param_1 + 0x814) = *(int *)(param_1 + 0x810);
    *(int *)(param_1 + 0x810) = param_2;
    *(undefined1 *)(param_1 + 0x81c) = param_3;
  }
  return;
}

