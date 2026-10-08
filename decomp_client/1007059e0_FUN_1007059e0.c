
QString * FUN_1007059e0(QString *param_1,long param_2)

{
  int iVar1;
  QKeySequence *pQVar2;
  long lVar3;
  QArrayData *local_78;
  QArrayData *local_70;
  Data *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  Data *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_40 = (QArrayData *)QString::fromAscii_helper("Grab host shortcuts type: \t%1\n",0x1e);
  QString::arg(param_1,&local_40,(long)*(int *)(*(long *)(param_2 + 0x10) + 0x18),0,10,0x20);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100705a5e;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100705a5e:
  FUN_100708240(&local_48);
  if (*(int *)(local_48 + 0xc) != *(int *)(local_48 + 8)) {
    local_58 = (QArrayData *)QString::fromAscii_helper("ShowHideAppShortcut \t%1\n",0x18);
    FUN_100708240(&local_68,*(long *)(param_2 + 0x10) + 0x20);
    FUN_1007170a0(&local_60,local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10,1);
    QString::arg(&local_50,&local_58,&local_60,0,0x20);
    QString::append(param_1);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100705b15;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100705b15:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100705b45;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100705b45:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100705baa;
      }
      iVar1 = *(int *)(local_68 + 0xc);
      if (iVar1 != *(int *)(local_68 + 8)) {
        lVar3 = (long)*(int *)(local_68 + 8) * 8 + (long)iVar1 * -8;
        pQVar2 = (QKeySequence *)(local_68 + (long)iVar1 * 8 + 8);
        do {
          QKeySequence::~QKeySequence(pQVar2);
          pQVar2 = pQVar2 + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      QListData::dispose(local_68);
    }
LAB_100705baa:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100705bda;
      }
      QArrayData::deallocate(local_58,2,8);
    }
  }
LAB_100705bda:
  lVar3 = *(long *)(param_2 + 0x10);
  local_78 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_1007026b0(&local_70,lVar3 + 0x30,&local_78,1);
  QString::append(param_1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100705c45;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100705c45:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100705c75;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100705c75:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_48 + 0xc);
    if (iVar1 != *(int *)(local_48 + 8)) {
      lVar3 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
      pQVar2 = (QKeySequence *)(local_48 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar2);
        pQVar2 = pQVar2 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(local_48);
  }
  return param_1;
}

