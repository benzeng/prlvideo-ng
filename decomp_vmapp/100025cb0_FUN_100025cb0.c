
void FUN_100025cb0(long param_1,undefined8 param_2,long *param_3,int param_4)

{
  if (*(char *)(param_1 + 0x70) != '\0') {
    FUN_1004c2f50(*(undefined8 *)(param_1 + 0x78),**(undefined4 **)(*param_3 + 0x10),
                  *(undefined4 **)(*param_3 + 0x10) + 1,param_4 + -4,1,0);
    return;
  }
  return;
}

