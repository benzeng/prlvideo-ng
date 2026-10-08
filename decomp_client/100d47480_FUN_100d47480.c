
undefined8 * FUN_100d47480(undefined8 *param_1,long *param_2,QString *param_3)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  long local_78;
  long *local_70;
  QString local_68;
  QTextStream local_60 [16];
  QString local_50;
  QArrayData *local_48;
  QFile local_40 [23];
  undefined1 local_29;
  
  QFile::QFile(local_40,param_3);
  cVar3 = QFile::open(local_40,1);
  puVar2 = PTR_shared_null_1021e1288;
  if (cVar3 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("","PrlSdkUtils",0,"Error : Failed to open Vm configuration file \'%s\'",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100d47600;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_100d47600:
    *param_1 = 0;
    goto LAB_100d476f3;
  }
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QTextStream::QTextStream(local_60,(QIODevice *)local_40);
  QTextStream::setCodec((char *)local_60);
  QTextStream::readAll();
  QString::operator=(&local_50,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d4752e;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100d4752e:
  local_70 = (long *)0x0;
  lVar1 = *param_2;
  local_78 = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
  }
  iVar4 = FUN_100d45110(&local_78,&local_70);
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
  }
  plVar5 = local_70;
  if (iVar4 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"Error : Failed to create blank Vm configuration, error 0x%X",
                  iVar4);
    *param_1 = 0;
    plVar5 = local_70;
  }
  else {
    iVar4 = FUN_100d478c0(local_70,&local_50);
    if (iVar4 < 0) {
      FUN_100df99c0("","PrlSdkUtils",0,
                    "Error : Failed to load Vm configuration from file, error 0x%X");
      *param_1 = 0;
    }
    else {
      local_70 = (long *)0x0;
      *param_1 = plVar5;
      plVar5 = (long *)0x0;
    }
    if (*(int *)puVar2 != -1) {
      if (*(int *)puVar2 != 0) {
        LOCK();
        *(int *)puVar2 = *(int *)puVar2 + -1;
        local_29 = *(int *)puVar2 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100d47692;
      }
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
  }
LAB_100d47692:
  if (plVar5 != (long *)0x0) {
    if (plVar5[1] != 0) {
      _PrlHandle_Free();
    }
    if (*plVar5 != 0) {
      _PrlHandle_Free();
    }
    operator_delete(plVar5);
  }
  QTextStream::~QTextStream(local_60);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_29 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d476f3;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100d476f3:
  QFile::~QFile(local_40);
  return param_1;
}

