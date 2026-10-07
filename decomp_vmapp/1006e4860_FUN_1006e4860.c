
QString * FUN_1006e4860(QString *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  QArrayData *pQVar7;
  QArrayData *local_1100;
  QString local_10f8;
  QArrayData *local_10f0;
  QArrayData *local_10e8;
  QArrayData *local_10e0;
  QArrayData *local_10d8;
  QArrayData *local_10d0;
  QArrayData *local_10c8;
  QArrayData *local_10c0;
  QArrayData *local_10b8;
  QArrayData *local_10b0;
  QArrayData *local_10a8;
  QArrayData *local_10a0;
  QArrayData *local_1098;
  undefined1 local_1089;
  char local_1088 [4096];
  undefined1 local_88 [80];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_10a0 = (QArrayData *)*param_2;
  if (1 < *(int *)local_10a0 + 1U) {
    LOCK();
    *(int *)local_10a0 = *(int *)local_10a0 + 1;
    local_1089 = *(int *)local_10a0 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  lVar3 = _CFStringCreateWithCString(0,local_1098 + *(long *)(local_1098 + 0x10),0x600);
  if (*(int *)local_1098 != -1) {
    if (*(int *)local_1098 != 0) {
      LOCK();
      *(int *)local_1098 = *(int *)local_1098 + -1;
      local_1089 = *(int *)local_1098 != 0;
      UNLOCK();
      if ((bool)local_1089) goto LAB_1006e4920;
    }
    QArrayData::deallocate(local_1098,1,8);
  }
LAB_1006e4920:
  if (*(int *)local_10a0 != -1) {
    if (*(int *)local_10a0 != 0) {
      LOCK();
      *(int *)local_10a0 = *(int *)local_10a0 + -1;
      local_1089 = *(int *)local_10a0 != 0;
      UNLOCK();
      if ((bool)local_1089) goto LAB_1006e495c;
    }
    QArrayData::deallocate(local_10a0,2,8);
  }
LAB_1006e495c:
  if (lVar3 == 0) {
    local_10b0 = (QArrayData *)*param_2;
    if (1 < *(int *)local_10b0 + 1U) {
      LOCK();
      *(int *)local_10b0 = *(int *)local_10b0 + 1;
      local_1089 = *(int *)local_10b0 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","cmn_utils",0,"Error: failed to create CFString for \"%s\"",
                  local_10a8 + *(long *)(local_10a8 + 0x10));
    if (*(int *)local_10a8 != -1) {
      if (*(int *)local_10a8 != 0) {
        LOCK();
        *(int *)local_10a8 = *(int *)local_10a8 + -1;
        local_1089 = *(int *)local_10a8 != 0;
        UNLOCK();
        if ((bool)local_1089) goto LAB_1006e4b3d;
      }
      QArrayData::deallocate(local_10a8,1,8);
    }
LAB_1006e4b3d:
    if (*(int *)local_10b0 != -1) {
      if (*(int *)local_10b0 != 0) {
        LOCK();
        *(int *)local_10b0 = *(int *)local_10b0 + -1;
        local_1089 = *(int *)local_10b0 != 0;
        UNLOCK();
        if ((bool)local_1089) goto LAB_1006e4ee5;
      }
      QArrayData::deallocate(local_10b0,2,8);
    }
    goto LAB_1006e4ee5;
  }
  local_10c0 = (QArrayData *)*param_3;
  if (1 < *(int *)local_10c0 + 1U) {
    LOCK();
    *(int *)local_10c0 = *(int *)local_10c0 + 1;
    local_1089 = *(int *)local_10c0 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  lVar4 = _CFStringCreateWithCString(0,local_10b8 + *(long *)(local_10b8 + 0x10),0x600);
  if (*(int *)local_10b8 != -1) {
    if (*(int *)local_10b8 != 0) {
      LOCK();
      *(int *)local_10b8 = *(int *)local_10b8 + -1;
      local_1089 = *(int *)local_10b8 != 0;
      UNLOCK();
      if ((bool)local_1089) goto LAB_1006e49ed;
    }
    QArrayData::deallocate(local_10b8,1,8);
  }
LAB_1006e49ed:
  if (*(int *)local_10c0 != -1) {
    if (*(int *)local_10c0 != 0) {
      LOCK();
      *(int *)local_10c0 = *(int *)local_10c0 + -1;
      local_1089 = *(int *)local_10c0 != 0;
      UNLOCK();
      if ((bool)local_1089) goto LAB_1006e4a29;
    }
    QArrayData::deallocate(local_10c0,2,8);
  }
LAB_1006e4a29:
  if (lVar4 != 0) {
    uVar5 = _CFBundleGetMainBundle();
    lVar6 = _CFBundleCopyResourceURL(uVar5,lVar3,lVar4,0);
    if (lVar6 != 0) {
      cVar1 = _CFURLGetFSRef(lVar6,local_88);
      if (cVar1 != '\0') {
        iVar2 = _FSRefMakePath(local_88,local_1088,0x1000);
        if (iVar2 == 0) {
          _strlen(local_1088);
          QString::fromUtf8_helper((char *)&local_1100,(int)local_1088);
          QString::normalized(&local_10f8,&local_1100,1,0);
          QString::operator=(param_1,&local_10f8);
          if (*(int *)local_10f8.field0_0x0 != -1) {
            if (*(int *)local_10f8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_10f8.field0_0x0 = *(int *)local_10f8.field0_0x0 + -1;
              local_1089 = *(int *)local_10f8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_1089) goto LAB_1006e4e91;
            }
            QArrayData::deallocate((QArrayData *)local_10f8.field0_0x0,2,8);
          }
LAB_1006e4e91:
          if (*(int *)local_1100 != -1) {
            if (*(int *)local_1100 != 0) {
              LOCK();
              *(int *)local_1100 = *(int *)local_1100 + -1;
              local_1089 = *(int *)local_1100 != 0;
              UNLOCK();
              if ((bool)local_1089) goto LAB_1006e4ecd;
            }
            QArrayData::deallocate(local_1100,2,8);
          }
        }
        else {
          FUN_1008e3970("","cmn_utils",0,"Error: failed to get file path from FSRef");
        }
      }
LAB_1006e4ecd:
      _CFRelease(lVar3);
      _CFRelease(lVar4);
      _CFRelease(lVar6);
      goto LAB_1006e4ee5;
    }
    local_10e0 = (QArrayData *)*param_2;
    if (1 < *(int *)local_10e0 + 1U) {
      LOCK();
      *(int *)local_10e0 = *(int *)local_10e0 + 1;
      local_1089 = *(int *)local_10e0 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    pQVar7 = local_10d8 + *(long *)(local_10d8 + 0x10);
    local_10f0 = (QArrayData *)*param_3;
    if (1 < *(int *)local_10f0 + 1U) {
      LOCK();
      *(int *)local_10f0 = *(int *)local_10f0 + 1;
      local_1089 = *(int *)local_10f0 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","cmn_utils",0,
                  "Error: failed to get CFURL on resource: name=\"%s\", type=\"%s\"",pQVar7,
                  local_10e8 + *(long *)(local_10e8 + 0x10));
    if (*(int *)local_10e8 != -1) {
      if (*(int *)local_10e8 != 0) {
        LOCK();
        *(int *)local_10e8 = *(int *)local_10e8 + -1;
        local_1089 = *(int *)local_10e8 != 0;
        UNLOCK();
        if ((bool)local_1089) goto LAB_1006e4d3f;
      }
      QArrayData::deallocate(local_10e8,1,8);
    }
LAB_1006e4d3f:
    if (*(int *)local_10f0 != -1) {
      if (*(int *)local_10f0 != 0) {
        LOCK();
        *(int *)local_10f0 = *(int *)local_10f0 + -1;
        local_1089 = *(int *)local_10f0 != 0;
        UNLOCK();
        if ((bool)local_1089) goto LAB_1006e4d7b;
      }
      QArrayData::deallocate(local_10f0,2,8);
    }
LAB_1006e4d7b:
    if (*(int *)local_10d8 != -1) {
      if (*(int *)local_10d8 != 0) {
        LOCK();
        *(int *)local_10d8 = *(int *)local_10d8 + -1;
        local_1089 = *(int *)local_10d8 != 0;
        UNLOCK();
        if ((bool)local_1089) goto LAB_1006e4db7;
      }
      QArrayData::deallocate(local_10d8,1,8);
    }
LAB_1006e4db7:
    if (*(int *)local_10e0 != -1) {
      if (*(int *)local_10e0 != 0) {
        LOCK();
        *(int *)local_10e0 = *(int *)local_10e0 + -1;
        local_1089 = *(int *)local_10e0 != 0;
        UNLOCK();
        if ((bool)local_1089) goto LAB_1006e4df3;
      }
      QArrayData::deallocate(local_10e0,2,8);
    }
LAB_1006e4df3:
    _CFRelease(lVar3);
    _CFRelease(lVar4);
    goto LAB_1006e4ee5;
  }
  local_10d0 = (QArrayData *)*param_3;
  if (1 < *(int *)local_10d0 + 1U) {
    LOCK();
    *(int *)local_10d0 = *(int *)local_10d0 + 1;
    local_1089 = *(int *)local_10d0 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_1008e3970("","cmn_utils",0,"Error: failed to create CFString for \"%s\"",
                local_10c8 + *(long *)(local_10c8 + 0x10));
  if (*(int *)local_10c8 != -1) {
    if (*(int *)local_10c8 != 0) {
      LOCK();
      *(int *)local_10c8 = *(int *)local_10c8 + -1;
      local_1089 = *(int *)local_10c8 != 0;
      UNLOCK();
      if ((bool)local_1089) goto LAB_1006e4c1d;
    }
    QArrayData::deallocate(local_10c8,1,8);
  }
LAB_1006e4c1d:
  if (*(int *)local_10d0 != -1) {
    if (*(int *)local_10d0 != 0) {
      LOCK();
      *(int *)local_10d0 = *(int *)local_10d0 + -1;
      local_1089 = *(int *)local_10d0 != 0;
      UNLOCK();
      if ((bool)local_1089) goto LAB_1006e4c59;
    }
    QArrayData::deallocate(local_10d0,2,8);
  }
LAB_1006e4c59:
  _CFRelease(lVar3);
LAB_1006e4ee5:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

