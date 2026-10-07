
void FUN_1006049b0(char *param_1)

{
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"fat32::DirEntry {");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"Name = \'(0x%02X)%c%c%c%c%c%c%c%c.%c%c%c\'",(int)*param_1,
                    (int)*param_1,(int)param_1[1],(int)param_1[2],(int)param_1[3],(int)param_1[4],
                    (int)param_1[5],(int)param_1[6],(int)param_1[7],(int)param_1[8],(int)param_1[9],
                    (int)param_1[10]);
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","vdisk",2,"Attributes = 0x%X",param_1[0xb]);
        if (1 < DAT_1011b55f8) {
          FUN_1008e3970("","vdisk",2,"NT reserved = 0x%X",param_1[0xc]);
          if (1 < DAT_1011b55f8) {
            FUN_1008e3970("","vdisk",2,"Creation time, ms = %u ",param_1[0xd]);
            if (1 < DAT_1011b55f8) {
              FUN_1008e3970("","vdisk",2,"Creation time = 0x%X",*(undefined2 *)(param_1 + 0xe));
              if (1 < DAT_1011b55f8) {
                FUN_1008e3970("","vdisk",2,"Creation date = 0x%X",*(undefined2 *)(param_1 + 0x10));
                if (1 < DAT_1011b55f8) {
                  FUN_1008e3970("","vdisk",2,"Last access date = 0x%X",
                                *(undefined2 *)(param_1 + 0x12));
                  if (1 < DAT_1011b55f8) {
                    FUN_1008e3970("","vdisk",2,"High 16 bits of cluster in FAT32 = 0x%X",
                                  *(undefined2 *)(param_1 + 0x14));
                    if (1 < DAT_1011b55f8) {
                      FUN_1008e3970("","vdisk",2,"Time of last write = 0x%X",
                                    *(undefined2 *)(param_1 + 0x16));
                      if (1 < DAT_1011b55f8) {
                        FUN_1008e3970("","vdisk",2,"Date of last write = 0x%X",
                                      *(undefined2 *)(param_1 + 0x18));
                        if (1 < DAT_1011b55f8) {
                          FUN_1008e3970("","vdisk",2,"First claster, lower 16 bits in FAT32 = 0x%X",
                                        *(undefined2 *)(param_1 + 0x1a));
                          if (1 < DAT_1011b55f8) {
                            FUN_1008e3970("","vdisk",2,"File size = %u bytes",
                                          *(undefined4 *)(param_1 + 0x1c));
                            if (1 < DAT_1011b55f8) {
                              FUN_1008e3970("","vdisk",2,"} fat32::DirEntry");
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

