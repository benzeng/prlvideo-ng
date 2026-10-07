
bool FUN_10043b210(long *param_1,int param_2,uint param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  
  if (param_2 == 0) {
    puVar1 = (undefined8 *)*param_1;
    puVar7 = puVar1;
    if (*(uint *)(puVar1 + 4) != 0) {
      uVar4 = *(uint *)((long)puVar1 + 0x24) ^ param_3;
      for (puVar3 = *(undefined8 **)(puVar1[1] + ((ulong)uVar4 % (ulong)*(uint *)(puVar1 + 4)) * 8);
          (puVar7 = puVar1, puVar3 != puVar1 &&
          ((*(uint *)(puVar3 + 1) != uVar4 ||
           (puVar7 = puVar3, *(uint *)((long)puVar3 + 0xc) != param_3))));
          puVar3 = (undefined8 *)*puVar3) {
      }
    }
    bVar8 = puVar7 != puVar1;
  }
  else {
    uVar2 = 8;
    if (*(uint *)(param_1 + 2) < 9) {
      uVar2 = (ulong)*(uint *)(param_1 + 2);
    }
    if ((int)uVar2 == 0) {
      bVar8 = false;
    }
    else {
      puVar6 = (uint *)(param_1 + 3);
      uVar5 = 0;
      do {
        if (*puVar6 == param_3) {
          return true;
        }
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 10;
      } while (uVar5 < uVar2);
      bVar8 = false;
    }
  }
  return bVar8;
}

