
void FUN_1007058e0(long param_1,int param_2,char param_3)

{
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x18) != param_2) {
    *(int *)(*(long *)(param_1 + 0x10) + 0x18) = param_2;
    FUN_100852c10(param_1);
    if (param_3 != '\0') {
      FUN_100704190(*(undefined8 *)(param_1 + 0x10));
      return;
    }
  }
  return;
}

