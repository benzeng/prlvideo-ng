
void FUN_100605a30(undefined8 *param_1)

{
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"hfsp::ForkRaw {");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"totalSize:   %llu bytes",*param_1);
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","vdisk",2,"clumpSize:   %u bytes",*(undefined4 *)(param_1 + 1));
        if (1 < DAT_1011b55f8) {
          FUN_1008e3970("","vdisk",2,"totalBlocks: %u",*(undefined4 *)((long)param_1 + 0xc));
          if (1 < DAT_1011b55f8) {
            FUN_1008e3970("","vdisk",2,"extents {");
          }
        }
      }
    }
  }
  if ((*(int *)((long)param_1 + 0x14) != 0) && (1 < DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",2,"hfsp::Extent: { start block = %u, block count = %u }",
                  *(undefined4 *)(param_1 + 2));
  }
  if ((*(int *)((long)param_1 + 0x1c) != 0) && (1 < DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",2,"hfsp::Extent: { start block = %u, block count = %u }",
                  *(undefined4 *)(param_1 + 3));
  }
  if ((*(int *)((long)param_1 + 0x24) != 0) && (1 < DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",2,"hfsp::Extent: { start block = %u, block count = %u }",
                  *(undefined4 *)(param_1 + 4));
  }
  if ((*(int *)((long)param_1 + 0x2c) != 0) && (1 < DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",2,"hfsp::Extent: { start block = %u, block count = %u }",
                  *(undefined4 *)(param_1 + 5));
  }
  if ((*(int *)((long)param_1 + 0x34) != 0) && (1 < DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",2,"hfsp::Extent: { start block = %u, block count = %u }",
                  *(undefined4 *)(param_1 + 6));
  }
  if ((*(int *)((long)param_1 + 0x3c) != 0) && (1 < DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",2,"hfsp::Extent: { start block = %u, block count = %u }",
                  *(undefined4 *)(param_1 + 7));
  }
  if ((*(int *)((long)param_1 + 0x44) != 0) && (1 < DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",2,"hfsp::Extent: { start block = %u, block count = %u }",
                  *(undefined4 *)(param_1 + 8));
  }
  if ((*(int *)((long)param_1 + 0x4c) != 0) && (1 < DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",2,"hfsp::Extent: { start block = %u, block count = %u }",
                  *(undefined4 *)(param_1 + 9));
  }
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} extents");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"} hfsp::ForkRaw");
      return;
    }
  }
  return;
}

