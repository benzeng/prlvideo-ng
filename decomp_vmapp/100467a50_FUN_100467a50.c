
undefined8 FUN_100467a50(long param_1,long param_2)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int local_50 [2];
  void *local_48;
  void *local_40;
  
  uVar7 = 0xf0000002;
  if (0xf < *(ushort *)(param_2 + 0x14)) {
    piVar2 = (int *)FUN_1002a6010(param_2);
    uVar7 = 0xf0000004;
    if (piVar2 != (int *)0x0) {
      if (*(int *)(param_1 + 0x7c) != *piVar2) {
        *(int *)(param_1 + 0x7c) = *piVar2;
        FUN_1004680e0(param_1,*(undefined1 *)(param_1 + 0x78));
      }
      if (piVar2[1] == 1) {
        if (*(short *)(param_2 + 0x16) == 0) {
          return 0xf000001c;
        }
        lVar3 = FUN_1002a6120(param_2,0,1);
        if (lVar3 == 0) {
          return 0xf000001c;
        }
        QMutex::lock();
        bVar6 = true;
        puVar4 = *(uint **)(param_1 + 0x40);
        uVar5 = puVar4[2];
        uVar7 = 0xf000001c;
        if (puVar4[3] != uVar5) {
          puVar8 = (undefined8 *)(param_1 + 0x40);
          uVar1 = *(uint *)(lVar3 + 8);
          if (1 < *puVar4) {
            FUN_100469720(puVar8,puVar4[1]);
            puVar4 = (uint *)*puVar8;
            uVar5 = puVar4[2];
          }
          if ((ulong)(*(long *)(*(long *)(puVar4 + (long)(int)uVar5 * 2 + 4) + 0x10) -
                     *(long *)(*(long *)(puVar4 + (long)(int)uVar5 * 2 + 4) + 8)) <= (ulong)uVar1) {
            FUN_100469830(local_50,puVar8);
            bVar6 = false;
            QMutex::unlock();
            piVar2[2] = local_50[0];
            piVar2[3] = (int)local_40 - (int)local_48;
            uVar7 = 0;
            FUN_1002a5a50(lVar3,0);
            if (local_48 != (void *)0x0) {
              if (local_40 != local_48) {
                local_40 = local_48;
              }
              operator_delete(local_48);
            }
          }
        }
      }
      else {
        if (piVar2[1] != 0) {
          return 0xf000001c;
        }
        QMutex::lock();
        puVar4 = *(uint **)(param_1 + 0x40);
        uVar5 = puVar4[2];
        if (puVar4[3] == uVar5) {
          lVar3 = *(long *)(param_1 + 0x48);
          *(long *)(param_1 + 0x48) = param_2;
          bVar6 = false;
          QMutex::unlock();
          uVar7 = 0xffffffff;
          if (lVar3 != 0) {
            FUN_1004c07d0(param_1 + 0x10,lVar3,0xf0000000);
          }
        }
        else {
          bVar6 = true;
          if (1 < *puVar4) {
            FUN_100469720((undefined8 *)(param_1 + 0x40),puVar4[1]);
            puVar4 = *(uint **)(param_1 + 0x40);
            uVar5 = puVar4[2];
          }
          piVar2[3] = *(int *)(*(long *)(puVar4 + (long)(int)uVar5 * 2 + 4) + 0x10) -
                      *(int *)(*(long *)(puVar4 + (long)(int)uVar5 * 2 + 4) + 8);
          uVar7 = 0;
        }
      }
      if (bVar6) {
        QMutex::unlock();
      }
    }
  }
  return uVar7;
}

