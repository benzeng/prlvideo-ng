
void FUN_100a3cd80(long param_1,undefined8 param_2,QChar *param_3,QChar *param_4,QChar *param_5,
                  QByteArray *param_6,QByteArray *param_7,long *param_8)

{
  undefined *puVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  long lVar4;
  QArrayData *pQVar5;
  AnonymousUnion0 local_f8;
  AnonymousUnion0 local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QString local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QArrayData *local_b0;
  AnonymousUnion0 local_a8;
  QString local_a0;
  QString local_98;
  QString local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  if (*(int *)(*param_8 + 0xc) != *(int *)(*param_8 + 8)) {
    QMutex::lock();
    (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_8);
    QMutex::unlock();
    return;
  }
  pQVar2 = (QArrayData *)QString::fromAscii_helper(",",1);
  QtPrivate::QStringList_join
            ((QStringList *)&local_a8.field0,param_3,
             (int)*(undefined8 *)(pQVar2 + 0x10) + (int)pQVar2);
  QString::fromUtf8_helper((char *)&local_a0,0x1e3ca02);
  QString::append(&local_a0);
  local_98.field0_0x0 = local_a0.field0_0x0;
  if (1 < *(int *)local_a0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + 1;
    local_31 = *(int *)local_a0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_58,0x1e3ca0a);
  QString::append(&local_98);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3cea4;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100a3cea4:
  puVar1 = PTR_shared_null_1021e1288;
  local_c0 = (QArrayData *)PTR_shared_null_1021e1288;
  local_c8 = (QArrayData *)PTR_shared_null_1021e1288;
  QUrl::toPercentEncoding(&local_b8,param_6,(QByteArray *)&local_c0);
  lVar4 = 0;
  pQVar5 = (QArrayData *)(local_b8.field0_0x0 + *(long *)(local_b8.field0_0x0 + 0x10));
  if ((pQVar5 != (QArrayData *)0x0) && (*(uint *)(local_b8.field0_0x0 + 4) != 0)) {
    lVar4 = 0;
    do {
      if (pQVar5[lVar4] == (QArrayData)0x0) break;
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(local_b8.field0_0x0 + 4));
  }
  local_b0 = (QArrayData *)QString::fromAscii_helper((char *)pQVar5,(int)lVar4);
  local_90.field0_0x0 = local_98.field0_0x0;
  if (1 < *(int *)local_98.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + 1;
    local_31 = *(int *)local_98.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_90);
  local_88.field0_0x0 = local_90.field0_0x0;
  if (1 < *(int *)local_90.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + 1;
    local_31 = *(int *)local_90.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_50,0x1e3ca14);
  QString::append(&local_88);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3cfb9;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100a3cfb9:
  local_e0 = (QArrayData *)puVar1;
  local_e8 = (QArrayData *)puVar1;
  QUrl::toPercentEncoding(&local_d8,param_7,(QByteArray *)&local_e0);
  lVar4 = 0;
  pQVar5 = (QArrayData *)(local_d8.field0_0x0 + *(long *)(local_d8.field0_0x0 + 0x10));
  if ((pQVar5 != (QArrayData *)0x0) && (*(uint *)(local_d8.field0_0x0 + 4) != 0)) {
    lVar4 = 0;
    do {
      if (pQVar5[lVar4] == (QArrayData)0x0) break;
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(local_d8.field0_0x0 + 4));
  }
  local_d0 = (QArrayData *)QString::fromAscii_helper((char *)pQVar5,(int)lVar4);
  local_80.field0_0x0 = local_88.field0_0x0;
  if (1 < *(int *)local_88.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + 1;
    local_31 = *(int *)local_88.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_80);
  local_78.field0_0x0 = local_80.field0_0x0;
  if (1 < *(int *)local_80.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
    local_31 = *(int *)local_80.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_48,0x1e3ca1b);
  QString::append(&local_78);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3d0bd;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100a3d0bd:
  pQVar5 = (QArrayData *)QString::fromAscii_helper(",",1);
  QtPrivate::QStringList_join
            ((QStringList *)&local_f0.field0,param_4,
             (int)*(undefined8 *)(pQVar5 + 0x10) + (int)pQVar5);
  local_70.field0_0x0 = local_78.field0_0x0;
  if (1 < *(int *)local_78.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
    local_31 = *(int *)local_78.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_70);
  local_68.field0_0x0 = local_70.field0_0x0;
  if (1 < *(int *)local_70.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
    local_31 = *(int *)local_70.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1e3ca20);
  QString::append(&local_68);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3d181;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100a3d181:
  pQVar3 = (QArrayData *)QString::fromAscii_helper(",",1);
  QtPrivate::QStringList_join
            ((QStringList *)&local_f8.field0,param_5,
             (int)*(undefined8 *)(pQVar3 + 0x10) + (int)pQVar3);
  local_60.field0_0x0 = local_68.field0_0x0;
  if (1 < *(int *)local_68.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
    local_31 = *(int *)local_68.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_60);
  if (*(int *)local_f8.field1 != -1) {
    if (*(int *)local_f8.field1 != 0) {
      LOCK();
      *(int *)local_f8.field1 = *(int *)local_f8.field1 + -1;
      local_31 = *(int *)local_f8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3d211;
    }
    QArrayData::deallocate((QArrayData *)local_f8.field1,2,8);
  }
LAB_100a3d211:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3d23c;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100a3d23c:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3d26c;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100a3d26c:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3d29c;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100a3d29c:
  if (*(int *)local_f0.field1 != -1) {
    if (*(int *)local_f0.field1 != 0) {
      LOCK();
      *(int *)local_f0.field1 = *(int *)local_f0.field1 + -1;
      local_31 = *(int *)local_f0.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3d2d2;
    }
    QArrayData::deallocate((QArrayData *)local_f0.field1,2,8);
  }
LAB_100a3d2d2:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3d301;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100a3d301:
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3d331;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100a3d331:
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3d361;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_100a3d361:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3d397;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100a3d397:
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_31 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3d3cd;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,1,8);
  }
LAB_100a3d3cd:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3d403;
    }
    QArrayData::deallocate(local_e8,1,8);
  }
LAB_100a3d403:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3d439;
    }
    QArrayData::deallocate(local_e0,1,8);
  }
LAB_100a3d439:
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3d469;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_100a3d469:
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3d49f;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_100a3d49f:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3d4d5;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100a3d4d5:
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_31 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3d50b;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,1,8);
  }
LAB_100a3d50b:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3d541;
    }
    QArrayData::deallocate(local_c8,1,8);
  }
LAB_100a3d541:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3d577;
    }
    QArrayData::deallocate(local_c0,1,8);
  }
LAB_100a3d577:
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3d5ad;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_100a3d5ad:
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_31 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3d5e3;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_100a3d5e3:
  if (*(int *)local_a8.field1 != -1) {
    if (*(int *)local_a8.field1 != 0) {
      LOCK();
      *(int *)local_a8.field1 = *(int *)local_a8.field1 + -1;
      local_31 = *(int *)local_a8.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3d619;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field1,2,8);
  }
LAB_100a3d619:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a3d646;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100a3d646:
  if (*(long *)(param_1 + 0x10) != 0) {
    QMutex::lock();
    (**(code **)(**(long **)(param_1 + 0x10) + 0x20))(*(long **)(param_1 + 0x10),&local_60,0);
    QMutex::unlock();
  }
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_60.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
  return;
}

