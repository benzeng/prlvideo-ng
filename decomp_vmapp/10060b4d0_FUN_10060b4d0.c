
void FUN_10060b4d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bc81b0;
  if ((void *)param_1[0x192] != (void *)0x0) {
    _free((void *)param_1[0x192]);
    param_1[0x192] = 0;
  }
  if ((void *)param_1[0x194] != (void *)0x0) {
    _free((void *)param_1[0x194]);
    param_1[0x194] = 0;
  }
  *(undefined4 *)(param_1 + 0x195) = 0;
  *(undefined4 *)(param_1 + 0x193) = 0;
  *(undefined4 *)((long)param_1 + 0xc9c) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xcac) = 0xffffffff;
  param_1[0x191] = 0;
  param_1[0xaa] = &PTR_FUN_100bc8190;
  if ((void *)param_1[0xcd] != (void *)0x0) {
    _free((void *)param_1[0xcd]);
  }
  param_1[0x85] = &PTR_FUN_100bc8190;
  if ((void *)param_1[0xa8] != (void *)0x0) {
    _free((void *)param_1[0xa8]);
  }
  param_1[0x60] = &PTR_FUN_100bc8190;
  if ((void *)param_1[0x83] != (void *)0x0) {
    _free((void *)param_1[0x83]);
  }
  FUN_100603f50(param_1);
  return;
}

