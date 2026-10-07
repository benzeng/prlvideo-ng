
void FUN_10070bee0(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x140) != param_2) {
    if (param_2 == 0) {
      FUN_1007dcca0(*(long *)(param_1 + 0x140),param_1 + 0x150);
    }
    else {
      FUN_1007dc8d0(param_2,param_1 + 0x150,*(undefined4 *)(param_1 + 0x148),1);
    }
    *(long *)(param_1 + 0x140) = param_2;
  }
  return;
}

