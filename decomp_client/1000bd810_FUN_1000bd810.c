
undefined8 * FUN_1000bd810(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  
  puVar3 = (uint *)PTR_shared_null_1021e1288;
  lVar4 = *param_2;
  uVar1 = *(uint *)(lVar4 + 8);
  iVar6 = *(int *)(lVar4 + 0xc);
  uVar8 = iVar6 - uVar1;
  if (uVar8 == 0 || iVar6 < (int)uVar1) {
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    puVar3 = (uint *)QArrayData::allocate(4,8,(long)(int)uVar8,0);
    *param_1 = puVar3;
    if (puVar3 == (uint *)0x0) {
      qBadAlloc();
    }
    puVar3[1] = uVar8;
    ___bzero((long)puVar3 + *(long *)(puVar3 + 4),(long)(int)uVar8 << 2);
    lVar4 = *param_2;
    uVar1 = *(uint *)(lVar4 + 8);
    iVar6 = *(int *)(lVar4 + 0xc);
  }
  uVar5 = (ulong)uVar1;
  if ((int)uVar1 < iVar6) {
    lVar7 = 0;
    do {
      uVar2 = *(undefined4 *)(lVar4 + 0x10 + ((int)uVar5 + lVar7) * 8);
      if (1 < *puVar3) {
        if ((puVar3[2] & 0x7fffffff) == 0) {
          puVar3 = (uint *)QArrayData::allocate(4,8,0,2);
          *param_1 = puVar3;
        }
        else {
          FUN_1000bf180(param_1,puVar3[1],puVar3[2] & 0x7fffffff,0);
          puVar3 = (uint *)*param_1;
        }
      }
      *(undefined4 *)((long)puVar3 + lVar7 * 4 + *(long *)(puVar3 + 4)) = uVar2;
      lVar7 = lVar7 + 1;
      lVar4 = *param_2;
      uVar5 = (ulong)*(int *)(lVar4 + 8);
    } while (lVar7 < (long)((long)*(int *)(lVar4 + 0xc) - uVar5));
  }
  return param_1;
}

