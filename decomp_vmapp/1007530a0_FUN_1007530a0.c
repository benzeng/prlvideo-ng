
undefined1 FUN_1007530a0(undefined8 param_1,uint param_2,ulong *param_3,undefined2 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_48;
  ulong local_40;
  
  local_48 = 0;
  FUN_1008e3970("","dbgdump",0,"Seaching for KPCR.KdVersionBlock... (0%%)");
  uVar4 = *param_3;
  if (uVar4 != 0) {
    uVar6 = 0;
    uVar8 = 0;
    local_40 = 0;
    uVar7 = 0;
    do {
      FUN_100753030(param_1,(int)(uVar6 / uVar4) + 1,uVar6 % uVar4);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = *param_3;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar8;
      local_48 = SUB168(auVar2 / auVar1,0);
      iVar5 = SUB164(auVar2 / auVar1,0);
      if ((iVar5 == (int)((local_48 & 0xffffffff) / 10) * 10) && ((int)local_40 != iVar5)) {
        FUN_1008e3970("","dbgdump",0,"Seaching for KPCR.KdVersionBlock... (%u%%)",
                      local_48 & 0xffffffff);
        local_40 = local_48 & 0xffffffff;
      }
      uVar4 = uVar7 + 0x50000000;
      if (uVar7 >> 0x1c < 0xb) {
        uVar4 = uVar7;
      }
      cVar3 = (*(code *)param_3[2])(uVar4,FUN_100753360,4,0,0);
      if ((((cVar3 != '\0') &&
           (cVar3 = (*(code *)param_3[2])(uVar4,FUN_100753380,4,param_4), cVar3 != '\0')) &&
          (FUN_1008e3970("","dbgdump",0,"Found sample %x.%x at offset 0x%llx",*param_4,param_4[1],
                         uVar4), (ushort)param_4[4] == param_2)) &&
         (((FUN_1008e3970("","dbgdump",0,"Found arch 0x%x",param_2), *(long *)(param_4 + 0xc) < 0 &&
           (FUN_1008e3970("","dbgdump",0,"Found PsLoadedModuleList 0x%llx"),
           *(long *)(param_4 + 8) < 0)) &&
          (FUN_1008e3970("","dbgdump",0,"Found KernBase 0x%llx"), *(long *)(param_4 + 0x10) < 0))))
      {
        FUN_1008e3970("","dbgdump",0,"Found DebuggerDataList 0x%llx");
        FUN_1008e3970("","dbgdump",0,"Found KPCR.KdVersionBlock... (%u%%)",local_48);
        FUN_100753030(param_1,0x28);
        return 1;
      }
      uVar4 = *param_3;
      uVar8 = uVar8 + 400;
      uVar6 = uVar6 + 0x9c;
      uVar7 = uVar7 + 4;
    } while (uVar7 < uVar4);
  }
  FUN_1008e3970("","dbgdump",0,"Seaching for KPCR.KdVersionBlock... failed(%u%%)",local_48);
  return 0;
}

