
QString * FUN_1005eb2f0(QString *param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  QString *pQVar4;
  uint uVar5;
  undefined4 uVar6;
  QString local_90;
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  if ((*(long *)(param_2 + 0x68) == 0) ||
     (lVar3 = *(long *)(*(long *)(param_2 + 0x68) + 0x10), lVar3 == 0)) {
    FUN_1008e3970("","vdisk",0,"Error: can\'t generate Icurrent VMDK is unavailable");
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    goto LAB_1005eb851;
  }
  iVar2 = FUN_1007ea6f0(param_3,lVar3 + 0x218);
  lVar3 = *(long *)(param_2 + 0x68);
  if (iVar2 == 0) {
    if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x10), lVar3 == 0)) {
      FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","VMDK.isValid()",
                    "VMwareDiskDescriptor.cpp",0xe2,"ChildVMDKType");
      lVar3 = *(long *)(*(long *)(param_2 + 0x68) + 0x10);
    }
    uVar5 = *(int *)(lVar3 + 0x240) - 0x5a;
    if (uVar5 < 4) {
      uVar6 = *(undefined4 *)(&DAT_100b477c0 + (long)(int)uVar5 * 4);
    }
    else {
      uVar6 = 0;
      FUN_1008e3970("","vdisk",0,"Error: unknown VMDK type %u");
    }
    QFileInfo::fileName();
    uVar5 = FUN_1005db030(&local_58,0);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005eb48a;
      }
      QArrayData::deallocate(local_58,2,8);
    }
  }
  else {
    uVar6 = *(undefined4 *)(*(long *)(lVar3 + 0x10) + 0x240);
    uVar5 = *(int *)(param_2 + 0x80) + 1;
  }
LAB_1005eb48a:
  puVar1 = PTR_shared_null_100ba20d0;
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  if (uVar5 != 0) {
    local_68 = (QArrayData *)PTR_shared_null_100ba20d0;
    pQVar4 = (QString *)QString::sprintf((char *)&local_68,"-%06u",(ulong)uVar5);
    QString::operator=(&local_60,pQVar4);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005eb4f4;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_1005eb4f4:
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  switch(uVar6) {
  case 0x5a:
    QString::fromUtf8_helper((char *)&local_50,0xa4d19f);
    QString::operator=(&local_70,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
    break;
  case 0x5b:
    QString::fromUtf8_helper((char *)&local_48,0xa320a0);
    QString::operator=(&local_70,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
    break;
  case 0x5c:
    local_78 = (QArrayData *)puVar1;
    pQVar4 = (QString *)QString::sprintf((char *)&local_78,"-f%03u",(ulong)(param_4 + 1));
    QString::operator=(&local_70,pQVar4);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_78,2,8);
    }
    break;
  case 0x5d:
    local_80 = (QArrayData *)puVar1;
    pQVar4 = (QString *)QString::sprintf((char *)&local_80,"-s%03u",(ulong)(param_4 + 1));
    QString::operator=(&local_70,pQVar4);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_80,2,8);
    }
    break;
  default:
    FUN_1008e3970("","vdisk",0,"Error: unknown disk type: %u",
                  *(undefined4 *)(*(long *)(*(long *)(param_2 + 0x68) + 0x10) + 0x240));
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
    goto LAB_1005eb7ea;
  }
  local_90.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_2 + 0x78);
  if (1 < *(int *)local_90.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + 1;
    local_31 = *(int *)local_90.field0_0x0 != 0;
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
  QString::append(&local_88);
  param_1->field0_0x0 = local_88.field0_0x0;
  if (1 < *(int *)local_88.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + 1;
    local_31 = *(int *)local_88.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0xa487c4);
  QString::append(param_1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005eb784;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005eb784:
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005eb7b4;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1005eb7b4:
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005eb7ea;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1005eb7ea:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005eb81a;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1005eb81a:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005eb851;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1005eb851:
  QMutex::unlock();
  return param_1;
}

