
void FUN_100079bd0(long param_1,int param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  QTextStream *pQVar6;
  QArrayData *local_90;
  QArrayData *local_88;
  undefined4 local_80;
  _func_void_Node_ptr *local_78;
  _func_void_Node_ptr *local_70;
  QTextStream *local_68;
  QDebug local_60 [8];
  QTextStream *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QObject::sender();
  lVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220ad40);
  if (lVar3 == 0) {
    FUN_100df99c0("[APP_RESUME]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","0 != task"
                  ,"AppResume/CAppResumeManager.mm",0x16b,"onResumeWindowTaskFinished");
  }
  local_38 = *(QArrayData **)(lVar3 + 0x18);
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_29 = *(int *)local_38 != 0;
    UNLOCK();
  }
  if (*(int *)(local_38 + 4) == 0) {
    FUN_100df99c0("[APP_RESUME]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "! restoreId.isEmpty()","AppResume/CAppResumeManager.mm",0x16e,
                  "onResumeWindowTaskFinished");
  }
  puVar2 = PTR_shared_null_1021e1288;
  if (-1 < param_2) {
    puVar4 = (undefined8 *)FUN_1002eb210(lVar3);
    if (puVar4 == (undefined8 *)0x0) {
      FUN_100df99c0("[APP_RESUME]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "0 != window","AppResume/CAppResumeManager.mm",0x173,
                    "onResumeWindowTaskFinished");
    }
    if (2 < DAT_10230ffd0) {
      (**(code **)*puVar4)(puVar4);
      uVar5 = QMetaObject::className();
      local_48 = local_38;
      if (1 < *(int *)local_38 + 1U) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + 1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_100df99c0("[APP_RESUME]","prl_client_app",3,
                    "Window %s with id %s restored. Call completion handler for it",uVar5,
                    local_40 + *(long *)(local_40 + 0x10));
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_29 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100079daf;
        }
        QArrayData::deallocate(local_40,1,8);
      }
LAB_100079daf:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_29 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100079ddf;
        }
        QArrayData::deallocate(local_48,2,8);
      }
    }
LAB_100079ddf:
    *(undefined1 *)(param_1 + 0x21) = 1;
    FUN_100078320(param_1,&local_38,puVar4);
    goto LAB_10007a04e;
  }
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  pQVar6 = operator_new(0x50);
  QTextStream::QTextStream(pQVar6,&local_50,2);
  *(undefined **)(pQVar6 + 0x10) = puVar2;
  *(undefined4 *)(pQVar6 + 0x1c) = 0;
  pQVar6[0x20] = (QTextStream)0x1;
  pQVar6[0x21] = (QTextStream)0x0;
  *(undefined4 *)(pQVar6 + 0x28) = 2;
  *(undefined8 *)(pQVar6 + 0x44) = 0;
  *(undefined8 *)(pQVar6 + 0x3c) = 0;
  *(undefined8 *)(pQVar6 + 0x34) = 0;
  *(undefined8 *)(pQVar6 + 0x2c) = 0;
  *(undefined4 *)(pQVar6 + 0x18) = 2;
  local_88 = *(QArrayData **)(lVar3 + 0x20);
  if (1 < *(int *)local_88 + 1U) {
    LOCK();
    *(int *)local_88 = *(int *)local_88 + 1;
    local_29 = *(int *)local_88 != 0;
    UNLOCK();
  }
  local_80 = *(undefined4 *)(lVar3 + 0x28);
  local_68 = pQVar6;
  local_58 = pQVar6;
  FUN_100076800(&local_78,lVar3 + 0x30);
  local_80 = *(undefined4 *)(lVar3 + 0x28);
  FUN_100076800(&local_70,lVar3 + 0x38);
  local_80 = *(undefined4 *)(lVar3 + 0x28);
  FUN_1000742b0(local_60,&local_68,&local_88);
  QDebug::~QDebug(local_60);
  if (*(int *)(local_70 + 0x10) != -1) {
    if (*(int *)(local_70 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_70 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_29 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100079f03;
    }
    QHashData::free_helper(local_70);
  }
LAB_100079f03:
  if (*(int *)(local_78 + 0x10) != -1) {
    if (*(int *)(local_78 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_78 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_29 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100079f32;
    }
    QHashData::free_helper(local_78);
  }
LAB_100079f32:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100079f62;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100079f62:
  QDebug::~QDebug((QDebug *)&local_68);
  QString::toUtf8();
  if ((1 < *(uint *)local_90) || (*(long *)(local_90 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_90,*(uint *)(local_90 + 4) + 1,*(uint *)(local_90 + 8) >> 0x1f);
  }
  FUN_100df99c0("[APP_RESUME]","prl_client_app",0,"Failed to restore window. Decoded data: %s",
                local_90 + *(long *)(local_90 + 0x10));
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10007a007;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_10007a007:
  FUN_100078320(param_1,&local_38,0);
  QDebug::~QDebug((QDebug *)&local_58);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10007a04e;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10007a04e:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

