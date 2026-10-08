
void FUN_100802680(QObject *param_1,int param_2,int param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  QString *pQVar3;
  undefined4 *puVar4;
  ulong uVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long *plVar10;
  void **ppvVar11;
  int iVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  bool bVar19;
  QString local_e8;
  QString local_e0;
  QString local_d8;
  long local_d0;
  long local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  undefined4 local_64;
  undefined4 local_60 [2];
  void *local_58;
  undefined4 *local_50;
  undefined4 *puStack_48;
  undefined4 *local_40;
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar2;
  if (param_2 == 10) {
    puVar4 = (undefined4 *)*param_4;
    plVar10 = (long *)param_4[1];
    pcVar13 = (code *)*plVar10;
    lVar14 = plVar10[1];
    if ((pcVar13 == FUN_1008049b0) && (lVar14 == 0)) {
      *puVar4 = 0;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100804a00) && (lVar14 == 0)) {
      *puVar4 = 1;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100804a50) && (lVar14 == 0)) {
      *puVar4 = 2;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100804aa0) && (lVar14 == 0)) {
      *puVar4 = 3;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100804af0) && (lVar14 == 0)) {
      *puVar4 = 4;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100804b40) && (lVar14 == 0)) {
      *puVar4 = 5;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100804ba0) && (lVar14 == 0)) {
      *puVar4 = 6;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100804c00) && (lVar14 == 0)) {
      *puVar4 = 7;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100804c60) && (lVar14 == 0)) {
      *puVar4 = 8;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100804cc0) && (lVar14 == 0)) {
      *puVar4 = 9;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100804d10) && (lVar14 == 0)) {
      *puVar4 = 10;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100804d60) && (lVar14 == 0)) {
      *puVar4 = 0xb;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100804dc0) && (lVar14 == 0)) {
      *puVar4 = 0xc;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100804e20) && (lVar14 == 0)) {
      *puVar4 = 0xd;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100804e80) && (lVar14 == 0)) {
      *puVar4 = 0xe;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100804ee0) && (lVar14 == 0)) {
      *puVar4 = 0xf;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100804f40) && (lVar14 == 0)) {
      *puVar4 = 0x10;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100804fa0) && (lVar14 == 0)) {
      *puVar4 = 0x11;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100805000) && (lVar14 == 0)) {
      *puVar4 = 0x12;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100805020) && (lVar14 == 0)) {
      *puVar4 = 0x13;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100805040) && (lVar14 == 0)) {
      *puVar4 = 0x14;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100805060) && (lVar14 == 0)) {
      *puVar4 = 0x15;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_1008050c0) && (lVar14 == 0)) {
      *puVar4 = 0x16;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100805120) && (lVar14 == 0)) {
      *puVar4 = 0x17;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100805180) && (lVar14 == 0)) {
      *puVar4 = 0x18;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_1008051e0) && (lVar14 == 0)) {
      *puVar4 = 0x19;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100805240) && (lVar14 == 0)) {
      *puVar4 = 0x1a;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_1008052a0) && (lVar14 == 0)) {
      *puVar4 = 0x1b;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100805300) && (lVar14 == 0)) {
      *puVar4 = 0x1c;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100805360) && (lVar14 == 0)) {
      *puVar4 = 0x1d;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_1008053c0) && (lVar14 == 0)) {
      *puVar4 = 0x1e;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100805420) && (lVar14 == 0)) {
      *puVar4 = 0x1f;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100805480) && (lVar14 == 0)) {
      *puVar4 = 0x20;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_1008054e0) && (lVar14 == 0)) {
      *puVar4 = 0x21;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100805500) && (lVar14 == 0)) {
      *puVar4 = 0x22;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100805560) && (lVar14 == 0)) {
      *puVar4 = 0x23;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100805580) && (lVar14 == 0)) {
      *puVar4 = 0x24;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_1008055e0) && (lVar14 == 0)) {
      *puVar4 = 0x25;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100805600) && (lVar14 == 0)) {
      *puVar4 = 0x26;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100805620) && (lVar14 == 0)) {
      *puVar4 = 0x27;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100805640) && (lVar14 == 0)) {
      *puVar4 = 0x28;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_100805660) && (lVar14 == 0)) {
      *puVar4 = 0x29;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_1008056b0) && (lVar14 == 0)) {
      *puVar4 = 0x2a;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_1008056d0) && (lVar14 == 0)) {
      *puVar4 = 0x2b;
      pcVar13 = (code *)*plVar10;
      lVar14 = plVar10[1];
    }
    if ((pcVar13 == FUN_1008056f0) && (lVar14 == 0)) {
      *puVar4 = 0x2c;
    }
    goto switchD_100802eaf_default;
  }
  if (param_2 == 1) {
    pQVar3 = (QString *)*param_4;
    if (param_3 == 1) {
      FUN_1001884b0(&local_e8,param_1);
      QString::operator=(pQVar3,&local_e8);
      if (*(int *)local_e8.field0_0x0 == -1) goto switchD_100802eaf_default;
      if (*(int *)local_e8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
        bVar19 = *(int *)local_e8.field0_0x0 != 0;
        UNLOCK();
        local_58 = (void *)CONCAT71(local_58._1_7_,bVar19);
joined_r0x000100802f23:
        if (bVar19) goto switchD_100802eaf_default;
      }
    }
    else {
      if (param_3 != 0) goto switchD_100802eaf_default;
      FUN_100188480(&local_e0,param_1);
      QString::operator=(pQVar3,&local_e0);
      if (*(int *)local_e0.field0_0x0 == -1) goto switchD_100802eaf_default;
      local_e8.field0_0x0 = local_e0.field0_0x0;
      if (*(int *)local_e0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
        bVar19 = *(int *)local_e0.field0_0x0 != 0;
        UNLOCK();
        local_58 = (void *)CONCAT71(local_58._1_7_,bVar19);
        goto joined_r0x000100802f23;
      }
    }
LAB_100802f30:
    QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
    goto switchD_100802eaf_default;
  }
  if (param_2 != 0) goto switchD_100802eaf_default;
  switch(param_3) {
  case 0:
    local_60[0] = *(undefined4 *)param_4[1];
    local_50 = local_60;
    iVar12 = 0;
    goto LAB_1008036bf;
  case 1:
    local_50 = (undefined4 *)param_4[1];
    iVar12 = 1;
    goto LAB_1008036bf;
  case 2:
    local_50 = (undefined4 *)param_4[1];
    puStack_48 = (undefined4 *)param_4[2];
    iVar12 = 2;
    goto LAB_1008036bf;
  case 3:
    local_50 = (undefined4 *)param_4[1];
    puStack_48 = (undefined4 *)param_4[2];
    iVar12 = 3;
    goto LAB_1008036bf;
  case 4:
    local_50 = (undefined4 *)param_4[1];
    puStack_48 = (undefined4 *)param_4[2];
    iVar12 = 4;
    goto LAB_1008036bf;
  case 5:
    local_60[0] = *(undefined4 *)param_4[1];
    local_64 = *(undefined4 *)param_4[2];
    local_50 = local_60;
    puStack_48 = &local_64;
    iVar12 = 5;
    goto LAB_1008036bf;
  case 6:
    local_50 = (undefined4 *)param_4[1];
    local_60[0] = *(undefined4 *)param_4[2];
    local_64 = *(undefined4 *)param_4[3];
    puStack_48 = local_60;
    local_40 = &local_64;
    iVar12 = 6;
    goto LAB_1008036bf;
  case 7:
    local_60[0] = *(undefined4 *)param_4[1];
    local_64 = *(undefined4 *)param_4[2];
    local_50 = local_60;
    puStack_48 = &local_64;
    iVar12 = 7;
    goto LAB_1008036bf;
  case 8:
    local_60[0] = *(undefined4 *)param_4[1];
    local_64 = *(undefined4 *)param_4[2];
    local_50 = local_60;
    puStack_48 = &local_64;
    iVar12 = 8;
    goto LAB_1008036bf;
  case 9:
    local_50 = (undefined4 *)param_4[1];
    iVar12 = 9;
    goto LAB_1008036bf;
  case 10:
    local_50 = (undefined4 *)param_4[1];
    iVar12 = 10;
    goto LAB_1008036bf;
  case 0xb:
    local_60[0] = CONCAT31(local_60[0]._1_3_,*(undefined1 *)param_4[1]);
    local_50 = local_60;
    iVar12 = 0xb;
    goto LAB_1008036bf;
  case 0xc:
    local_60[0] = *(undefined4 *)param_4[1];
    local_64 = *(undefined4 *)param_4[2];
    local_50 = local_60;
    puStack_48 = &local_64;
    iVar12 = 0xc;
    goto LAB_1008036bf;
  case 0xd:
    puStack_48 = (undefined4 *)param_4[2];
    local_60[0] = *(undefined4 *)param_4[1];
    local_50 = local_60;
    iVar12 = 0xd;
    goto LAB_1008036bf;
  case 0xe:
    puStack_48 = (undefined4 *)param_4[2];
    local_60[0] = *(undefined4 *)param_4[1];
    local_50 = local_60;
    iVar12 = 0xe;
    goto LAB_1008036bf;
  case 0xf:
    puStack_48 = (undefined4 *)param_4[2];
    local_60[0] = *(undefined4 *)param_4[1];
    local_50 = local_60;
    iVar12 = 0xf;
    goto LAB_1008036bf;
  case 0x10:
    puStack_48 = (undefined4 *)param_4[2];
    local_60[0] = *(undefined4 *)param_4[1];
    local_50 = local_60;
    iVar12 = 0x10;
    goto LAB_1008036bf;
  case 0x11:
    puStack_48 = (undefined4 *)param_4[2];
    local_60[0] = *(undefined4 *)param_4[1];
    local_50 = local_60;
    iVar12 = 0x11;
    goto LAB_1008036bf;
  case 0x12:
    iVar12 = 0x12;
    goto LAB_10080367b;
  case 0x13:
    iVar12 = 0x13;
    goto LAB_10080367b;
  case 0x14:
    iVar12 = 0x14;
    goto LAB_10080367b;
  case 0x15:
    local_60[0] = *(undefined4 *)param_4[1];
    local_50 = local_60;
    iVar12 = 0x15;
    goto LAB_1008036bf;
  case 0x16:
    local_60[0] = *(undefined4 *)param_4[1];
    local_50 = local_60;
    iVar12 = 0x16;
    goto LAB_1008036bf;
  case 0x17:
    local_60[0] = *(undefined4 *)param_4[1];
    local_50 = local_60;
    iVar12 = 0x17;
    goto LAB_1008036bf;
  case 0x18:
    local_60[0] = *(undefined4 *)param_4[1];
    local_50 = local_60;
    iVar12 = 0x18;
    goto LAB_1008036bf;
  case 0x19:
    local_60[0] = *(undefined4 *)param_4[1];
    local_50 = local_60;
    iVar12 = 0x19;
    goto LAB_1008036bf;
  case 0x1a:
    local_60[0] = *(undefined4 *)param_4[1];
    local_50 = local_60;
    iVar12 = 0x1a;
    goto LAB_1008036bf;
  case 0x1b:
    local_60[0] = CONCAT31(local_60[0]._1_3_,*(undefined1 *)param_4[1]);
    local_50 = local_60;
    iVar12 = 0x1b;
    goto LAB_1008036bf;
  case 0x1c:
    local_50 = (undefined4 *)param_4[1];
    local_60[0] = *(undefined4 *)param_4[2];
    puStack_48 = local_60;
    iVar12 = 0x1c;
    goto LAB_1008036bf;
  case 0x1d:
    local_60[0] = *(undefined4 *)param_4[1];
    local_50 = local_60;
    iVar12 = 0x1d;
    goto LAB_1008036bf;
  case 0x1e:
    local_60[0] = *(undefined4 *)param_4[1];
    local_50 = local_60;
    iVar12 = 0x1e;
    goto LAB_1008036bf;
  case 0x1f:
    local_60[0] = *(undefined4 *)param_4[1];
    local_50 = local_60;
    iVar12 = 0x1f;
    goto LAB_1008036bf;
  case 0x20:
    local_60[0] = *(undefined4 *)param_4[1];
    local_50 = local_60;
    iVar12 = 0x20;
    goto LAB_1008036bf;
  case 0x21:
    iVar12 = 0x21;
    goto LAB_10080367b;
  case 0x22:
    local_60[0] = *(undefined4 *)param_4[1];
    local_64 = *(undefined4 *)param_4[2];
    local_50 = local_60;
    puStack_48 = &local_64;
    iVar12 = 0x22;
    goto LAB_1008036bf;
  case 0x23:
    iVar12 = 0x23;
    goto LAB_10080367b;
  case 0x24:
    local_60[0] = CONCAT31(local_60[0]._1_3_,*(undefined1 *)param_4[1]);
    local_50 = local_60;
    iVar12 = 0x24;
    goto LAB_1008036bf;
  case 0x25:
    iVar12 = 0x25;
    goto LAB_10080367b;
  case 0x26:
    iVar12 = 0x26;
    goto LAB_10080367b;
  case 0x27:
    iVar12 = 0x27;
    goto LAB_10080367b;
  case 0x28:
    iVar12 = 0x28;
    goto LAB_10080367b;
  case 0x29:
    local_50 = (undefined4 *)param_4[1];
    iVar12 = 0x29;
    goto LAB_1008036bf;
  case 0x2a:
    iVar12 = 0x2a;
    goto LAB_10080367b;
  case 0x2b:
    iVar12 = 0x2b;
LAB_10080367b:
    QMetaObject::activate
              (param_1,(QMetaObject *)&PTR_staticMetaObject_1021fd420,iVar12,(void **)0x0);
    return;
  case 0x2c:
    local_60[0] = CONCAT31(local_60[0]._1_3_,*(undefined1 *)param_4[1]);
    local_50 = local_60;
    iVar12 = 0x2c;
LAB_1008036bf:
    local_58 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1021fd420,iVar12,&local_58);
    break;
  case 0x2d:
    uVar9 = FUN_100192d10(param_1,*(undefined4 *)param_4[1],*(undefined8 *)param_4[2],
                          *(undefined4 *)param_4[3]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x2e:
    uVar9 = FUN_100192d10(param_1,*(undefined4 *)param_4[1],*(undefined8 *)param_4[2],0);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x2f:
    uVar9 = FUN_100192d10(param_1,*(undefined4 *)param_4[1],0,0);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x30:
    uVar9 = FUN_100192d10(param_1,0x27f,0,0);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x31:
    uVar9 = FUN_100192d60(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],
                          *(undefined8 *)param_4[3],*(undefined4 *)param_4[4]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x32:
    uVar9 = FUN_100192d60(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],
                          *(undefined8 *)param_4[3],0);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x33:
    uVar9 = FUN_100192d60(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],0,0);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x34:
    uVar9 = FUN_100192d60(param_1,*(undefined4 *)param_4[1],0x27f,0,0);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x35:
    uVar9 = FUN_1001930a0(param_1,*(undefined4 *)param_4[1]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x36:
    uVar9 = FUN_1001930a0(param_1,0xc9);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x37:
    uVar9 = FUN_100193200(param_1,*(undefined4 *)param_4[1]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x38:
    uVar9 = FUN_100193200(param_1,0xc9);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x39:
    uVar9 = FUN_100193360(param_1,param_4[1],param_4[2],*(undefined4 *)param_4[3]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x3a:
    uVar9 = FUN_100193360(param_1,param_4[1],param_4[2],0x1c9);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x3b:
    local_70 = (QArrayData *)PTR_shared_null_1021e1288;
    uVar9 = FUN_100193360(param_1,param_4[1],&local_70,0x1c9);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        UNLOCK();
        local_58 = (void *)CONCAT71(local_58._1_7_,*(int *)local_70 != 0);
        if (*(int *)local_70 != 0) goto LAB_100803967;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100803967:
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x3c:
    local_78 = (QArrayData *)PTR_shared_null_1021e1288;
    local_80 = (QArrayData *)PTR_shared_null_1021e1288;
    uVar9 = FUN_100193360(param_1,&local_78,&local_80,0x1c9);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        UNLOCK();
        local_58 = (void *)CONCAT71(local_58._1_7_,*(int *)local_80 != 0);
        if (*(int *)local_80 != 0) goto LAB_1008039d2;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_1008039d2:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        UNLOCK();
        local_58 = (void *)CONCAT71(local_58._1_7_,*(int *)local_78 != 0);
        if (*(int *)local_78 != 0) goto LAB_100803a02;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100803a02:
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x3d:
    uVar9 = FUN_1001934f0(param_1,param_4[1],*(undefined4 *)param_4[2]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x3e:
    uVar9 = FUN_1001934f0(param_1,param_4[1],0x1c9);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x3f:
    local_88 = (QArrayData *)PTR_shared_null_1021e1288;
    uVar9 = FUN_1001934f0(param_1,&local_88,0x1c9);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        UNLOCK();
        local_58 = (void *)CONCAT71(local_58._1_7_,*(int *)local_88 != 0);
        if (*(int *)local_88 != 0) goto LAB_100803ab0;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_100803ab0:
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x40:
    uVar9 = FUN_100193650(param_1,*(undefined1 *)param_4[1],*(undefined4 *)param_4[2],
                          *(undefined4 *)param_4[3]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x41:
    uVar9 = FUN_100193650(param_1,*(undefined1 *)param_4[1],*(undefined4 *)param_4[2],0);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x42:
    uVar9 = FUN_100193650(param_1,*(undefined1 *)param_4[1],0xc9,0);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x43:
    uVar9 = FUN_100193650(param_1,0,0xc9,0);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x44:
    uVar9 = FUN_1001937e0(param_1,*(undefined4 *)param_4[1]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x45:
    uVar9 = FUN_1001937e0(param_1,0xc9);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x46:
    uVar9 = FUN_100193940(param_1,*(undefined4 *)param_4[1]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x47:
    uVar9 = FUN_100193940(param_1,0xc9);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x48:
    uVar9 = FUN_100193b40(param_1,*(undefined4 *)param_4[1]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x49:
    uVar9 = FUN_100193b40(param_1,0xc9);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x4a:
    uVar9 = FUN_100193de0(param_1,*(undefined4 *)param_4[1]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x4b:
    uVar9 = FUN_100193de0(param_1,0xc9);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x4c:
    uVar9 = FUN_100194250(param_1,param_4[1],*(undefined1 *)param_4[2]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x4d:
    uVar9 = FUN_100193f00(param_1,param_4[1],param_4[2],param_4[3]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x4e:
    uVar9 = FUN_100194170(param_1,*(undefined4 *)param_4[1]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x4f:
    uVar9 = FUN_100193e80(param_1);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x50:
    uVar9 = FUN_100198a70(param_1,*(undefined4 *)param_4[1]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x51:
    uVar9 = FUN_1001989d0(param_1,*(undefined4 *)param_4[1]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x52:
    uVar9 = FUN_100198ef0(param_1,param_4[1],param_4[2],*(undefined4 *)param_4[3]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x53:
    uVar9 = FUN_100198ef0(param_1,param_4[1],param_4[2],0);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x54:
    local_90 = (QArrayData *)PTR_shared_null_1021e1288;
    uVar9 = FUN_100198ef0(param_1,param_4[1],&local_90,0);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        UNLOCK();
        local_58 = (void *)CONCAT71(local_58._1_7_,*(int *)local_90 != 0);
        if (*(int *)local_90 != 0) goto LAB_100803df6;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_100803df6:
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x55:
    uVar9 = FUN_1001990a0(param_1,*(undefined4 *)param_4[1],param_4[2],param_4[3],param_4[4]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x56:
    local_98 = (QArrayData *)PTR_shared_null_1021e1288;
    uVar9 = FUN_1001990a0(param_1,*(undefined4 *)param_4[1],param_4[2],param_4[3],&local_98);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        UNLOCK();
        local_58 = (void *)CONCAT71(local_58._1_7_,*(int *)local_98 != 0);
        if (*(int *)local_98 != 0) goto LAB_100803e9c;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_100803e9c:
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x57:
    local_a0 = (QArrayData *)PTR_shared_null_1021e1288;
    local_a8 = (QArrayData *)PTR_shared_null_1021e1288;
    uVar9 = FUN_1001990a0(param_1,*(undefined4 *)param_4[1],param_4[2],&local_a0,&local_a8);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        UNLOCK();
        local_58 = (void *)CONCAT71(local_58._1_7_,*(int *)local_a8 != 0);
        if (*(int *)local_a8 != 0) goto LAB_100803f1e;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_100803f1e:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        UNLOCK();
        local_58 = (void *)CONCAT71(local_58._1_7_,*(int *)local_a0 != 0);
        if (*(int *)local_a0 != 0) goto LAB_100803f54;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_100803f54:
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x58:
    local_b0 = (QArrayData *)PTR_shared_null_1021e1288;
    local_b8 = (QArrayData *)PTR_shared_null_1021e1288;
    local_c0 = (QArrayData *)PTR_shared_null_1021e1288;
    uVar9 = FUN_1001990a0(param_1,*(undefined4 *)param_4[1],&local_b0,&local_b8,&local_c0);
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        UNLOCK();
        local_58 = (void *)CONCAT71(local_58._1_7_,*(int *)local_c0 != 0);
        if (*(int *)local_c0 != 0) goto LAB_100803fe0;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_100803fe0:
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        UNLOCK();
        local_58 = (void *)CONCAT71(local_58._1_7_,*(int *)local_b8 != 0);
        if (*(int *)local_b8 != 0) goto LAB_100804016;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_100804016:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        UNLOCK();
        local_58 = (void *)CONCAT71(local_58._1_7_,*(int *)local_b0 != 0);
        if (*(int *)local_b0 != 0) goto LAB_10080404c;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_10080404c:
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x59:
    uVar9 = FUN_100199780(param_1);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x5a:
    uVar9 = FUN_1001996e0(param_1);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x5b:
    uVar9 = FUN_100199830(param_1);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x5c:
    uVar9 = FUN_1001998a0(param_1);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x5d:
    local_c8 = *(long *)param_4[1];
    if (local_c8 != 0) {
      _PrlHandle_AddRef();
    }
    FUN_10018dea0(param_1,&local_c8,*(undefined1 *)param_4[2]);
    if (local_c8 != 0) {
      _PrlHandle_Free();
    }
    break;
  case 0x5e:
    local_d0 = *(long *)param_4[1];
    if (local_d0 != 0) {
      _PrlHandle_AddRef();
    }
    FUN_10018dea0(param_1,&local_d0,0);
    if (local_d0 != 0) {
      _PrlHandle_Free();
    }
    break;
  case 0x5f:
    FUN_10018dcf0(param_1,*(undefined4 *)param_4[1]);
    return;
  case 0x60:
    FUN_100190650(&local_d8,param_1);
    if ((QString *)*param_4 != (QString *)0x0) {
      QString::operator=((QString *)*param_4,&local_d8);
    }
    if (*(int *)local_d8.field0_0x0 == -1) break;
    local_e8.field0_0x0 = local_d8.field0_0x0;
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      UNLOCK();
      local_58 = (void *)CONCAT71(local_58._1_7_,*(int *)local_d8.field0_0x0 != 0);
      if (*(int *)local_d8.field0_0x0 != 0) break;
    }
    goto LAB_100802f30;
  case 0x61:
    pQVar3 = (QString *)param_4[1];
    local_58 = (void *)CONCAT44(local_58._4_4_,0xffffffff);
    plVar10 = *(long **)(param_1 + 0xf8);
    uVar8 = 0xffffffff;
    if (*(int *)((long)plVar10 + 0x14) != 0) {
      uVar1 = *(uint *)(plVar10 + 4);
      plVar18 = plVar10;
      if (uVar1 != 0) {
        uVar7 = qHash(pQVar3,*(uint *)((long)plVar10 + 0x24));
        uVar5 = (ulong)uVar7 % (ulong)uVar1;
        plVar15 = *(long **)(plVar10[1] + uVar5 * 8);
        if (plVar15 != plVar10) {
          plVar17 = (long *)(plVar10[1] + uVar5 * 8);
          do {
            plVar16 = plVar15;
            plVar18 = plVar10;
            if (*(uint *)(plVar15 + 1) == uVar7) {
              cVar6 = operator==(pQVar3,(QString *)(plVar15 + 2));
              plVar10 = (long *)*plVar17;
              plVar16 = plVar10;
              plVar18 = *(long **)(param_1 + 0xf8);
              if (cVar6 != '\0') break;
            }
            plVar10 = plVar18;
            plVar15 = (long *)*plVar16;
            plVar17 = plVar16;
            plVar18 = plVar10;
          } while (plVar15 != plVar10);
        }
      }
      ppvVar11 = &local_58;
      if (plVar10 != plVar18) {
        ppvVar11 = (void **)(plVar10 + 3);
      }
      uVar8 = *(undefined4 *)ppvVar11;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar8;
    }
    break;
  case 0x62:
    FUN_1001907a0(param_1);
    return;
  case 99:
    FUN_10018e740(param_1,*(undefined4 *)param_4[1]);
    return;
  case 100:
    FUN_10018e7c0(param_1,*(undefined4 *)param_4[1]);
    return;
  case 0x65:
    FUN_10018e840(param_1,*(undefined4 *)param_4[1]);
    return;
  case 0x66:
    FUN_10018f620(param_1,*(undefined4 *)param_4[1]);
    return;
  case 0x67:
    FUN_10018f640(param_1,*(undefined4 *)param_4[1]);
    return;
  case 0x68:
    FUN_100190680(param_1,*(undefined4 *)param_4[1]);
    return;
  case 0x69:
    uVar9 = FUN_100194520(param_1,*(undefined4 *)param_4[1]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
    break;
  case 0x6a:
    uVar9 = FUN_100194520(param_1,0x41e);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar9;
    }
  }
switchD_100802eaf_default:
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

