
undefined8 * FUN_1004fd960(undefined8 *param_1)

{
  char cVar1;
  QDir local_30 [8];
  QString local_28;
  char local_1a;
  undefined1 local_19;
  
  cVar1 = FUN_1004c3f80(&local_1a);
  if (cVar1 == '\0') {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","SharedFoldersHost",1,"failed to determine PhotoStream availability");
    }
  }
  else if (local_1a != '\0') {
    FUN_1004fdc30(&local_28);
    QDir::QDir(local_30,&local_28);
    cVar1 = QDir::exists();
    QDir::~QDir(local_30);
    if (cVar1 != '\0') {
      *param_1 = local_28.field0_0x0;
      if (1 < *(int *)local_28.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
        local_19 = *(int *)local_28.field0_0x0 != 0;
        UNLOCK();
      }
      if (*(int *)local_28.field0_0x0 == -1) {
        return param_1;
      }
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
      return param_1;
    }
    if (*(int *)local_28.field0_0x0 != -1) {
      if (*(int *)local_28.field0_0x0 != 0) {
        LOCK();
        *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_28.field0_0x0 != 0) goto LAB_1004fda66;
        local_19 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
    }
  }
LAB_1004fda66:
  *param_1 = PTR_shared_null_100ba20d0;
  return param_1;
}

