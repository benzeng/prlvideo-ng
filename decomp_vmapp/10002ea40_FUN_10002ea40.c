
uint FUN_10002ea40(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  long *local_38;
  
  lVar1 = *param_2;
  if ((ulong)(long)*(int *)(lVar1 + 4) < 0x10) {
    return 0xfffffff7;
  }
  uVar6 = (long)*(int *)(lVar1 + 4) - 0x10;
  if (uVar6 < 0x1c) {
    return 0xfffffff7;
  }
  lVar2 = *(long *)(lVar1 + 0x10);
  uVar8 = *(uint *)(lVar2 + 0x10 + lVar1);
  uVar7 = uVar8 & 4;
  if ((uVar6 < 0x24) && (uVar7 != 0)) {
    return 0xfffffff7;
  }
  bVar3 = false;
  uVar9 = 0;
  if (uVar7 != 0) {
    uVar7 = *(uint *)(lVar2 + 0x2c + lVar1);
    bVar3 = 0x37 < uVar7;
    if ((uVar6 < 0x38) && (0x37 < uVar7)) {
      return 0xfffffff7;
    }
    uVar9 = *(undefined4 *)(lVar2 + 0x30 + lVar1);
  }
  if (((uVar8 & 2) == 0) ||
     (plVar5 = (long *)FUN_10002f1f0(param_1,uVar9,*(undefined4 *)(lVar2 + 0x18 + lVar1),
                                     *(undefined4 *)(lVar2 + 0x1c + lVar1)), plVar5 == (long *)0x0))
  {
    local_38 = (long *)0x0;
    FUN_1002592b0(FUN_10002f340,&local_38);
    uVar8 = 0xfffffff7;
    plVar5 = local_38;
    if (local_38 == (long *)0x0) goto LAB_10002ee89;
  }
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  if ((*(byte *)(lVar1 + 0x10 + lVar2) & 4) != 0) {
    if (bVar3) {
      local_68 = (QArrayData *)QString::fromAscii_helper("%1.%2.%3-%4",0xb);
      QString::arg(&local_60,&local_68,*(undefined4 *)(lVar2 + 0x34 + lVar1),0,10,0x20);
      QString::arg(&local_58,&local_60,*(undefined4 *)(lVar2 + 0x38 + lVar1),0,10,0x20);
      QString::arg(&local_50,&local_58,*(undefined4 *)(lVar2 + 0x3c + lVar1),0,10,0x20);
      QString::arg(&local_48,&local_50,*(undefined4 *)(lVar2 + 0x40 + lVar1),0,10,0x20);
      QString::operator=(&local_40,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          UNLOCK();
          local_38 = (long *)CONCAT71(local_38._1_7_,*(int *)local_48.field0_0x0 != 0);
          if (*(int *)local_48.field0_0x0 != 0) goto LAB_10002ebfd;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
LAB_10002ebfd:
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          UNLOCK();
          local_38 = (long *)CONCAT71(local_38._1_7_,*(int *)local_50 != 0);
          if (*(int *)local_50 != 0) goto LAB_10002ec2d;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_10002ec2d:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          UNLOCK();
          local_38 = (long *)CONCAT71(local_38._1_7_,*(int *)local_58 != 0);
          if (*(int *)local_58 != 0) goto LAB_10002ec5d;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_10002ec5d:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          UNLOCK();
          local_38 = (long *)CONCAT71(local_38._1_7_,*(int *)local_60 != 0);
          if (*(int *)local_60 != 0) goto LAB_10002ec8d;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_10002ec8d:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          UNLOCK();
          local_38 = (long *)CONCAT71(local_38._1_7_,*(int *)local_68 != 0);
          if (*(int *)local_68 != 0) goto LAB_10002ee0c;
        }
        QArrayData::deallocate(local_68,2,8);
      }
    }
    else {
      local_88 = (QArrayData *)QString::fromAscii_helper("%1.%2.%3",8);
      QString::arg(&local_80,&local_88,*(undefined4 *)(lVar2 + 0x20 + lVar1),0,10,0x20);
      QString::arg(&local_78,&local_80,*(undefined4 *)(lVar2 + 0x24 + lVar1),0,10,0x20);
      QString::arg(&local_70,&local_78,*(undefined4 *)(lVar2 + 0x28 + lVar1),0,10,0x20);
      QString::operator=(&local_40,&local_70);
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          UNLOCK();
          local_38 = (long *)CONCAT71(local_38._1_7_,*(int *)local_70.field0_0x0 != 0);
          if (*(int *)local_70.field0_0x0 != 0) goto LAB_10002ed7c;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
LAB_10002ed7c:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          UNLOCK();
          local_38 = (long *)CONCAT71(local_38._1_7_,*(int *)local_78 != 0);
          if (*(int *)local_78 != 0) goto LAB_10002edac;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_10002edac:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          UNLOCK();
          local_38 = (long *)CONCAT71(local_38._1_7_,*(int *)local_80 != 0);
          if (*(int *)local_80 != 0) goto LAB_10002eddc;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_10002eddc:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          UNLOCK();
          local_38 = (long *)CONCAT71(local_38._1_7_,*(int *)local_88 != 0);
          if (*(int *)local_88 != 0) goto LAB_10002ee0c;
        }
        QArrayData::deallocate(local_88,2,8);
      }
    }
  }
LAB_10002ee0c:
  if ((*(byte *)(lVar1 + 0x10 + lVar2) & 1) == 0) {
    QString::operator=(&local_40,(QString *)&DAT_1011b6238);
  }
  uVar8 = 0xfffffff7;
  if (*(int *)(local_40.field0_0x0 + 4) != 0) {
    iVar4 = (**(code **)(*plVar5 + 0x138))(plVar5,&DAT_1011b6230,&local_40);
    uVar8 = iVar4 >> 0x1f & 0xfffffff7;
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      local_38 = (long *)CONCAT71(local_38._1_7_,*(int *)local_40.field0_0x0 != 0);
      if (*(int *)local_40.field0_0x0 != 0) goto LAB_10002ee89;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10002ee89:
  FUN_10002e210(param_1,2);
  return uVar8;
}

