
void FUN_1002d72f0(undefined8 *param_1,long param_2,undefined4 *param_3,long param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  QArrayData *local_40;
  undefined1 local_32;
  undefined1 local_31;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = param_1 + 3;
  param_1[4] = param_1 + 3;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = param_1 + 6;
  param_1[7] = param_1 + 6;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = param_1 + 9;
  param_1[10] = param_1 + 9;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)((long)param_1 + 0xbc) = 0;
  param_1[0x18] = param_2;
  *(undefined1 *)((long)param_1 + 0xce) = *(undefined1 *)((long)param_3 + 6);
  *(undefined2 *)((long)param_1 + 0xcc) = *(undefined2 *)(param_3 + 1);
  *(undefined4 *)(param_1 + 0x19) = *param_3;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  _snprintf((char *)((long)param_1 + 0xcf),0x28,"%s:%02x.%02x%c",param_2 + 0x838,
            (ulong)*(byte *)(param_2 + 0x1c),(ulong)*(byte *)((long)param_3 + 2),
            (int)"csbi"[(ulong)*(byte *)((long)param_3 + 3) & 3]);
  *(undefined1 *)((long)param_1 + 0xf6) = 0;
  if (-1 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s] ep create:  dscr %02X:%02X, attr %02X, mps %04X, interval %02X",
                  (char *)((long)param_1 + 0xcf),*(undefined1 *)(param_1 + 0x19),
                  *(undefined1 *)((long)param_1 + 0xc9),*(undefined1 *)((long)param_1 + 0xcb),
                  *(undefined2 *)((long)param_1 + 0xcc),*(undefined1 *)((long)param_1 + 0xce));
  }
  *(undefined8 *)((long)param_1 + 0xf7) = 0;
  param_1[0xc] = param_1 + 0xc;
  param_1[0xd] = param_1 + 0xc;
  param_1[0xe] = param_1 + 0xe;
  param_1[0xf] = param_1 + 0xe;
  param_1[0x10] = param_1 + 0x10;
  param_1[0x11] = param_1 + 0x10;
  if (param_4 == 0) {
    *(undefined1 *)((long)param_1 + 0xff) = 0;
    uVar2 = 0;
  }
  else {
    *(undefined1 *)((long)param_1 + 0xff) = *(undefined1 *)(param_4 + 5);
    uVar2 = (uint)*(byte *)(param_4 + 2);
  }
  *(undefined1 *)((long)param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(uint *)(param_1 + 0x16) = uVar2;
  (**(code **)(**(long **)(param_2 + 0x28) + 0x70))();
  local_40 = *(QArrayData **)(param_2 + 0x20);
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_32 = *(int *)local_40 != 0;
    UNLOCK();
  }
  iVar3 = FUN_1002b8030(&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002d753a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002d753a:
  uVar2 = *(uint *)(*(long *)(param_2 + 0x28) + 0x1490);
  uVar7 = param_5 | 0x40000;
  if (uVar2 != 2) {
    uVar7 = param_5;
  }
  if (iVar3 != 3) {
    uVar7 = param_5;
  }
  bVar6 = *(byte *)((long)param_1 + 0xcb);
  if ((uVar2 < 3) || ((bVar6 & 3) != 0)) {
    iVar3 = ((*(ushort *)((long)param_1 + 0xcc) >> 0xb & 3) + 1) *
            (*(ushort *)((long)param_1 + 0xcc) & 0x7ff);
    *(int *)((long)param_1 + 0x104) = iVar3;
    if (iVar3 == 0) {
      return;
    }
  }
  else {
    *(undefined4 *)((long)param_1 + 0x104) = 0x200;
  }
  *(uint *)(param_1 + 0x12) = uVar7;
  if ((bVar6 & 3) == 0) {
    uVar7 = uVar7 | 2;
  }
  else if (((bVar6 & 3) == 2) && (*(char *)((long)param_1 + 0xff) == '\b')) {
    uVar7 = uVar7 | 3;
  }
  else {
    uVar7 = uVar7 | 1;
  }
  *(uint *)(param_1 + 0x12) = uVar7;
  if ((bVar6 & 3) == 1) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined8 *)((long)param_1 + 0x94) = 0x3000000060;
    uVar4 = *(byte *)((long)param_1 + 0xce) - 1;
    uVar2 = 0xf;
    if (uVar4 < 0x10) {
      uVar2 = uVar4;
    }
    bVar6 = (byte)uVar2;
    if (*(int *)(*(long *)(param_2 + 0x28) + 0x1490) < 2) {
      uVar4 = 0x30 >> (bVar6 & 0x1f);
      *(uint *)(param_1 + 0x13) = uVar4;
      uVar8 = 0x60 >> (bVar6 & 0x1f);
      *(uint *)((long)param_1 + 0x94) = uVar8;
      *(uint *)((long)param_1 + 0x9c) = uVar2 + 3;
    }
    else {
      *(uint *)((long)param_1 + 0x9c) = uVar2;
      if (uVar2 < 4) {
        uVar4 = 0x30 << (3 - bVar6 & 0x1f);
        *(uint *)(param_1 + 0x13) = uVar4;
        uVar8 = 0x60 << (3 - bVar6 & 0x1f);
        *(uint *)((long)param_1 + 0x94) = uVar8;
      }
      else {
        uVar4 = 0x30 >> (bVar6 - 3 & 0x1f);
        *(uint *)(param_1 + 0x13) = uVar4;
        uVar8 = 0x60 >> (bVar6 - 3 & 0x1f);
        *(uint *)((long)param_1 + 0x94) = uVar8;
      }
    }
    if (uVar4 < 2) {
      *(undefined4 *)(param_1 + 0x13) = 2;
      uVar4 = 2;
    }
    if (uVar8 <= uVar4) {
      *(uint *)((long)param_1 + 0x94) = uVar4 + 1;
    }
    if (((uVar7 & 0x10) != 0) && (*(char *)((long)param_1 + 0xca) < '\0')) {
      *(undefined8 *)((long)param_1 + 0x94) = 0x100000001;
    }
  }
  lVar1 = param_1[0x18];
  if (*(long *)(lVar1 + 0x10) == 0) {
    plVar5 = operator_new(0x30,(nothrow_t *)PTR_nothrow_100ba21c8);
    plVar9 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      FUN_1002f54e0(plVar5,param_1,lVar1);
      plVar9 = plVar5;
    }
  }
  else {
    plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    plVar9 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      FUN_1002d9650(plVar5,param_1,lVar1);
      plVar9 = plVar5;
    }
  }
  *param_1 = plVar9;
  if ((plVar9 != (long *)0x0) && (iVar3 = (**(code **)(*plVar9 + 0x10))(plVar9,param_4), iVar3 != 0)
     ) {
    *(undefined4 *)(param_1 + 0x20) = 1;
    FUN_1002d77d0(param_1);
  }
  return;
}

