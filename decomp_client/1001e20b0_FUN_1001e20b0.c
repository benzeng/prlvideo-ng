
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1001e20b0(undefined8 param_1,QUrl *param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  CTaskGenericId *pCVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  long *plVar9;
  undefined8 in_stack_fffffffffffffdd8;
  undefined4 uVar10;
  QVariant local_188;
  long local_178;
  _func_void_Node_ptr *local_170;
  QArrayData *local_168;
  Connection local_160 [8];
  undefined **local_158 [3];
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QUrlQuery local_118 [8];
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  _func_void_Node_ptr **local_40;
  char *local_38;
  undefined1 local_29;
  
  uVar10 = (undefined4)((ulong)in_stack_fffffffffffffdd8 >> 0x20);
  QUrl::toString(&local_108,param_2,0);
  QString::toUtf8();
  FUN_100df99c0("[AppController]","prl_client_app",0,"Open URL: %s",
                local_100 + *(long *)(local_100 + 0x10));
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_29 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001e2147;
    }
    QArrayData::deallocate(local_100,1,8);
  }
LAB_1001e2147:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_29 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001e217d;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1001e217d:
  QUrl::scheme();
  iVar3 = QString::compare_helper
                    (local_110 + *(long *)(local_110 + 0x10),*(undefined4 *)(local_110 + 4),"prlnc",
                     0xffffffff,1);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_29 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001e21ec;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_1001e21ec:
  if (iVar3 != 0) {
    return 0;
  }
  QUrlQuery::QUrlQuery(local_118,param_2);
  QUrl::host(&local_120,param_2,0x7f00000);
  iVar3 = QString::compare_helper
                    (local_120 + *(long *)(local_120 + 0x10),*(undefined4 *)(local_120 + 4),
                     "openwindow",0xffffffff,1);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_29 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001e227b;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1001e227b:
  if (iVar3 == 0) {
    local_130 = (QArrayData *)QString::fromAscii_helper("windowid",8);
    QUrlQuery::queryItemValue(&local_128,local_118,&local_130,0);
    iVar3 = QString::compare_helper
                      (local_128 + *(long *)(local_128 + 0x10),*(undefined4 *)(local_128 + 4),
                       "controlcenter",0xffffffff,1);
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_29 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001e239b;
      }
      QArrayData::deallocate(local_128,2,8);
    }
LAB_1001e239b:
    if (*(int *)local_130 != -1) {
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        local_29 = *(int *)local_130 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001e23d1;
      }
      QArrayData::deallocate(local_130,2,8);
    }
LAB_1001e23d1:
    if (iVar3 == 0) {
      uVar8 = 1;
      FUN_1001e0340(param_1);
      goto LAB_1001e28a9;
    }
    local_140 = (QArrayData *)QString::fromAscii_helper("windowid",8);
    QUrlQuery::queryItemValue(&local_138,local_118,&local_140,0);
    iVar3 = QString::compare_helper
                      (local_138 + *(long *)(local_138 + 0x10),*(undefined4 *)(local_138 + 4),
                       "freediskspace",0xffffffff,1);
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        local_29 = *(int *)local_138 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001e246d;
      }
      QArrayData::deallocate(local_138,2,8);
    }
LAB_1001e246d:
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_29 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001e24a3;
      }
      QArrayData::deallocate(local_140,2,8);
    }
LAB_1001e24a3:
    if (iVar3 == 0) {
      pCVar5 = (CTaskGenericId *)CTaskManager::instance();
      CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_158,0x53);
      local_158[0] = &PTR_FUN_10226c710;
      lVar6 = CTaskManager::getTaskById(pCVar5);
      CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_158);
      if ((lVar6 == 0) || (cVar2 = CAbstractTask::isFinished(), cVar2 != '\0')) {
        if (DAT_1023109c0 == (void *)0x0) {
          pvVar4 = operator_new(0x18);
          FUN_10076b480(pvVar4);
          DAT_102271418 = 1;
          DAT_1023109c0 = pvVar4;
        }
        uVar8 = 1;
        FUN_10076b4e0(DAT_1023109c0);
      }
      else {
        if (DAT_1023109c0 == (void *)0x0) {
          pvVar4 = operator_new(0x18);
          FUN_10076b480(pvVar4);
          DAT_102271418 = 1;
          DAT_1023109c0 = pvVar4;
        }
        pvVar4 = DAT_1023109c0;
        local_e8 = PTR_taskFinished_1021e1300;
        local_e0 = 0;
        local_f8 = FUN_10076b4e0;
        local_f0 = 0;
        if ((DAT_102271500 == '\0') && (iVar3 = ___cxa_guard_acquire(&DAT_102271500), iVar3 != 0)) {
          _DAT_1022714f8 = 2;
          ___cxa_guard_release(&DAT_102271500);
        }
        puVar7 = operator_new(0x20);
        *puVar7 = 1;
        *(code **)(puVar7 + 2) = FUN_1001e4130;
        *(code **)(puVar7 + 4) = FUN_10076b4e0;
        *(undefined8 *)(puVar7 + 6) = 0;
        QObject::connectImpl
                  (local_160,lVar6,&local_e8,pvVar4,&local_f8,puVar7,CONCAT44(uVar10,2),
                   &DAT_1022714f8,PTR_staticMetaObject_1021e1308);
        uVar8 = 1;
        QMetaObject::Connection::~Connection(local_160);
      }
    }
    else {
      uVar8 = 0;
    }
    goto LAB_1001e28a9;
  }
  QUrl::host(&local_168,param_2,0x7f00000);
  iVar3 = QString::compare_helper
                    (local_168 + *(long *)(local_168 + 0x10),*(undefined4 *)(local_168 + 4),
                     "todayextension",0xffffffff,1);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_29 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001e22f8;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_1001e22f8:
  if (iVar3 == 0) {
    local_170 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
    QUrlQuery::queryItems(&local_178,local_118,0);
    if (*(int *)(local_178 + 8) != *(int *)(local_178 + 0xc)) {
      plVar9 = (long *)(local_178 + 0x10 + (long)*(int *)(local_178 + 8) * 8);
      do {
        lVar6 = *plVar9;
        QVariant::QVariant(&local_188,(QString *)(lVar6 + 8));
        FUN_10007af00(&local_170,lVar6,&local_188);
        QVariant::~QVariant(&local_188);
        plVar9 = plVar9 + 1;
      } while (plVar9 != (long *)(local_178 + 0x10 + (long)*(int *)(local_178 + 0xc) * 8));
    }
    if (DAT_1023108e0 == (void *)0x0) {
      pvVar4 = operator_new(0x18);
      FUN_1001a61d0(pvVar4);
      DAT_10226c110 = 1;
      DAT_1023108e0 = pvVar4;
    }
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_40 = &local_170;
    local_38 = "QVariantHash";
    QMetaObject::invokeMethod(DAT_1023108e0,"todayExtensionNotication",2,0,0);
    FUN_1001e3400(&local_178);
    uVar8 = 1;
    if (*(int *)(local_170 + 0x10) != -1) {
      if (*(int *)(local_170 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_170 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_29 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001e28a9;
      }
      QHashData::free_helper(local_170);
    }
  }
  else {
    uVar8 = 0;
  }
LAB_1001e28a9:
  QUrlQuery::~QUrlQuery(local_118);
  return uVar8;
}

