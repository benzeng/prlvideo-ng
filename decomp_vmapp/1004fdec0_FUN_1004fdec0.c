
undefined8 FUN_1004fdec0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  QArrayData *pQVar3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  _func_void_Node_ptr *p_Var6;
  long *plVar7;
  bool bVar8;
  QArrayData *local_90;
  QString local_88;
  QString local_80;
  QFileInfo local_78 [8];
  QArrayData *local_70;
  QDirIterator local_68 [8];
  QString local_60;
  QFileInfo local_58 [8];
  QString local_50;
  QArrayData *local_48;
  QDir local_40 [15];
  undefined1 local_31;
  
  QDir::QDir(local_40,(QString *)(param_1 + 0x10));
  QString::indexOf(param_2,0x2f,0,1);
  QString::left((int)&local_48);
  pQVar3 = (QArrayData *)QString::fromAscii_helper("/",1);
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_31 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar3;
  QString::append(&local_50);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004fdf71;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1004fdf71:
  QMutex::lock();
  bVar8 = true;
  plVar7 = (long *)(param_1 + 0x20);
  p_Var4 = (_func_void_Node_ptr_void_ptr *)FUN_100502100(plVar7,&local_48);
  p_Var5 = (_func_void_Node_ptr_void_ptr *)*plVar7;
  if (1 < *(uint *)(p_Var5 + 0x10)) {
    p_Var5 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var5,FUN_100479fd0,0x471cc0,0x20);
    p_Var6 = (_func_void_Node_ptr *)*plVar7;
    if (*(int *)(p_Var6 + 0x10) != -1) {
      if (*(int *)(p_Var6 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var6 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004fe014;
        p_Var6 = (_func_void_Node_ptr *)*plVar7;
      }
      QHashData::free_helper(p_Var6);
    }
LAB_1004fe014:
    *plVar7 = (long)p_Var5;
  }
  if (p_Var5 == p_Var4) goto LAB_1004fe0da;
  local_60.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(p_Var4 + 0x18);
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_31 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_60);
  QFileInfo::QFileInfo(local_58,local_40,&local_60);
  cVar2 = QFileInfo::exists();
  QFileInfo::~QFileInfo(local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004fe0a2;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1004fe0a2:
  if (cVar2 == '\0') {
    FUN_1005027e0(plVar7,p_Var4);
LAB_1004fe0da:
    bVar8 = false;
    QMutex::unlock();
    QDirIterator::QDirIterator(local_68,(QString *)(param_1 + 0x10),0x6400,0);
LAB_1004fe12f:
    do {
      cVar2 = QDirIterator::hasNext();
      if (cVar2 == '\0') goto LAB_1004fe240;
      QDirIterator::next();
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004fe17b;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_1004fe17b:
      QDirIterator::fileName();
      local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_90;
      if (1 < *(int *)local_90 + 1U) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + 1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
      }
      QString::append(&local_80);
      QFileInfo::QFileInfo(local_78,local_40,&local_80);
      cVar2 = QFileInfo::exists();
      QFileInfo::~QFileInfo(local_78);
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004fe203;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_1004fe203:
      if (cVar2 != '\0') {
        QMutex::lock();
        FUN_1005022f0(plVar7,&local_48,&local_90);
        QMutex::unlock();
        QDirIterator::~QDirIterator(local_68);
        goto LAB_1004fe2ba;
      }
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004fe12f;
        }
        QArrayData::deallocate(local_90,2,8);
      }
    } while( true );
  }
  local_90 = *(QArrayData **)(p_Var4 + 0x18);
  if (1 < *(int *)local_90 + 1U) {
    LOCK();
    *(int *)local_90 = *(int *)local_90 + 1;
    local_31 = *(int *)local_90 != 0;
    UNLOCK();
  }
LAB_1004fe2ba:
  if (bVar8) {
    QMutex::unlock();
  }
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004fe2fc;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1004fe2fc:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004fe32c;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004fe32c:
  QDir::~QDir(local_40);
  pQVar3 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_90;
  if (1 < *(int *)local_90 + 1U) {
    LOCK();
    *(int *)local_90 = *(int *)local_90 + 1;
    local_31 = *(int *)local_90 != 0;
    UNLOCK();
  }
  QString::append(&local_88);
  QString::insert((int)param_2,(QChar *)0x0,
                  (int)*(undefined8 *)(local_88.field0_0x0 + 0x10) + (int)local_88.field0_0x0);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004fe3c1;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1004fe3c1:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004fe3f7;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1004fe3f7:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      UNLOCK();
      if (*(int *)local_90 != 0) {
        return 1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_90,2,8);
  }
  return 1;
LAB_1004fe240:
  QDirIterator::~QDirIterator(local_68);
  pQVar3 = DAT_1011bc270;
  local_90 = DAT_1011bc270;
  if (1 < *(int *)DAT_1011bc270 + 1U) {
    LOCK();
    *(int *)DAT_1011bc270 = *(int *)DAT_1011bc270 + 1;
    local_31 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  goto LAB_1004fe2ba;
}

