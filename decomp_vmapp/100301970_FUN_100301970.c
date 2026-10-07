
void FUN_100301970(long param_1,int param_2,undefined4 *param_3)

{
  undefined8 in_RAX;
  undefined8 uStack_38;
  
  if (0 < param_2) {
    uStack_38 = in_RAX;
    do {
      (*DAT_1011c5e48)(1,(long)&uStack_38 + 4);
      FUN_100305cb0(*(undefined8 *)(param_1 + 0x30),uStack_38._4_4_,uStack_38._4_4_,
                    *(undefined1 *)(param_1 + 0x38),
                    *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x2c),
                    *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x30));
      *param_3 = uStack_38._4_4_;
      param_3 = param_3 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

