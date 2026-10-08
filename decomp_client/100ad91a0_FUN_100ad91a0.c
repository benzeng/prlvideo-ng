
undefined8 * FUN_100ad91a0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  
  *param_1 = PTR_shared_null_1021e1288;
  uVar2 = FUN_100ae6090(param_2 + 0x990);
  if (uVar2 != 0) {
    uVar7 = 0;
    puVar9 = (uint *)PTR_shared_null_1021e1288;
    do {
      uVar4 = FUN_100ae60d0(param_2 + 0x990,uVar7);
      lVar8 = (long)(int)puVar9[1];
      uVar3 = puVar9[1] + 1;
      uVar6 = puVar9[2] & 0x7fffffff;
      if ((*puVar9 < 2) && (uVar3 <= uVar6)) {
        lVar5 = *(long *)(puVar9 + 4) + (long)puVar9;
      }
      else {
        uVar1 = uVar6;
        if (uVar6 < uVar3) {
          uVar1 = uVar3;
        }
        FUN_10033d5b0(param_1,lVar8,uVar1,(ulong)(uVar6 < uVar3) << 3);
        puVar9 = (uint *)*param_1;
        lVar5 = *(long *)(puVar9 + 4) + (long)puVar9;
        lVar8 = (long)(int)puVar9[1];
      }
      *(int *)(lVar5 + lVar8 * 0x18) = (int)uVar4;
      *(int *)(lVar5 + 4 + lVar8 * 0x18) = (int)((ulong)uVar4 >> 0x20);
      *(undefined8 *)(lVar5 + 0x10 + lVar8 * 0x18) = 0;
      *(undefined8 *)(lVar5 + 8 + lVar8 * 0x18) = 0;
      puVar9[1] = puVar9[1] + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar2);
  }
  return param_1;
}

