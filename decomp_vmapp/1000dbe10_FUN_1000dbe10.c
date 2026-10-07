
void FUN_1000dbe10(undefined4 *param_1,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  char cVar7;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  param_1[1] = 0x130;
  *(undefined1 *)(param_1 + 2) = param_2;
  *(undefined1 *)((long)param_1 + 9) = 0;
  *param_1 = 0x4a4e4945;
  *(undefined2 *)((long)param_1 + 0xe) = 0x2020;
  *(undefined4 *)((long)param_1 + 10) = 0x534c5250;
  *(undefined8 *)(param_1 + 4) = 0x4d454f5f534c5250;
  param_1[6] = 1;
  param_1[7] = 0x4c544e49;
  param_1[8] = 0x20051216;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 8;
  local_30 = lVar1;
  FUN_1000dc060(param_1 + 0xc);
  if (DAT_1011c3758 == (undefined4 *)0x0) {
    puVar3 = operator_new(0x34);
    lVar5 = *(long *)(DAT_1011c3698 + 0x1938);
    *puVar3 = 7;
    plVar4 = (long *)FUN_1000dcd50(7);
    lVar2 = *plVar4;
    puVar3[0xc] = 0x400;
    uVar6 = lVar2 + 0x43fU & 0xffffffffffffffc0;
    *(long *)(puVar3 + 8) = lVar2;
    *(ulong *)(puVar3 + 6) = uVar6;
    *(ulong *)(puVar3 + 2) = uVar6 + 0x2c0;
    *(ulong *)(puVar3 + 4) = uVar6 + 0x200;
    *(long *)(puVar3 + 10) = lVar5 + 0xa0d8;
    DAT_1011c3758 = puVar3;
  }
  puVar3 = DAT_1011c3758;
  param_1[9] = 0x30;
  *(undefined1 *)((long)param_1 + 0x2b) = 0;
  *(undefined1 *)((long)param_1 + 0x2a) = 0;
  *(undefined1 *)((long)param_1 + 0x29) = 0;
  param_1[0xb] = 8;
  cVar7 = '\0';
  lVar5 = 3;
  do {
    cVar7 = *(char *)((long)param_1 + lVar5) +
            *(char *)((long)param_1 + lVar5 + -1) +
            *(char *)((long)param_1 + lVar5 + -2) + *(char *)((long)param_1 + lVar5 + -3) + cVar7;
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0x133);
  *(char *)((long)param_1 + 9) = -cVar7;
  plVar4 = (long *)FUN_1000dcd50(*puVar3);
  lVar5 = *plVar4;
  FUN_1000dcd50(*puVar3);
  lVar2 = *(long *)(puVar3 + 10);
  lVar5 = *(long *)(puVar3 + 6) - lVar5;
  *(undefined4 *)(lVar2 + lVar5) = 0x10;
  *(undefined4 *)(lVar2 + 4 + lVar5) = 0;
  *(undefined4 *)(lVar2 + 0x1c + lVar5) = 0;
  *(undefined8 *)(lVar2 + 0x14 + lVar5) = 0;
  FUN_1000dbce0(&local_58,0xff,4,0,0,0xffffffffffffffff,0,0);
  *(undefined8 *)(lVar2 + 0x28 + lVar5) = local_40;
  *(undefined8 *)(lVar2 + 0x20 + lVar5) = local_48;
  *(undefined8 *)(lVar2 + 0x18 + lVar5) = local_50;
  *(undefined8 *)(lVar2 + 0x10 + lVar5) = local_58;
  *(undefined4 *)(lVar2 + 0xc + lVar5) = 1;
  *(undefined4 *)(lVar2 + 8 + lVar5) = 0x30;
  if (lVar1 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

