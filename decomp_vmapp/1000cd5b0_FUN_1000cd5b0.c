
undefined1 FUN_1000cd5b0(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined8 uVar7;
  char *pcVar8;
  uint uVar9;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x2b0) + 0x1918);
  uVar9 = *(int *)(lVar2 + 0x24) + *(int *)(lVar2 + 0x20);
  lVar1 = param_1 + 0x2b8;
  uVar4 = FUN_1000d6cd0(lVar1);
  if (uVar9 < uVar4) {
    pvVar6 = (void *)FUN_1000d6cc0(lVar1);
    _memcpy(pvVar6,(void *)(*(long *)(*(long *)(param_1 + 0x2b0) + 0x1918) + 8),(ulong)uVar9);
    uVar5 = FUN_1000d6cd0(lVar1);
    cVar3 = FUN_1000ee4e0(pvVar6,uVar5,*(undefined4 *)(lVar2 + 0x20),0);
    if (cVar3 == '\0') {
      pcVar8 = "SaRePrepareSave failed";
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x1f0);
      uVar7 = FUN_1000d6cc0(lVar1);
      uVar5 = FUN_1000d6cd0(lVar1);
      cVar3 = FUN_1000ee580(&DAT_100bfbab0,uVar7,uVar5,uVar4 | 0x8003,0);
      if (cVar3 != '\0') {
        *(undefined4 *)((long)pvVar6 + 0xc) = 0x20;
        *(int *)((long)pvVar6 + 8) = *(int *)((long)pvVar6 + 0x28) + *(int *)((long)pvVar6 + 0x2c);
        return 1;
      }
      pcVar8 = "SaReSaveMain failed";
    }
    FUN_1008e3970("","vm",0,pcVar8);
  }
  else {
    FUN_1008e3970("","vm",0,"Insufficient file size. Unable to hold monitor data (0x%x, 0x%x)",
                  *(undefined4 *)(lVar2 + 0x24),*(undefined4 *)(lVar2 + 0x20));
  }
  return 0;
}

