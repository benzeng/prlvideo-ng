
undefined8 FUN_100353aa0(long param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  
  uVar1 = (param_2 & 0xffff) - 0x42;
  if (uVar1 < 0x1e) {
    if ((0x28030d5fU >> (uVar1 & 0x1f) & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar1 = *(uint *)**(undefined8 **)(param_1 + 0x38);
      if (0xffff01ff < uVar1) {
        puVar2 = param_3 + 1;
        if ((param_2 & 0x10000000) == 0) {
          puVar2 = param_3;
        }
        bVar7 = (*puVar2 & 0x2000) != 0;
        bVar8 = (uVar1 & 0xfe00) != 0;
        uVar5 = (ulong)(bVar7 && bVar8);
        lVar6 = uVar5 + 2;
        puVar4 = puVar2 + 1;
        if (bVar7 && bVar8) {
          puVar4 = puVar2 + 2;
        }
        if (((*puVar4 & 0x2000) != 0) && ((uVar1 & 0xfe00) != 0)) {
          lVar6 = uVar5 + 3;
        }
        param_3 = puVar2 + lVar6;
      }
      uVar3 = FUN_100399b30(*(undefined8 *)(param_1 + 0x20),*param_3 & 0x7ff);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

