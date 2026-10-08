
void FUN_100ae5cc0(long param_1,uint param_2,void *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if ((param_2 - 1 < 0x10) && (param_3 != (void *)0x0)) {
    puVar7 = (undefined8 *)(param_1 + 8);
    uVar1 = *(uint *)(*(long *)(param_1 + 8) + 8);
    uVar3 = uVar1 & 0x7fffffff;
    lVar6 = 8;
    uVar4 = param_2;
    if (((int)param_2 <= (int)uVar3) && (lVar6 = 0, uVar4 = uVar3, -1 < (int)uVar1)) {
      bVar2 = (int)param_2 < *(int *)(*(long *)(param_1 + 8) + 4);
      if ((int)param_2 < (int)(uVar3 >> 1) && bVar2) {
        uVar4 = param_2;
      }
      lVar6 = (ulong)((int)param_2 < (int)(uVar3 >> 1) && bVar2) << 3;
    }
    FUN_100ae7220(puVar7,param_2,uVar4,lVar6);
    puVar5 = (uint *)*puVar7;
    if (1 < *puVar5) {
      if ((puVar5[2] & 0x7fffffff) == 0) {
        puVar5 = (uint *)QArrayData::allocate(0x20,8,0,2);
        *puVar7 = puVar5;
      }
      else {
        FUN_100ae7220(puVar7,puVar5[1],puVar5[2] & 0x7fffffff,0);
        puVar5 = (uint *)*puVar7;
      }
    }
    _memcpy((void *)((long)puVar5 + *(long *)(puVar5 + 4)),param_3,(ulong)param_2 << 5);
  }
  return;
}

