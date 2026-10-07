
undefined8 * FUN_1002a5d20(uint *param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  bool bVar8;
  
  uVar7 = 0x18;
  if (param_1[2] != 0) {
    uVar7 = (ulong)(param_1[2] + 0xfff + (*param_1 & 0xfff) >> 0xc) * 0x10 + 0x18;
  }
  puVar5 = operator_new__(uVar7,(nothrow_t *)PTR_nothrow_100ba21c8);
  puVar6 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)param_1;
    puVar5[1] = *(undefined8 *)(param_1 + 2);
    *puVar5 = uVar3;
    puVar5[2] = 0;
    cVar4 = FUN_1002a5e30(puVar5,param_2,param_3);
    puVar6 = puVar5;
    if (cVar4 == '\0') {
      iVar2 = *(int *)((long)puVar5 + 0x14);
      uVar1 = iVar2 - 1;
      *(uint *)((long)puVar5 + 0x14) = uVar1;
      while (iVar2 != 0) {
        uVar7 = puVar5[(ulong)uVar1 * 2 + 3];
        if ((0xafffffff < uVar7) && (bVar8 = uVar7 < 0x100000000, uVar7 = uVar7 - 0x50000000, bVar8)
           ) {
          uVar7 = 0xffffffffffffffff;
        }
        FUN_10008c640(DAT_1011c3688,uVar7,0x1000,0,1,1);
        iVar2 = *(int *)((long)puVar5 + 0x14);
        uVar1 = iVar2 - 1;
        *(uint *)((long)puVar5 + 0x14) = uVar1;
      }
      operator_delete__(puVar5);
      puVar6 = (undefined8 *)0x0;
    }
  }
  return puVar6;
}

