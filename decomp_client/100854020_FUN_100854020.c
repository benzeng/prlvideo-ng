
void FUN_100854020(QObject *param_1,int param_2,uint param_3,undefined8 *param_4)

{
  long lVar1;
  QString *this;
  undefined4 *puVar2;
  long *plVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  QTypedArrayData<unsigned_short> *pQVar6;
  int iVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  QMapNodeBase *pQVar11;
  bool bVar12;
  QString local_b8;
  QMapNodeBase *local_b0;
  QMapNodeBase *local_a8;
  QString local_a0;
  QString local_98;
  QString local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  undefined8 local_50;
  void *local_48;
  undefined8 *local_40;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  if (1 < param_2) {
    if (param_2 == 2) {
      if (param_3 < 0x13) {
        param_4 = (undefined8 *)*param_4;
        switch(param_3) {
        case 0:
          goto switchD_1008540af_caseD_0;
        case 1:
          goto switchD_1008540af_caseD_1;
        case 2:
          uVar5 = *(undefined4 *)param_4;
          goto LAB_10085486c;
        case 3:
          goto switchD_1008540af_caseD_3;
        case 4:
          goto switchD_1008540af_caseD_4;
        case 5:
          goto switchD_1008540af_caseD_5;
        case 6:
          goto switchD_1008540af_caseD_6;
        case 7:
          goto switchD_1008540af_caseD_7;
        case 8:
          goto switchD_1008540af_caseD_8;
        case 9:
          goto switchD_1008540af_caseD_9;
        case 0xb:
          uVar5 = *(undefined4 *)param_4;
          goto LAB_100854996;
        case 0xe:
          uVar10 = *param_4;
          goto LAB_1008549be;
        case 0x10:
          goto switchD_1008540af_caseD_10;
        case 0x11:
          uVar4 = *(undefined1 *)param_4;
          goto LAB_100854a0b;
        case 0x12:
          uVar4 = *(undefined1 *)param_4;
          goto LAB_100854a33;
        }
      }
    }
    else if (param_2 == 10) {
      puVar2 = (undefined4 *)*param_4;
      plVar3 = (long *)param_4[1];
      pcVar8 = (code *)*plVar3;
      lVar9 = plVar3[1];
      if ((pcVar8 == FUN_100855360) && (lVar9 == 0)) {
        *puVar2 = 0;
        pcVar8 = (code *)*plVar3;
        lVar9 = plVar3[1];
      }
      if ((pcVar8 == FUN_1008553b0) && (lVar9 == 0)) {
        *puVar2 = 1;
        pcVar8 = (code *)*plVar3;
        lVar9 = plVar3[1];
      }
      if ((pcVar8 == FUN_100855400) && (lVar9 == 0)) {
        *puVar2 = 2;
        pcVar8 = (code *)*plVar3;
        lVar9 = plVar3[1];
      }
      if ((pcVar8 == FUN_100855460) && (lVar9 == 0)) {
        *puVar2 = 3;
        pcVar8 = (code *)*plVar3;
        lVar9 = plVar3[1];
      }
      if ((pcVar8 == FUN_1008554b0) && (lVar9 == 0)) {
        *puVar2 = 4;
        pcVar8 = (code *)*plVar3;
        lVar9 = plVar3[1];
      }
      if ((pcVar8 == FUN_100855500) && (lVar9 == 0)) {
        *puVar2 = 5;
        pcVar8 = (code *)*plVar3;
        lVar9 = plVar3[1];
      }
      if ((pcVar8 == FUN_100855550) && (lVar9 == 0)) {
        *puVar2 = 6;
        pcVar8 = (code *)*plVar3;
        lVar9 = plVar3[1];
      }
      if ((pcVar8 == FUN_1008555a0) && (lVar9 == 0)) {
        *puVar2 = 7;
        pcVar8 = (code *)*plVar3;
        lVar9 = plVar3[1];
      }
      if ((pcVar8 == FUN_1008555f0) && (lVar9 == 0)) {
        *puVar2 = 8;
        pcVar8 = (code *)*plVar3;
        lVar9 = plVar3[1];
      }
      if ((pcVar8 == FUN_100855640) && (lVar9 == 0)) {
        *puVar2 = 9;
        pcVar8 = (code *)*plVar3;
        lVar9 = plVar3[1];
      }
      if ((pcVar8 == FUN_100855690) && (lVar9 == 0)) {
        *puVar2 = 10;
        pcVar8 = (code *)*plVar3;
        lVar9 = plVar3[1];
      }
      if ((pcVar8 == FUN_1008556e0) && (lVar9 == 0)) {
        *puVar2 = 0xb;
        pcVar8 = (code *)*plVar3;
        lVar9 = plVar3[1];
      }
      if ((pcVar8 == FUN_100855740) && (lVar9 == 0)) {
        *puVar2 = 0xc;
        pcVar8 = (code *)*plVar3;
        lVar9 = plVar3[1];
      }
      if ((pcVar8 == FUN_100855790) && (lVar9 == 0)) {
        *puVar2 = 0xd;
        pcVar8 = (code *)*plVar3;
        lVar9 = plVar3[1];
      }
      if ((pcVar8 == FUN_1008557e0) && (lVar9 == 0)) {
        *puVar2 = 0xe;
        pcVar8 = (code *)*plVar3;
        lVar9 = plVar3[1];
      }
      if ((pcVar8 == FUN_100855840) && (lVar9 == 0)) {
        *puVar2 = 0xf;
        pcVar8 = (code *)*plVar3;
        lVar9 = plVar3[1];
      }
      if ((pcVar8 == FUN_1008558a0) && (lVar9 == 0)) {
        *puVar2 = 0x10;
        pcVar8 = (code *)*plVar3;
        lVar9 = plVar3[1];
      }
      if ((pcVar8 == FUN_100855900) && (lVar9 == 0)) {
        *puVar2 = 0x11;
        pcVar8 = (code *)*plVar3;
        lVar9 = plVar3[1];
      }
      if ((pcVar8 == FUN_100855950) && (lVar9 == 0)) {
        *puVar2 = 0x12;
        pcVar8 = (code *)*plVar3;
        lVar9 = plVar3[1];
      }
      if ((pcVar8 == FUN_1008559b0) && (lVar9 == 0)) {
        *puVar2 = 0x13;
        pcVar8 = (code *)*plVar3;
        lVar9 = plVar3[1];
      }
      if ((pcVar8 == FUN_100855a10) && (lVar9 == 0)) {
        *puVar2 = 0x14;
      }
    }
    goto switchD_100854066_default;
  }
  if (param_2 == 0) {
    uVar5 = local_50._4_4_;
    switch(param_3) {
    case 0:
      local_40 = (undefined8 *)param_4[1];
      iVar7 = 0;
      break;
    case 1:
      local_40 = (undefined8 *)param_4[1];
      iVar7 = 1;
      break;
    case 2:
      local_50 = CONCAT44(uVar5,*(undefined4 *)param_4[1]);
      local_40 = &local_50;
      iVar7 = 2;
      break;
    case 3:
      local_40 = (undefined8 *)param_4[1];
      iVar7 = 3;
      break;
    case 4:
      local_40 = (undefined8 *)param_4[1];
      iVar7 = 4;
      break;
    case 5:
      local_40 = (undefined8 *)param_4[1];
      iVar7 = 5;
      break;
    case 6:
      local_40 = (undefined8 *)param_4[1];
      iVar7 = 6;
      break;
    case 7:
      local_40 = (undefined8 *)param_4[1];
      iVar7 = 7;
      break;
    case 8:
      local_40 = (undefined8 *)param_4[1];
      iVar7 = 8;
      break;
    case 9:
      local_40 = (undefined8 *)param_4[1];
      iVar7 = 9;
      break;
    case 10:
      local_40 = (undefined8 *)param_4[1];
      iVar7 = 10;
      break;
    case 0xb:
      local_50 = CONCAT44(uVar5,*(undefined4 *)param_4[1]);
      local_40 = &local_50;
      iVar7 = 0xb;
      break;
    case 0xc:
      local_40 = (undefined8 *)param_4[1];
      iVar7 = 0xc;
      break;
    case 0xd:
      local_40 = (undefined8 *)param_4[1];
      iVar7 = 0xd;
      break;
    case 0xe:
      local_50 = *(undefined8 *)param_4[1];
      local_40 = &local_50;
      iVar7 = 0xe;
      break;
    case 0xf:
      local_50 = CONCAT71(local_50._1_7_,*(undefined1 *)param_4[1]);
      local_40 = &local_50;
      iVar7 = 0xf;
      break;
    case 0x10:
      local_50 = CONCAT44(uVar5,*(undefined4 *)param_4[1]);
      local_40 = &local_50;
      iVar7 = 0x10;
      break;
    case 0x11:
      local_40 = (undefined8 *)param_4[1];
      iVar7 = 0x11;
      break;
    case 0x12:
      local_50 = CONCAT71(local_50._1_7_,*(undefined1 *)param_4[1]);
      local_40 = &local_50;
      iVar7 = 0x12;
      break;
    case 0x13:
      local_50 = CONCAT71(local_50._1_7_,*(undefined1 *)param_4[1]);
      local_40 = &local_50;
      iVar7 = 0x13;
      break;
    case 0x14:
      QMetaObject::activate
                (param_1,(QMetaObject *)&PTR_staticMetaObject_102227320,0x14,(void **)0x0);
      return;
    case 0x15:
      param_4 = (undefined8 *)param_4[1];
switchD_1008540af_caseD_0:
      FUN_10072d6f0(param_1,param_4);
      return;
    case 0x16:
      param_4 = (undefined8 *)param_4[1];
switchD_1008540af_caseD_1:
      FUN_10072df80(param_1,param_4);
      return;
    case 0x17:
      uVar5 = *(undefined4 *)param_4[1];
LAB_10085486c:
      FUN_10072dfd0(param_1,uVar5);
      return;
    case 0x18:
      param_4 = (undefined8 *)param_4[1];
switchD_1008540af_caseD_3:
      FUN_10072dff0(param_1,param_4);
      return;
    case 0x19:
      param_4 = (undefined8 *)param_4[1];
switchD_1008540af_caseD_4:
      FUN_10072e090(param_1,param_4);
      return;
    case 0x1a:
      param_4 = (undefined8 *)param_4[1];
switchD_1008540af_caseD_5:
      FUN_10072e040(param_1,param_4);
      return;
    case 0x1b:
      param_4 = (undefined8 *)param_4[1];
switchD_1008540af_caseD_6:
      FUN_10072e0e0(param_1,param_4);
      return;
    case 0x1c:
      param_4 = (undefined8 *)param_4[1];
switchD_1008540af_caseD_7:
      FUN_10072e130(param_1,param_4);
      return;
    case 0x1d:
      param_4 = (undefined8 *)param_4[1];
switchD_1008540af_caseD_8:
      FUN_10072e1f0(param_1,param_4);
      return;
    case 0x1e:
      param_4 = (undefined8 *)param_4[1];
switchD_1008540af_caseD_9:
      FUN_10072e180(param_1,param_4);
      return;
    case 0x1f:
      uVar5 = *(undefined4 *)param_4[1];
LAB_100854996:
      FUN_10072e240(param_1,uVar5);
      return;
    case 0x20:
      uVar10 = *(undefined8 *)param_4[1];
LAB_1008549be:
      FUN_10072e510(param_1,uVar10);
      return;
    case 0x21:
      param_4 = (undefined8 *)param_4[1];
switchD_1008540af_caseD_10:
      FUN_10072e630(param_1,param_4);
      return;
    case 0x22:
      uVar4 = *(undefined1 *)param_4[1];
LAB_100854a0b:
      FUN_10072e360(param_1,uVar4);
      return;
    case 0x23:
      uVar4 = *(undefined1 *)param_4[1];
LAB_100854a33:
      FUN_10072e390(param_1,uVar4);
      return;
    default:
      goto switchD_100854066_default;
    }
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_102227320,iVar7,&local_48);
    goto switchD_100854066_default;
  }
  if ((param_2 != 1) || (0x12 < param_3)) goto switchD_100854066_default;
  this = (QString *)*param_4;
  switch(param_3) {
  case 0:
    FUN_10072dbf0(&local_58,param_1);
    QString::operator=(this,&local_58);
    if (*(int *)local_58.field0_0x0 == -1) goto switchD_100854066_default;
    local_b8.field0_0x0 = local_58.field0_0x0;
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_58.field0_0x0 != 0);
      if (*(int *)local_58.field0_0x0 != 0) goto switchD_100854066_default;
    }
    break;
  case 1:
    FUN_10072dc20(&local_60,param_1);
    QString::operator=(this,&local_60);
    if (*(int *)local_60.field0_0x0 == -1) goto switchD_100854066_default;
    local_b8.field0_0x0 = local_60.field0_0x0;
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      bVar12 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,bVar12);
joined_r0x000100854aea:
      if (bVar12) goto switchD_100854066_default;
    }
    break;
  case 2:
    uVar5 = FUN_10072dc50(param_1);
    goto LAB_100854e17;
  case 3:
    FUN_10072dc60(&local_68,param_1);
    QString::operator=(this,&local_68);
    if (*(int *)local_68.field0_0x0 == -1) goto switchD_100854066_default;
    local_b8.field0_0x0 = local_68.field0_0x0;
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      bVar12 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,bVar12);
      goto joined_r0x000100854aea;
    }
    break;
  case 4:
    FUN_10072dc90(&local_70,param_1);
    QString::operator=(this,&local_70);
    if (*(int *)local_70.field0_0x0 == -1) goto switchD_100854066_default;
    local_b8.field0_0x0 = local_70.field0_0x0;
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      bVar12 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,bVar12);
joined_r0x000100854b82:
      if (bVar12) goto switchD_100854066_default;
    }
    break;
  case 5:
    FUN_10072dcc0(&local_78,param_1);
    QString::operator=(this,&local_78);
    if (*(int *)local_78.field0_0x0 == -1) goto switchD_100854066_default;
    local_b8.field0_0x0 = local_78.field0_0x0;
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      bVar12 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,bVar12);
      goto joined_r0x000100854b82;
    }
    break;
  case 6:
    FUN_10072dcf0(&local_80,param_1);
    QString::operator=(this,&local_80);
    if (*(int *)local_80.field0_0x0 == -1) goto switchD_100854066_default;
    local_b8.field0_0x0 = local_80.field0_0x0;
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      bVar12 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,bVar12);
joined_r0x000100854c1a:
      if (bVar12) goto switchD_100854066_default;
    }
    break;
  case 7:
    FUN_10072dd20(&local_88,param_1);
    QString::operator=(this,&local_88);
    if (*(int *)local_88.field0_0x0 == -1) goto switchD_100854066_default;
    local_b8.field0_0x0 = local_88.field0_0x0;
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      bVar12 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,bVar12);
      goto joined_r0x000100854c1a;
    }
    break;
  case 8:
    FUN_10072dd50(&local_90,param_1);
    QString::operator=(this,&local_90);
    if (*(int *)local_90.field0_0x0 == -1) goto switchD_100854066_default;
    local_b8.field0_0x0 = local_90.field0_0x0;
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      bVar12 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,bVar12);
joined_r0x000100854cc1:
      if (bVar12) goto switchD_100854066_default;
    }
    break;
  case 9:
    FUN_10072dd80(&local_98,param_1);
    QString::operator=(this,&local_98);
    if (*(int *)local_98.field0_0x0 == -1) goto switchD_100854066_default;
    local_b8.field0_0x0 = local_98.field0_0x0;
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      bVar12 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,bVar12);
      goto joined_r0x000100854cc1;
    }
    break;
  case 10:
    FUN_10072ddb0(&local_a0,param_1);
    QString::operator=(this,&local_a0);
    if (*(int *)local_a0.field0_0x0 == -1) goto switchD_100854066_default;
    local_b8.field0_0x0 = local_a0.field0_0x0;
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      bVar12 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,bVar12);
joined_r0x000100854e5e:
      if (bVar12) goto switchD_100854066_default;
    }
    break;
  case 0xb:
    uVar5 = FUN_10072dde0(param_1);
    goto LAB_100854e17;
  case 0xc:
    FUN_10072ddf0(&local_a8,param_1);
    FUN_100855b50(this,&local_a8);
    if (*(int *)local_a8 == -1) goto switchD_100854066_default;
    pQVar11 = local_a8;
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      bVar12 = *(int *)local_a8 != 0;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,bVar12);
joined_r0x000100854dc6:
      if (bVar12) goto switchD_100854066_default;
    }
    goto LAB_100854dd3;
  case 0xd:
    FUN_10072de80(&local_b0,param_1);
    FUN_100855b50(this,&local_b0);
    if (*(int *)local_b0 == -1) goto switchD_100854066_default;
    pQVar11 = local_b0;
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      bVar12 = *(int *)local_b0 != 0;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,bVar12);
      goto joined_r0x000100854dc6;
    }
LAB_100854dd3:
    if (*(long *)(pQVar11 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(pQVar11,(int)*(undefined8 *)(pQVar11 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar11);
    goto switchD_100854066_default;
  case 0xe:
    pQVar6 = (QTypedArrayData<unsigned_short> *)FUN_10072e4e0(param_1);
    this->field0_0x0 = pQVar6;
    goto switchD_100854066_default;
  case 0xf:
    uVar5 = FUN_10072df20(param_1);
LAB_100854e17:
    *(undefined4 *)&this->field0_0x0 = uVar5;
    goto switchD_100854066_default;
  case 0x10:
    FUN_10072df30(&local_b8,param_1);
    QString::operator=(this,&local_b8);
    if (*(int *)local_b8.field0_0x0 == -1) goto switchD_100854066_default;
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      bVar12 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,bVar12);
      goto joined_r0x000100854e5e;
    }
    break;
  case 0x11:
    uVar4 = FUN_10072df60(param_1);
    *(undefined1 *)&this->field0_0x0 = uVar4;
    goto switchD_100854066_default;
  case 0x12:
    uVar4 = FUN_10072df70(param_1);
    *(undefined1 *)&this->field0_0x0 = uVar4;
    goto switchD_100854066_default;
  }
  QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
switchD_100854066_default:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

