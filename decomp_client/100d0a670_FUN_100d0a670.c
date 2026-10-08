
bool FUN_100d0a670(long param_1,QString *param_2)

{
  QString *this;
  char cVar1;
  QDomNode local_50 [8];
  QDomDocument local_48 [12];
  int local_3c;
  QArrayData *local_38;
  QFile local_30 [23];
  undefined1 local_19;
  
  this = (QString *)(param_1 + 8);
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    if (*(int *)(this->field0_0x0 + 4) == 0) {
      return false;
    }
  }
  else {
    QString::operator=(this,param_2);
  }
  QFile::QFile(local_30,this);
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  QDomDocument::QDomDocument(local_48);
  cVar1 = QDomDocument::setContent
                    ((QIODevice *)local_48,SUB81(local_30,0),(QString *)0x1,(int *)&local_38,
                     &local_3c);
  if (cVar1 != '\0') {
    QDomDocument::documentElement();
    FUN_100d0a840(param_1,local_50);
    FUN_100d0bc00(param_1,local_50);
    FUN_100d0cfc0(param_1,local_50);
    FUN_100d0d390(param_1,local_50);
    FUN_100d0e180(param_1,local_50);
    FUN_100d0f8e0(param_1,local_50);
    FUN_100d10480(param_1,local_50);
    FUN_100d109d0(param_1,local_50);
    FUN_100d11fd0(param_1,local_50);
    FUN_100d12420(param_1,local_50);
    QDomNode::~QDomNode(local_50);
  }
  QDomDocument::~QDomDocument(local_48);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100d0a7ba;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100d0a7ba:
  QFile::~QFile(local_30);
  return cVar1 != '\0';
}

