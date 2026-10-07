
void FUN_1003b9900(undefined8 param_1,long param_2,byte param_3)

{
  if ((param_3 != 0) &&
     ((((param_3 != 0xf || (*(char *)(param_2 + 0x31) != '\0')) ||
       (*(char *)(param_2 + 0x32) != '\x01')) ||
      ((*(char *)(param_2 + 0x33) != '\x02' || (*(char *)(param_2 + 0x34) != '\x03')))))) {
    FUN_10038e8e0(param_1,".");
    if ((param_3 & 1) != 0) {
      FUN_10038e8e0(param_1,(&PTR_s_x_100bbdf30)[*(byte *)(param_2 + 0x31)]);
    }
    if ((param_3 & 2) != 0) {
      FUN_10038e8e0(param_1,(&PTR_s_x_100bbdf30)[*(byte *)(param_2 + 0x32)]);
    }
    if ((param_3 & 4) != 0) {
      FUN_10038e8e0(param_1,(&PTR_s_x_100bbdf30)[*(byte *)(param_2 + 0x33)]);
    }
    if ((param_3 & 8) != 0) {
      FUN_10038e8e0(param_1,(&PTR_s_x_100bbdf30)[*(byte *)(param_2 + 0x34)]);
      return;
    }
  }
  return;
}

