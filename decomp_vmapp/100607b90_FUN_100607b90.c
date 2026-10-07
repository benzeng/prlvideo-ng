
void FUN_100607b90(ushort *param_1)

{
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"hfsp::UniStr255 {");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"strlen: %u chars",*param_1);
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","vdisk",2,"name {");
      }
    }
  }
  FUN_1007d8550(param_1 + 1,(ulong)*param_1 * 2);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} name");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"} hfsp::UniStr255");
      return;
    }
  }
  return;
}

