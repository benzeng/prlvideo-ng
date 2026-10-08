
void FUN_1001e9a50(undefined8 param_1,long *param_2,long *param_3)

{
  QVariant local_50;
  QArrayData *local_40;
  QVariant local_38;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (((*param_3 != 0) && (*(int *)(*param_3 + 4) != 0)) && (param_3[1] != 0)) {
    QObject::property((char *)&local_38);
    QVariant::toString();
    FUN_1001e97e0();
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        local_19 = *(int *)local_28 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1001e9acf;
      }
      QArrayData::deallocate(local_28,2,8);
    }
LAB_1001e9acf:
    QVariant::~QVariant(&local_38);
  }
  if (*param_2 == 0) {
    return;
  }
  if (*(int *)(*param_2 + 4) == 0) {
    return;
  }
  if (param_2[1] == 0) {
    return;
  }
  QObject::property((char *)&local_50);
  QVariant::toString();
  FUN_1001e97e0();
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001e9b4c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001e9b4c:
  QVariant::~QVariant(&local_50);
  return;
}

