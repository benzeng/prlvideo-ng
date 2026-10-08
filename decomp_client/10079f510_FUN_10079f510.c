
void FUN_10079f510(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  QArrayData *pQVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  QArrayData *local_38;
  undefined1 local_2a;
  
  puVar2 = operator_new(0x78);
  *(undefined4 *)(puVar2 + 1) = 3;
  *(undefined1 *)((long)puVar2 + 0xc) = 0;
  *(undefined4 *)(puVar2 + 2) = 3;
  *(undefined1 *)((long)puVar2 + 0x14) = 0;
  *(undefined4 *)(puVar2 + 3) = 3;
  *(undefined1 *)((long)puVar2 + 0x1c) = 0;
  *(undefined4 *)(puVar2 + 4) = 3;
  *(undefined1 *)((long)puVar2 + 0x24) = 0;
  puVar1 = PTR_shared_null_1021e1288;
  auVar7._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar7._0_8_ = PTR_shared_null_1021e1288;
  auVar7._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(puVar2 + 6) = auVar7;
  *(undefined1 (*) [16])(puVar2 + 8) = auVar7;
  puVar2[10] = puVar1;
  puVar2[0xc] = puVar1;
  *(undefined4 *)(puVar2 + 0xd) = 0xff;
  *(undefined4 *)((long)puVar2 + 0x6c) = 0xff;
  *(undefined4 *)(puVar2 + 5) = 2;
  *(undefined4 *)(puVar2 + 0xb) = 0;
  pQVar3 = (QArrayData *)QArrayData::allocate(8,8,1,0);
  local_38 = pQVar3;
  if (pQVar3 == (QArrayData *)0x0) {
    qBadAlloc();
  }
  *(undefined4 *)(pQVar3 + 4) = 1;
  *(undefined8 *)(pQVar3 + *(long *)(pQVar3 + 0x10)) = 0;
  puVar6 = (undefined8 *)(param_1 + 0x10);
  FUN_1007a1910(puVar6,&local_38);
  *puVar2 = 0;
  puVar4 = (uint *)*puVar6;
  if (1 < *puVar4) {
    if ((puVar4[2] & 0x7fffffff) == 0) {
      puVar4 = (uint *)QArrayData::allocate(8,8,0,2);
      *puVar6 = puVar4;
    }
    else {
      FUN_1007a20d0(puVar6,puVar4[1],puVar4[2] & 0x7fffffff,0);
      puVar4 = (uint *)*puVar6;
    }
  }
  puVar5 = *(uint **)((long)puVar4 + *(long *)(puVar4 + 4));
  if (1 < *puVar5) {
    puVar6 = (undefined8 *)((long)puVar4 + *(long *)(puVar4 + 4));
    if ((puVar5[2] & 0x7fffffff) == 0) {
      puVar5 = (uint *)QArrayData::allocate(8,8,0,2);
      *puVar6 = puVar5;
    }
    else {
      FUN_1007a1f40(puVar6,puVar5[1],puVar5[2] & 0x7fffffff,0);
      puVar5 = (uint *)*puVar6;
      pQVar3 = local_38;
    }
  }
  *(undefined8 **)((long)puVar5 + *(long *)(puVar5 + 4)) = puVar2;
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_2a = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_2a) {
        return;
      }
    }
    QArrayData::deallocate(pQVar3,8,8);
  }
  return;
}

