
void FUN_100608340(undefined4 *param_1)

{
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"hfsp::Permissions {");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"owner: %u",*param_1);
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","vdisk",2,"group: %u (0x%X)",param_1[1],param_1[1]);
        if (1 < DAT_1011b55f8) {
          FUN_1008e3970("","vdisk",2,"mode:  %u (0x%X)",param_1[2],param_1[2]);
          if (1 < DAT_1011b55f8) {
            FUN_1008e3970("","vdisk",2,"dev:   %u (0x%X)",param_1[3],param_1[3]);
            if (1 < DAT_1011b55f8) {
              FUN_1008e3970("","vdisk",2,"} hfsp::Permissions");
              return;
            }
          }
        }
      }
    }
  }
  return;
}

