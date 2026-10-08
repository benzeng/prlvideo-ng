
void FUN_1007fdb80(QObject *param_1,int param_2,int param_3,long *param_4)

{
  long lVar1;
  QObject *this;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  QArrayData **ppQVar8;
  int iVar9;
  code *pcVar10;
  long lVar11;
  bool bVar12;
  QString local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  long local_148;
  long local_140;
  Data_conflict local_138;
  undefined4 local_130;
  QArrayData *local_128;
  Data_conflict local_120;
  undefined4 local_118;
  QArrayData *local_110;
  Data_conflict local_108;
  undefined4 local_100;
  Data_conflict local_f8;
  undefined4 local_f0;
  QArrayData *local_e8;
  Data_conflict local_e0;
  undefined4 local_d8;
  QArrayData *local_d0;
  Data_conflict local_c8;
  undefined4 local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94 [8];
  undefined4 local_8c;
  QArrayData *local_88;
  QArrayData **local_80;
  QArrayData **ppQStack_78;
  QArrayData *local_68;
  QArrayData **local_60;
  undefined1 *puStack_58;
  undefined4 *local_50;
  undefined4 *local_48;
  QArrayData **local_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  if (1 < param_2) {
    if (param_2 == 2) {
      if (param_3 == 1) {
        FUN_100173f90(param_1,*(undefined1 *)*param_4);
        return;
      }
    }
    else if (param_2 == 10) {
      puVar2 = (undefined4 *)*param_4;
      plVar3 = (long *)param_4[1];
      pcVar10 = (code *)*plVar3;
      lVar11 = plVar3[1];
      if ((pcVar10 == FUN_100800390) && (lVar11 == 0)) {
        *puVar2 = 0;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_1008003e0) && (lVar11 == 0)) {
        *puVar2 = 1;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100800440) && (lVar11 == 0)) {
        *puVar2 = 2;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_1008004a0) && (lVar11 == 0)) {
        *puVar2 = 3;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_1008004f0) && (lVar11 == 0)) {
        *puVar2 = 4;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100800540) && (lVar11 == 0)) {
        *puVar2 = 5;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100800590) && (lVar11 == 0)) {
        *puVar2 = 6;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_1008005e0) && (lVar11 == 0)) {
        *puVar2 = 7;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100800630) && (lVar11 == 0)) {
        *puVar2 = 8;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100800680) && (lVar11 == 0)) {
        *puVar2 = 9;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_1008006d0) && (lVar11 == 0)) {
        *puVar2 = 10;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100800730) && (lVar11 == 0)) {
        *puVar2 = 0xb;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100800790) && (lVar11 == 0)) {
        *puVar2 = 0xc;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_1008007f0) && (lVar11 == 0)) {
        *puVar2 = 0xd;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100800850) && (lVar11 == 0)) {
        *puVar2 = 0xe;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_1008008b0) && (lVar11 == 0)) {
        *puVar2 = 0xf;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100800910) && (lVar11 == 0)) {
        *puVar2 = 0x10;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100800970) && (lVar11 == 0)) {
        *puVar2 = 0x11;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_1008009c0) && (lVar11 == 0)) {
        *puVar2 = 0x12;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100800a20) && (lVar11 == 0)) {
        *puVar2 = 0x13;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100800a80) && (lVar11 == 0)) {
        *puVar2 = 0x14;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100800ae0) && (lVar11 == 0)) {
        *puVar2 = 0x15;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100800b30) && (lVar11 == 0)) {
        *puVar2 = 0x16;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100800b90) && (lVar11 == 0)) {
        *puVar2 = 0x17;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100800be0) && (lVar11 == 0)) {
        *puVar2 = 0x18;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100800c40) && (lVar11 == 0)) {
        *puVar2 = 0x19;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100800ca0) && (lVar11 == 0)) {
        *puVar2 = 0x1a;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100800cf0) && (lVar11 == 0)) {
        *puVar2 = 0x1b;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100800d10) && (lVar11 == 0)) {
        *puVar2 = 0x1c;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100800d90) && (lVar11 == 0)) {
        *puVar2 = 0x1d;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100800df0) && (lVar11 == 0)) {
        *puVar2 = 0x1e;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100800e10) && (lVar11 == 0)) {
        *puVar2 = 0x1f;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100800e70) && (lVar11 == 0)) {
        *puVar2 = 0x20;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100800ed0) && (lVar11 == 0)) {
        *puVar2 = 0x21;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100800f40) && (lVar11 == 0)) {
        *puVar2 = 0x22;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100800fa0) && (lVar11 == 0)) {
        *puVar2 = 0x23;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100801000) && (lVar11 == 0)) {
        *puVar2 = 0x24;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100801060) && (lVar11 == 0)) {
        *puVar2 = 0x25;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_1008010c0) && (lVar11 == 0)) {
        *puVar2 = 0x26;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100801110) && (lVar11 == 0)) {
        *puVar2 = 0x27;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100801170) && (lVar11 == 0)) {
        *puVar2 = 0x28;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100801190) && (lVar11 == 0)) {
        *puVar2 = 0x29;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_1008011f0) && (lVar11 == 0)) {
        *puVar2 = 0x2a;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100801250) && (lVar11 == 0)) {
        *puVar2 = 0x2b;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_1008012a0) && (lVar11 == 0)) {
        *puVar2 = 0x2c;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_1008012f0) && (lVar11 == 0)) {
        *puVar2 = 0x2d;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100801340) && (lVar11 == 0)) {
        *puVar2 = 0x2e;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_1008013a0) && (lVar11 == 0)) {
        *puVar2 = 0x2f;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100801400) && (lVar11 == 0)) {
        *puVar2 = 0x30;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100801460) && (lVar11 == 0)) {
        *puVar2 = 0x31;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_1008014c0) && (lVar11 == 0)) {
        *puVar2 = 0x32;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100801520) && (lVar11 == 0)) {
        *puVar2 = 0x33;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100801580) && (lVar11 == 0)) {
        *puVar2 = 0x34;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_1008015e0) && (lVar11 == 0)) {
        *puVar2 = 0x35;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100801640) && (lVar11 == 0)) {
        *puVar2 = 0x36;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_100801690) && (lVar11 == 0)) {
        *puVar2 = 0x37;
        pcVar10 = (code *)*plVar3;
        lVar11 = plVar3[1];
      }
      if ((pcVar10 == FUN_1008016f0) && (lVar11 == 0)) {
        *puVar2 = 0x38;
      }
    }
    goto switchD_1007fdbcb_default;
  }
  if (param_2 != 0) {
    if (param_2 != 1) goto switchD_1007fdbcb_default;
    this = (QObject *)*param_4;
    if (param_3 == 2) {
      *this = param_1[0x13b];
      goto switchD_1007fdbcb_default;
    }
    if (param_3 == 1) {
      *this = param_1[0x13c];
      goto switchD_1007fdbcb_default;
    }
    if (param_3 != 0) goto switchD_1007fdbcb_default;
    FUN_10015aab0(&local_180,param_1);
    QString::operator=((QString *)this,&local_180);
    if (*(int *)local_180.field0_0x0 == -1) goto switchD_1007fdbcb_default;
    if (*(int *)local_180.field0_0x0 != 0) {
      LOCK();
      *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
      bVar12 = *(int *)local_180.field0_0x0 != 0;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,bVar12);
      goto joined_r0x0001007fe61e;
    }
    goto LAB_1007fe62b;
  }
  uVar6 = local_a8._4_4_;
  uVar5 = local_68._4_4_;
  switch(param_3) {
  case 0:
    local_60 = (QArrayData **)param_4[1];
    local_68 = (QArrayData *)0x0;
    ppQVar8 = &local_68;
    iVar9 = 0;
    goto LAB_1007ff1db;
  case 1:
    local_a8 = (QArrayData *)CONCAT44(uVar6,*(undefined4 *)param_4[1]);
    local_68 = (QArrayData *)0x0;
    local_60 = &local_a8;
    ppQVar8 = &local_68;
    iVar9 = 1;
    goto LAB_1007ff1db;
  case 2:
    local_80 = (QArrayData **)param_4[1];
    local_68 = (QArrayData *)CONCAT44(uVar5,*(undefined4 *)param_4[2]);
    local_88 = (QArrayData *)0x0;
    ppQStack_78 = &local_68;
    ppQVar8 = &local_88;
    iVar9 = 2;
    goto LAB_1007ff1db;
  case 3:
    local_60 = (QArrayData **)param_4[1];
    local_68 = (QArrayData *)0x0;
    ppQVar8 = &local_68;
    iVar9 = 3;
    goto LAB_1007ff1db;
  case 4:
    local_60 = (QArrayData **)param_4[1];
    local_68 = (QArrayData *)0x0;
    ppQVar8 = &local_68;
    iVar9 = 4;
    goto LAB_1007ff1db;
  case 5:
    local_60 = (QArrayData **)param_4[1];
    local_68 = (QArrayData *)0x0;
    ppQVar8 = &local_68;
    iVar9 = 5;
    goto LAB_1007ff1db;
  case 6:
    local_60 = (QArrayData **)param_4[1];
    local_68 = (QArrayData *)0x0;
    ppQVar8 = &local_68;
    iVar9 = 6;
    goto LAB_1007ff1db;
  case 7:
    local_60 = (QArrayData **)param_4[1];
    local_68 = (QArrayData *)0x0;
    ppQVar8 = &local_68;
    iVar9 = 7;
    goto LAB_1007ff1db;
  case 8:
    local_60 = (QArrayData **)param_4[1];
    local_68 = (QArrayData *)0x0;
    ppQVar8 = &local_68;
    iVar9 = 8;
    goto LAB_1007ff1db;
  case 9:
    local_60 = (QArrayData **)param_4[1];
    local_68 = (QArrayData *)0x0;
    ppQVar8 = &local_68;
    iVar9 = 9;
    goto LAB_1007ff1db;
  case 10:
    local_a8 = (QArrayData *)CONCAT44(uVar6,*(undefined4 *)param_4[1]);
    local_68 = (QArrayData *)0x0;
    local_60 = &local_a8;
    ppQVar8 = &local_68;
    iVar9 = 10;
    goto LAB_1007ff1db;
  case 0xb:
    local_68 = (QArrayData *)CONCAT44(uVar5,*(undefined4 *)param_4[1]);
    local_a8 = (QArrayData *)CONCAT44(uVar6,*(undefined4 *)param_4[2]);
    local_88 = (QArrayData *)0x0;
    local_80 = &local_68;
    ppQStack_78 = &local_a8;
    ppQVar8 = &local_88;
    iVar9 = 0xb;
    goto LAB_1007ff1db;
  case 0xc:
    ppQStack_78 = (QArrayData **)param_4[2];
    local_68 = (QArrayData *)CONCAT44(uVar5,*(undefined4 *)param_4[1]);
    local_88 = (QArrayData *)0x0;
    local_80 = &local_68;
    ppQVar8 = &local_88;
    iVar9 = 0xc;
    goto LAB_1007ff1db;
  case 0xd:
    ppQStack_78 = (QArrayData **)param_4[2];
    local_68 = (QArrayData *)CONCAT44(uVar5,*(undefined4 *)param_4[1]);
    local_88 = (QArrayData *)0x0;
    local_80 = &local_68;
    ppQVar8 = &local_88;
    iVar9 = 0xd;
    goto LAB_1007ff1db;
  case 0xe:
    local_a8 = (QArrayData *)CONCAT44(uVar6,*(undefined4 *)param_4[1]);
    local_68 = (QArrayData *)0x0;
    local_60 = &local_a8;
    ppQVar8 = &local_68;
    iVar9 = 0xe;
    goto LAB_1007ff1db;
  case 0xf:
    local_a8 = (QArrayData *)CONCAT44(uVar6,*(undefined4 *)param_4[1]);
    local_68 = (QArrayData *)0x0;
    local_60 = &local_a8;
    ppQVar8 = &local_68;
    iVar9 = 0xf;
    goto LAB_1007ff1db;
  case 0x10:
    local_a8 = (QArrayData *)CONCAT44(uVar6,*(undefined4 *)param_4[1]);
    local_68 = (QArrayData *)0x0;
    local_60 = &local_a8;
    ppQVar8 = &local_68;
    iVar9 = 0x10;
    goto LAB_1007ff1db;
  case 0x11:
    local_60 = (QArrayData **)param_4[1];
    local_68 = (QArrayData *)0x0;
    ppQVar8 = &local_68;
    iVar9 = 0x11;
    goto LAB_1007ff1db;
  case 0x12:
    local_a8 = (QArrayData *)CONCAT44(uVar6,*(undefined4 *)param_4[1]);
    local_68 = (QArrayData *)0x0;
    local_60 = &local_a8;
    ppQVar8 = &local_68;
    iVar9 = 0x12;
    goto LAB_1007ff1db;
  case 0x13:
    local_a8 = (QArrayData *)CONCAT44(uVar6,*(undefined4 *)param_4[1]);
    local_68 = (QArrayData *)0x0;
    local_60 = &local_a8;
    ppQVar8 = &local_68;
    iVar9 = 0x13;
    goto LAB_1007ff1db;
  case 0x14:
    local_a8 = (QArrayData *)CONCAT44(uVar6,*(undefined4 *)param_4[1]);
    local_68 = (QArrayData *)0x0;
    local_60 = &local_a8;
    ppQVar8 = &local_68;
    iVar9 = 0x14;
    goto LAB_1007ff1db;
  case 0x15:
    local_60 = (QArrayData **)param_4[1];
    local_68 = (QArrayData *)0x0;
    ppQVar8 = &local_68;
    iVar9 = 0x15;
    goto LAB_1007ff1db;
  case 0x16:
    local_a8 = (QArrayData *)CONCAT44(uVar6,*(undefined4 *)param_4[1]);
    local_68 = (QArrayData *)0x0;
    local_60 = &local_a8;
    ppQVar8 = &local_68;
    iVar9 = 0x16;
    goto LAB_1007ff1db;
  case 0x17:
    local_60 = (QArrayData **)param_4[1];
    local_68 = (QArrayData *)0x0;
    ppQVar8 = &local_68;
    iVar9 = 0x17;
    goto LAB_1007ff1db;
  case 0x18:
    ppQStack_78 = (QArrayData **)param_4[2];
    local_68 = (QArrayData *)CONCAT44(uVar5,*(undefined4 *)param_4[1]);
    local_88 = (QArrayData *)0x0;
    local_80 = &local_68;
    ppQVar8 = &local_88;
    iVar9 = 0x18;
    goto LAB_1007ff1db;
  case 0x19:
    ppQStack_78 = (QArrayData **)param_4[2];
    local_68 = (QArrayData *)CONCAT44(uVar5,*(undefined4 *)param_4[1]);
    local_88 = (QArrayData *)0x0;
    local_80 = &local_68;
    ppQVar8 = &local_88;
    iVar9 = 0x19;
    goto LAB_1007ff1db;
  case 0x1a:
    local_60 = (QArrayData **)param_4[1];
    local_68 = (QArrayData *)0x0;
    ppQVar8 = &local_68;
    iVar9 = 0x1a;
    goto LAB_1007ff1db;
  case 0x1b:
    iVar9 = 0x1b;
    goto LAB_1007feebf;
  case 0x1c:
    puStack_58 = (undefined1 *)param_4[2];
    local_94._0_4_ = *(undefined4 *)param_4[1];
    local_98 = *(undefined4 *)param_4[3];
    local_9c = *(undefined4 *)param_4[4];
    local_a8 = *(QArrayData **)param_4[5];
    local_68 = (QArrayData *)0x0;
    local_60 = (QArrayData **)local_94;
    local_50 = &local_98;
    local_48 = &local_9c;
    local_40 = &local_a8;
    ppQVar8 = &local_68;
    iVar9 = 0x1c;
    goto LAB_1007ff1db;
  case 0x1d:
    local_a8 = (QArrayData *)CONCAT44(uVar6,*(undefined4 *)param_4[1]);
    local_68 = (QArrayData *)0x0;
    local_60 = &local_a8;
    ppQVar8 = &local_68;
    iVar9 = 0x1d;
    goto LAB_1007ff1db;
  case 0x1e:
    iVar9 = 0x1e;
    goto LAB_1007feebf;
  case 0x1f:
    local_80 = (QArrayData **)param_4[1];
    local_68 = (QArrayData *)CONCAT44(uVar5,*(undefined4 *)param_4[2]);
    local_88 = (QArrayData *)0x0;
    ppQStack_78 = &local_68;
    ppQVar8 = &local_88;
    iVar9 = 0x1f;
    goto LAB_1007ff1db;
  case 0x20:
    local_a8 = (QArrayData *)CONCAT44(uVar6,*(undefined4 *)param_4[1]);
    local_68 = (QArrayData *)0x0;
    local_60 = &local_a8;
    ppQVar8 = &local_68;
    iVar9 = 0x20;
    goto LAB_1007ff1db;
  case 0x21:
    local_94._0_4_ = *(undefined4 *)param_4[2];
    local_98 = *(undefined4 *)param_4[3];
    local_a8 = (QArrayData *)CONCAT44(uVar6,*(undefined4 *)param_4[1]);
    local_68 = (QArrayData *)0x0;
    local_60 = &local_a8;
    puStack_58 = local_94;
    local_50 = &local_98;
    ppQVar8 = &local_68;
    iVar9 = 0x21;
    goto LAB_1007ff1db;
  case 0x22:
    local_94._4_4_ = *(undefined4 *)param_4[1];
    local_b0 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_b0 + 1U) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + 1;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,*(int *)local_b0 != 0);
    }
    local_88 = (QArrayData *)0x0;
    local_80 = (QArrayData **)(local_94 + 4);
    ppQStack_78 = &local_b0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fceb0,0x22,&local_88);
    if (*(int *)local_b0 == -1) break;
    local_180.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_b0;
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,*(int *)local_b0 != 0);
      if (*(int *)local_b0 != 0) break;
    }
    goto LAB_1007fe62b;
  case 0x23:
    local_8c = *(undefined4 *)param_4[1];
    local_b8 = *(QArrayData **)param_4[2];
    if (1 < *(int *)local_b8 + 1U) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + 1;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,*(int *)local_b8 != 0);
    }
    local_88 = (QArrayData *)0x0;
    local_80 = (QArrayData **)&local_8c;
    ppQStack_78 = &local_b8;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fceb0,0x23,&local_88);
    if (*(int *)local_b8 == -1) break;
    local_180.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_b8;
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      bVar12 = *(int *)local_b8 != 0;
      UNLOCK();
      local_68 = (QArrayData *)CONCAT71(local_68._1_7_,bVar12);
joined_r0x0001007fe61e:
      if (bVar12) break;
    }
LAB_1007fe62b:
    QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
    break;
  case 0x24:
    local_a8 = (QArrayData *)CONCAT44(uVar6,*(undefined4 *)param_4[1]);
    local_68 = (QArrayData *)0x0;
    local_60 = &local_a8;
    ppQVar8 = &local_68;
    iVar9 = 0x24;
    goto LAB_1007ff1db;
  case 0x25:
    local_a8 = (QArrayData *)CONCAT44(uVar6,*(undefined4 *)param_4[1]);
    local_68 = (QArrayData *)0x0;
    local_60 = &local_a8;
    ppQVar8 = &local_68;
    iVar9 = 0x25;
    goto LAB_1007ff1db;
  case 0x26:
    local_60 = (QArrayData **)param_4[1];
    local_68 = (QArrayData *)0x0;
    ppQVar8 = &local_68;
    iVar9 = 0x26;
    goto LAB_1007ff1db;
  case 0x27:
    local_a8 = (QArrayData *)CONCAT44(uVar6,*(undefined4 *)param_4[1]);
    local_68 = (QArrayData *)0x0;
    local_60 = &local_a8;
    ppQVar8 = &local_68;
    iVar9 = 0x27;
    goto LAB_1007ff1db;
  case 0x28:
    iVar9 = 0x28;
LAB_1007feebf:
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fceb0,iVar9,(void **)0x0)
    ;
    return;
  case 0x29:
    local_80 = (QArrayData **)param_4[1];
    local_68 = (QArrayData *)CONCAT71(local_68._1_7_,*(undefined1 *)param_4[2]);
    local_88 = (QArrayData *)0x0;
    ppQStack_78 = &local_68;
    ppQVar8 = &local_88;
    iVar9 = 0x29;
    goto LAB_1007ff1db;
  case 0x2a:
    ppQStack_78 = (QArrayData **)param_4[2];
    local_68 = (QArrayData *)CONCAT44(uVar5,*(undefined4 *)param_4[1]);
    local_88 = (QArrayData *)0x0;
    local_80 = &local_68;
    ppQVar8 = &local_88;
    iVar9 = 0x2a;
    goto LAB_1007ff1db;
  case 0x2b:
    local_60 = (QArrayData **)param_4[1];
    local_68 = (QArrayData *)0x0;
    ppQVar8 = &local_68;
    iVar9 = 0x2b;
    goto LAB_1007ff1db;
  case 0x2c:
    local_60 = (QArrayData **)param_4[1];
    local_68 = (QArrayData *)0x0;
    ppQVar8 = &local_68;
    iVar9 = 0x2c;
    goto LAB_1007ff1db;
  case 0x2d:
    local_60 = (QArrayData **)param_4[1];
    local_68 = (QArrayData *)0x0;
    ppQVar8 = &local_68;
    iVar9 = 0x2d;
    goto LAB_1007ff1db;
  case 0x2e:
    ppQStack_78 = (QArrayData **)param_4[2];
    local_68 = (QArrayData *)CONCAT44(uVar5,*(undefined4 *)param_4[1]);
    local_88 = (QArrayData *)0x0;
    local_80 = &local_68;
    ppQVar8 = &local_88;
    iVar9 = 0x2e;
    goto LAB_1007ff1db;
  case 0x2f:
    ppQStack_78 = (QArrayData **)param_4[2];
    local_68 = (QArrayData *)CONCAT44(uVar5,*(undefined4 *)param_4[1]);
    local_88 = (QArrayData *)0x0;
    local_80 = &local_68;
    ppQVar8 = &local_88;
    iVar9 = 0x2f;
    goto LAB_1007ff1db;
  case 0x30:
    ppQStack_78 = (QArrayData **)param_4[2];
    local_68 = (QArrayData *)CONCAT44(uVar5,*(undefined4 *)param_4[1]);
    local_88 = (QArrayData *)0x0;
    local_80 = &local_68;
    ppQVar8 = &local_88;
    iVar9 = 0x30;
    goto LAB_1007ff1db;
  case 0x31:
    ppQStack_78 = (QArrayData **)param_4[2];
    local_68 = (QArrayData *)CONCAT44(uVar5,*(undefined4 *)param_4[1]);
    local_88 = (QArrayData *)0x0;
    local_80 = &local_68;
    ppQVar8 = &local_88;
    iVar9 = 0x31;
    goto LAB_1007ff1db;
  case 0x32:
    ppQStack_78 = (QArrayData **)param_4[2];
    local_68 = (QArrayData *)CONCAT44(uVar5,*(undefined4 *)param_4[1]);
    local_88 = (QArrayData *)0x0;
    local_80 = &local_68;
    ppQVar8 = &local_88;
    iVar9 = 0x32;
    goto LAB_1007ff1db;
  case 0x33:
    puStack_58 = (undefined1 *)param_4[2];
    local_50 = (undefined4 *)param_4[3];
    local_a8 = (QArrayData *)CONCAT44(uVar6,*(undefined4 *)param_4[1]);
    local_68 = (QArrayData *)0x0;
    local_60 = &local_a8;
    ppQVar8 = &local_68;
    iVar9 = 0x33;
    goto LAB_1007ff1db;
  case 0x34:
    local_60 = (QArrayData **)param_4[1];
    puStack_58 = (undefined1 *)param_4[2];
    local_50 = (undefined4 *)param_4[3];
    local_68 = (QArrayData *)0x0;
    ppQVar8 = &local_68;
    iVar9 = 0x34;
    goto LAB_1007ff1db;
  case 0x35:
    local_60 = (QArrayData **)param_4[1];
    puStack_58 = (undefined1 *)param_4[2];
    local_50 = (undefined4 *)param_4[3];
    local_68 = (QArrayData *)0x0;
    ppQVar8 = &local_68;
    iVar9 = 0x35;
    goto LAB_1007ff1db;
  case 0x36:
    local_80 = (QArrayData **)param_4[1];
    ppQStack_78 = (QArrayData **)param_4[2];
    local_88 = (QArrayData *)0x0;
    ppQVar8 = &local_88;
    iVar9 = 0x36;
    goto LAB_1007ff1db;
  case 0x37:
    local_a8 = (QArrayData *)CONCAT71(local_a8._1_7_,*(undefined1 *)param_4[1]);
    local_68 = (QArrayData *)0x0;
    local_60 = &local_a8;
    ppQVar8 = &local_68;
    iVar9 = 0x37;
    goto LAB_1007ff1db;
  case 0x38:
    local_a8 = (QArrayData *)CONCAT71(local_a8._1_7_,*(undefined1 *)param_4[1]);
    local_68 = (QArrayData *)0x0;
    local_60 = &local_a8;
    ppQVar8 = &local_68;
    iVar9 = 0x38;
LAB_1007ff1db:
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fceb0,iVar9,ppQVar8);
    break;
  case 0x39:
                    /* WARNING: Could not recover jumptable at 0x0001007ff22a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x78))(param_1,*(undefined4 *)param_4[1]);
    return;
  case 0x3a:
    uVar7 = FUN_100157d20(param_1);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x3b:
    FUN_10015e110(param_1);
    return;
  case 0x3c:
    FUN_10015e050(param_1);
    return;
  case 0x3d:
    FUN_1001666e0(param_1,*(undefined4 *)param_4[1]);
    return;
  case 0x3e:
    uVar7 = FUN_10015e230(param_1,param_4[1],*(undefined1 *)param_4[2],param_4[3],param_4[4]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x3f:
    local_c0 = 0x80000000;
    local_c8.field7 = 0;
    uVar7 = FUN_10015e230(param_1,param_4[1],*(undefined1 *)param_4[2],param_4[3],&local_c8);
    QVariant::~QVariant((QVariant *)&local_c8);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x40:
    local_d0 = (QArrayData *)PTR_shared_null_1021e1288;
    local_d8 = 0x80000000;
    local_e0.field7 = 0;
    uVar7 = FUN_10015e230(param_1,param_4[1],*(undefined1 *)param_4[2],&local_d0,&local_e0);
    QVariant::~QVariant((QVariant *)&local_e0);
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        UNLOCK();
        local_68 = (QArrayData *)CONCAT71(local_68._1_7_,*(int *)local_d0 != 0);
        if (*(int *)local_d0 != 0) goto LAB_1007ff3be;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_1007ff3be:
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x41:
    local_e8 = (QArrayData *)PTR_shared_null_1021e1288;
    local_f0 = 0x80000000;
    local_f8.field7 = 0;
    uVar7 = FUN_10015e230(param_1,param_4[1],1,&local_e8,&local_f8);
    QVariant::~QVariant((QVariant *)&local_f8);
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        UNLOCK();
        local_68 = (QArrayData *)CONCAT71(local_68._1_7_,*(int *)local_e8 != 0);
        if (*(int *)local_e8 != 0) goto LAB_1007ff459;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
LAB_1007ff459:
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x42:
    uVar7 = FUN_10015e4c0(param_1,param_4[1],param_4[2],*(undefined4 *)param_4[3],param_4[4],
                          param_4[5]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x43:
    local_100 = 0x80000000;
    local_108.field7 = 0;
    uVar7 = FUN_10015e4c0(param_1,param_4[1],param_4[2],*(undefined4 *)param_4[3],param_4[4],
                          &local_108);
    QVariant::~QVariant((QVariant *)&local_108);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x44:
    local_110 = (QArrayData *)PTR_shared_null_1021e1288;
    local_118 = 0x80000000;
    local_120.field7 = 0;
    uVar7 = FUN_10015e4c0(param_1,param_4[1],param_4[2],*(undefined4 *)param_4[3],&local_110,
                          &local_120);
    QVariant::~QVariant((QVariant *)&local_120);
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        UNLOCK();
        local_68 = (QArrayData *)CONCAT71(local_68._1_7_,*(int *)local_110 != 0);
        if (*(int *)local_110 != 0) goto LAB_1007ff584;
      }
      QArrayData::deallocate(local_110,2,8);
    }
LAB_1007ff584:
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x45:
    local_128 = (QArrayData *)PTR_shared_null_1021e1288;
    local_130 = 0x80000000;
    local_138.field7 = 0;
    uVar7 = FUN_10015e4c0(param_1,param_4[1],param_4[2],0,&local_128,&local_138);
    QVariant::~QVariant((QVariant *)&local_138);
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        UNLOCK();
        local_68 = (QArrayData *)CONCAT71(local_68._1_7_,*(int *)local_128 != 0);
        if (*(int *)local_128 != 0) goto LAB_1007ff620;
      }
      QArrayData::deallocate(local_128,2,8);
    }
LAB_1007ff620:
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x46:
    uVar7 = FUN_10015e7c0(param_1,param_4[1]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x47:
    uVar7 = FUN_10015eb90(param_1,param_4[1],param_4[2]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x48:
    lVar11 = param_4[1];
    lVar4 = param_4[2];
    local_140 = *(long *)param_4[3];
    if (local_140 != 0) {
      _PrlHandle_AddRef();
    }
    uVar7 = FUN_10015e160(param_1,lVar11,lVar4,&local_140,*(undefined4 *)param_4[4]);
    if (local_140 != 0) {
      _PrlHandle_Free();
    }
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x49:
    lVar11 = param_4[1];
    lVar4 = param_4[2];
    local_148 = *(long *)param_4[3];
    if (local_148 != 0) {
      _PrlHandle_AddRef();
    }
    uVar7 = FUN_10015e160(param_1,lVar11,lVar4,&local_148,0);
    if (local_148 != 0) {
      _PrlHandle_Free();
    }
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x4a:
    uVar7 = FUN_10015eed0(param_1,param_4[1]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x4b:
    uVar7 = FUN_10015efb0(param_1,param_4[1],param_4[2],param_4[3],*(undefined4 *)param_4[4],
                          param_4[5]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x4c:
    local_150 = (QArrayData *)PTR_shared_null_1021e1288;
    uVar7 = FUN_10015efb0(param_1,param_4[1],param_4[2],param_4[3],*(undefined4 *)param_4[4],
                          &local_150);
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        UNLOCK();
        local_68 = (QArrayData *)CONCAT71(local_68._1_7_,*(int *)local_150 != 0);
        if (*(int *)local_150 != 0) goto LAB_1007ff7f8;
      }
      QArrayData::deallocate(local_150,2,8);
    }
LAB_1007ff7f8:
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x4d:
    uVar7 = FUN_10015f470(param_1,*(undefined8 *)param_4[1],*(undefined8 *)param_4[2],param_4[3],
                          *(undefined4 *)param_4[4]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x4e:
    uVar7 = FUN_10015f670(param_1,*(undefined8 *)param_4[1]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x4f:
    uVar7 = FUN_10015f760(param_1,param_4[1],param_4[2],param_4[3],param_4[4],
                          *(undefined4 *)param_4[5]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x50:
    uVar7 = FUN_10015fa80(param_1,param_4[1],param_4[2],param_4[3],param_4[4],param_4[5],
                          *(undefined4 *)param_4[6]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x51:
    uVar7 = FUN_10015fe60(param_1,param_4[1],param_4[2],param_4[3],param_4[4],
                          *(undefined4 *)param_4[5]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x52:
    uVar7 = FUN_100160180(param_1,param_4[1],param_4[2],*(undefined4 *)param_4[3]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x53:
    uVar7 = FUN_1001605d0(param_1);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x54:
    uVar7 = FUN_100160690(param_1);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x55:
    uVar7 = FUN_100161ad0(param_1);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x56:
    uVar7 = FUN_100161a10(param_1);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x57:
    uVar7 = FUN_1001605a0(param_1,param_4[1]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x58:
    local_158 = (QArrayData *)PTR_shared_null_1021e1288;
    uVar7 = FUN_1001605a0(param_1,&local_158);
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        UNLOCK();
        local_68 = (QArrayData *)CONCAT71(local_68._1_7_,*(int *)local_158 != 0);
        if (*(int *)local_158 != 0) goto LAB_1007ffa13;
      }
      QArrayData::deallocate(local_158,2,8);
    }
LAB_1007ffa13:
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x59:
    uVar7 = FUN_1001603f0(param_1);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x5a:
    uVar7 = FUN_1001604b0(param_1);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x5b:
    uVar7 = FUN_100161b90(param_1,param_4[1]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x5c:
    uVar6 = FUN_100161cf0(param_1,param_4[1]);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar6;
    }
    break;
  case 0x5d:
    local_160 = *(long *)param_4[1];
    if (local_160 != 0) {
      _PrlHandle_AddRef();
    }
    uVar7 = FUN_100160750(param_1,&local_160);
    if (local_160 != 0) {
      _PrlHandle_Free();
    }
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x5e:
    local_168 = 0;
    uVar7 = FUN_100160750(param_1,&local_168);
    if (local_168 != 0) {
      _PrlHandle_Free();
    }
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x5f:
    local_170 = *(long *)param_4[1];
    if (local_170 != 0) {
      _PrlHandle_AddRef();
    }
    uVar7 = FUN_100160820(param_1,&local_170);
    if (local_170 != 0) {
      _PrlHandle_Free();
    }
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x60:
    local_178 = *(long *)param_4[1];
    if (local_178 != 0) {
      _PrlHandle_AddRef();
    }
    uVar7 = FUN_1001608e0(param_1,&local_178);
    if (local_178 != 0) {
      _PrlHandle_Free();
    }
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x61:
    uVar7 = FUN_1001609d0(param_1);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x62:
    uVar7 = FUN_100160a90(param_1,param_4[1],*(undefined8 *)param_4[2]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 99:
    uVar7 = FUN_1001612d0(param_1,param_4[1]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 100:
    uVar7 = FUN_1001614b0(param_1,*(undefined4 *)param_4[1]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x65:
    uVar7 = FUN_1001614b0(param_1,0x41e);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x66:
    uVar7 = FUN_100176140(param_1,param_4[1]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x67:
    uVar7 = FUN_1001762b0(param_1,param_4[1],*(undefined4 *)param_4[2]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x68:
    uVar7 = FUN_100174800(param_1,param_4[1]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x69:
    uVar7 = FUN_100174ab0(param_1,param_4[1]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x6a:
    uVar7 = FUN_100175050(param_1,param_4[1]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x6b:
    uVar7 = FUN_100175350(param_1);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x6c:
    uVar7 = FUN_100177b60(param_1,param_4[1]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x6d:
    uVar7 = FUN_100177760(param_1,param_4[1]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x6e:
    uVar7 = FUN_100177920(param_1,param_4[1],param_4[2]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x6f:
    uVar7 = FUN_100177d20(param_1,param_4[1]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x70:
    uVar7 = FUN_100177f40(param_1);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x71:
    uVar7 = FUN_1001781c0(param_1);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar7;
    }
    break;
  case 0x72:
    FUN_100178340(param_1,*(undefined4 *)param_4[1]);
    return;
  case 0x73:
    FUN_1001780c0(param_1,*(undefined4 *)param_4[1]);
    return;
  }
switchD_1007fdbcb_default:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

