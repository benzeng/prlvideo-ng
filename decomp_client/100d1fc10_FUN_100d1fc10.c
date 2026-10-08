
bool FUN_100d1fc10(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  bool bVar2;
  QDomNode local_68 [8];
  QDomDocument local_60 [8];
  undefined4 local_58;
  int local_54;
  QArrayData *local_50;
  QArrayData *local_48;
  QFile local_40 [16];
  QString local_30;
  undefined1 local_21;
  
  FUN_100d1e430(&local_30);
  QFile::QFile(local_40,&local_30);
  cVar1 = QFile::open(local_40,1);
  if (cVar1 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("","VmConfigParser",0,"Failed to load repo: %s",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 == -1) {
      bVar2 = false;
    }
    else {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_21) {
          bVar2 = false;
          goto LAB_100d1fd86;
        }
      }
      QArrayData::deallocate(local_48,1,8);
      bVar2 = false;
    }
  }
  else {
    local_50 = (QArrayData *)PTR_shared_null_1021e1288;
    local_54 = -1;
    local_58 = 0xffffffff;
    QDomDocument::QDomDocument(local_60);
    cVar1 = QDomDocument::setContent
                      ((QIODevice *)local_60,SUB81(local_40,0),(QString *)0x1,(int *)&local_50,
                       &local_54);
    bVar2 = cVar1 != '\0';
    if (bVar2) {
      FUN_100b7c6f0(param_1);
      QDomDocument::documentElement();
      FUN_100d1ee90(param_1,local_68,param_3);
      QDomNode::~QDomNode(local_68);
    }
    QDomDocument::~QDomDocument(local_60);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_21 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100d1fd86;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_100d1fd86:
  QFile::~QFile(local_40);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return bVar2;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return bVar2;
}

