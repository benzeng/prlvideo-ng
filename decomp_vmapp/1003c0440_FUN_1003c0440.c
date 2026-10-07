
undefined8 FUN_1003c0440(long param_1,long param_2)

{
  short sVar1;
  long lVar2;
  uint3 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  undefined1 local_258 [544];
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar2 = *(long *)(param_2 + 0x40);
  local_38 = lVar6;
  if ((*(byte *)(lVar2 + 0x39) & 1) == 0) {
    FUN_1003b9a60(local_258,lVar2,4,1);
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(uint3 *)(param_2 + 0x54);
    uVar4 = FUN_1003ba9d0(local_258);
    pcVar5 = "!";
    if ((uVar3 & 0x4000) != 0) {
      pcVar5 = "";
    }
    FUN_10038e8e0(uVar7,"if (%s%s) ",pcVar5,uVar4);
    FUN_1003b9b40(local_258);
    lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  else {
    bVar8 = (*(ushort *)(param_2 + 0x54) & 0x4000) == 0;
    bVar9 = *(int *)(lVar2 + 0x28) != 0;
    if ((bVar8 && bVar9) || (!bVar9 && !bVar8)) goto LAB_1003c0554;
  }
  sVar1 = *(short *)(param_2 + 0x4c);
  if (sVar1 == 0xd) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    pcVar5 = "discard;\n";
  }
  else if (sVar1 == 8) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    pcVar5 = "continue;\n";
  }
  else {
    if (sVar1 != 3) goto LAB_1003c0554;
    uVar7 = *(undefined8 *)(param_1 + 8);
    pcVar5 = "break;\n";
  }
  FUN_10038e8e0(uVar7,pcVar5);
LAB_1003c0554:
  if (lVar6 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

