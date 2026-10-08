
undefined1 FUN_1000d7a50(long param_1,uint param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  
  QMutex::lock();
  bVar8 = true;
  puVar3 = *(uint **)(param_1 + 0x58);
  if ((int)puVar3[2] < (int)puVar3[3]) {
    puVar1 = (undefined8 *)(param_1 + 0x58);
    lVar9 = 0;
    do {
      if (1 < *puVar3) {
        FUN_1000e6e10(puVar1,puVar3[1]);
        puVar3 = (uint *)*puVar1;
      }
      uVar4 = puVar3[2];
      puVar2 = *(uint **)(*(long *)(puVar3 + ((int)uVar4 + lVar9) * 2 + 4) + 0x38);
      if ((int)puVar2[2] < (int)puVar2[3]) {
        puVar6 = (undefined8 *)(*(long *)(puVar3 + ((int)uVar4 + lVar9) * 2 + 4) + 0x38);
        lVar7 = 0;
        do {
          if (1 < *puVar2) {
            FUN_1000e7430(puVar6,puVar2[1]);
            puVar2 = (uint *)*puVar6;
          }
          uVar4 = puVar2[2];
          if (**(ulong **)(puVar2 + (lVar7 + (int)uVar4) * 2 + 4) == (ulong)param_2) {
            if (1 < *puVar2) {
              FUN_1000e7430(puVar6,puVar2[1]);
              puVar2 = (uint *)*puVar6;
              uVar4 = puVar2[2];
            }
            *(uint *)(*(long *)(puVar2 + ((int)uVar4 + lVar7) * 2 + 4) + 0x1c) =
                 *(uint *)(*(long *)(puVar2 + ((int)uVar4 + lVar7) * 2 + 4) + 0x1c) & 0xfffffffe;
            bVar8 = false;
            QMutex::unlock();
            puVar3 = (uint *)*puVar6;
            if (1 < *puVar3) {
              FUN_1000e7430(puVar6,puVar3[1]);
              puVar3 = (uint *)*puVar6;
            }
            uVar5 = 1;
            FUN_1000cb340(param_1,*(undefined8 *)
                                   (*(long *)(puVar3 + ((int)puVar3[2] + lVar7) * 2 + 4) + 0x10),
                          param_2,0);
            goto LAB_1000d7bca;
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < (long)(int)puVar2[3] - (long)(int)uVar4);
        puVar3 = (uint *)*puVar1;
        uVar4 = puVar3[2];
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < (long)(int)puVar3[3] - (long)(int)uVar4);
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
  }
LAB_1000d7bca:
  if (bVar8) {
    QMutex::unlock();
  }
  return uVar5;
}

