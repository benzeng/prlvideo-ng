
void FUN_10070a7a0(uint param_1)

{
  if (param_1 < 0x10) {
    FUN_1008e3970("","AbstractFile",0,"Desired max. handles value is too low (%u < %u).",param_1,
                  0x10);
    return;
  }
  DAT_1011ccb28 = param_1;
  FUN_1008e3970("","AbstractFile",0,"Max. handles set to %u");
  return;
}

