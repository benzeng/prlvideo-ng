
void FUN_10029a000(long param_1)

{
  if (*(int *)(param_1 + 0x120) == 2) {
    (**(code **)(**(long **)(param_1 + 0x118) + 0x30))(*(long **)(param_1 + 0x118),1);
    (**(code **)(**(long **)(param_1 + 0x128) + 0x30))(*(long **)(param_1 + 0x128),1);
    (**(code **)(**(long **)(param_1 + 0x118) + 0x30))(*(long **)(param_1 + 0x118),0);
    (**(code **)(**(long **)(param_1 + 0x128) + 0x30))(*(long **)(param_1 + 0x128),0);
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  return;
}

