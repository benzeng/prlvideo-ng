
undefined1 FUN_1000d6fb0(long param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  uint *puVar5;
  long lVar6;
  
  QMutex::lock();
  puVar5 = *(uint **)(param_1 + 0x58);
  if ((int)puVar5[2] < (int)puVar5[3]) {
    lVar6 = 0;
    do {
      if (1 < *puVar5) {
        FUN_1000e6e10((undefined8 *)(param_1 + 0x58),puVar5[1]);
        puVar5 = *(uint **)(param_1 + 0x58);
      }
      lVar2 = *(long *)(*(long *)(puVar5 + ((int)puVar5[2] + lVar6) * 2 + 4) + 0x38);
      iVar1 = *(int *)(lVar2 + 8);
      if (iVar1 < *(int *)(lVar2 + 0xc)) {
        lVar3 = 0;
        do {
          if (**(ulong **)(lVar2 + 0x10 + (long)iVar1 * 8 + lVar3 * 8) == (ulong)param_2) {
            *param_3 = *(undefined8 *)(*(long *)(puVar5 + ((int)puVar5[2] + lVar6) * 2 + 4) + 0x30);
            uVar4 = 1;
            goto LAB_1000d7064;
          }
          lVar3 = lVar3 + 1;
        } while (lVar3 < *(int *)(lVar2 + 0xc) - iVar1);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (long)(int)puVar5[3] - (long)(int)puVar5[2]);
  }
  uVar4 = 0;
LAB_1000d7064:
  QMutex::unlock();
  return uVar4;
}

