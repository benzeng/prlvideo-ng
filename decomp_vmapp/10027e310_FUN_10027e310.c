
void FUN_10027e310(long param_1,undefined4 *param_2)

{
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","LocalDevices",3,
                  "[CNetVirtIo::SuspendState] rx(pfn:%08x idx:%d) tx(pfn:%08x idx:%d)",
                  *(undefined4 *)(param_1 + 0x4878),*(undefined2 *)(param_1 + 0x4898),
                  *(undefined4 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x40));
  }
  *param_2 = 0x40;
  param_2[0xd] = *(undefined4 *)(param_1 + 0x4878);
  *(undefined2 *)(param_2 + 0xf) = *(undefined2 *)(param_1 + 0x4898);
  param_2[0xe] = *(undefined4 *)(param_1 + 0x20);
  *(undefined2 *)((long)param_2 + 0x3e) = *(undefined2 *)(param_1 + 0x40);
  return;
}

