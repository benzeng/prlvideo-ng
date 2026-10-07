
undefined1 FUN_10054ca20(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  int iVar9;
  undefined **local_a0;
  undefined4 local_98;
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  QSemaphore local_88 [8];
  undefined8 ***local_80;
  undefined8 ***local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  long local_40;
  undefined4 local_38;
  
  lVar7 = 0;
  if ((*(long *)(param_2 + 0x30) != 0) &&
     (lVar7 = 0, *(char *)(*(long *)(param_2 + 0x30) + 0x18) != '\0')) {
    lVar7 = *(long *)(param_2 + 0x40);
  }
  plVar4 = (long *)FUN_10054c8a0(param_1,1,*(undefined1 *)(param_1 + 0x78));
  if (plVar4 == (long *)0x0) {
    uVar8 = 0;
    FUN_1008e3970("","TransMem",0,"CGuestMemoryCompressor::compress() file object allocation failed"
                 );
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  else {
    cVar3 = *(char *)(*(long *)(param_1 + 0x28) + 2);
    iVar9 = 5;
    if (cVar3 != '\x04') {
      iVar9 = (uint)(cVar3 == '\x03') * 3 + 1;
    }
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 4);
    uVar2 = *(uint *)(param_1 + 0x50);
    if (*(uint *)(param_1 + 0x30) < *(uint *)(param_1 + 0x50)) {
      uVar2 = *(uint *)(param_1 + 0x30);
    }
    local_94 = FUN_100752170(iVar9);
    local_a0 = &PTR_FUN_100bceab8;
    local_8c = 0;
    local_98 = uVar1;
    local_90 = uVar2;
    QSemaphore::QSemaphore(local_88,0);
    local_80 = &local_80;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    local_70 = 0;
    local_a0 = &PTR_FUN_100bcebb0;
    local_38 = 0;
    local_78 = local_80;
    local_48 = iVar9;
    local_40 = lVar7;
    plVar5 = (long *)FUN_100546830(param_2,*(undefined4 *)(*(long *)(param_1 + 0x28) + 4),0);
    cVar3 = FUN_100750c30(&local_a0,plVar5,plVar4);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    if (cVar3 == '\0') {
      FUN_1008e3970("","TransMem",0,
                    "CGuestMemoryCompressor::compress() main memory compression failed");
      *(undefined1 *)(param_1 + 0x20) = 0;
      (**(code **)(*plVar4 + 8))(plVar4);
      uVar8 = 0;
    }
    else {
      if ((local_40 != 0) && (1 < DAT_1011b55f8)) {
        FUN_1008e3970("","TransMem",2,"CGuestMemoryCompressor::compress() %u zero pages skipped",
                      local_38);
      }
      lVar7 = *(long *)(param_1 + 0x48);
      lVar6 = (**(code **)(*plVar4 + 0x40))(plVar4);
      *(ulong *)(param_1 + 0x48) = lVar7 + 0xffff + lVar6 & 0xffffffffffff0000;
      uVar8 = 1;
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    FUN_10054fb50(&local_a0);
  }
  return uVar8;
}

