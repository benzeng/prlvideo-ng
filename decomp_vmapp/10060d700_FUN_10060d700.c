
void FUN_10060d700(long param_1)

{
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"HfspVolume {");
  }
  FUN_100603fe0(param_1);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"m_Header {");
  }
  FUN_100605e90(param_1 + 0x20);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} m_Header");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"m_JornalInfoBlock {");
    }
  }
  FUN_1006066b0(param_1 + 0x220);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} m_JornalInfoBlock");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"m_JornalHeader {");
    }
  }
  FUN_100606ee0(param_1 + 0x2d4);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} m_JornalHeader");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"m_ExtRoot {");
    }
  }
  FUN_100609c80(param_1 + 0x300);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} m_ExtRoot");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"m_AttrRoot {");
    }
  }
  FUN_100609c80(param_1 + 0x428);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} m_AttrRoot");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"m_CatRoot {");
    }
  }
  FUN_100609c80(param_1 + 0x550);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} m_CatRoot");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"m_CatLeafDscr {");
    }
  }
  FUN_100607220(param_1 + 0x678);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} m_CatLeafDscr");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"m_JournalInfoKey {");
    }
  }
  FUN_100607f40(param_1 + 0x686);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} m_JournalInfoKey");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"m_JournalInfo {");
    }
  }
  FUN_100608ef0(param_1 + 0x88c);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} m_JournalInfo");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"m_JournalKey {");
    }
  }
  FUN_100607f40(param_1 + 0x984);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} m_JournalKey");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"m_Journal {");
    }
  }
  FUN_100608ef0(param_1 + 0xb8a);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} m_Journal");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"m_AllocFile {");
    }
  }
  FUN_10060b040(param_1 + 0xc88);
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","vdisk",2,"} m_AllocFile");
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","vdisk",2,"} HfspVolume");
      return;
    }
  }
  return;
}

