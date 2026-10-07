
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1005a5be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long *param_9,uint param_10,undefined8 param_11,undefined8 param_12,
                   undefined8 param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  int *piVar6;
  undefined *puVar7;
  char in_AL;
  uint uVar8;
  void *pvVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  long lVar15;
  char *pcVar16;
  long *plVar17;
  bool bVar18;
  QString *local_1b0;
  undefined8 local_1a8;
  long local_1a0;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 local_d8;
  long *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  long *local_a8;
  QString local_a0;
  long *local_98;
  undefined1 local_89;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  undefined4 local_54;
  long *local_50;
  undefined1 *local_48;
  long local_38;
  
  if (in_AL != '\0') {
    local_148 = param_1;
    local_138 = param_2;
    local_128 = param_3;
    local_118 = param_4;
    local_108 = param_5;
    local_f8 = param_6;
    local_e8 = param_7;
    local_d8 = param_8;
  }
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_48 = local_178;
  local_50 = (long *)&stack0x00000008;
  local_54 = 0x30;
  local_58 = 0x10;
  local_168 = param_11;
  local_160 = param_12;
  local_158 = param_13;
  local_150 = param_14;
  FUN_1007d6870(&local_68);
  plVar12 = (long *)PTR_shared_null_100ba2188;
  local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_a8 = (long *)PTR_shared_null_100ba2188;
  local_b0 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_b8 = (QArrayData *)PTR_shared_null_100ba20d0;
  FUN_1007d6870(&local_78);
  if (1 < DAT_1011b55f8) {
    if (param_10 < 0x11) {
      pcVar16 = (&PTR_s_None__invalid__100bc6880)[param_10];
    }
    else {
      pcVar16 = "Undefined operation";
    }
    FUN_1008e3970("","vdisk",2,"Wait to start process: %s",pcVar16);
  }
  (**(code **)(*param_9 + 0xe8))(param_9);
  (**(code **)(*param_9 + 0xf0))(param_9);
  if (1 < DAT_1011b55f8) {
    if (param_10 < 0x11) {
      pcVar16 = (&PTR_s_None__invalid__100bc6880)[param_10];
    }
    else {
      pcVar16 = "Undefined operation";
    }
    FUN_1008e3970("","vdisk",2,"Ok, ready to start process: %s",pcVar16);
  }
  uVar8 = FUN_1005a8230(param_9,0,0);
  plVar17 = (long *)(ulong)uVar8;
  if ((int)uVar8 < 0) {
    FUN_1008e3970("","vdisk",0,"Error initializing manager 0x%x",plVar17);
    goto LAB_1005a6f42;
  }
  if (1 < DAT_1011b55f8) {
    if (param_10 < 0x11) {
      pcVar16 = (&PTR_s_None__invalid__100bc6880)[param_10];
    }
    else {
      pcVar16 = "Undefined operation";
    }
    FUN_1008e3970("","vdisk",2,"Starting process: %s",pcVar16);
  }
  param_9[7] = 0;
  param_9[0x14] = 0;
  param_9[0x13] = 0;
  *(undefined1 *)(param_9 + 0x19) = 1;
  *(undefined1 *)((long)param_9 + 0xc9) = 0;
  *(undefined1 *)(param_9 + 0x17) = 0;
  param_9[0x10] = (long)param_9;
  *(undefined1 *)(param_9 + 0x11) = 0;
  *(undefined4 *)((long)param_9 + 0xcc) = 0;
  *(uint *)(param_9 + 0x12) = param_10;
  puVar7 = PTR_shared_null_100ba2188;
  if (0xf < param_10 - 1) {
switchD_1005a5e62_caseD_5:
    if (param_10 < 0x11) {
      pcVar16 = (&PTR_s_None__invalid__100bc6880)[param_10];
    }
    else {
      pcVar16 = "Undefined operation";
    }
    uVar8 = 0x80021000;
    FUN_1008e3970("","vdisk",0,"Start transaction with unknown process type %s",pcVar16);
    goto LAB_1005a6efc;
  }
  plVar2 = param_9 + 0x13;
  switch(param_10) {
  default:
    if (0x28 < (ulong)(long)(int)local_58) {
      local_68 = *(undefined8 *)*local_50;
      local_60 = ((undefined8 *)*local_50)[1];
      uVar14 = local_58;
      local_50 = local_50 + 1;
LAB_1005a635c:
      local_58 = uVar14;
      *plVar2 = *local_50;
      uVar8 = local_58;
      local_50 = local_50 + 1;
      break;
    }
    uVar14 = local_58 + 8;
    local_68 = **(undefined8 **)(local_48 + (int)local_58);
    local_60 = (*(undefined8 **)(local_48 + (int)local_58))[1];
    if (0x28 < uVar14) goto LAB_1005a635c;
    uVar8 = local_58 + 0x10;
    *plVar2 = *(long *)(local_48 + (int)uVar14);
    if (0x28 < uVar8) break;
LAB_1005a66f2:
    plVar12 = (long *)(local_48 + (int)uVar8);
    local_58 = local_58 + 0x18;
    goto LAB_1005a6892;
  case 2:
    if ((ulong)(long)(int)local_58 < 0x29) {
      uVar8 = local_58 + 8;
      local_78 = **(undefined8 **)(local_48 + (int)local_58);
      local_70 = (*(undefined8 **)(local_48 + (int)local_58))[1];
      if (0x28 < uVar8) goto LAB_1005a63c8;
      uVar14 = local_58 + 0x10;
      local_1a8 = **(undefined8 **)(local_48 + (int)uVar8);
      if (0x28 < uVar14) goto LAB_1005a63e1;
      uVar8 = local_58 + 0x18;
      uVar3 = **(undefined4 **)(local_48 + (int)uVar14);
      if (0x28 < uVar8) goto LAB_1005a63f9;
      uVar14 = local_58 + 0x20;
      *plVar2 = *(long *)(local_48 + (int)uVar8);
      if (0x28 < uVar14) goto LAB_1005a640b;
      local_58 = local_58 + 0x28;
      plVar12 = (long *)(local_48 + (int)uVar14);
    }
    else {
      local_78 = *(undefined8 *)*local_50;
      local_70 = ((undefined8 *)*local_50)[1];
      uVar8 = local_58;
      local_50 = local_50 + 1;
LAB_1005a63c8:
      local_58 = uVar8;
      local_1a8 = *(undefined8 *)*local_50;
      uVar14 = local_58;
      local_50 = local_50 + 1;
LAB_1005a63e1:
      local_58 = uVar14;
      uVar3 = *(undefined4 *)*local_50;
      uVar8 = local_58;
      local_50 = local_50 + 1;
LAB_1005a63f9:
      local_58 = uVar8;
      *plVar2 = *local_50;
      uVar14 = local_58;
      local_50 = local_50 + 1;
LAB_1005a640b:
      local_58 = uVar14;
      plVar12 = local_50;
      local_50 = local_50 + 1;
    }
    param_9[7] = *plVar12;
    iVar4 = 0;
    local_1a0 = 0;
    goto LAB_1005a68bd;
  case 4:
    if ((ulong)(long)(int)local_58 < 0x29) {
      uVar8 = local_58 + 8;
      local_68 = **(undefined8 **)(local_48 + (int)local_58);
      local_60 = (*(undefined8 **)(local_48 + (int)local_58))[1];
      if (0x28 < uVar8) goto LAB_1005a6461;
      uVar14 = local_58 + 0x10;
      bVar18 = *(int *)(local_48 + (int)uVar8) != 0;
      if (0x28 < uVar14) goto LAB_1005a647a;
      uVar8 = local_58 + 0x18;
      *plVar2 = *(long *)(local_48 + (int)uVar14);
      if (0x28 < uVar8) goto LAB_1005a648c;
      local_58 = local_58 + 0x20;
      plVar12 = (long *)(local_48 + (int)uVar8);
    }
    else {
      local_68 = *(undefined8 *)*local_50;
      local_60 = ((undefined8 *)*local_50)[1];
      uVar8 = local_58;
      local_50 = local_50 + 1;
LAB_1005a6461:
      local_58 = uVar8;
      bVar18 = (int)*local_50 != 0;
      uVar14 = local_58;
      local_50 = local_50 + 1;
LAB_1005a647a:
      local_58 = uVar14;
      *plVar2 = *local_50;
      uVar8 = local_58;
      local_50 = local_50 + 1;
LAB_1005a648c:
      local_58 = uVar8;
      plVar12 = local_50;
      local_50 = local_50 + 1;
    }
    param_9[7] = *plVar12;
    uVar8 = FUN_1005a71d0(param_9,&local_68);
    uVar3 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    iVar4 = 0;
    local_1b0 = (QString *)0x0;
    if (-1 < (int)uVar8) goto LAB_1005a68cf;
    goto LAB_1005a6efc;
  case 5:
  case 8:
    goto switchD_1005a5e62_caseD_5;
  case 6:
    if ((ulong)(long)(int)local_58 < 0x29) {
      uVar8 = local_58 + 8;
      uVar3 = **(undefined4 **)(local_48 + (int)local_58);
      if (0x28 < uVar8) goto LAB_1005a6514;
      uVar14 = local_58 + 0x10;
      *plVar2 = *(long *)(local_48 + (int)uVar8);
      if (0x28 < uVar14) goto LAB_1005a6526;
      local_58 = local_58 + 0x18;
      plVar12 = (long *)(local_48 + (int)uVar14);
    }
    else {
      uVar3 = *(undefined4 *)*local_50;
      uVar8 = local_58;
      local_50 = local_50 + 1;
LAB_1005a6514:
      local_58 = uVar8;
      *plVar2 = *local_50;
      uVar14 = local_58;
      local_50 = local_50 + 1;
LAB_1005a6526:
      local_58 = uVar14;
      plVar12 = local_50;
      local_50 = local_50 + 1;
    }
    param_9[7] = *plVar12;
    iVar4 = 0;
    local_1a0 = 0;
    local_1a8 = 0;
    goto LAB_1005a68bd;
  case 7:
    uVar8 = 0x80000003;
    if (param_9[0xd] != 1) goto LAB_1005a6efc;
    if ((ulong)(long)(int)local_58 < 0x29) {
      uVar8 = local_58 + 8;
      local_1a0 = *(long *)(local_48 + (int)local_58);
      if (0x28 < uVar8) goto LAB_1005a6d04;
      uVar14 = local_58 + 0x10;
      iVar4 = *(int *)(local_48 + (int)uVar8);
      if (0x28 < uVar14) goto LAB_1005a6d19;
      uVar8 = local_58 + 0x18;
      param_9[0x14] = *(long *)(local_48 + (int)uVar14);
      if (0x28 < uVar8) goto LAB_1005a6d2f;
      local_58 = local_58 + 0x20;
      plVar12 = (long *)(local_48 + (int)uVar8);
    }
    else {
      local_1a0 = *local_50;
      uVar8 = local_58;
      local_50 = local_50 + 1;
LAB_1005a6d04:
      local_58 = uVar8;
      iVar4 = (int)*local_50;
      uVar14 = local_58;
      local_50 = local_50 + 1;
LAB_1005a6d19:
      local_58 = uVar14;
      param_9[0x14] = *local_50;
      uVar8 = local_58;
      local_50 = local_50 + 1;
LAB_1005a6d2f:
      local_58 = uVar8;
      plVar12 = local_50;
      local_50 = local_50 + 1;
    }
    param_9[7] = *plVar12;
    goto LAB_1005a68ab;
  case 9:
    if ((ulong)(long)(int)local_58 < 0x29) {
      uVar8 = local_58 + 8;
      local_68 = **(undefined8 **)(local_48 + (int)local_58);
      local_60 = (*(undefined8 **)(local_48 + (int)local_58))[1];
      if (0x28 < uVar8) goto LAB_1005a6d49;
      local_58 = local_58 + 0x10;
      plVar10 = (long *)(local_48 + (int)uVar8);
    }
    else {
      local_68 = *(undefined8 *)*local_50;
      local_60 = ((undefined8 *)*local_50)[1];
      uVar8 = local_58;
      local_50 = local_50 + 1;
LAB_1005a6d49:
      local_58 = uVar8;
      plVar10 = local_50;
      local_50 = local_50 + 1;
    }
    plVar10 = (long *)*plVar10;
    plVar5 = (long *)*plVar10;
    if (plVar5 != plVar12) {
      plVar17 = (long *)puVar7;
      local_98 = plVar5;
      if ((int)*plVar5 != -1) {
        if ((int)*plVar5 == 0) {
          QListData::detach((int)&local_98);
          iVar4 = (int)local_98[1];
          if (iVar4 != *(int *)((long)local_98 + 0xc)) {
            lVar15 = *plVar10;
            puVar13 = (undefined8 *)(lVar15 + 0x10 + (long)*(int *)(lVar15 + 8) * 8);
            plVar12 = local_98 + (long)iVar4 + 2;
            lVar15 = (long)*(int *)((long)local_98 + 0xc) * 8 + (long)iVar4 * -8;
            do {
              piVar6 = (int *)*puVar13;
              *plVar12 = (long)piVar6;
              if (1 < *piVar6 + 1U) {
                LOCK();
                *piVar6 = *piVar6 + 1;
                local_89 = *piVar6 != 0;
                UNLOCK();
              }
              plVar12 = plVar12 + 1;
              puVar13 = puVar13 + 1;
              lVar15 = lVar15 + -8;
              plVar17 = local_a8;
            } while (lVar15 != 0);
          }
        }
        else {
          LOCK();
          *(int *)plVar5 = (int)*plVar5 + 1;
          local_89 = (int)*plVar5 != 0;
          UNLOCK();
        }
      }
      plVar12 = local_98;
      local_a8 = local_98;
      local_98 = plVar17;
      FUN_100013180(&local_98);
    }
    if (local_58 < 0x29) {
      uVar8 = local_58 + 8;
      *plVar2 = *(long *)(local_48 + (int)local_58);
      if (0x28 < uVar8) goto LAB_1005a6e67;
      local_58 = local_58 + 0x10;
      plVar10 = (long *)(local_48 + (int)uVar8);
    }
    else {
      *plVar2 = *local_50;
      uVar8 = local_58;
      local_50 = local_50 + 1;
LAB_1005a6e67:
      local_58 = uVar8;
      plVar10 = local_50;
      local_50 = local_50 + 1;
    }
    param_9[7] = *plVar10;
    if (param_9[0xd] != (ulong)(uint)(*(int *)((long)plVar12 + 0xc) - (int)plVar12[1])) {
      uVar8 = 0x80000003;
      FUN_1008e3970("","vdisk",0,"Pathes count %u is not equal to disks count %zu");
      goto LAB_1005a6efc;
    }
    local_1b0 = (QString *)(plVar12 + (long)(int)plVar12[1] + 2);
    bVar18 = false;
    uVar3 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    iVar4 = 0;
    goto LAB_1005a68cf;
  case 10:
    uVar11 = (ulong)(int)local_58;
    if (uVar11 < 0x29) {
      local_58 = local_58 + 8;
      plVar12 = (long *)(local_48 + uVar11);
    }
    else {
      plVar12 = local_50;
      local_50 = local_50 + 1;
    }
    QByteArray::operator=((QByteArray *)&local_b0,(QByteArray *)*plVar12);
    uVar11 = (ulong)(int)local_58;
    if (uVar11 < 0x29) {
      local_58 = local_58 + 8;
      plVar12 = (long *)(local_48 + uVar11);
    }
    else {
      plVar12 = local_50;
      local_50 = local_50 + 1;
    }
    QByteArray::operator=((QByteArray *)&local_b8,(QByteArray *)*plVar12);
    goto LAB_1005a68a2;
  case 0xb:
    uVar11 = (ulong)(int)local_58;
    if (uVar11 < 0x29) {
      local_58 = local_58 + 8;
      plVar12 = (long *)(local_48 + uVar11);
    }
    else {
      plVar12 = local_50;
      local_50 = local_50 + 1;
    }
    QByteArray::operator=((QByteArray *)&local_b0,(QByteArray *)*plVar12);
    if ((ulong)(long)(int)local_58 < 0x29) {
      uVar8 = local_58 + 8;
      local_68 = **(undefined8 **)(local_48 + (int)local_58);
      local_60 = (*(undefined8 **)(local_48 + (int)local_58))[1];
      if (uVar8 < 0x29) {
        uVar14 = local_58 + 0x10;
        *(bool *)(param_9 + 0x19) = *(int *)(local_48 + (int)uVar8) != 0;
        if (0x28 < uVar14) goto LAB_1005a6855;
        uVar8 = local_58 + 0x18;
        param_9[0x14] = *(long *)(local_48 + (int)uVar14);
        if (uVar8 < 0x29) {
          plVar12 = (long *)(local_48 + (int)uVar8);
          local_58 = local_58 + 0x20;
          goto LAB_1005a6892;
        }
        break;
      }
    }
    else {
      local_68 = *(undefined8 *)*local_50;
      local_60 = ((undefined8 *)*local_50)[1];
      uVar8 = local_58;
      local_50 = local_50 + 1;
    }
LAB_1005a683e:
    local_58 = uVar8;
    *(bool *)(param_9 + 0x19) = (int)*local_50 != 0;
    uVar14 = local_58;
    local_50 = local_50 + 1;
    goto LAB_1005a6855;
  case 0xc:
    uVar11 = (ulong)(int)local_58;
    if (uVar11 < 0x29) {
      local_58 = local_58 + 8;
      plVar12 = (long *)(local_48 + uVar11);
    }
    else {
      plVar12 = local_50;
      local_50 = local_50 + 1;
    }
    QByteArray::operator=((QByteArray *)&local_b0,(QByteArray *)*plVar12);
    uVar8 = local_58;
    if (0x28 < (ulong)(long)(int)local_58) goto LAB_1005a683e;
    uVar14 = local_58 + 8;
    *(bool *)(param_9 + 0x19) = *(int *)(local_48 + (int)local_58) != 0;
    if (uVar14 < 0x29) {
      uVar8 = local_58 + 0x10;
      param_9[0x14] = *(long *)(local_48 + (int)uVar14);
      if (uVar8 < 0x29) goto LAB_1005a66f2;
      break;
    }
LAB_1005a6855:
    local_58 = uVar14;
    param_9[0x14] = *local_50;
    uVar8 = local_58;
    local_50 = local_50 + 1;
    break;
  case 0xd:
  case 0xe:
    if ((ulong)(long)(int)local_58 < 0x29) {
      param_9[0x14] = *(long *)(local_48 + (int)local_58);
joined_r0x0001005a67d8:
      uVar8 = local_58 + 8;
      if (uVar8 < 0x29) {
        plVar12 = (long *)(local_48 + (int)uVar8);
        local_58 = local_58 + 0x10;
        goto LAB_1005a6892;
      }
    }
    else {
      param_9[0x14] = *local_50;
      uVar8 = local_58;
      local_50 = local_50 + 1;
    }
    break;
  case 0xf:
    if ((ulong)(long)(int)local_58 < 0x29) {
      uVar8 = local_58 + 8;
      local_68 = **(undefined8 **)(local_48 + (int)local_58);
      local_60 = (*(undefined8 **)(local_48 + (int)local_58))[1];
      if (0x28 < uVar8) goto LAB_1005a6726;
      uVar14 = local_58 + 0x10;
      bVar18 = *(int *)(local_48 + (int)uVar8) != 0;
      if (0x28 < uVar14) goto LAB_1005a673f;
      uVar8 = local_58 + 0x18;
      *plVar2 = *(long *)(local_48 + (int)uVar14);
      if (0x28 < uVar8) goto LAB_1005a6751;
      local_58 = local_58 + 0x20;
      plVar12 = (long *)(local_48 + (int)uVar8);
    }
    else {
      local_68 = *(undefined8 *)*local_50;
      local_60 = ((undefined8 *)*local_50)[1];
      uVar8 = local_58;
      local_50 = local_50 + 1;
LAB_1005a6726:
      local_58 = uVar8;
      bVar18 = (int)*local_50 != 0;
      uVar14 = local_58;
      local_50 = local_50 + 1;
LAB_1005a673f:
      local_58 = uVar14;
      *plVar2 = *local_50;
      uVar8 = local_58;
      local_50 = local_50 + 1;
LAB_1005a6751:
      local_58 = uVar8;
      plVar12 = local_50;
      local_50 = local_50 + 1;
    }
    param_9[7] = *plVar12;
    iVar4 = 0;
    local_1a0 = 0;
    local_1a8 = 0;
    uVar3 = 0;
    goto LAB_1005a68c6;
  case 0x10:
    uVar11 = (ulong)(int)local_58;
    if (uVar11 < 0x29) {
      local_58 = local_58 + 8;
      plVar12 = (long *)(local_48 + uVar11);
    }
    else {
      plVar12 = local_50;
      local_50 = local_50 + 1;
    }
    QString::operator=(&local_a0,(QString *)*plVar12);
    plVar17 = plVar2;
    if ((ulong)(long)(int)local_58 < 0x29) {
      *plVar2 = *(long *)(local_48 + (int)local_58);
      goto joined_r0x0001005a67d8;
    }
    *plVar2 = *local_50;
    uVar8 = local_58;
    local_50 = local_50 + 1;
  }
  local_58 = uVar8;
  plVar12 = local_50;
  local_50 = local_50 + 1;
LAB_1005a6892:
  param_9[7] = *plVar12;
LAB_1005a68a2:
  iVar4 = 0;
  local_1a0 = 0;
LAB_1005a68ab:
  local_1a8 = 0;
  uVar3 = 0;
LAB_1005a68bd:
  bVar18 = false;
LAB_1005a68c6:
  local_1b0 = (QString *)0x0;
LAB_1005a68cf:
  for (plVar12 = (long *)param_9[0xc]; plVar12 != param_9 + 0xb; plVar12 = (long *)plVar12[1]) {
    local_c0 = (long *)0x0;
    pvVar9 = operator_new(0x90);
    FUN_1005a4c20(pvVar9);
    plVar10 = (long *)FUN_1005a9fc0(pvVar9,0);
    if (plVar10 != (long *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    plVar5 = plVar10;
    if (local_c0 != (long *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      lVar15 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        lVar15 = *local_c0;
        local_c0 = plVar10;
        (**(code **)(lVar15 + 0x10))();
        plVar5 = local_c0;
      }
    }
    local_c0 = plVar5;
    if (plVar10 != (long *)0x0) {
      LOCK();
      plVar5 = plVar10 + 1;
      lVar15 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    plVar10 = (long *)plVar12[2];
    lVar15 = local_c0[2];
    *(long **)(lVar15 + 0x10) = plVar10;
    (**(code **)(*plVar10 + 0x128))();
    *(undefined8 *)(lVar15 + 0x3d) = local_80;
    *(undefined8 *)(lVar15 + 0x35) = local_88;
    lVar15 = local_c0[2];
    *(long **)(lVar15 + 0x18) = param_9;
    if (local_c0 == (long *)0x0) {
      _DAT_0000002d = local_60;
      _DAT_00000025 = local_68;
      *(bool *)(_DAT_00000010 + 0x45) = bVar18;
      lVar15 = 0;
    }
    else {
      *(undefined8 *)(lVar15 + 0x2d) = local_60;
      *(undefined8 *)(lVar15 + 0x25) = local_68;
      lVar15 = local_c0[2];
      *(bool *)(lVar15 + 0x45) = bVar18;
    }
    QByteArray::operator=((QByteArray *)(lVar15 + 0x48),(QByteArray *)&local_b0);
    lVar15 = 0;
    if (local_c0 != (long *)0x0) {
      lVar15 = local_c0[2];
    }
    QByteArray::operator=((QByteArray *)(lVar15 + 0x50),(QByteArray *)&local_b8);
    lVar15 = local_c0[2];
    *(int *)(lVar15 + 0x60) = iVar4;
    *(long *)(lVar15 + 0x68) = local_1a0;
    if (local_c0 == (long *)0x0) {
      lVar15 = 0;
    }
    *(undefined8 *)(lVar15 + 0x78) = local_70;
    *(undefined8 *)(lVar15 + 0x70) = local_78;
    lVar15 = local_c0[2];
    *(undefined8 *)(lVar15 + 0x80) = local_1a8;
    *(undefined4 *)(lVar15 + 0x88) = uVar3;
    if (param_10 == 9) {
      QString::operator=(&local_a0,local_1b0);
      local_1b0 = local_1b0 + 1;
      lVar15 = 0;
      if (local_c0 != (long *)0x0) goto LAB_1005a6acb;
    }
    else {
LAB_1005a6acb:
      lVar15 = local_c0[2];
    }
    QString::operator=((QString *)(lVar15 + 0x58),&local_a0);
    uVar8 = FUN_1005a83e0(param_9);
    uVar14 = (int)uVar8 >> 0x1f & 0xd;
    if (local_c0 != (long *)0x0) {
      LOCK();
      plVar10 = local_c0 + 1;
      lVar15 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
    if (uVar14 == 0xd) goto LAB_1005a6efc;
    if (uVar14 != 0) goto LAB_1005a6f42;
  }
  QMutex::lock();
  uVar8 = (**(code **)(*param_9 + 0x10))(param_9);
  QMutex::unlock();
  if ((int)uVar8 < 0) {
    FUN_1008e3970("","vdisk",0,"Error calling execute() 0x%x",uVar8);
LAB_1005a6efc:
    *(undefined1 *)((long)param_9 + 0x44) = 1;
    FUN_1005a5340(param_9);
    QThread::wait((ulong)(param_9 + 0xe));
    if ((char)param_9[0x19] == '\0') {
      plVar17 = (long *)(ulong)uVar8;
    }
    else if (*(char *)((long)param_9 + 0xc9) == '\0') {
      FUN_1005a8850(param_9);
      plVar17 = (long *)(ulong)uVar8;
    }
    else {
      plVar17 = (long *)(ulong)uVar8;
    }
  }
  else {
    if (param_9[0xd] == 0) {
      if (1 < DAT_1011b55f8) {
        if (param_10 < 0x11) {
          pcVar16 = (&PTR_s_None__invalid__100bc6880)[param_10];
        }
        else {
          pcVar16 = "Undefined operation";
        }
        FUN_1008e3970("","vdisk",2,"Process %s completed with empty disk set",pcVar16);
      }
      (**(code **)(*param_9 + 0xc0))(param_9,0x3ed);
      if ((char)param_9[0x19] != '\0') {
        (**(code **)(*param_9 + 0x1d8))(param_9,0);
      }
    }
    if ((*plVar2 == 0) && (param_9[0x14] == 0)) {
      FUN_1005a5340(param_9);
    }
    else {
      FUN_1005a55b0(param_9);
    }
    uVar8 = *(uint *)((long)param_9 + 0xcc);
    plVar17 = (long *)0x0;
    if ((int)uVar8 < 0) goto LAB_1005a6efc;
  }
LAB_1005a6f42:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_89 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_1005a6f7e;
    }
    QArrayData::deallocate(local_b8,1,8);
  }
LAB_1005a6f7e:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_89 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_1005a6fba;
    }
    QArrayData::deallocate(local_b0,1,8);
  }
LAB_1005a6fba:
  FUN_100013180(&local_a8);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_89 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_1005a7002;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_1005a7002:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return (ulong)plVar17 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

