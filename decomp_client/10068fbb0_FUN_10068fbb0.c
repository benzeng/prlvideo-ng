
long * FUN_10068fbb0(long *param_1,long *param_2,ulong *param_3)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = (undefined8 *)*param_2;
  if ((*(int *)((long)puVar6 + 0x14) != 0) && (*(uint *)(puVar6 + 4) != 0)) {
    uVar2 = *param_3;
    uVar5 = (uint)(uVar2 >> 0x1f) ^ (uint)uVar2 ^ *(uint *)((long)puVar6 + 0x24);
    for (puVar7 = *(undefined8 **)(puVar6[1] + ((ulong)uVar5 % (ulong)*(uint *)(puVar6 + 4)) * 8);
        puVar7 != puVar6; puVar7 = (undefined8 *)*puVar7) {
      if ((*(uint *)(puVar7 + 1) == uVar5) && (uVar2 == puVar7[2])) {
        if (puVar7 != puVar6) {
          piVar3 = (int *)puVar7[3];
          *param_1 = (long)piVar3;
          if (*piVar3 == -1) {
            return param_1;
          }
          if (*piVar3 == 0) {
            QListData::detach((int)param_1);
            lVar4 = *param_1;
            iVar1 = *(int *)(lVar4 + 8);
            if (iVar1 == *(int *)(lVar4 + 0xc)) {
              return param_1;
            }
            puVar6 = (undefined8 *)(puVar7[3] + 0x10 + (long)*(int *)(puVar7[3] + 8) * 8);
            puVar7 = (undefined8 *)(lVar4 + 0x10 + (long)iVar1 * 8);
            lVar4 = (long)*(int *)(lVar4 + 0xc) * 8 + (long)iVar1 * -8;
            do {
              piVar3 = (int *)*puVar6;
              *puVar7 = piVar3;
              if (1 < *piVar3 + 1U) {
                LOCK();
                *piVar3 = *piVar3 + 1;
                UNLOCK();
              }
              puVar7 = puVar7 + 1;
              puVar6 = puVar6 + 1;
              lVar4 = lVar4 + -8;
            } while (lVar4 != 0);
            return param_1;
          }
          LOCK();
          *piVar3 = *piVar3 + 1;
          UNLOCK();
          return param_1;
        }
        break;
      }
    }
  }
  *param_1 = (long)PTR_shared_null_1021e15e8;
  return param_1;
}

