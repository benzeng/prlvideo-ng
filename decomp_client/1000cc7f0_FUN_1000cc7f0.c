
void FUN_1000cc7f0(long param_1,undefined4 param_2,long param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  
  QMutex::lock();
  puVar7 = *(uint **)(param_1 + 0x58);
  if ((int)puVar7[2] < (int)puVar7[3]) {
    puVar1 = (undefined8 *)(param_1 + 0x58);
    lVar8 = 0;
    do {
      if (1 < *puVar7) {
        FUN_1000e6e10(puVar1,puVar7[1]);
        puVar7 = (uint *)*puVar1;
      }
      lVar3 = *(long *)(puVar7 + ((int)puVar7[2] + lVar8) * 2 + 4);
      cVar5 = FUN_1000b95b0(lVar3,param_2);
      if (cVar5 != '\0') {
        puVar7 = *(uint **)(lVar3 + 0x38);
        uVar6 = puVar7[3];
        uVar2 = puVar7[2];
        if (0 < (int)((long)(int)uVar6 - (long)(int)uVar2)) {
          lVar8 = 0;
          goto LAB_1000cc8c0;
        }
        break;
      }
      lVar8 = lVar8 + 1;
      puVar7 = (uint *)*puVar1;
    } while (lVar8 < (long)(int)puVar7[3] - (long)(int)puVar7[2]);
  }
  goto LAB_1000cc95b;
  while (lVar8 = lVar8 + 1, lVar8 < (long)(int)uVar6 - (long)(int)uVar2) {
LAB_1000cc8c0:
    if (1 < *puVar7) {
      FUN_1000e7430((undefined8 *)(lVar3 + 0x38),puVar7[1]);
      puVar7 = *(uint **)(lVar3 + 0x38);
    }
    plVar4 = *(long **)(puVar7 + ((int)puVar7[2] + lVar8) * 2 + 4);
    if (*plVar4 == param_3) {
      uVar6 = 0;
      if ((param_4 & 0xff0000) != 0x10000) {
        uVar6 = param_4;
      }
      *(uint *)(plVar4 + 3) = uVar6;
      if (((*(char *)(lVar3 + 0x4a) == '\0') &&
          (*(undefined8 *)(lVar3 + 0x50) = 0, (uVar6 & 0xff0000) == 0)) ||
         (*(uint *)(lVar3 + 0x48) == uVar6)) {
        lVar8 = *(long *)(lVar3 + 0x50);
        *(int *)(lVar3 + 0x48) = (int)plVar4[3];
        *(long *)(lVar3 + 0x50) = *plVar4;
        if (lVar8 == param_3) break;
      }
      else {
        *(int *)(lVar3 + 0x48) = (int)plVar4[3];
        *(long *)(lVar3 + 0x50) = *plVar4;
      }
      FUN_1000cb9e0(param_1,lVar3);
      break;
    }
  }
LAB_1000cc95b:
  QMutex::unlock();
  return;
}

