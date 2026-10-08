
void FUN_1000c5cd0(long param_1,long param_2,long param_3,char param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  
  QMutex::lock();
  QMutex::lock();
  *(long *)(param_1 + 0x220) = param_2;
  if ((param_2 != 0) && (puVar9 = *(uint **)(param_1 + 0x58), (int)puVar9[2] < (int)puVar9[3])) {
    puVar1 = (undefined8 *)(param_1 + 0x58);
    lVar12 = 0;
    do {
      if (1 < *puVar9) {
        FUN_1000e6e10(puVar1,puVar9[1]);
        puVar9 = (uint *)*puVar1;
      }
      uVar8 = puVar9[2];
      lVar5 = *(long *)(puVar9 + ((int)uVar8 + lVar12) * 2 + 4);
      piVar2 = (int *)(lVar5 + 0x30);
      if (((*(int *)(lVar5 + 0x34) != 0) || (*piVar2 != 0)) &&
         ((*(int *)(lVar5 + 0x34) != *(int *)(param_1 + 0x214) ||
          (*piVar2 != *(int *)(param_1 + 0x210))))) {
        puVar10 = *(uint **)(lVar5 + 0x38);
        uVar3 = puVar10[3];
        uVar4 = puVar10[2];
        if (0 < (int)((long)(int)uVar3 - (long)(int)uVar4)) {
          lVar11 = 0;
          do {
            if (1 < *puVar10) {
              FUN_1000e7430((undefined8 *)(lVar5 + 0x38),puVar10[1]);
              puVar10 = *(uint **)(lVar5 + 0x38);
            }
            plVar6 = *(long **)(puVar10 + ((int)puVar10[2] + lVar11) * 2 + 4);
            if (*plVar6 == *(long *)(param_1 + 0x220)) {
              FUN_1000c4970(piVar2,0x93,(long *)(param_1 + 0x220),8);
              if (param_3 != 0) {
                FUN_1000c5f40(param_1,param_3);
              }
              cVar7 = FUN_1000a6420();
              if ((cVar7 != '\0') &&
                 (*(int *)(*(long *)(param_1 + 0x238) + 0xc) ==
                  *(int *)(*(long *)(param_1 + 0x238) + 8))) {
                if (param_4 != '\0') {
                  FUN_1000c6190(param_1,lVar5,plVar6 + 1,plVar6[2],param_5);
                }
                FUN_1000c4970(piVar2,0x6f,0,0);
                if ((*(byte *)(lVar5 + 0x20) & 8) != 0) {
                  FUN_1000c6320(param_1,lVar5);
                }
              }
              goto LAB_1000c5ed8;
            }
            lVar11 = lVar11 + 1;
          } while (lVar11 < (long)(int)uVar3 - (long)(int)uVar4);
          puVar9 = (uint *)*puVar1;
          uVar8 = puVar9[2];
        }
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < (long)(int)puVar9[3] - (long)(int)uVar8);
  }
LAB_1000c5ed8:
  QMutex::unlock();
  QMutex::unlock();
  return;
}

