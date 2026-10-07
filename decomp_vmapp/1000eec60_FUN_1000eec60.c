
bool FUN_1000eec60(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  long lVar10;
  bool bVar11;
  undefined1 local_640 [4];
  undefined1 local_63c [16];
  uint local_62c;
  uint local_628;
  uint local_624;
  uint local_620;
  uint local_61c;
  undefined1 local_618 [1504];
  long local_38;
  
  lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_63c = ~*(undefined1 (*) [16])(param_2 + 4) & *(undefined1 (*) [16])(param_1 + 4);
  bVar11 = local_63c._0_4_ == 0;
  local_62c = ~*(uint *)(param_2 + 0x14) & *(uint *)(param_1 + 0x14);
  bVar3 = local_62c == 0;
  bVar5 = local_63c._12_4_ == 0;
  bVar8 = local_63c._8_4_ == 0;
  bVar9 = local_63c._4_4_ == 0;
  local_628 = *(uint *)(param_2 + 0x18);
  bVar1 = (*(uint *)(param_1 + 0x18) >> 8 & 0xff) <= (local_628 >> 8 & 0xff);
  bVar2 = (*(uint *)(param_1 + 0x18) & 0xff) <= (local_628 & 0xff);
  local_624 = ~*(uint *)(param_2 + 0x1c) & *(uint *)(param_1 + 0x1c);
  local_620 = ~*(uint *)(param_2 + 0x20) & *(uint *)(param_1 + 0x20);
  local_61c = ~*(uint *)(param_2 + 0x24) & *(uint *)(param_1 + 0x24);
  bVar4 = local_61c == 0;
  bVar6 = local_620 == 0;
  bVar7 = local_624 == 0;
  local_38 = lVar10;
  if ((!bVar4 || (!bVar6 || !bVar7)) ||
      (!bVar2 || (!bVar1 || ((!bVar3 || (!bVar5 || (!bVar8 || !bVar9))) || !bVar11)))) {
    FUN_1008e3970("","vm",0,"Destination CPU is incompatible with source one");
    FUN_1000eee30(param_2,local_618,0x5dc);
    FUN_1008e3970("","vm",0,"Destination CPU features: %s",local_618);
    FUN_1000eee30(param_1,local_618,0x5dc);
    FUN_1008e3970("","vm",0,"Source CPU features     : %s",local_618);
    FUN_1000eee30(local_640,local_618,0x5dc);
    FUN_1008e3970("","vm",0,"Absent CPU features     : %s",local_618);
    lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  if (lVar10 == local_38) {
    return (bVar4 && (bVar6 && bVar7)) &&
           (bVar2 && (bVar1 && ((bVar3 && (bVar5 && (bVar8 && bVar9))) && bVar11)));
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

