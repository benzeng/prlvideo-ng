
void FUN_1000effe0(long param_1,char *param_2,int param_3)

{
  _snprintf(param_2,(long)param_3,"0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x",
            (ulong)*(uint *)(param_1 + 4),(ulong)*(uint *)(param_1 + 8),
            (ulong)*(uint *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
            *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
            *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
            *(undefined4 *)(param_1 + 0x24));
  return;
}

