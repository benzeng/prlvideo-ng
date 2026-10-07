
undefined8 FUN_100087e60(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar11 = (ulong)*(uint *)(param_1 + 0x46c);
  uVar8 = uVar11 << 0x14;
  if (0xafffffff < uVar8 && uVar11 != 0xb00) {
    uVar8 = 0xb0000000;
  }
  uVar1 = *(uint *)(param_2 + 8);
  uVar10 = (ulong)uVar1;
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar13 = (ulong)uVar2;
  if ((uVar8 < uVar10) || (uVar8 < uVar13)) {
    pcVar9 = "Invalid FirmwareSizes: ACPI_NVS 0x%x; Firmware 0x%x";
    uVar12 = uVar10;
    uVar10 = uVar13;
  }
  else if ((uVar1 == 0) ||
          (uVar12 = (ulong)*(uint *)(param_2 + 4), *(uint *)(param_2 + 4) + uVar1 == uVar8)) {
    uVar3 = *(uint *)(param_2 + 0xc);
    if ((uVar3 == 0) || (uVar3 == ((int)uVar8 - uVar1) - uVar2)) {
      if ((uVar2 < 0x100001) && (uVar2 + uVar1 < 0x1000001)) {
        *(undefined4 *)(param_1 + 0xa24) = *(undefined4 *)(param_2 + 0x14);
        uVar4 = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(param_1 + 0xa2c) = uVar4;
        uVar5 = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(param_1 + 0xa28) = uVar5;
        uVar6 = *(undefined4 *)(param_2 + 0xc);
        *(undefined4 *)(param_1 + 0xa30) = uVar6;
        uVar7 = *(undefined4 *)(param_2 + 0x10);
        *(undefined4 *)(param_1 + 0xa34) = uVar7;
        if (DAT_1011b55f8 < 3) {
          return 0;
        }
        FUN_1008e3970("","vm",3,
                      "SetFirmwareOptions: %u MB; FwGuestAddr = 0x%x; FwSize = 0x%x; NvsAddr = 0x%x; NvsSize = 0x%x"
                      ,uVar11,uVar4,uVar5,uVar7,uVar6);
        return 0;
      }
      pcVar9 = "SetFirmwareOptions: Invalid sizes of AcpiNvs or Fw! 0x%x + 0x%x > 0x%x";
      uVar12 = uVar13;
    }
    else {
      pcVar9 = "SetFirmwareOptions: AcpiNvs is not on expected addr! 0x%x:0x%x; expected addr 0x%x";
      uVar12 = (ulong)uVar3;
      uVar10 = uVar13;
    }
  }
  else {
    pcVar9 = "SetFirmwareOptions: Firmware is not on top! 0x%x:0x%x top 0x%llx";
  }
  FUN_1008e3970("","vm",0,pcVar9,uVar12,uVar10);
  return 0x80000009;
}

