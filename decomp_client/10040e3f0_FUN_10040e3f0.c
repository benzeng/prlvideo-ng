
void FUN_10040e3f0(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_98;
  QVariant local_90;
  QArrayData *local_80;
  QArrayData *local_78;
  QVariant local_70;
  undefined8 local_60;
  QVariant local_58;
  QArrayData *local_48;
  QArrayData *local_40;
  QVariant local_38;
  int *local_28;
  undefined1 local_19;
  
  lVar2 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    return;
  }
  local_28 = (int *)PTR_shared_null_1021e15e8;
  QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,0x1df3584);
  local_60 = 3;
  QVariant::QVariant(&local_58,4,&local_60,0);
  FUN_10041e0f0(&local_40,&local_48,&local_58);
  FUN_10041e170(&local_28,&local_40);
  QVariant::~QVariant(&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10040e4b3;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10040e4b3:
  QVariant::~QVariant(&local_58);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10040e4ec;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10040e4ec:
  uVar3 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  cVar1 = FUN_1001754c0(uVar3,8);
  if (cVar1 == '\0') goto LAB_10040e5e4;
  QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,0x1df3586);
  local_98 = 2;
  QVariant::QVariant(&local_90,4,&local_98,0);
  FUN_10041e0f0(&local_78,&local_80,&local_90);
  FUN_10041e170(&local_28,&local_78);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_19 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10040e5a8;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10040e5a8:
  QVariant::~QVariant(&local_90);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_19 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10040e5e4;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10040e5e4:
  FUN_1003fa820();
  if (*local_28 != -1) {
    if (*local_28 != 0) {
      LOCK();
      *local_28 = *local_28 + -1;
      UNLOCK();
      if (*local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    FUN_10041b480(&local_28,local_28);
  }
  return;
}

