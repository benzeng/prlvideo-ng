
char * FUN_1005fe020(char *param_1,long param_2)

{
  QFileInfo local_30 [8];
  QString local_28;
  undefined1 local_19;
  
  if (*(int *)(param_2 + 0x80) == 3) {
    QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,0x1dc6886);
  }
  else {
    FUN_1005fde90(&local_28);
    QFileInfo::QFileInfo(local_30,&local_28);
    QFileInfo::fileName();
    QFileInfo::~QFileInfo(local_30);
    if (*(int *)local_28.field0_0x0 != -1) {
      if (*(int *)local_28.field0_0x0 != 0) {
        LOCK();
        *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_28.field0_0x0 != 0) {
          return param_1;
        }
        local_19 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
    }
  }
  return param_1;
}

