
void FUN_100db58d0(uint param_1)

{
  if (param_1 < 0x10) {
    FUN_100df99c0("","AbstractFile",0,"Desired max. handles value is too low (%u < %u).",param_1,
                  0x10);
    return;
  }
  DAT_1023119b8 = param_1;
  FUN_100df99c0("","AbstractFile",0,"Max. handles set to %u");
  return;
}

