
void FUN_1005965f0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  _func_void_Node_ptr *local_148;
  QVariant local_140;
  _func_void_Node_ptr *local_130;
  Data_conflict local_128;
  undefined4 local_120;
  _func_void_Node_ptr *local_118;
  QVariant local_110;
  _func_void_Node_ptr *local_100;
  QVariant local_f8;
  _func_void_Node_ptr *local_e8;
  QVariant local_e0;
  _func_void_Node_ptr *local_d0;
  QVariant local_c8;
  _func_void_Node_ptr *local_b8;
  QVariant local_b0;
  _func_void_Node_ptr *local_a0;
  QVariant local_98;
  _func_void_Node_ptr *local_88;
  QVariant local_80;
  _func_void_Node_ptr *local_70;
  QVariant local_68;
  _func_void_Node_ptr *local_58;
  QVariant local_50;
  _func_void_Node_ptr *local_40;
  QVariant local_38;
  byte local_21;
  
  if ((int)param_2 == 0xc) {
    switch(param_3) {
    case 0:
    case 2:
    case 4:
    case 6:
    case 8:
    case 10:
    case 0xc:
    case 0xe:
    case 0x10:
    case 0x12:
    case 0x14:
    case 0x16:
      if (*(int *)param_4[1] != 0) goto switchD_100596624_default;
      break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 9:
    case 0xb:
    case 0xd:
    case 0xf:
    case 0x11:
    case 0x13:
    case 0x15:
    case 0x17:
      if (*(int *)param_4[1] != 0) {
        if (*(int *)param_4[1] != 1) goto switchD_100596624_default;
        iVar3 = DAT_102273e78;
        if (DAT_102273e78 == 0) {
          iVar3 = FUN_1003df970("Mappings::Values",0xffffffffffffffff,1);
          DAT_102273e78 = iVar3;
        }
        goto LAB_100596693;
      }
      break;
    default:
switchD_100596624_default:
      *(undefined4 *)*param_4 = 0xffffffff;
      return;
    }
    iVar3 = FUN_1003dff90();
LAB_100596693:
    *(int *)*param_4 = iVar3;
    return;
  }
  if ((int)param_2 != 0) {
    return;
  }
  switch(param_3) {
  case 0:
    FUN_100591590(&local_38,param_2,*(undefined8 *)param_4[1]);
    if ((QVariant *)*param_4 != (QVariant *)0x0) {
      QVariant::operator=((QVariant *)*param_4,&local_38);
    }
    QVariant::~QVariant(&local_38);
    break;
  case 1:
    uVar2 = *(undefined8 *)param_4[1];
    FUN_1003dea50(&local_40,param_4[2]);
    FUN_1005916d0(param_1,uVar2,&local_40);
    if (*(int *)(local_40 + 0x10) == -1) {
      return;
    }
    local_148 = local_40;
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      local_21 = 0;
    }
    goto LAB_100596d8c;
  case 2:
    FUN_100591e50(&local_50,param_2,*(undefined8 *)param_4[1]);
    if ((QVariant *)*param_4 != (QVariant *)0x0) {
      QVariant::operator=((QVariant *)*param_4,&local_50);
    }
    QVariant::~QVariant(&local_50);
    break;
  case 3:
    FUN_1003dea50(&local_58,param_4[2]);
    FUN_100592080();
    if (*(int *)(local_58 + 0x10) == -1) {
      return;
    }
    local_148 = local_58;
    if (*(int *)(local_58 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_58 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      local_21 = 0;
    }
    goto LAB_100596d8c;
  case 4:
    FUN_100592140(&local_68,param_1,*(undefined8 *)param_4[1],
                  &switchD_100596656::switchdataD_100597230,param_4[3]);
    if ((QVariant *)*param_4 != (QVariant *)0x0) {
      QVariant::operator=((QVariant *)*param_4,&local_68);
    }
    QVariant::~QVariant(&local_68);
    break;
  case 5:
    FUN_1003dea50(&local_70,param_4[2]);
    FUN_100592830();
    if (*(int *)(local_70 + 0x10) == -1) {
      return;
    }
    local_148 = local_70;
    if (*(int *)(local_70 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_70 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      local_21 = 0;
    }
    goto LAB_100596d8c;
  case 6:
    FUN_100592bd0(&local_80,param_2,*(undefined8 *)param_4[1],
                  &switchD_100596656::switchdataD_100597230,param_4[3]);
    if ((QVariant *)*param_4 != (QVariant *)0x0) {
      QVariant::operator=((QVariant *)*param_4,&local_80);
    }
    QVariant::~QVariant(&local_80);
    break;
  case 7:
    FUN_1003dea50(&local_88,param_4[2]);
    FUN_100592d20();
    if (*(int *)(local_88 + 0x10) == -1) {
      return;
    }
    local_148 = local_88;
    if (*(int *)(local_88 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_88 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      local_21 = 0;
    }
    goto LAB_100596d8c;
  case 8:
    FUN_100592e90(&local_98,param_2,*(undefined8 *)param_4[1]);
    if ((QVariant *)*param_4 != (QVariant *)0x0) {
      QVariant::operator=((QVariant *)*param_4,&local_98);
    }
    QVariant::~QVariant(&local_98);
    break;
  case 9:
    FUN_1003dea50(&local_a0,param_4[2]);
    FUN_100593040();
    if (*(int *)(local_a0 + 0x10) == -1) {
      return;
    }
    local_148 = local_a0;
    if (*(int *)(local_a0 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_a0 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      local_21 = 0;
    }
    goto LAB_100596d8c;
  case 10:
    FUN_100593210(&local_b0,param_2,*(undefined8 *)param_4[1],
                  &switchD_100596656::switchdataD_100597230,param_4[3]);
    if ((QVariant *)*param_4 != (QVariant *)0x0) {
      QVariant::operator=((QVariant *)*param_4,&local_b0);
    }
    QVariant::~QVariant(&local_b0);
    break;
  case 0xb:
    FUN_1003dea50(&local_b8,param_4[2]);
    FUN_100593380();
    if (*(int *)(local_b8 + 0x10) == -1) {
      return;
    }
    local_148 = local_b8;
    if (*(int *)(local_b8 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_b8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      local_21 = 0;
    }
    goto LAB_100596d8c;
  case 0xc:
    FUN_1005936c0(&local_c8,param_2,*(undefined8 *)param_4[1]);
    if ((QVariant *)*param_4 != (QVariant *)0x0) {
      QVariant::operator=((QVariant *)*param_4,&local_c8);
    }
    QVariant::~QVariant(&local_c8);
    break;
  case 0xd:
    FUN_1003dea50(&local_d0,param_4[2]);
    FUN_100593840();
    if (*(int *)(local_d0 + 0x10) == -1) {
      return;
    }
    local_148 = local_d0;
    if (*(int *)(local_d0 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_d0 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      local_21 = 0;
    }
    goto LAB_100596d8c;
  case 0xe:
    FUN_1005939b0(&local_e0,param_2,*(undefined8 *)param_4[1],
                  &switchD_100596656::switchdataD_100597230,param_4[3]);
    if ((QVariant *)*param_4 != (QVariant *)0x0) {
      QVariant::operator=((QVariant *)*param_4,&local_e0);
    }
    QVariant::~QVariant(&local_e0);
    break;
  case 0xf:
    FUN_1003dea50(&local_e8,param_4[2]);
    FUN_100593bd0();
    if (*(int *)(local_e8 + 0x10) == -1) {
      return;
    }
    local_148 = local_e8;
    if (*(int *)(local_e8 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_e8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      local_21 = 0;
    }
    goto LAB_100596d8c;
  case 0x10:
    FUN_100594000(&local_f8,param_2,*(undefined8 *)param_4[1]);
    if ((QVariant *)*param_4 != (QVariant *)0x0) {
      QVariant::operator=((QVariant *)*param_4,&local_f8);
    }
    QVariant::~QVariant(&local_f8);
    break;
  case 0x11:
    FUN_1003dea50(&local_100,param_4[2]);
    FUN_1005940f0();
    if (*(int *)(local_100 + 0x10) == -1) {
      return;
    }
    local_148 = local_100;
    if (*(int *)(local_100 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_100 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      local_21 = 0;
    }
    goto LAB_100596d8c;
  case 0x12:
    FUN_1005941d0(&local_110,param_2,*(undefined8 *)param_4[1]);
    if ((QVariant *)*param_4 != (QVariant *)0x0) {
      QVariant::operator=((QVariant *)*param_4,&local_110);
    }
    QVariant::~QVariant(&local_110);
    break;
  case 0x13:
    FUN_1003dea50(&local_118,param_4[2]);
    FUN_100594270();
    if (*(int *)(local_118 + 0x10) == -1) {
      return;
    }
    local_148 = local_118;
    if (*(int *)(local_118 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_118 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      local_21 = 0;
    }
    goto LAB_100596d8c;
  case 0x14:
    lVar4 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c0);
    if (lVar4 == 0) {
      local_120 = 0x80000000;
      local_128.field7 = 0;
    }
    else {
      local_21 = QAbstractButton::isChecked();
      local_21 = local_21 ^ 1;
      QVariant::QVariant((QVariant *)&local_128,1,&local_21,0);
    }
    if ((QVariant *)*param_4 != (QVariant *)0x0) {
      QVariant::operator=((QVariant *)*param_4,(QVariant *)&local_128);
    }
    QVariant::~QVariant((QVariant *)&local_128);
    break;
  case 0x15:
    FUN_1003dea50(&local_130,param_4[2]);
    FUN_100594310();
    if (*(int *)(local_130 + 0x10) == -1) {
      return;
    }
    local_148 = local_130;
    if (*(int *)(local_130 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_130 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      local_21 = 0;
    }
    goto LAB_100596d8c;
  case 0x16:
    FUN_1005944e0(&local_140,param_2,*(undefined8 *)param_4[1],
                  &switchD_100596656::switchdataD_100597230,param_4[3]);
    if ((QVariant *)*param_4 != (QVariant *)0x0) {
      QVariant::operator=((QVariant *)*param_4,&local_140);
    }
    QVariant::~QVariant(&local_140);
    break;
  case 0x17:
    FUN_1003dea50(&local_148,param_4[2]);
    FUN_100594990();
    if (*(int *)(local_148 + 0x10) == -1) {
      return;
    }
    if (*(int *)(local_148 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_148 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_21 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_21) {
        return;
      }
    }
LAB_100596d8c:
    QHashData::free_helper(local_148);
  }
  return;
}

