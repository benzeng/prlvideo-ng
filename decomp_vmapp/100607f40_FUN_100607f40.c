
void FUN_100607f40(undefined2 *param_1)

{
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"hfsp::CatKey {");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"key_length: %u",*param_1);
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","vdisk",2,"parent_cnid: %u (0x%X)",*(undefined4 *)(param_1 + 1),
                      *(undefined4 *)(param_1 + 1));
        if (1 < DAT_1011b55f8) {
          FUN_1008e3970("","vdisk",2,"name {");
        }
      }
    }
  }
  FUN_100607b90(param_1 + 3);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} name");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"} hfsp::CatKey");
      return;
    }
  }
  return;
}

