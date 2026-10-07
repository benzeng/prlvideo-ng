
undefined1
FUN_1007533d0(undefined8 param_1,int param_2,ulong *param_3,long param_4,long param_5,long *param_6)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong local_38;
  
  uVar5 = 0;
  FUN_1008e3970("","dbgdump",0,"Seaching for DebuggerDataBlock... (0%%)");
  uVar6 = *param_3;
  if (uVar6 != 0) {
    uVar7 = 0;
    local_38 = 0;
    uVar8 = 0;
    do {
      FUN_100753030(param_1,(int)(uVar8 / uVar6) * 0x27 + 0x29,uVar8 % uVar6);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = *param_3;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar7;
      uVar5 = SUB168(auVar3 / auVar2,0);
      iVar9 = SUB164(auVar3 / auVar2,0);
      if ((iVar9 == (int)((uVar5 & 0xffffffff) / 10) * 10) && ((int)local_38 != iVar9)) {
        FUN_1008e3970("","dbgdump",0,"Seaching for DebuggerDataBlock... (%u%%)",uVar5 & 0xffffffff);
        local_38 = uVar5 & 0xffffffff;
      }
      uVar6 = uVar8 + 0x50000000;
      if (uVar8 < 0xb0000000) {
        uVar6 = uVar8;
      }
      cVar4 = (*(code *)param_3[2])(uVar6,FUN_100753600,4,param_5 + 0x10,0x350);
      if (cVar4 != '\0') {
        FUN_1008e3970("","dbgdump",0,
                      "Found sample KernBase=0x%llx PsLoadedModuleList=0x%llx at offset 0x%llx",
                      *(undefined8 *)(param_5 + 0x18),*(undefined8 *)(param_4 + 0x18),uVar8);
        uVar1 = *(ulong *)(param_4 + 0x10);
        if (param_2 == 0x20) {
          if ((uVar1 == 0) || (((uVar1 ^ *(ulong *)(param_5 + 0x18)) & 0xffffffff) == 0)) {
LAB_10075359f:
            FUN_1008e3970("","dbgdump",0,"Found DebuggerDataBlock... (%u%%)",uVar5 & 0xffffffff);
            if (param_6 != (long *)0x0) {
              *param_6 = uVar6 - 0x10;
            }
            FUN_100753030(param_1,0x50);
            return 1;
          }
        }
        else if ((uVar1 == 0) || (*(ulong *)(param_5 + 0x18) == uVar1)) goto LAB_10075359f;
      }
      uVar8 = uVar8 + 4;
      uVar6 = *param_3;
      uVar7 = uVar7 + 400;
    } while (uVar8 < uVar6);
  }
  FUN_1008e3970("","dbgdump",0,"Seaching for DebuggerDataBlock... failed(%u%%)",uVar5 & 0xffffffff);
  return 0;
}

