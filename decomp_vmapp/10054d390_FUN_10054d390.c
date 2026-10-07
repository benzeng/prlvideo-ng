
/* WARNING: Removing unreachable block (ram,0x00010054d5a4) */

undefined1 FUN_10054d390(long param_1)

{
  int iVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  uint uVar10;
  
  iVar4 = *(int *)(param_1 + 0x34);
  iVar1 = *(int *)(param_1 + 0x30);
  lVar7 = *(long *)(param_1 + 0x48);
  *(long *)(*(long *)(param_1 + 0x28) + 0x18) = lVar7;
  lVar6 = FUN_1007616e0(*(undefined8 *)(param_1 + 8),lVar7,0);
  if (lVar6 == lVar7) {
    uVar5 = (iVar4 + iVar1) * 8 + 0xfff;
    uVar10 = uVar5 & 0xfffff000;
    plVar2 = *(long **)(param_1 + 0x60);
    if ((plVar2 == (long *)0x0) ||
       (iVar4 = (**(code **)(*plVar2 + 0x38))(plVar2,*(undefined8 *)(param_1 + 0x40),uVar10,0),
       -1 < iVar4)) {
      uVar9 = (ulong)(uVar5 & 0xfffff000);
      uVar5 = FUN_100761880(*(undefined8 *)(param_1 + 8),FUN_100761810,0,
                            *(undefined8 *)(param_1 + 0x40),uVar9);
      if (uVar5 == uVar10) {
        plVar2 = *(long **)(param_1 + 0x60);
        if ((plVar2 == (long *)0x0) ||
           (iVar4 = (**(code **)(*plVar2 + 0x38))(plVar2,*(undefined8 *)(param_1 + 0x28),0x40,0),
           -1 < iVar4)) {
          lVar7 = FUN_100761880(*(undefined8 *)(param_1 + 8),FUN_100761810,0,
                                *(undefined8 *)(param_1 + 0x28),0x1000);
          if ((lVar7 == 0x1000) &&
             (cVar3 = FUN_100761740(*(undefined8 *)(param_1 + 8),
                                    (uVar9 | 0x40) + *(long *)(param_1 + 0x48)), cVar3 != '\0')) {
            return 1;
          }
        }
        else {
          FUN_1008e3970("","TransMem",0,"CGuestMemoryCompressor::encrypt() failed (%d)",iVar4);
        }
        pcVar8 = "CGuestMemoryCompressor::save_index() failed to write descriptor";
        goto LAB_10054d542;
      }
    }
    else {
      FUN_1008e3970("","TransMem",0,"CGuestMemoryCompressor::encrypt() failed (%d)",iVar4);
    }
  }
  pcVar8 = "CGuestMemoryCompressor::save_index() failed to write index";
LAB_10054d542:
  FUN_1008e3970("","TransMem",0,pcVar8);
  *(undefined1 *)(param_1 + 0x20) = 0;
  return 0;
}

