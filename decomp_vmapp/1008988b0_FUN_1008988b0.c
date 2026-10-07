
undefined8 FUN_1008988b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  lVar1 = *(long *)(param_1 + 0x78);
  uVar2 = FUN_100894680();
  FUN_10083b910(lVar1,uVar2,param_2);
  puVar5 = (undefined4 *)(lVar1 + 0x104);
  FUN_100823660(puVar5);
  puVar4 = puVar5;
  puVar6 = (undefined4 *)(lVar1 + 0x160);
  for (lVar3 = 0x17; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + (ulong)bVar7 * -2 + 1;
    puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
  }
  puVar4 = (undefined4 *)(lVar1 + 0x1bc);
  for (lVar3 = 0x17; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *puVar5;
    puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
    puVar4 = puVar4 + (ulong)bVar7 * -2 + 1;
  }
  *(undefined8 *)(lVar1 + 0x218) = 0xffffffffffffffff;
  return 1;
}

