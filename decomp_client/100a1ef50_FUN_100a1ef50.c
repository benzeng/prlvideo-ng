
void FUN_100a1ef50(long param_1,int param_2,int param_3,long *param_4)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 1) {
      FUN_100a1f070();
      return;
    }
    if (param_3 == 0) {
      uVar1 = FUN_100a1c840(param_1 + 0x10,0);
      if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
        *(undefined1 *)*param_4 = uVar1;
      }
    }
  }
  return;
}

