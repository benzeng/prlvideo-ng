
undefined8 FUN_1005b21b0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  undefined8 uVar7;
  undefined8 in_stack_ffffffffffffff18;
  undefined8 in_stack_ffffffffffffff20;
  undefined4 uVar8;
  QArrayData *local_c8;
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
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58 [2];
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  uVar8 = (undefined4)((ulong)in_stack_ffffffffffffff20 >> 0x20);
  uVar3 = (undefined4)((ulong)in_stack_ffffffffffffff18 >> 0x20);
  iVar2 = FUN_1007ea6f0(param_2,param_3);
  if (iVar2 == 0) {
    uVar8 = 1;
    uVar7 = CONCAT44(uVar3,0x73d);
    FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","fromId != toId",
                  "BlockGroup.cpp",uVar7,"RenameCacheFile");
    uVar3 = (undefined4)((ulong)uVar7 >> 0x20);
  }
  FUN_1005b1f10(&local_40,param_1,param_2);
  FUN_1005b1f10(&local_48,param_1,param_3);
  QFile::QFile((QFile *)local_58,&local_40);
  cVar1 = QFile::exists();
  if (cVar1 == '\0') {
    uVar7 = 0x80021000;
    if (1 < DAT_1011b55f8) {
      FUN_1007d6a70(&local_68,param_2);
      QString::toUtf8();
      pQVar5 = local_60 + *(long *)(local_60 + 0x10);
      FUN_1007d6a70(&local_78,param_3);
      QString::toUtf8();
      pQVar4 = local_70 + *(long *)(local_70 + 0x10);
      (**(code **)(*param_1 + 0x178))(&local_88,param_1);
      QString::toUtf8();
      FUN_1008e3970("","vdisk",2,"No source file for rename %s -> %s at path \'%s\'",pQVar5,pQVar4,
                    local_80 + *(long *)(local_80 + 0x10));
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005b266d;
        }
        QArrayData::deallocate(local_80,1,8);
      }
LAB_1005b266d:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005b269d;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_1005b269d:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005b26cd;
        }
        QArrayData::deallocate(local_70,1,8);
      }
LAB_1005b26cd:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005b26fd;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1005b26fd:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005b272d;
        }
        QArrayData::deallocate(local_60,1,8);
      }
LAB_1005b272d:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005b275d;
        }
        QArrayData::deallocate(local_68,2,8);
      }
    }
  }
  else {
    cVar1 = QFile::exists(&local_48);
    if (cVar1 != '\0') {
      uVar8 = 1;
      FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","!QFile::exists(fileToPath)",
                    "BlockGroup.cpp",CONCAT44(uVar3,0x74a),"RenameCacheFile");
    }
    cVar1 = QFile::rename(local_58);
    uVar7 = 0;
    if ((cVar1 == '\0') && (uVar7 = 0x80021000, 1 < DAT_1011b55f8)) {
      FUN_1007d6a70(&local_98,param_2);
      QString::toUtf8();
      pQVar6 = local_90 + *(long *)(local_90 + 0x10);
      FUN_1007d6a70(&local_a8,param_3);
      QString::toUtf8();
      pQVar5 = local_a0 + *(long *)(local_a0 + 0x10);
      (**(code **)(*param_1 + 0x178))(&local_b8,param_1);
      QString::toUtf8();
      pQVar4 = local_b0 + *(long *)(local_b0 + 0x10);
      uVar3 = QFileDevice::error();
      QIODevice::errorString();
      QString::toUtf8();
      FUN_1008e3970("","vdisk",2,"Unable to rename %s -> %s at path \'%s\', err = [%d] \'%s\'",
                    pQVar6,pQVar5,pQVar4,CONCAT44(uVar8,uVar3),local_c0 + *(long *)(local_c0 + 0x10)
                   );
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005b240b;
        }
        QArrayData::deallocate(local_c0,1,8);
      }
LAB_1005b240b:
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005b2441;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_1005b2441:
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005b2477;
        }
        QArrayData::deallocate(local_b0,1,8);
      }
LAB_1005b2477:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005b24ad;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_1005b24ad:
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005b24e3;
        }
        QArrayData::deallocate(local_a0,1,8);
      }
LAB_1005b24e3:
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005b2519;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_1005b2519:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005b254f;
        }
        QArrayData::deallocate(local_90,1,8);
      }
LAB_1005b254f:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005b275d;
        }
        QArrayData::deallocate(local_98,2,8);
      }
    }
  }
LAB_1005b275d:
  QFile::~QFile((QFile *)local_58);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b2796;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1005b2796:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return uVar7;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return uVar7;
}

