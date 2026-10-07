
undefined8 FUN_10004aa80(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  char *pcVar3;
  uint uVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_1002a6010(param_2);
  uVar4 = *(uint *)(lVar2 + 8);
  if (uVar4 == 8) {
    uVar4 = (uint)*(ushort *)(param_2 + 0x14);
    if (0x27 < *(ushort *)(param_2 + 0x14)) {
      if (*(long *)(*(long *)(param_1 + 0x110) + 0x110) == 0) {
        return 0xf000001c;
      }
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmTools();
      CVmTools::getWin7Look();
      bVar1 = CVmWin7Look::isEnabled();
      *(uint *)(lVar2 + 0x10) = (uint)bVar1;
      return 0;
    }
    if (DAT_1011b55f8 < 1) {
      return 0xf0000002;
    }
    pcVar3 = "Invalid size of inline data for VIRTEX_REQ_MODERNMIX request: %u (must be >= %u)";
    uVar5 = 0x28;
  }
  else {
    if (DAT_1011b55f8 < 1) {
      return 0xf0000002;
    }
    pcVar3 = "Invalid request for VIRTEX_REQ_MODERNMIX: %u (must be %u)";
    uVar5 = 8;
  }
  FUN_1008e3970("GSHEXT","vm",1,pcVar3,uVar4,uVar5);
  return 0xf0000002;
}

