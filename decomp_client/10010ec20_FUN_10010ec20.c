
undefined4 FUN_10010ec20(uint param_1)

{
  if (param_1 < 3) {
    return *(undefined4 *)(&DAT_100e14cd4 + (long)(int)param_1 * 4);
  }
  FUN_100df99c0("","prl_client_app",0,"wrong interface type requested.");
  return 0;
}

