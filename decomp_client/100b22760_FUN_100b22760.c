
void FUN_100b22760(long *param_1,char param_2)

{
  if ((param_2 != '\0') && ((char)param_1[0x301b] != '\0')) {
    (**(code **)(*param_1 + 0x80))(param_1);
  }
  param_1[0x301a] = -1;
  return;
}

