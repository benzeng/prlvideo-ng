
void FUN_100607900(long param_1)

{
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"hfsp::BTRootNodeHeader {");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"descriptor {");
    }
  }
  FUN_100607220(param_1);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} descriptor");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"header {");
    }
  }
  FUN_100607440(param_1 + 0xe);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} header");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"userData {");
    }
  }
  FUN_1007d8550(param_1 + 0x78,0x80);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} userData");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"} hfsp::BTRootNodeHeader");
      return;
    }
  }
  return;
}

