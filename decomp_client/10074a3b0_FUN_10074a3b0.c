
void FUN_10074a3b0(long param_1,int param_2,undefined4 param_3,long param_4)

{
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_100749d80(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 1:
      FUN_100858d50(*(undefined8 *)(param_1 + 0x10),1);
      return;
    case 2:
      FUN_10074a0d0(param_1,**(undefined1 **)(param_4 + 8));
      return;
    case 3:
      FUN_100df99c0("","prl_client_app",0,
                    "Purchase completion page load timeout! Purchase result might be incomplete!");
      FUN_100749010(param_1);
      return;
    }
  }
  return;
}

