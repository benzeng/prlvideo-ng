
void FUN_1000e3d80(long param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ulong local_f0;
  ulong local_e8;
  ulong local_d8;
  ulong local_c8;
  ulong local_b8;
  undefined4 local_b0 [32];
  
  if (*(char *)(param_1 + 0x103) != '\0') {
    FUN_1000debc0(param_1,1);
  }
  piVar2 = (int *)(param_1 + 0x218);
  if ((*(int *)(param_1 + 0x21c) != 0) || (*piVar2 != 0)) {
    local_b0[0] = 1;
    if (*(int *)(param_1 + 600) == 2) {
      local_b0[0] = 2;
    }
    FUN_1000c4970(piVar2,0x86,local_b0,0x80);
  }
  *(long *)(param_1 + 0x240) = *(long *)(param_1 + 0x220);
  local_b8 = 0;
  local_e8._0_4_ = 0;
  local_f0._0_4_ = 0;
  local_d8._0_4_ = 0;
  local_c8._0_4_ = 0;
  if (*(long *)(param_1 + 0x220) != 0) {
    QMutex::lock();
    puVar6 = *(uint **)(param_1 + 0x58);
    local_e8._0_4_ = 0;
    local_f0._0_4_ = 0;
    local_d8._0_4_ = 0;
    local_c8._0_4_ = 0;
    if ((int)puVar6[2] < (int)puVar6[3]) {
      puVar1 = (undefined8 *)(param_1 + 0x58);
      local_e8 = 0;
      local_f0 = 0;
      local_d8 = 0;
      local_c8 = 0;
      lVar10 = 0;
      do {
        if (1 < *puVar6) {
          FUN_1000e6e10(puVar1,puVar6[1]);
          puVar6 = (uint *)*puVar1;
        }
        uVar7 = puVar6[2];
        lVar5 = *(long *)(puVar6 + ((int)uVar7 + lVar10) * 2 + 4);
        iVar9 = *(int *)(lVar5 + 0x34);
        if ((((iVar9 != 0) || (*(int *)(lVar5 + 0x30) != 0)) &&
            ((iVar9 != *(int *)(param_1 + 0x21c) || (*(int *)(lVar5 + 0x30) != *piVar2)))) &&
           ((iVar9 != *(int *)(param_1 + 0x214) ||
            (*(int *)(lVar5 + 0x30) != *(int *)(param_1 + 0x210))))) {
          puVar6 = *(uint **)(lVar5 + 0x38);
          uVar7 = puVar6[3];
          uVar4 = puVar6[2];
          lVar8 = 0;
          iVar9 = (int)((long)(int)uVar7 - (long)(int)uVar4);
          if (0 < iVar9) {
            lVar8 = 0;
            do {
              if (1 < *puVar6) {
                FUN_1000e7430((undefined8 *)(lVar5 + 0x38),puVar6[1]);
                puVar6 = *(uint **)(lVar5 + 0x38);
              }
              if (**(long **)(puVar6 + ((int)puVar6[2] + lVar8) * 2 + 4) ==
                  *(long *)(param_1 + 0x220)) {
                if ((*(byte *)(lVar5 + 0x20) & 8) != 0) {
                  *(undefined8 *)(param_1 + 0x240) = 0;
                  local_e8 = *(ulong *)(lVar5 + 0x30);
                  local_f0 = local_e8 >> 0x20;
                  local_d8 = local_e8;
                  local_c8 = local_f0;
                  local_b8 = local_e8;
                }
                break;
              }
              lVar8 = lVar8 + 1;
            } while (lVar8 < (long)(int)uVar7 - (long)(int)uVar4);
          }
          if (iVar9 != (int)lVar8) break;
          puVar6 = (uint *)*puVar1;
          uVar7 = puVar6[2];
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < (long)(int)puVar6[3] - (long)(int)uVar7);
    }
    QMutex::unlock();
  }
  QMutex::lock();
  *(undefined1 *)(param_1 + 0x230) = 1;
  plVar3 = (long *)(param_1 + 0x238);
  FUN_1000e5910(plVar3);
  if (*(char *)(param_1 + 0x104) == '\0') {
    puVar6 = *(uint **)(param_1 + 0x58);
    lVar10 = 0;
    if ((int)puVar6[2] < (int)puVar6[3]) {
      puVar1 = (undefined8 *)(param_1 + 0x58);
      do {
        if (1 < *puVar6) {
          FUN_1000e6e10(puVar1,puVar6[1]);
          puVar6 = (uint *)*puVar1;
        }
        uVar7 = puVar6[2];
        lVar5 = *(long *)(puVar6 + ((int)uVar7 + lVar10) * 2 + 4);
        if ((*(byte *)(lVar5 + 0x20) & 8) != 0) {
          if (((*(int *)(lVar5 + 0x34) != (int)local_c8) ||
              (*(int *)(lVar5 + 0x30) != (int)local_d8)) &&
             ((*(int *)(lVar5 + 0x34) != 0 || (*(int *)(lVar5 + 0x30) != 0)))) {
            FUN_1000aaa10(plVar3);
            puVar6 = (uint *)*puVar1;
            uVar7 = puVar6[2];
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < (long)(int)puVar6[3] - (long)(int)uVar7);
    }
    if ((int)local_f0 != 0 || (int)local_e8 != 0) {
      FUN_1000aaa10(plVar3,&local_b8);
    }
    if (*(int *)(*plVar3 + 0xc) != *(int *)(*plVar3 + 8)) {
      FUN_1000dfa80(param_1);
    }
  }
  QMutex::unlock();
  return;
}

