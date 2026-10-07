
long FUN_10054f360(long param_1,long param_2,ulong param_3,char param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 local_40 [24];
  
  uVar8 = param_2 + *(long *)(param_1 + 0x38);
  lVar4 = *(long *)(param_1 + 0x58);
  if (lVar4 != 0) {
    uVar5 = *(ulong *)(param_1 + 0x48);
    if ((uVar5 <= uVar8) && ((param_3 & 0xffffffff) + uVar8 <= *(uint *)(param_1 + 0x50) + uVar5)) {
      return lVar4 + (uVar8 - uVar5);
    }
    iVar3 = FUN_100544d20(lVar4,*(undefined4 *)(param_1 + 0x50));
    if (iVar3 != 0) {
      FUN_1008e3970("","TransMem",0,"CCompressedFileMapped::uumap_buff() unmap failed rc=%d!");
      *(undefined8 *)(param_1 + 0x58) = 0;
      return 0;
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  if (param_4 == '\0') {
    *(ulong *)(param_1 + 0x48) = uVar8 & 0xffffffffffff0000;
    iVar3 = 0x10000000;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0x40);
    if (uVar5 <= (param_3 & 0xffffffff) + uVar8) {
      FUN_1008e3970("","TransMem",0,"CCompressedFileMapped::get_buff_ptr() out of range");
      return 0;
    }
    uVar6 = uVar8 & 0xffffffffffff0000;
    *(ulong *)(param_1 + 0x48) = uVar6;
    iVar3 = 0x10000000;
    if (uVar5 < uVar6 + 0x10000000) {
      iVar3 = (int)uVar5 - (int)uVar6;
    }
  }
  plVar7 = (long *)(param_1 + 0x48);
  *(int *)(param_1 + 0x50) = iVar3;
  FUN_1005445e0(local_40);
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x50);
  lVar4 = *plVar7;
  if (param_4 == '\0') {
    *(undefined1 *)((long)puVar2 + 6) = 1;
  }
  iVar3 = FUN_100544c60(local_40,(ulong)uVar1 + lVar4,*puVar2,param_4,param_4);
  if (iVar3 == 0) {
    lVar4 = FUN_100544ca0(local_40,*plVar7,*(undefined4 *)(param_1 + 0x50));
    *(long *)(param_1 + 0x58) = lVar4;
    if (lVar4 != 0) {
      if ((param_4 == '\0') &&
         (uVar5 = (ulong)*(uint *)(param_1 + 0x50) + *plVar7, *(ulong *)(param_1 + 0x40) < uVar5)) {
        *(ulong *)(param_1 + 0x40) = uVar5;
      }
      FUN_100544840(local_40);
      return (uVar8 - *plVar7) + *(long *)(param_1 + 0x58);
    }
  }
  FUN_1008e3970("","TransMem",0,"CCompressedFileMapped::get_buff_ptr() map failed!");
  FUN_100544840(local_40);
  return 0;
}

