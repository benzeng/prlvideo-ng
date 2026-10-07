
void FUN_100604e50(long param_1)

{
  char *pcVar1;
  
  if (((1 < DAT_1011b55f8) && (FUN_1008e3970("","vdisk",2,"Fat32Volume {"), 1 < DAT_1011b55f8)) &&
     (FUN_1008e3970("","vdisk",2,"m_Start = %llu",*(undefined8 *)(param_1 + 8)), 1 < DAT_1011b55f8))
  {
    FUN_1008e3970("","vdisk",2,"m_PrimeBootSector {");
  }
  FUN_100604190(param_1 + 0x20);
  if ((1 < DAT_1011b55f8) && (FUN_1008e3970("","vdisk",2,"} m_PrimeBootSector"), 1 < DAT_1011b55f8))
  {
    FUN_1008e3970("","vdisk",2,"m_PrimeFsInfo {");
  }
  FUN_100604850(param_1 + 0x220);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} m_PrimeFsInfo");
  }
  if (*(long *)(param_1 + 0x440) == 0) {
    if (1 < DAT_1011b55f8) {
      pcVar1 = "m_PrimeFat = N/A";
      goto LAB_1006050d9;
    }
  }
  else {
    if (((1 < DAT_1011b55f8) && (FUN_1008e3970("","vdisk",2,"m_PrimeFat {"), 1 < DAT_1011b55f8)) &&
       ((FUN_1008e3970("","vdisk",2,"media = 0x%08X",**(undefined4 **)(param_1 + 0x440)),
        1 < DAT_1011b55f8 &&
        ((FUN_1008e3970("","vdisk",2,"EOC   = 0x%08X",
                        *(undefined4 *)(*(long *)(param_1 + 0x440) + 4)), 1 < DAT_1011b55f8 &&
         (FUN_1008e3970("","vdisk",2,"Root dir entry chain = 0x%08X",
                        *(undefined4 *)
                         (*(long *)(param_1 + 0x440) + (ulong)*(uint *)(param_1 + 0x4c) * 4)),
         1 < DAT_1011b55f8)))))) {
      FUN_1008e3970("","vdisk",2,"(first 64 bytes) {");
    }
    FUN_1007d8550(*(undefined8 *)(param_1 + 0x440),0x40);
    if ((1 < DAT_1011b55f8) && (FUN_1008e3970("","vdisk",2,"} (first 64 bytes)"), 1 < DAT_1011b55f8)
       ) {
      pcVar1 = "} m_PrimeFat";
LAB_1006050d9:
      FUN_1008e3970("","vdisk",2,pcVar1);
    }
  }
  if (*(long *)(param_1 + 0x448) == 0) {
    if (1 < DAT_1011b55f8) {
      pcVar1 = "m_BackupFat = N/A";
      goto LAB_10060525a;
    }
  }
  else {
    if ((((1 < DAT_1011b55f8) && (FUN_1008e3970("","vdisk",2,"m_BackupFat {"), 1 < DAT_1011b55f8))
        && (FUN_1008e3970("","vdisk",2,"media = 0x%08X",**(undefined4 **)(param_1 + 0x448)),
           1 < DAT_1011b55f8)) &&
       ((FUN_1008e3970("","vdisk",2,"EOC   = 0x%08X",*(undefined4 *)(*(long *)(param_1 + 0x448) + 4)
                      ), 1 < DAT_1011b55f8 &&
        (FUN_1008e3970("","vdisk",2,"Root dir entry chain = 0x%08X",
                       *(undefined4 *)
                        (*(long *)(param_1 + 0x448) + (ulong)*(uint *)(param_1 + 0x4c) * 4)),
        1 < DAT_1011b55f8)))) {
      FUN_1008e3970("","vdisk",2,"(first 64 bytes) {");
    }
    FUN_1007d8550(*(undefined8 *)(param_1 + 0x448),0x40);
    if ((DAT_1011b55f8 < 2) || (FUN_1008e3970("","vdisk",2,"} (first 64 bytes)"), DAT_1011b55f8 < 2)
       ) goto LAB_10060528d;
    pcVar1 = "} m_BackupFat";
LAB_10060525a:
    FUN_1008e3970("","vdisk",2,pcVar1);
  }
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"m_RootDir {");
  }
LAB_10060528d:
  FUN_1006049b0(param_1 + 0x420);
  if ((1 < DAT_1011b55f8) && (FUN_1008e3970("","vdisk",2,"} m_RootDir"), 1 < DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",2,"} Fat32Volume");
    return;
  }
  return;
}

