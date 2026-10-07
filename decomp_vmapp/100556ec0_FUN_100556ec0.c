
undefined1 FUN_100556ec0(long *param_1,ulong param_2,long param_3,undefined1 param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  ulong uVar5;
  undefined1 uVar7;
  uint uVar8;
  bool bVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar6;
  
  QMutex::lock();
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    uVar7 = 1;
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("","TransMem",3,"CSnapshotEngineCompressed::process_main_blocks already stopped"
                   );
    }
  }
  else {
    uVar6 = CONCAT44(0,*(uint *)(lVar1 + 4));
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar6;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_2;
    uVar5 = SUB168(auVar3 / auVar2,0);
    uVar11 = (uint)(((uVar6 - 1) + param_3 + param_2) / uVar6);
    if (*(uint *)(lVar1 + 8) < uVar11) {
      uVar11 = *(uint *)(lVar1 + 8);
    }
    uVar7 = 1;
    uVar4 = SUB164(auVar3 / auVar2,0);
    if (uVar4 < uVar11) {
      bVar9 = false;
      uVar6 = uVar5 & 0xffffffff;
      do {
        if ((*(uint *)(param_1[0xf] + (uVar6 >> 5) * 4) >> ((uint)uVar6 & 0x1f) & 1) == 0) {
          bVar9 = true;
          (**(code **)(*param_1 + 0x50))(param_1,uVar6,param_4);
        }
        uVar8 = (uint)uVar6 + 1;
        uVar6 = (ulong)uVar8;
      } while (uVar8 < uVar11);
      uVar7 = 1;
      if ((bVar9) && (QWaitCondition::wakeAll(), uVar4 < uVar11)) {
        uVar10 = uVar5 >> 5 & 0x7ffffff;
        uVar6 = uVar5;
        do {
          while ((*(uint *)(param_1[0xf] + uVar10 * 4) & 1 << ((byte)uVar6 & 0x1f)) == 0) {
            QWaitCondition::wait
                      ((QMutex *)(param_1 + 0xe),(ulong)(param_1 + 10) & 0xfffffffffffffffe);
            if (param_1[2] == 0) {
              FUN_1008e3970("","TransMem",0,
                            "CSnapshotEngineCompressed::process_main_blocks(%u, %u) stopped @ %u",
                            uVar5,uVar11,(int)uVar6);
              uVar7 = 1;
              goto LAB_1005570aa;
            }
            if ((char)param_1[0xd] != '\0') {
              uVar7 = 0;
              FUN_1008e3970("","TransMem",0,
                            "CSnapshotEngineCompressed::process_main_blocks(%u, %u) failed",uVar5,
                            uVar11);
              goto LAB_1005570aa;
            }
          }
          uVar4 = (int)uVar6 + 1;
          uVar6 = (ulong)uVar4;
          uVar10 = (ulong)(uVar4 >> 5);
        } while (uVar4 < uVar11);
        uVar7 = 1;
      }
    }
  }
LAB_1005570aa:
  QMutex::unlock();
  return uVar7;
}

