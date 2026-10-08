
void FUN_1000c5940(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_b0;
  undefined4 local_a8;
  
  QMutex::lock();
  puVar4 = *(uint **)(param_1 + 0x58);
  uVar1 = puVar4[3];
  uVar2 = puVar4[2];
  if (0 < (int)((long)(int)uVar1 - (long)(int)uVar2)) {
    puVar6 = (undefined8 *)(param_1 + 0x58);
    lVar5 = 0;
    while( true ) {
      if (1 < *puVar4) {
        FUN_1000e6e10(puVar6,puVar4[1]);
        puVar4 = (uint *)*puVar6;
      }
      lVar3 = *(long *)(puVar4 + ((int)puVar4[2] + lVar5) * 2 + 4);
      if (((*(int *)(lVar3 + 0x30) != 0) || (*(int *)(lVar3 + 0x34) != 0)) &&
         ((*(uint *)(lVar3 + 0x20) & 4) != 0)) {
        *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) & 0xfffffffb;
        local_b0 = 4;
        local_a8 = 0;
        FUN_1000c4970(lVar3 + 0x30,0x77,&local_b0,0x80);
      }
      lVar5 = lVar5 + 1;
      if ((long)(int)uVar1 - (long)(int)uVar2 <= lVar5) break;
      puVar4 = (uint *)*puVar6;
    }
  }
  QMutex::unlock();
  return;
}

