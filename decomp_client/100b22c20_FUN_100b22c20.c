
void FUN_100b22c20(long *param_1)

{
  if ((char)param_1[0x301b] != '\0') {
    (**(code **)(*param_1 + 0x80))(param_1);
  }
  FUN_100b0d600((long)param_1 + *(long *)(*param_1 + -0x18));
  return;
}

