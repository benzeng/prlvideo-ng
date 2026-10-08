
QVariant * FUN_100737f10(QVariant *param_1,long param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  QVariant *pQVar4;
  undefined8 local_e8;
  QVariant local_e0;
  QArrayData *local_d0;
  QMapNodeBase *local_c8;
  QVariant local_c0;
  QArrayData *local_b0;
  QMapNodeBase *local_a8;
  QVariant local_a0;
  QArrayData *local_90;
  QVariant local_88;
  QArrayData *local_78;
  QVariant local_70;
  undefined8 local_60;
  QVariant local_58;
  undefined8 local_48;
  QVariant local_40;
  Data_conflict local_30;
  undefined4 local_28;
  undefined1 local_19;
  
  iVar1 = *param_3;
  if ((long)iVar1 < 0) {
LAB_100737faf:
    (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
    (param_1->field0_0x0).field0_0x0.field7 = 0;
    return param_1;
  }
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x18);
  if ((*(int *)(lVar2 + 0xc) - *(int *)(lVar2 + 8) <= iVar1) ||
     (puVar3 = *(undefined8 **)(lVar2 + 0x10 + ((long)*(int *)(lVar2 + 8) + (long)iVar1) * 8),
     puVar3 == (undefined8 *)0x0)) goto LAB_100737faf;
  local_28 = 0x80000000;
  local_30.field7 = 0;
  switch(param_4) {
  case 0x101:
    local_48 = *puVar3;
    QVariant::QVariant(&local_40,0x27,&local_48,1);
    QVariant::operator=((QVariant *)&local_30,&local_40);
    QVariant::~QVariant(&local_40);
    break;
  case 0x102:
    local_60 = puVar3[1];
    QVariant::QVariant(&local_58,0x27,&local_60,1);
    QVariant::operator=((QVariant *)&local_30,&local_58);
    QVariant::~QVariant(&local_58);
    break;
  case 0x103:
    FUN_10072dd80(&local_78,*puVar3);
    QVariant::QVariant(&local_70,10,&local_78,0);
    QVariant::operator=((QVariant *)&local_30,&local_70);
    QVariant::~QVariant(&local_70);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_19 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_19) break;
      }
      QArrayData::deallocate(local_78,2,8);
    }
    break;
  case 0x104:
    FUN_10072dc60(&local_90,*puVar3);
    QVariant::QVariant(&local_88,10,&local_90,0);
    QVariant::operator=((QVariant *)&local_30,&local_88);
    QVariant::~QVariant(&local_88);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_19 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_19) break;
      }
      QArrayData::deallocate(local_90,2,8);
    }
    break;
  case 0x105:
    FUN_100733400(&local_a8,puVar3[1]);
    local_b0 = (QArrayData *)QString::fromAscii_helper("cpu",3);
    pQVar4 = (QVariant *)FUN_10008c590(&local_a8,&local_b0);
    QVariant::QVariant(&local_a0,pQVar4);
    QVariant::operator=((QVariant *)&local_30,&local_a0);
    QVariant::~QVariant(&local_a0);
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_19 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1007381eb;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_1007381eb:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_19 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_19) break;
      }
      if (*(long *)(local_a8 + 0x10) != 0) {
        FUN_100037d60();
        QMapDataBase::freeTree(local_a8,(int)*(undefined8 *)(local_a8 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)local_a8);
    }
    break;
  default:
    local_e8 = *puVar3;
    QVariant::QVariant(&local_e0,0x27,&local_e8,1);
    QVariant::operator=((QVariant *)&local_30,&local_e0);
    QVariant::~QVariant(&local_e0);
    break;
  case 0x107:
    FUN_100733400(&local_c8,puVar3[1]);
    local_d0 = (QArrayData *)QString::fromAscii_helper("ramBytes",8);
    pQVar4 = (QVariant *)FUN_10008c590(&local_c8,&local_d0);
    QVariant::QVariant(&local_c0,pQVar4);
    QVariant::operator=((QVariant *)&local_30,&local_c0);
    QVariant::~QVariant(&local_c0);
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_19 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1007382e4;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_1007382e4:
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_19 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_19) break;
      }
      if (*(long *)(local_c8 + 0x10) != 0) {
        FUN_100037d60();
        QMapDataBase::freeTree(local_c8,(int)*(undefined8 *)(local_c8 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)local_c8);
    }
  }
  QVariant::QVariant(param_1,(QVariant *)&local_30);
  QVariant::~QVariant((QVariant *)&local_30);
  return param_1;
}

