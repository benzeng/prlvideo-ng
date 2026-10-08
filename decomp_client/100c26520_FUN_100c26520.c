
uint FUN_100c26520(ulong param_1)

{
  if (param_1 < 0x100000000) {
    if ((param_1 & 0xffff0000) == 0) {
      if ((char)(param_1 >> 8) != '\0') {
        return (byte)(&DAT_101daa3f0)[(int)(param_1 >> 8)] + 8;
      }
      return (uint)(byte)(&DAT_101daa3f0)[(int)param_1];
    }
    if ((param_1 & 0xff000000) != 0) {
      return (byte)(&DAT_101daa3f0)[(int)(param_1 >> 0x18)] + 0x18;
    }
    return (byte)(&DAT_101daa3f0)[(int)(param_1 >> 0x10)] + 0x10;
  }
  if (param_1 >> 0x30 == 0) {
    if ((param_1 & 0xff0000000000) != 0) {
      return (byte)(&DAT_101daa3f0)[param_1 >> 0x28] + 0x28;
    }
    return (byte)(&DAT_101daa3f0)[(long)param_1 >> 0x20] + 0x20;
  }
  if (param_1 >> 0x38 != 0) {
    return (byte)(&DAT_101daa3f0)[param_1 >> 0x38] + 0x38;
  }
  return (byte)(&DAT_101daa3f0)[param_1 >> 0x30] + 0x30;
}

