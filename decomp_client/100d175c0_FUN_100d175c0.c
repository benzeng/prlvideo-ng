
undefined1 FUN_100d175c0(long param_1,QString *param_2)

{
  QString *this;
  long *plVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  undefined1 uVar5;
  QDomNode local_78 [8];
  long *local_70;
  QFileInfo local_68 [8];
  QArrayData *local_60;
  QDomDocument local_58 [8];
  undefined4 local_50;
  int local_4c;
  QArrayData *local_48;
  QFile local_40 [23];
  undefined1 local_29;
  
  this = (QString *)(param_1 + 8);
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    if (*(int *)(this->field0_0x0 + 4) == 0) {
      return 0;
    }
  }
  else {
    QString::operator=(this,param_2);
  }
  QFile::QFile(local_40,this);
  cVar3 = QFile::open(local_40,1);
  if (cVar3 == '\0') {
    uVar5 = 0;
    goto LAB_100d1783c;
  }
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  local_4c = -1;
  local_50 = 0xffffffff;
  QDomDocument::QDomDocument(local_58);
  cVar3 = QDomDocument::setContent
                    ((QIODevice *)local_58,SUB81(local_40,0),(QString *)0x1,(int *)&local_48,
                     &local_4c);
  if (cVar3 == '\0') {
    uVar5 = 0;
  }
  else {
    plVar4 = (long *)FUN_100d210e0(param_1 + 0x28);
    QFileInfo::QFileInfo(local_68,param_2);
    QFileInfo::absolutePath();
    local_70 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
    if (local_70 == (long *)0x0) {
      local_70 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        local_70 = (long *)0x0;
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
    else {
      *(undefined4 *)(local_70 + 1) = 1;
      local_70[2] = (long)plVar4;
      *local_70 = (long)&PTR_FUN_10230f530;
    }
    plVar4 = (long *)FUN_100d214a0(local_58,&local_60,&local_70);
    if (local_70 != (long *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100d1774d;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100d1774d:
    QFileInfo::~QFileInfo(local_68);
    if (plVar4 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      QDomDocument::documentElement();
      FUN_100d17950(param_1,local_78);
      FUN_100d17cf0(param_1,plVar4);
      FUN_100d183d0(param_1,plVar4);
      FUN_100d18de0(param_1,local_78);
      FUN_100d192c0(param_1,plVar4);
      FUN_100d19850(param_1,plVar4);
      FUN_100d19ec0(param_1,local_78);
      FUN_100d1ab70(param_1,local_78);
      FUN_100d1b050(param_1,local_78);
      FUN_100d1c2b0(param_1,local_78);
      QDomNode::~QDomNode(local_78);
      uVar5 = 1;
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  QDomDocument::~QDomDocument(local_58);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d1783c;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100d1783c:
  QFile::~QFile(local_40);
  return uVar5;
}

