
void FUN_1000d75c0(long param_1,undefined4 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  int *piVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(param_1 + 0xf0) + 0x50;
  QMutex::lock();
  puVar4 = *(uint **)(param_1 + 0x58);
  lVar7 = 0;
  if ((int)puVar4[2] < (int)puVar4[3]) {
    puVar1 = (undefined8 *)(param_1 + 0x58);
    do {
      if (1 < *puVar4) {
        FUN_1000e6e10(puVar1,puVar4[1]);
        puVar4 = (uint *)*puVar1;
      }
      uVar5 = puVar4[2];
      piVar2 = (int *)(*(long *)(puVar4 + (lVar7 + (int)uVar5) * 2 + 4) + 0x30);
      if ((*(int *)(*(long *)(puVar4 + (lVar7 + (int)uVar5) * 2 + 4) + 0x34) != 0) || (*piVar2 != 0)
         ) {
        lVar3 = *param_3;
        FUN_1000ae810(*(undefined8 *)(param_1 + 0x50),piVar2,param_2,*(long *)(lVar3 + 0x10) + lVar3
                      ,*(undefined4 *)(lVar3 + 4),param_6,lVar6);
        puVar4 = (uint *)*puVar1;
        uVar5 = puVar4[2];
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < (long)(int)puVar4[3] - (long)(int)uVar5);
  }
  lVar7 = *param_3;
  FUN_1000ae810(*(undefined8 *)(param_1 + 0x50),param_1 + 0x210,param_2,
                *(long *)(lVar7 + 0x10) + lVar7,*(undefined4 *)(lVar7 + 4),param_6,lVar6);
  lVar6 = *param_3;
  FUN_1000ae810(*(undefined8 *)(param_1 + 0x50),param_1 + 0x218,param_2,
                *(long *)(lVar6 + 0x10) + lVar6,*(undefined4 *)(lVar6 + 4));
  QMutex::unlock();
  return;
}

