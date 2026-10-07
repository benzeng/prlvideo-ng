
undefined8 * FUN_10054c8a0(long param_1,char param_2,undefined1 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined1 uVar9;
  
  lVar2 = *(long *)(param_1 + 0x40);
  puVar8 = (uint *)(param_1 + 0x30);
  if (param_2 == '\0') {
    lVar2 = lVar2 + (ulong)*puVar8 * 8;
    puVar8 = (uint *)(param_1 + 0x34);
  }
  uVar1 = *puVar8;
  uVar9 = 1;
  if (*(char *)(param_1 + 0x79) != '\0') {
    uVar9 = param_3;
  }
  iVar6 = FUN_1007da300("vm.compressor.map",uVar9);
  if (iVar6 == 0) {
    puVar7 = operator_new(0x58,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (puVar7 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    uVar3 = *(undefined8 *)(param_1 + 8);
    *puVar7 = &PTR_FUN_10111da98;
    *(undefined4 *)(puVar7 + 3) = 0;
    puVar7[2] = 0;
    puVar7[1] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[6] = uVar3;
    puVar7[7] = FUN_10054ca10;
    puVar7[8] = param_1;
    puVar7[9] = 0;
    *(undefined4 *)(puVar7 + 10) = 0;
  }
  else {
    puVar7 = operator_new(0x70,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (puVar7 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
    *puVar7 = &PTR_FUN_10111da10;
    *(undefined4 *)(puVar7 + 3) = 0;
    puVar7[2] = 0;
    puVar7[1] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[6] = uVar4;
    puVar7[7] = uVar3;
    puVar7[8] = uVar5;
    puVar7[9] = 0;
    *(undefined4 *)(puVar7 + 10) = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = FUN_10054ca10;
    puVar7[0xd] = param_1;
  }
  puVar7[1] = lVar2;
  *(uint *)(puVar7 + 2) = uVar1;
  return puVar7;
}

