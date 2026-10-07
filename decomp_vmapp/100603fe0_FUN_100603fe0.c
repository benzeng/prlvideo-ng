
void FUN_100603fe0(long param_1)

{
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"BaseVolume {");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"m_StartSector = %llu (0x%llX)",*(undefined8 *)(param_1 + 8),
                    *(undefined8 *)(param_1 + 8));
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","vdisk",2,"m_SizeSectors = %llu (0x%llX)",*(undefined8 *)(param_1 + 0x10),
                      *(undefined8 *)(param_1 + 0x10));
        if (1 < DAT_1011b55f8) {
          FUN_1008e3970("","vdisk",2,"m_SectorSize = %llu (0x%llX)",*(undefined8 *)(param_1 + 0x18),
                        *(undefined8 *)(param_1 + 0x18));
          if (1 < DAT_1011b55f8) {
            FUN_1008e3970("","vdisk",2,"}");
            return;
          }
        }
      }
    }
  }
  return;
}

