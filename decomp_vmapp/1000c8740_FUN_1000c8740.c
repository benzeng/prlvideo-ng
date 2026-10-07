
undefined1 FUN_1000c8740(undefined8 param_1,long *param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  QArrayData *local_280;
  QArrayData *local_278;
  CVmConfiguration *local_270 [3];
  QArrayData *local_258;
  CVmConfiguration local_240 [16];
  CBaseNode local_230 [232];
  QArrayData *local_148;
  QArrayData *local_140;
  CVmEvent local_138 [224];
  QEvent local_58 [24];
  long *local_40;
  undefined1 local_31;
  
  lVar3 = *(long *)(*(long *)(*param_2 + 0x10) + 0x80);
  iVar2 = 0;
  if (lVar3 != 0) {
    pcVar1 = *(char **)(lVar3 + 0x10);
    iVar2 = 0;
    if (pcVar1 != (char *)0x0) {
      _strlen(pcVar1);
      iVar2 = (int)pcVar1;
    }
  }
  QString::fromUtf8_helper((char *)&local_148,iVar2);
  QString::normalized(&local_140,&local_148,1,0);
  CVmEvent::CVmEvent(local_138,(QTypedArrayData<unsigned_short> *)&local_140);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c87f8;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_1000c87f8:
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c882e;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_1000c882e:
  CVmConfiguration::CVmConfiguration(local_240);
  local_258 = (QArrayData *)PTR_shared_null_100ba20d0;
  lVar3 = *local_40;
  uVar4 = (ulong)*(uint *)(lVar3 + 8);
  if ((int)*(uint *)(lVar3 + 8) < *(int *)(lVar3 + 0xc)) {
    lVar7 = 0;
    lVar6 = 0;
    do {
      lVar3 = *(long *)(lVar3 + 0x10 + ((int)uVar4 + lVar7) * 8);
      CVmEventParameter::getParamName();
      iVar2 = QString::compare_helper
                        (local_278 + *(long *)(local_278 + 0x10),*(undefined4 *)(local_278 + 4),
                         "vm_cfg",0xffffffff);
      if (*(int *)local_278 != -1) {
        if (*(int *)local_278 != 0) {
          LOCK();
          *(int *)local_278 = *(int *)local_278 + -1;
          local_31 = *(int *)local_278 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000c88e7;
        }
        QArrayData::deallocate(local_278,2,8);
      }
LAB_1000c88e7:
      if (iVar2 == 0) {
        lVar6 = lVar3;
      }
      lVar7 = lVar7 + 1;
      lVar3 = *local_40;
      uVar4 = (ulong)*(int *)(lVar3 + 8);
    } while (lVar7 < (long)((long)*(int *)(lVar3 + 0xc) - uVar4));
    if (lVar6 == 0) {
      uVar5 = 0;
    }
    else {
      CVmEventParameter::getParamValue();
      iVar2 = CBaseNode::fromString
                        (local_230,(QTypedArrayData<unsigned_short> *)&local_280,false,
                         (QString *)0x0,(int *)0x0,(int *)0x0);
      if (*(int *)local_280 != -1) {
        if (*(int *)local_280 != 0) {
          LOCK();
          *(int *)local_280 = *(int *)local_280 + -1;
          local_31 = *(int *)local_280 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000c8980;
        }
        QArrayData::deallocate(local_280,2,8);
      }
LAB_1000c8980:
      if (iVar2 != 0) {
        FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","0 == rc",
                      "SerializationApp.cpp",0x125,"parseConfig");
      }
      local_270[0] = local_240;
      FUN_100083a30(param_3,local_270);
      iVar2 = FUN_100088610(param_3,local_270,0);
      uVar5 = 1;
      if (iVar2 < 0) {
        uVar5 = 0;
        FUN_1008e3970("","vm",0,"Monitor config initalization failed");
      }
    }
  }
  else {
    uVar5 = 0;
  }
  if (*(int *)local_258 != -1) {
    if (*(int *)local_258 != 0) {
      LOCK();
      *(int *)local_258 = *(int *)local_258 + -1;
      local_31 = *(int *)local_258 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000c8a60;
    }
    QArrayData::deallocate(local_258,2,8);
  }
LAB_1000c8a60:
  CVmConfiguration::~CVmConfiguration(local_240);
  QEvent::~QEvent(local_58);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_138);
  return uVar5;
}

