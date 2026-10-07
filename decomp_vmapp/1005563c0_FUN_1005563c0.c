
undefined1
FUN_1005563c0(undefined8 param_1,undefined8 param_2,ushort *param_3,code *param_4,undefined8 param_5
             )

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  char *pcVar8;
  long lVar9;
  undefined1 uVar10;
  ulong uVar11;
  
  if (*param_3 < 0x201) {
    puVar4 = (uint *)(param_3 + 8);
  }
  else {
    puVar4 = (uint *)(param_3 + 0xe);
  }
  uVar1 = *puVar4;
  lVar9 = (ulong)*(uint *)(param_3 + 0xc) << 0xc;
  lVar5 = FUN_1007616e0(param_1,lVar9,0);
  if ((lVar5 == lVar9) && (lVar5 = FUN_1007616e0(param_2,lVar9,0), lVar5 == lVar9)) {
    pvVar6 = _valloc(0x100000);
    if (pvVar6 != (void *)0x0) {
      uVar10 = 1;
      if (uVar1 != 0) {
        uVar7 = (ulong)uVar1 << 0xc;
        lVar5 = 0;
        do {
          uVar11 = uVar7 & 0xffffffff;
          if (0x100000 < uVar7) {
            uVar11 = 0x100000;
          }
          iVar3 = FUN_100761880(param_1,FUN_1007617a0,0,pvVar6,uVar11);
          if ((int)uVar11 != iVar3) {
            pcVar8 = "CSnapshotEngineBase::clone_video() failed to read video memory (0x%x,0x%x)";
LAB_10055656b:
            uVar10 = 0;
            FUN_1008e3970("","TransMem",0,pcVar8,uVar11,iVar3);
            goto LAB_1005565a3;
          }
          if ((param_4 != (code *)0x0) &&
             (cVar2 = (*param_4)(param_5,pvVar6,uVar11,lVar5), cVar2 == '\0')) {
            uVar10 = 0;
            FUN_1008e3970("","TransMem",0,"CSnapshotEngineBase::clone_video() cancelled");
            goto LAB_1005565a3;
          }
          iVar3 = FUN_100761880(param_2,FUN_100761810,0,pvVar6,uVar11);
          if ((int)uVar11 != iVar3) {
            pcVar8 = "CSnapshotEngineBase::clone_video() failed to write video memory (0x%x,0x%x)";
            goto LAB_10055656b;
          }
          lVar5 = lVar5 + uVar11;
          uVar7 = uVar7 - uVar11;
        } while (uVar7 != 0);
        uVar10 = 1;
      }
LAB_1005565a3:
      _free(pvVar6);
      return uVar10;
    }
    pcVar8 = "CSnapshotEngineBase::clone_video() failed to allocate buffer";
  }
  else {
    pcVar8 = "CSnapshotEngineBase::clone_video() seek failed";
  }
  FUN_1008e3970("","TransMem",0,pcVar8);
  return 0;
}

