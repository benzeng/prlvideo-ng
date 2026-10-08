
long * FUN_100721bc0(long *param_1,long *param_2,uint *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar1 = (undefined8 *)*param_2;
  if ((*(int *)((long)puVar1 + 0x14) != 0) && (*(uint *)(puVar1 + 4) != 0)) {
    uVar5 = *(uint *)((long)puVar1 + 0x24) ^ *param_3;
    for (puVar8 = *(undefined8 **)(puVar1[1] + ((ulong)uVar5 % (ulong)*(uint *)(puVar1 + 4)) * 8);
        puVar8 != puVar1; puVar8 = (undefined8 *)*puVar8) {
      if ((*(uint *)(puVar8 + 1) == uVar5) && (*param_3 == *(uint *)((long)puVar8 + 0xc))) {
        if (puVar8 != puVar1) {
          piVar2 = (int *)puVar8[2];
          *param_1 = (long)piVar2;
          if (*piVar2 == -1) {
            return param_1;
          }
          if (*piVar2 != 0) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
            return param_1;
          }
          QListData::detach((int)param_1);
          lVar3 = *param_1;
          lVar6 = (long)*(int *)(lVar3 + 8);
          lVar4 = puVar8[2];
          if (lVar4 + (long)*(int *)(lVar4 + 8) * 8 == lVar3 + lVar6 * 8) {
            return param_1;
          }
          lVar7 = *(int *)(lVar3 + 0xc) - lVar6;
          if (lVar7 == 0 || *(int *)(lVar3 + 0xc) < lVar6) {
            return param_1;
          }
          _memcpy((void *)(lVar3 + 0x10 + lVar6 * 8),
                  (void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8),lVar7 * 8);
          return param_1;
        }
        break;
      }
    }
  }
  *param_1 = (long)PTR_shared_null_1021e15e8;
  return param_1;
}

