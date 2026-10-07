
void FUN_100697b10(long param_1)

{
  FUN_1008e3970("","dimg",0,"CBatChunk:");
  FUN_1008e3970("","dimg",0,"Size of BAT entry: %u bytes",*(undefined4 *)(param_1 + 0x14));
  FUN_1008e3970("","dimg",0,"Buffer size: %u (0x%X) bytes",*(undefined4 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x10));
  FUN_1008e3970("","dimg",0,"Buffer entry count: %u  (0x%X)",*(undefined4 *)(param_1 + 0x18),
                *(undefined4 *)(param_1 + 0x18));
  FUN_1008e3970("","dimg",0,"Buffer offset: %u (0x%X) bytes",*(undefined4 *)(param_1 + 0x20),
                *(undefined4 *)(param_1 + 0x20));
  FUN_1008e3970("","dimg",0,"Idx of the first buffer entry: %u (0x%X)",
                *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x1c));
  return;
}

