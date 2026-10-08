
void FUN_1000dfa80(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined4 local_44;
  QArrayData *local_40;
  undefined1 local_32;
  undefined1 local_31;
  
  puVar8 = *(uint **)(param_1 + 0x238);
  if (puVar8[3] == puVar8[2]) {
    *(undefined1 *)(param_1 + 0x230) = 0;
    if (*(long *)(param_1 + 0x240) != 0) {
      QMutex::lock();
      puVar8 = *(uint **)(param_1 + 0x58);
      if ((int)puVar8[2] < (int)puVar8[3]) {
        puVar1 = (undefined8 *)(param_1 + 0x58);
        lVar12 = 0;
        do {
          if (1 < *puVar8) {
            FUN_1000e6e10(puVar1,puVar8[1]);
            puVar8 = (uint *)*puVar1;
          }
          uVar9 = puVar8[2];
          lVar6 = *(long *)(puVar8 + ((int)uVar9 + lVar12) * 2 + 4);
          iVar3 = *(int *)(lVar6 + 0x34);
          if ((((iVar3 != 0) || (*(int *)(lVar6 + 0x30) != 0)) &&
              ((iVar3 != *(int *)(param_1 + 0x21c) ||
               (*(int *)(lVar6 + 0x30) != *(int *)(param_1 + 0x218))))) &&
             ((iVar3 != *(int *)(param_1 + 0x214) ||
              (*(int *)(lVar6 + 0x30) != *(int *)(param_1 + 0x210))))) {
            puVar10 = *(uint **)(lVar6 + 0x38);
            uVar4 = puVar10[3];
            uVar5 = puVar10[2];
            if (0 < (int)((long)(int)uVar4 - (long)(int)uVar5)) {
              lVar11 = 0;
              do {
                if (1 < *puVar10) {
                  FUN_1000e7430((undefined8 *)(lVar6 + 0x38),puVar10[1]);
                  puVar10 = *(uint **)(lVar6 + 0x38);
                }
                if (**(long **)(puVar10 + ((int)puVar10[2] + lVar11) * 2 + 4) ==
                    *(long *)(param_1 + 0x240)) {
                  FUN_1000c6320(param_1,lVar6);
                  FUN_1000b9410(param_1,*(undefined8 *)(param_1 + 0x240),0);
                  goto LAB_1000dfc9f;
                }
                lVar11 = lVar11 + 1;
              } while (lVar11 < (long)(int)uVar4 - (long)(int)uVar5);
              puVar8 = (uint *)*puVar1;
              uVar9 = puVar8[2];
            }
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 < (long)(int)puVar8[3] - (long)(int)uVar9);
      }
LAB_1000dfc9f:
      *(undefined8 *)(param_1 + 0x240) = 0;
      QMutex::unlock();
      return;
    }
  }
  else {
    puVar10 = *(uint **)(param_1 + 0x58);
    lVar12 = 0;
    if ((int)puVar10[2] < (int)puVar10[3]) {
      puVar2 = (undefined8 *)(param_1 + 0x238);
      puVar1 = (undefined8 *)(param_1 + 0x58);
      do {
        if (1 < *puVar10) {
          FUN_1000e6e10(puVar1,puVar10[1]);
          puVar10 = (uint *)*puVar1;
          puVar8 = (uint *)*puVar2;
        }
        lVar6 = *(long *)(puVar10 + ((int)puVar10[2] + lVar12) * 2 + 4);
        if (1 < *puVar8) {
          FUN_1000abfa0(puVar2,puVar8[1]);
          puVar8 = (uint *)*puVar2;
        }
        if (((*(int **)(puVar8 + (long)(int)puVar8[2] * 2 + 4))[1] == *(int *)(lVar6 + 0x34)) &&
           (**(int **)(puVar8 + (long)(int)puVar8[2] * 2 + 4) == *(int *)(lVar6 + 0x30))) {
          local_40 = *(QArrayData **)(param_1 + 0x10);
          uVar7 = *(undefined8 *)(param_1 + 0x50);
          if (1 < *(int *)local_40 + 1U) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + 1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
          }
          FUN_1000b0de0(uVar7,&local_40,*(undefined8 *)(lVar6 + 0x30),
                        (*(uint *)(lVar6 + 0x20) & 8) >> 3);
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_32 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_32) goto LAB_1000dfd3c;
            }
            QArrayData::deallocate(local_40,2,8);
          }
LAB_1000dfd3c:
          FUN_1000b8ea0(param_1,lVar6,0);
          local_44 = 0;
          FUN_1000c4970((int *)(lVar6 + 0x30),0x68,&local_44,4);
          return;
        }
        lVar12 = lVar12 + 1;
        puVar10 = (uint *)*puVar1;
      } while (lVar12 < (long)(int)puVar10[3] - (long)(int)puVar10[2]);
    }
  }
  return;
}

