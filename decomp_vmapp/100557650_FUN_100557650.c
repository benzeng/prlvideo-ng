
void FUN_100557650(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined **local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  QSemaphore local_80 [8];
  undefined8 **local_78;
  undefined8 **local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  uint local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  cVar3 = *(char *)(*(long *)(param_1 + 0x10) + 3);
  uVar4 = 1;
  if (cVar3 != '\x02') {
    uVar4 = cVar3 == '\x04' | 4;
  }
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 4);
  uVar2 = *(undefined4 *)(param_1 + 0x84);
  local_8c = FUN_100752170(uVar4);
  local_98 = &PTR_FUN_100bceab8;
  local_84 = 0;
  local_90 = uVar1;
  local_88 = uVar2;
  QSemaphore::QSemaphore(local_80,0);
  local_78 = &local_78;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_98 = &PTR_FUN_100bcebb0;
  local_38 = 0;
  local_30 = 0;
  local_70 = local_78;
  local_40 = uVar4;
  if (**(char **)(param_1 + 0x18) == '\0') {
    FUN_1008e3970("","TransMem",0,
                  "CSnapshotEngineCompressed::run() uncompression started with %u workers",
                  *(undefined4 *)(param_1 + 0x84));
    do {
      cVar3 = FUN_100751370(&local_98,param_1 + 0x40,param_1 + 0x48);
      if (cVar3 == '\0') {
        FUN_1008e3970("","TransMem",0,"CSnapshotEngineCompressed::run() uncompression failed");
        goto LAB_1005577f9;
      }
    } while (local_68 != 0);
  }
  else {
    FUN_1008e3970("","TransMem",0,
                  "CSnapshotEngineCompressed::run() compression started with %u workers",
                  *(undefined4 *)(param_1 + 0x84));
    cVar3 = FUN_100750c30(&local_98,param_1 + 0x48,param_1 + 0x40);
    if (cVar3 == '\0') {
      FUN_1008e3970("","TransMem",0,"CSnapshotEngineCompressed::run() compression failed");
LAB_1005577f9:
      *(undefined1 *)(param_1 + 0x68) = 1;
    }
  }
  if (*(char *)(param_1 + 0x68) == '\0') {
    FUN_1008e3970("","TransMem",0,"CSnapshotEngineCompressed::run() done");
  }
  QWaitCondition::wakeAll();
  QWaitCondition::wakeAll();
  FUN_10054fb50(&local_98);
  return;
}

