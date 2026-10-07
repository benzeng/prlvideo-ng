
void FUN_10060b040(long param_1)

{
  char *pcVar1;
  
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"AllocFile {");
  }
  if (*(long *)(param_1 + 8) == 0) {
    if (1 < DAT_1011b55f8) {
      pcVar1 = "m_Head: N/A";
      goto LAB_10060b104;
    }
  }
  else {
    if (((1 < DAT_1011b55f8) &&
        (FUN_1008e3970("","vdisk",2,"m_HeadStart: %u block",*(undefined4 *)(param_1 + 0x14)),
        1 < DAT_1011b55f8)) &&
       (FUN_1008e3970("","vdisk",2,"m_HeadSize: %u bytes",*(undefined4 *)(param_1 + 0x10)),
       1 < DAT_1011b55f8)) {
      FUN_1008e3970("","vdisk",2,"m_Head {");
    }
    FUN_1007d8550(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (1 < DAT_1011b55f8) {
      pcVar1 = "} m_Head";
LAB_10060b104:
      FUN_1008e3970("","vdisk",2,pcVar1);
    }
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    if (DAT_1011b55f8 < 2) goto LAB_10060b1a1;
    pcVar1 = "m_Tail: N/A";
  }
  else {
    if (((1 < DAT_1011b55f8) &&
        (FUN_1008e3970("","vdisk",2,"m_TailStart: %u block",*(undefined4 *)(param_1 + 0x24)),
        1 < DAT_1011b55f8)) &&
       (FUN_1008e3970("","vdisk",2,"m_TailSize: %u bytes",*(undefined4 *)(param_1 + 0x20)),
       1 < DAT_1011b55f8)) {
      FUN_1008e3970("","vdisk",2,"m_Tail {");
    }
    FUN_1007d8550(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
    if (DAT_1011b55f8 < 2) {
      return;
    }
    pcVar1 = "} m_Tail";
  }
  FUN_1008e3970("","vdisk",2,pcVar1);
LAB_10060b1a1:
  if (DAT_1011b55f8 < 2) {
    return;
  }
  FUN_1008e3970("","vdisk",2,"} AllocFile");
  return;
}

