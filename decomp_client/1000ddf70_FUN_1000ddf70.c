
void FUN_1000ddf70(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  QKeySequence local_a0 [8];
  QArrayData *local_98;
  QKeySequence local_90 [8];
  QArrayData *local_88;
  QKeySequence local_80 [8];
  QArrayData *local_78;
  QKeySequence local_70 [8];
  QArrayData *local_68;
  QKeySequence local_60 [8];
  QArrayData *local_58;
  QKeySequence local_50 [8];
  QArrayData *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  local_40 = 0x10;
  local_3c = 2;
  uStack_38 = 0x1ef0;
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  QKeySequence::QKeySequence(local_50);
  FUN_1000f9b40(&local_30,&local_48,&local_40,1,0,0,0,local_50);
  QKeySequence::~QKeySequence(local_50);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000de018;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000de018:
  local_3c = 1;
  QMetaObject::tr((char *)&local_58,PTR_staticMetaObject_1021e1520,(int)PTR_s_App_Settings_10226fce0
                 );
  QKeySequence::QKeySequence(local_60);
  FUN_1000f9b40(&local_30,&local_58,&local_40,1,0x1601,0,0,local_60);
  QKeySequence::~QKeySequence(local_60);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000de0b2;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000de0b2:
  uStack_38 = 0x1ef1;
  uStack_34 = 0x1ef1;
  QMetaObject::tr((char *)&local_68,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Keep_Mac_Awake_10226fce8);
  QKeySequence::QKeySequence(local_70);
  FUN_1000f9b40(&local_30,&local_68,&local_40,1,0x640,0x1ef0,0,local_70);
  QKeySequence::~QKeySequence(local_70);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000de156;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1000de156:
  uStack_38 = 0x1ef2;
  uStack_34 = 0x1ef2;
  cVar1 = FUN_1000bd150(param_1);
  if (cVar1 != '\0') {
    QMetaObject::tr((char *)&local_78,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Always_Hide_Others_10226fcf0);
    QKeySequence::QKeySequence(local_80);
    FUN_1000f9b40(&local_30,&local_78,&local_40,1,0x640,0x1ef0,0,local_80);
    QKeySequence::~QKeySequence(local_80);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_21 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000de20a;
      }
      QArrayData::deallocate(local_78,2,8);
    }
  }
LAB_1000de20a:
  uStack_34 = 0x1ef3;
  local_3c = 1;
  uStack_38 = 0x1ef3;
  QMetaObject::tr((char *)&local_88,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Do_Not_Disturb_10226fcf8);
  QKeySequence::QKeySequence(local_90);
  FUN_1000f9b40(&local_30,&local_88,&local_40,1,0x640,0x1ef0,0,local_90);
  QKeySequence::~QKeySequence(local_90);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_21 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000de2bb;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1000de2bb:
  uStack_38 = 0x1ef4;
  uStack_34 = 0x1ef4;
  cVar1 = FUN_1000bd150(param_1);
  if (cVar1 != '\0') {
    QMetaObject::tr((char *)&local_98,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Use_in_Full_Screen_10226fd00);
    QKeySequence::QKeySequence(local_a0);
    FUN_1000f9b40(&local_30,&local_98,&local_40,1,0x640,0x1ef0,0,local_a0);
    QKeySequence::~QKeySequence(local_a0);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_21 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000de381;
      }
      QArrayData::deallocate(local_98,2,8);
    }
  }
LAB_1000de381:
  FUN_1000c4970(param_2,0x8d,local_30 + *(long *)(local_30 + 0x10),*(undefined4 *)(local_30 + 4));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,1,8);
  }
  return;
}

