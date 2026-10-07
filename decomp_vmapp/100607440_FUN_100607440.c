
void FUN_100607440(undefined2 *param_1)

{
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"hfsp::BTHeaderRecord {");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"height of btree_node_desc: %u",*param_1);
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","vdisk",2,"root node of the hierarchy: %u",*(undefined4 *)(param_1 + 1));
        if (1 < DAT_1011b55f8) {
          FUN_1008e3970("","vdisk",2,"number of leaf Records (not nodes): %u",
                        *(undefined4 *)(param_1 + 3));
          if (1 < DAT_1011b55f8) {
            FUN_1008e3970("","vdisk",2,"first leaf node: %u",*(undefined4 *)(param_1 + 5));
            if (1 < DAT_1011b55f8) {
              FUN_1008e3970("","vdisk",2,"last leaf node: %u",*(undefined4 *)(param_1 + 7));
              if (1 < DAT_1011b55f8) {
                FUN_1008e3970("","vdisk",2,"node size of _all_ nodes in this fork: %u bytes",
                              param_1[9]);
                if (1 < DAT_1011b55f8) {
                  FUN_1008e3970("","vdisk",2,"maximum (or fixed) length of keys in this btree: %u",
                                param_1[10]);
                  if (1 < DAT_1011b55f8) {
                    FUN_1008e3970("","vdisk",2,"count of all (free and used) nodes in tree: %u",
                                  *(undefined4 *)(param_1 + 0xb));
                    if (1 < DAT_1011b55f8) {
                      FUN_1008e3970("","vdisk",2,"free nodes: %u",*(undefined4 *)(param_1 + 0xd));
                      if (1 < DAT_1011b55f8) {
                        FUN_1008e3970("","vdisk",2,"clump_size: %u bytes",
                                      *(undefined4 *)(param_1 + 0x10));
                        if (1 < DAT_1011b55f8) {
                          FUN_1008e3970("","vdisk",2,"btree_type (always 0 for HFS+): %u",
                                        *(undefined1 *)(param_1 + 0x12));
                          if (1 < DAT_1011b55f8) {
                            FUN_1008e3970("","vdisk",2,"attributes: %u",
                                          *(undefined4 *)(param_1 + 0x13));
                            if (1 < DAT_1011b55f8) {
                              FUN_1008e3970("","vdisk",2,"} hfsp::BTHeaderRecord");
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

