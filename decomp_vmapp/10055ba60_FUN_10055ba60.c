
undefined1 FUN_10055ba60(long param_1,long param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  
  QMutex::lock();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    QMutex::unlock();
  }
  else {
    iVar1 = *(int *)(lVar3 + 8);
    uVar2 = *(uint *)(lVar3 + 0x24);
    QMutex::unlock();
    if (iVar1 != 0) {
      if (2 < DAT_1011b55f8) {
        FUN_1008e3970("","TransMem",3,
                      "CSnapshotEngineSparse::process_main_blocks() started, %u out of %u blocks processed"
                      ,*(undefined4 *)(param_1 + 0x40),iVar1);
      }
      uVar7 = param_3 << 3;
      if (iVar1 * uVar2 <= (uint)(param_3 << 3)) {
        uVar7 = iVar1 * uVar2;
      }
      if (uVar7 != 0) {
        uVar6 = 0;
        do {
          if ((*(uint *)(param_2 + (ulong)(uVar6 >> 5) * 4) >> (uVar6 & 0x1f) & 1) == 0) {
            uVar6 = uVar6 + 1;
          }
          else {
            uVar4 = (ulong)uVar6 / (ulong)uVar2;
            uVar6 = ((uint)uVar4 + 1) * uVar2;
            if (((*(uint *)(*(long *)(param_1 + 0x38) + (uVar4 >> 5) * 4) >> ((uint)uVar4 & 0x1f) &
                 1) == 0) && (cVar5 = FUN_10055b040(param_1,uVar4), cVar5 == '\0')) {
              return 1;
            }
          }
        } while (uVar6 < uVar7);
      }
      FUN_1008e3970("","TransMem",0,
                    "CSnapshotEngineSparse::process_main_blocks() done, %u out of %u blocks processed"
                    ,*(undefined4 *)(param_1 + 0x40),iVar1);
      return 1;
    }
  }
  FUN_1008e3970("","TransMem",0,"CSnapshotEngineSparse::process_main_blocks() stopped");
  return 0;
}

