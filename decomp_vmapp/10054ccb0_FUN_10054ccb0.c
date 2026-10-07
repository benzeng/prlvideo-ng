
undefined1 FUN_10054ccb0(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined ***pppuVar9;
  int iVar10;
  undefined **local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  uint local_e8;
  undefined4 local_e4;
  QSemaphore local_e0 [8];
  undefined8 *****local_d8;
  undefined8 *****local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  int local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined **local_88;
  undefined4 local_80;
  undefined4 local_7c;
  uint local_78;
  undefined4 local_74;
  QSemaphore local_70 [8];
  undefined8 *****local_68;
  undefined8 *****local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    FUN_1008e3970("","TransMem",0,"CGuestMemoryCompressor::compress() video memory not processed");
  }
  else {
    lVar2 = *(long *)(param_1 + 0x48);
    lVar6 = FUN_1007616e0(*(undefined8 *)(param_1 + 8),lVar2,0);
    if (lVar6 != lVar2) {
      *(undefined1 *)(param_1 + 0x20) = 0;
      return 0;
    }
    plVar7 = (long *)FUN_10054c8a0(param_1,0,*(undefined1 *)(param_1 + 0x78));
    if (plVar7 == (long *)0x0) {
      FUN_1008e3970("","TransMem",0,
                    "CGuestMemoryCompressor::compress() file object allocation failed");
      *(undefined1 *)(param_1 + 0x20) = 0;
      return 0;
    }
    plVar8 = (long *)FUN_1005468a0(param_2);
    lVar2 = *(long *)(param_1 + 0x28);
    cVar5 = *(char *)(lVar2 + 3);
    if (cVar5 == '\x01') {
      uVar1 = *(undefined4 *)(lVar2 + 4);
      uVar4 = *(uint *)(param_1 + 0x50);
      if (*(uint *)(param_1 + 0x34) < *(uint *)(param_1 + 0x50)) {
        uVar4 = *(uint *)(param_1 + 0x34);
      }
      local_7c = FUN_100751d60(uVar1);
      local_88 = &PTR_FUN_100bceab8;
      local_74 = 0;
      local_80 = uVar1;
      local_78 = uVar4;
      QSemaphore::QSemaphore(local_70,0);
      local_68 = &local_68;
      local_38 = 0;
      local_40 = 0;
      local_48 = 0;
      local_50 = 0;
      local_58 = 0;
      local_88 = &PTR_FUN_100bceb30;
      local_60 = local_68;
      cVar5 = FUN_100750c30(&local_88,plVar8,plVar7);
      pppuVar9 = &local_88;
    }
    else {
      iVar10 = 5;
      if (cVar5 != '\x04') {
        iVar10 = (uint)(cVar5 == '\x03') * 3 + 1;
      }
      uVar1 = *(undefined4 *)(lVar2 + 4);
      uVar4 = *(uint *)(param_1 + 0x50);
      if (*(uint *)(param_1 + 0x34) < *(uint *)(param_1 + 0x50)) {
        uVar4 = *(uint *)(param_1 + 0x34);
      }
      uVar3 = *(undefined8 *)(param_2 + 0x48);
      local_ec = FUN_100752170(iVar10);
      local_f8 = &PTR_FUN_100bceab8;
      local_e4 = 0;
      local_f0 = uVar1;
      local_e8 = uVar4;
      QSemaphore::QSemaphore(local_e0,0);
      local_d8 = &local_d8;
      local_a8 = 0;
      local_b0 = 0;
      local_b8 = 0;
      local_c0 = 0;
      local_c8 = 0;
      local_f8 = &PTR_FUN_100bcebb0;
      local_90 = 0;
      local_d0 = local_d8;
      local_a0 = iVar10;
      local_98 = uVar3;
      cVar5 = FUN_100750c30(&local_f8,plVar8,plVar7);
      pppuVar9 = &local_f8;
    }
    FUN_10054fb50(pppuVar9);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
    if (cVar5 == '\0') {
      FUN_1008e3970("","TransMem",0,
                    "CGuestMemoryCompressor::compress() video memory compression failed");
      (**(code **)(*plVar7 + 8))(plVar7);
      *(undefined1 *)(param_1 + 0x20) = 0;
      return 0;
    }
    lVar2 = *(long *)(param_1 + 0x48);
    lVar6 = (**(code **)(*plVar7 + 0x40))(plVar7);
    *(ulong *)(param_1 + 0x48) = lVar2 + 0xffff + lVar6 & 0xffffffffffff0000;
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  return 1;
}

