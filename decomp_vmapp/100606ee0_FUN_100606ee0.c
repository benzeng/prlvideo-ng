
void FUN_100606ee0(undefined4 *param_1)

{
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"hfsp::JournalHeader {");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"magic (must be 0x4a4e4c78): 0x%08X",*param_1);
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","vdisk",2,"endian (must be 0x12345678): 0x%08X",param_1[1]);
        if (1 < DAT_1011b55f8) {
          FUN_1008e3970("","vdisk",2,"start (offset to oldest transaction): %llu (0x%llX) bytes",
                        *(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 2));
          if (1 < DAT_1011b55f8) {
            FUN_1008e3970("","vdisk",2,"end (offset to newest transaction): %llu (0x%llX) bytes",
                          *(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 4));
            if (1 < DAT_1011b55f8) {
              FUN_1008e3970("","vdisk",2,"size: %llu (0x%llX) bytes",*(undefined8 *)(param_1 + 6),
                            *(undefined8 *)(param_1 + 6));
              if (1 < DAT_1011b55f8) {
                FUN_1008e3970("","vdisk",2,"blockHdrSize: %u",param_1[8]);
                if (1 < DAT_1011b55f8) {
                  FUN_1008e3970("","vdisk",2,"checksum: %u",param_1[9]);
                  if (1 < DAT_1011b55f8) {
                    FUN_1008e3970("","vdisk",2,"journalHeaderSize: %u",param_1[10]);
                    if (1 < DAT_1011b55f8) {
                      FUN_1008e3970("","vdisk",2,"} hfsp::JournalHeader");
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
  return;
}

