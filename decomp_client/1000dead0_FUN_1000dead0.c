
void FUN_1000dead0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  
  QMutex::lock();
  puVar3 = *(uint **)(param_1 + 0x58);
  lVar5 = 0;
  if ((int)puVar3[2] < (int)puVar3[3]) {
    puVar1 = (undefined8 *)(param_1 + 0x58);
    do {
      if (1 < *puVar3) {
        FUN_1000e6e10(puVar1,puVar3[1]);
        puVar3 = (uint *)*puVar1;
      }
      uVar4 = puVar3[2];
      lVar2 = *(long *)(puVar3 + ((int)uVar4 + lVar5) * 2 + 4);
      if ((((*(int *)(lVar2 + 0x30) == 0) && (*(int *)(lVar2 + 0x34) == 0)) &&
          ((*(byte *)(lVar2 + 0x24) & 8) == 0)) && (*(int *)(*(long *)(lVar2 + 0x10) + 4) != 0)) {
        FUN_1000d7d50(param_1,lVar2,0);
        puVar3 = (uint *)*puVar1;
        uVar4 = puVar3[2];
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < (long)(int)puVar3[3] - (long)(int)uVar4);
  }
  QMutex::unlock();
  return;
}

