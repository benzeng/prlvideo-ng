
void FUN_10085b080(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (*(code **)(*param_1 + 0x50) != (code *)0x0) {
      (**(code **)(*param_1 + 0x50))(param_1);
    }
    FUN_10081e1a0(param_1);
    return;
  }
  return;
}

