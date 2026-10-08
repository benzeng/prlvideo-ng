
void FUN_1003883c0(long param_1,char param_2)

{
  if (((*(long *)(param_1 + 0x48) != 0) && (*(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) &&
     (*(long *)(param_1 + 0x50) != 0)) {
    if (param_2 != '\0') {
      FUN_1003872e0(param_1,*(long *)(param_1 + 0x50));
      return;
    }
    FUN_1003875d0();
    return;
  }
  return;
}

