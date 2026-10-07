
undefined8 FUN_1005da7e0(QString *param_1,uint param_2,int *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  long *local_58;
  QArrayData *local_50;
  QFile local_48 [23];
  undefined1 local_31;
  
  QFile::QFile(local_48,param_1);
  cVar3 = QFile::open(local_48,1);
  if (cVar3 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"Error: can\'t open file \'%s\'",
                  local_50 + *(long *)(local_50 + 0x10));
    uVar5 = 0x80021001;
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005dab9c;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
  else {
    FUN_10069e530(&local_58);
    if (local_58 != (long *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    plVar2 = (long *)*param_4;
    *param_4 = (long)local_58;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    if (local_58 != (long *)0x0) {
      LOCK();
      plVar2 = local_58 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
    cVar3 = '\x01';
    if ((param_2 & 2) == 0) {
      cVar3 = (char)((param_2 & 0x20) >> 5);
    }
    lVar4 = QIODevice::read((char *)local_48,(longlong)param_3);
    if (lVar4 < 0) {
      QString::toUtf8();
      FUN_1008e3970("","vdisk",0,"Error: can\'t recognize vmdk format \'%s\'",
                    local_60 + *(long *)(local_60 + 0x10));
      uVar5 = 0x80021001;
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005dab9c;
        }
        QArrayData::deallocate(local_60,1,8);
      }
    }
    else if ((lVar4 == 0x200) && (*param_3 == 0x564d444b)) {
      if ((*(long *)(param_3 + 7) == 0) || (*(long *)(param_3 + 9) == 0)) {
        QString::toUtf8();
        FUN_1008e3970("","vdisk",0,
                      "Error: vmdk file \'%s\' is an extent image, but we it should be disk descriptor or monolithic image"
                      ,local_70 + *(long *)(local_70 + 0x10));
        uVar5 = 0x80021001;
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005dab9c;
          }
          QArrayData::deallocate(local_70,1,8);
        }
      }
      else {
        uVar5 = 0;
        if (*param_4 != 0) {
          uVar5 = *(undefined8 *)(*param_4 + 0x10);
        }
        cVar3 = FUN_1006b05a0(uVar5,cVar3 * '\x02',local_48,*(long *)(param_3 + 7) << 9,
                              *(long *)(param_3 + 9) << 9,0x44c,0x400);
        uVar5 = 0;
        if (cVar3 == '\0') {
          QString::toUtf8();
          FUN_1008e3970("","vdisk",0,"Error: can\'t parse vmdk disk descriptor \'%s\'",
                        local_78 + *(long *)(local_78 + 0x10));
          uVar5 = 0x80021001;
          if (*(int *)local_78 != -1) {
            if (*(int *)local_78 != 0) {
              LOCK();
              *(int *)local_78 = *(int *)local_78 + -1;
              local_31 = *(int *)local_78 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005dab9c;
            }
            QArrayData::deallocate(local_78,1,8);
          }
        }
      }
    }
    else {
      uVar5 = 0;
      if (*param_4 != 0) {
        uVar5 = *(undefined8 *)(*param_4 + 0x10);
      }
      cVar3 = FUN_1006b05a0(uVar5,cVar3 * '\x02',local_48,0,0,0x44c,0x400);
      if (cVar3 == '\0') {
        QString::toUtf8();
        FUN_1008e3970("","vdisk",0,"Error: can\'t parse vmdk disk descriptor \'%s\'",
                      local_68 + *(long *)(local_68 + 0x10));
        uVar5 = 0x80021001;
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005dab9c;
          }
          QArrayData::deallocate(local_68,1,8);
        }
      }
      else {
        ___bzero(param_3,0x200);
        uVar5 = 0;
      }
    }
  }
LAB_1005dab9c:
  QFile::~QFile(local_48);
  return uVar5;
}

