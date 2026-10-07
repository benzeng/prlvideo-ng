
undefined8 FUN_1004c1380(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  
  uVar5 = 0xf0000003;
  if (0xb < *(ushort *)(param_2 + 0x14)) {
    lVar3 = FUN_1002a6010(param_2);
    iVar1 = *(int *)(lVar3 + 4);
    puVar4 = (undefined8 *)FUN_1002a6010(param_2);
    *(undefined4 *)(puVar4 + 1) = 0;
    *puVar4 = 0;
    if (iVar1 == 2) {
      *(undefined4 *)puVar4 = 0;
      bVar2 = FUN_1004c1c80();
      *(uint *)(puVar4 + 1) = (uint)bVar2;
      uVar5 = 0;
      uVar6 = 0;
      if (bVar2 != 0) {
        if (*(long *)(DAT_1011c3698 + 0x110) == 0) {
          if (DAT_1011b55f8 < 1) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            FUN_1008e3970("","SharedProfileHost",1,"Configuration is not available");
          }
        }
        else {
          CVmConfiguration::getVmSettings();
          CVmSettings::getVmTools();
          CVmTools::getVmSharedProfile();
          bVar2 = CVmSharedProfile::isEnabled();
          uVar6 = (uint)bVar2;
        }
      }
      *(uint *)((long)puVar4 + 4) = uVar6;
    }
    else {
      *(undefined4 *)puVar4 = 1;
      uVar5 = 0;
    }
  }
  return uVar5;
}

