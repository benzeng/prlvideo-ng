
char * FUN_100dea110(uint param_1)

{
  if (param_1 < 0x19) {
    return (&PTR_s_PLRK_UNKNOWN_10225c460)[(int)param_1];
  }
  FUN_100df99c0("","Std",0,"Unknown PRL_LICENSE_RESTRICTION_KEY value %p",param_1);
  return "Unknown";
}

