
void FUN_100604850(undefined4 *param_1)

{
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"fat32::FsInfo {");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"lead signature (must be 0x41615252) = 0x%X",*param_1);
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","vdisk",2,"struct signature (must be 0x61417272) = 0x%X",param_1[0x79]);
        if (1 < DAT_1011b55f8) {
          FUN_1008e3970("","vdisk",2,"free clusters = %u (0x%X)",param_1[0x7a],param_1[0x7a]);
          if (1 < DAT_1011b55f8) {
            FUN_1008e3970("","vdisk",2,"next free cluster = 0x%X",param_1[0x7b]);
            if (1 < DAT_1011b55f8) {
              FUN_1008e3970("","vdisk",2,"trail signature (must be 0xAA550000) = 0x%08X",
                            param_1[0x7f]);
              if (1 < DAT_1011b55f8) {
                FUN_1008e3970("","vdisk",2,"} fat32::FsInfo");
                return;
              }
            }
          }
        }
      }
    }
  }
  return;
}

