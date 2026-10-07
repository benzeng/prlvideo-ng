
bool FUN_10055bbc0(long param_1)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  
  QMutex::lock();
  if (*(long *)(param_1 + 0x10) == 0) {
    QMutex::unlock();
  }
  else {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + 8);
    QMutex::unlock();
    if (uVar1 != 0) {
      if (2 < DAT_1011b55f8) {
        FUN_1008e3970("","TransMem",3,
                      "CSnapshotEngineSparse::process_main() started, %u out of %u blocks processed"
                      ,*(undefined4 *)(param_1 + 0x40),uVar1);
      }
      uVar7 = 0;
      uVar6 = 0;
      while (((*(uint *)(*(long *)(param_1 + 0x38) + (uVar6 >> 5) * 4) >> ((uint)uVar6 & 0x1f) & 1)
              != 0 || (cVar3 = FUN_10055b040(param_1,uVar6), cVar3 != '\0'))) {
        pcVar2 = *(code **)(*(long *)(param_1 + 0x18) + 0x10);
        if ((pcVar2 == (code *)0x0) ||
           (cVar3 = (*pcVar2)(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18),
                              (ulong)uVar7 / (ulong)uVar1,(ulong)uVar7 % (ulong)uVar1),
           cVar3 == '\0')) {
          pcVar4 = "CSnapshotEngineSparse::process_main() cancelled";
          goto LAB_10055bd0b;
        }
        uVar5 = (uint)uVar6 + 1;
        uVar6 = (ulong)uVar5;
        uVar7 = uVar7 + 100;
        if (uVar1 <= uVar5) {
          FUN_1008e3970("","TransMem",0,
                        "CSnapshotEngineSparse::process_main() done, %u out of %u blocks processed",
                        *(undefined4 *)(param_1 + 0x40),uVar1);
          return *(uint *)(param_1 + 0x40) == uVar1;
        }
      }
      pcVar4 = "CSnapshotEngineSparse::process_main() failed";
      goto LAB_10055bd0b;
    }
  }
  pcVar4 = "CSnapshotEngineSparse::process_main() stopped";
LAB_10055bd0b:
  FUN_1008e3970("","TransMem",0,pcVar4);
  return false;
}

