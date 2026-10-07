
void FUN_10028b240(long param_1,long param_2)

{
  uint *puVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  
  if (*(long *)(param_2 + 0xe0) == 0) {
    return;
  }
  lVar3 = *(long *)(param_2 + 0x88);
  uVar4 = *(undefined8 *)(param_1 + 0x3a110);
  uVar2 = *(undefined1 *)(lVar3 + 4);
  uVar5 = *(undefined8 *)(param_1 + 0x3a2d0);
  *(undefined8 *)(*(long *)(param_2 + 0xe0) + 0x20) = 0xffffffffffffffff;
  iVar6 = FUN_100410a30(lVar3 + 0x18,uVar2,0,0,param_2 + 0xc0,0x12,uVar5);
  if (-1 < iVar6) {
    FUN_1004035a0(param_1 + 0x3a148,*(undefined8 *)(param_2 + 0xe0),uVar4,13000000);
    puVar1 = (uint *)(*(long *)(param_2 + 0xe0) + 0x30);
    *puVar1 = *puVar1 | 0x1000;
    FUN_100403020(param_1 + 0x3a148,FUN_10028afa0);
    return;
  }
  FUN_100288630(param_1,*(undefined4 *)(param_1 + 0x90),param_2);
  return;
}

