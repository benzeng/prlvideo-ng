
long _xmlTextReaderPreserve(long param_1)

{
  undefined8 local_28;
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_1 == 0) {
    local_28 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x78) == 0) {
      local_18 = *(long *)(param_1 + 0x70);
    }
    else {
      local_18 = *(long *)(param_1 + 0x78);
    }
    if (local_18 == 0) {
      local_28 = 0;
    }
    else {
      if ((*(int *)(local_18 + 8) != 9) && (*(int *)(local_18 + 8) != 0xe)) {
        *(ushort *)(local_18 + 0x72) = *(ushort *)(local_18 + 0x72) | 2;
        *(ushort *)(local_18 + 0x72) = *(ushort *)(local_18 + 0x72) | 4;
      }
      *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      for (local_10 = *(long *)(local_18 + 0x28); local_10 != 0;
          local_10 = *(long *)(local_10 + 0x28)) {
        if (*(int *)(local_10 + 8) == 1) {
          *(ushort *)(local_10 + 0x72) = *(ushort *)(local_10 + 0x72) | 2;
        }
      }
      local_28 = local_18;
    }
  }
  return local_28;
}

