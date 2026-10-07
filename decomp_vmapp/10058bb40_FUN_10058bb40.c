
void FUN_10058bb40(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  QArrayData *pQVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar11;
  undefined8 uVar10;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(char *)(param_1 + 0xb0) == '\0') {
    pcVar6 = "forward";
  }
  else {
    pcVar6 = "backward";
  }
  uVar8 = *(undefined8 *)(param_1 + 8);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  FUN_1008e3970("","vdisk",0,
                "MergeInfo: Async %s merge started, storage_id=%d, start_sector=%llu, end_sector=%llu"
                ,pcVar6,*(undefined4 *)(param_1 + 0x78),uVar8,uVar10);
  uVar9 = (undefined4)((ulong)uVar8 >> 0x20);
  FUN_1007d6a70(&local_48,param_1 + 0x9c);
  QString::toUtf8();
  FUN_1008e3970("","vdisk",0,"MergeInfo: m_Merge.Uid=%s",local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10058bc1c;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_10058bc1c:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10058bc4c;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10058bc4c:
  FUN_1008e3970("","vdisk",0,"MergeInfo: m_Merge.WrBackwardSnap=%d",*(undefined4 *)(param_1 + 0xac))
  ;
  FUN_1008e3970("","vdisk",0,"MergeInfo: m_Merge.BackwardMerge=%u",*(undefined1 *)(param_1 + 0xb0));
  FUN_1008e3970("","vdisk",0,"MergeInfo: m_Merge.WritableMerge=%u",*(undefined1 *)(param_1 + 0xb1));
  FUN_1008e3970("","vdisk",0,"MergeInfo: m_Merge.DelInfo.SnapID=%d",*(undefined4 *)(param_1 + 200));
  FUN_1007d6a70(&local_58,param_1 + 0xd0);
  QString::toUtf8();
  FUN_1008e3970("","vdisk",0,"MergeInfo: m_Merge.DelUid=%s",local_50 + *(long *)(local_50 + 0x10));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10058bd45;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10058bd45:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10058bd75;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10058bd75:
  uVar11 = (undefined4)((ulong)uVar10 >> 0x20);
  if (*(char *)(param_1 + 0xb0) == '\0') {
    uVar9 = *(undefined4 *)(param_1 + 200);
    (**(code **)(**(long **)(param_1 + 0xc0) + 0xd0))(&local_88);
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"MergeInfo: RD SNAP(id=%d, name=%s) >>>> ",uVar9,
                  local_80 + *(long *)(local_80 + 0x10));
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10058bfd6;
      }
      QArrayData::deallocate(local_80,1,8);
    }
LAB_10058bfd6:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10058c006;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_10058c006:
    lVar7 = *(long *)(param_1 + 0xe8);
    if (lVar7 == param_1 + 0xe0) {
      return;
    }
    iVar4 = 1;
    do {
      uVar11 = (undefined4)((ulong)uVar10 >> 0x20);
      uVar9 = *(undefined4 *)(lVar7 + 0x18);
      (**(code **)(**(long **)(lVar7 + 0x10) + 0xd0))(&local_98);
      QString::toUtf8();
      uVar10 = CONCAT44(uVar11,(uint)(*(long *)(lVar7 + 0x10) == *(long *)(param_1 + 0xb8)));
      FUN_1008e3970("","vdisk",0,"MergeInfo:        #%d WR SNAP(id=%d, name=%s, writable=%d)",iVar4,
                    uVar9,local_90 + *(long *)(local_90 + 0x10),uVar10);
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10058c0eb;
        }
        QArrayData::deallocate(local_90,1,8);
      }
LAB_10058c0eb:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10058c121;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_10058c121:
      lVar7 = *(long *)(lVar7 + 8);
      iVar4 = iVar4 + 1;
      if (lVar7 == param_1 + 0xe0) {
        return;
      }
    } while( true );
  }
  if (*(long *)(param_1 + 0xf0) != 1) {
    uVar11 = 1;
    uVar8 = CONCAT44(uVar9,0x474);
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "m_Merge.WrSnapsImgList.size() == 1","Storage.cpp",uVar8,"LogMergeInfo");
    uVar9 = (undefined4)((ulong)uVar8 >> 0x20);
  }
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0xe8) + 0x18);
  (**(code **)(**(long **)(*(long *)(param_1 + 0xe8) + 0x10) + 0xd0))(&local_68);
  QString::toUtf8();
  pQVar5 = local_60 + *(long *)(local_60 + 0x10);
  lVar7 = *(long *)(*(long *)(param_1 + 0xe8) + 0x10);
  lVar3 = *(long *)(param_1 + 0xb8);
  uVar2 = *(undefined4 *)(param_1 + 200);
  (**(code **)(**(long **)(param_1 + 0xc0) + 0xd0))(&local_78);
  QString::toUtf8();
  FUN_1008e3970("","vdisk",0,
                "MergeInfo: WR SNAP(id=%d, name=%s, writable=%d) <<<< RD SNAP(id=%d, name=%s)",uVar1
                ,pQVar5,CONCAT44(uVar9,(uint)(lVar7 == lVar3)),CONCAT44(uVar11,uVar2),
                local_70 + *(long *)(local_70 + 0x10));
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10058beb3;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_10058beb3:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10058bee3;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10058bee3:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10058bf13;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_10058bf13:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
  return;
}

