
void FUN_1002f65f0(long param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (*(char *)(lVar4 + 0xca) == '\0') {
    if (*(int *)(lVar4 + 8) == 0) {
      return;
    }
    iVar6 = FUN_1002d7180(*(undefined8 *)(param_1 + 8));
    iVar2 = *(int *)(*(long *)(param_1 + 0x10) + 8);
    if ((iVar2 != 0 || iVar6 != 0) && (-1 < DAT_1011c568c)) {
      FUN_1008e3970("","USB",0,"[%s] Reset pipe zero -> (%08x); io_reqs = %d",
                    *(long *)(param_1 + 0x10) + 0xcf,iVar6,iVar2);
      iVar2 = *(int *)(*(long *)(param_1 + 0x10) + 8);
    }
    if (iVar2 == 0) {
      return;
    }
    iVar2 = 500;
    if (iVar6 == 0) {
      iVar2 = 5000;
    }
    iVar6 = 0;
    do {
      _usleep(1000);
      iVar6 = iVar6 + 1;
      if (iVar2 <= iVar6) break;
    } while (*(int *)(*(long *)(param_1 + 0x10) + 8) != 0);
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] Reset pipe zero completion_wait: %d io_reqs left",
                    *(long *)(param_1 + 0x10) + 0xcf,*(undefined4 *)(*(long *)(param_1 + 0x10) + 8))
      ;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    FUN_1002d7200(lVar4,lVar4 + 0x18,lVar4 + 0x80);
    lVar4 = *(long *)(param_1 + 0x10);
    FUN_1002d7200(lVar4,lVar4 + 0x30,lVar4 + 0x70);
    return;
  }
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 == (long *)0x0) {
    return;
  }
  if (param_2 == 0 && *(int *)(lVar4 + 8) == 0) {
    iVar2 = (**(code **)(*plVar1 + 0xd8))(plVar1,*(undefined1 *)(param_1 + 0x18));
    if (2 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] CheckOverlappedStatus, GetPipeStatus() = %08X",
                    *(long *)(param_1 + 0x10) + 0xcf,iVar2);
    }
  }
  else {
    (**(code **)(*plVar1 + 0xe0))(plVar1,*(undefined1 *)(param_1 + 0x18));
    iVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x168))
                      (*(long **)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x18));
    iVar6 = 1000;
    if (2 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] ClearPipeStallBothEnds() = %08X",
                    *(long *)(param_1 + 0x10) + 0xcf,iVar2);
    }
    do {
      lVar4 = *(long *)(param_1 + 0x10);
      iVar3 = *(int *)(lVar4 + 8);
      do {
        iVar5 = iVar6;
        if (iVar3 == 0) goto LAB_1002f6941;
        if (0 < DAT_1011c568c) {
          FUN_1008e3970("","USB",0,"[%s] Waiting, pending %d %d",lVar4 + 0xcf,
                        *(undefined1 *)(lVar4 + 0xca),iVar3);
        }
        _usleep(1000);
        iVar6 = iVar5 + -1;
        lVar4 = *(long *)(param_1 + 0x10);
        iVar3 = 0;
      } while (*(int *)(lVar4 + 8) == 0);
      iVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0xe8))
                        (*(long **)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x18));
    } while ((0 < iVar5) || (iVar2 == 0));
    if (-1 < DAT_1011c568c) {
      lVar4 = *(long *)(param_1 + 0x10);
      FUN_1008e3970("","USB",0,"[%s] IO leakage detected %x err 0x%x; io_count %d",lVar4 + 0xcf,
                    *(undefined1 *)(lVar4 + 0xca),iVar2,*(undefined4 *)(lVar4 + 8));
    }
    if (iVar2 == -0x1fffbfa9) {
      lVar4 = *(long *)(param_1 + 0x10);
      FUN_1002d7200(lVar4,lVar4 + 0x18,lVar4 + 0x80);
      lVar4 = *(long *)(param_1 + 0x10);
      FUN_1002d7200(lVar4,lVar4 + 0x30,lVar4 + 0x70);
      if (DAT_1011c568c < 0) {
        return;
      }
      FUN_1008e3970("","USB",0,"[%s] io_count after cleanup: %d",*(long *)(param_1 + 0x10) + 0xcf,
                    *(undefined4 *)(*(long *)(param_1 + 0x10) + 8));
      iVar2 = -0x1ffffd40;
      goto LAB_1002f698f;
    }
  }
LAB_1002f6941:
  if (iVar2 < -0x1fffbfb1) {
    if ((iVar2 == -0x1ffffd40) || (iVar2 == -0x1ffffd33)) goto LAB_1002f698f;
  }
  else {
    if (iVar2 == 0) goto LAB_1002f698f;
    if (iVar2 == -0x1fffbfb1) {
      iVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0xf0))
                        (*(long **)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x18));
      goto LAB_1002f698f;
    }
  }
  iVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0xe8))
                    (*(long **)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x18));
LAB_1002f698f:
  if (DAT_1011c568c < 1) {
    return;
  }
  FUN_1008e3970("","USB",0,"[%s] device reset, result 0x%08x",*(long *)(param_1 + 0x10) + 0xcf,iVar2
               );
  return;
}

