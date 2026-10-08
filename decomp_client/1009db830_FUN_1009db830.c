
char FUN_1009db830(QString *param_1,uint *param_2,undefined8 param_3,undefined8 param_4,char param_5
                  ,char param_6)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  bool bVar8;
  bool bVar9;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  uint local_3c;
  int local_38;
  undefined1 local_31;
  
  local_38 = 0;
  local_3c = 0;
  lVar4 = 0;
  lVar3 = _SCDynamicStoreCopyProxies(0);
  bVar8 = false;
  if (lVar3 != 0) {
    puVar7 = (undefined8 *)PTR__kSCPropNetProxiesHTTPEnable_1021e1a88;
    if (param_6 != '\0') {
      puVar7 = (undefined8 *)PTR__kSCPropNetProxiesHTTPSEnable_1021e1aa0;
    }
    lVar4 = _CFDictionaryGetValue(lVar3,*puVar7);
    if (lVar4 == 0) {
      bVar8 = false;
    }
    else {
      lVar5 = _CFGetTypeID(lVar4);
      lVar6 = _CFNumberGetTypeID();
      bVar8 = lVar5 == lVar6;
    }
  }
  if (bVar8) {
    cVar2 = _CFNumberGetValue(lVar4,9,&local_38);
    if (cVar2 == '\0') {
      cVar2 = '\0';
    }
    else {
      lVar4 = 0;
      bVar8 = false;
      if (local_38 != 0) {
        puVar7 = (undefined8 *)PTR__kSCPropNetProxiesHTTPProxy_1021e1a98;
        if (param_6 != '\0') {
          puVar7 = (undefined8 *)PTR__kSCPropNetProxiesHTTPSProxy_1021e1ab0;
        }
        lVar4 = _CFDictionaryGetValue(lVar3,*puVar7);
        if (lVar4 == 0) {
          bVar8 = false;
        }
        else {
          lVar5 = _CFGetTypeID(lVar4);
          lVar6 = _CFStringGetTypeID();
          bVar8 = lVar5 == lVar6;
        }
      }
      if (bVar8) {
        FUN_1009dbc60(&local_48,lVar4);
        QString::operator=(param_1,&local_48);
        if (*(int *)local_48.field0_0x0 != -1) {
          if (*(int *)local_48.field0_0x0 != 0) {
            LOCK();
            *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
            local_31 = *(int *)local_48.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009db989;
          }
          QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
        }
LAB_1009db989:
        lVar4 = 0;
        bVar8 = false;
        if (*(int *)(param_1->field0_0x0 + 4) != 0) {
          puVar7 = (undefined8 *)PTR__kSCPropNetProxiesHTTPPort_1021e1a90;
          if (param_6 != '\0') {
            puVar7 = (undefined8 *)PTR__kSCPropNetProxiesHTTPSPort_1021e1aa8;
          }
          lVar4 = _CFDictionaryGetValue(lVar3,*puVar7);
          if (lVar4 == 0) {
            bVar8 = false;
          }
          else {
            lVar5 = _CFGetTypeID(lVar4);
            lVar6 = _CFNumberGetTypeID();
            bVar8 = lVar5 == lVar6;
          }
        }
        bVar9 = false;
        if (bVar8) {
          cVar2 = _CFNumberGetValue(lVar4,9,&local_3c);
          bVar9 = cVar2 != '\0';
        }
        if (bVar9) {
          *param_2 = local_3c & 0xffff;
          cVar2 = '\x01';
          goto LAB_1009dba18;
        }
      }
      cVar2 = '\0';
    }
  }
  else {
    cVar2 = '\0';
  }
LAB_1009dba18:
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  if (cVar2 == '\0') {
    local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::operator=(param_1,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_50.field0_0x0 != 0) goto LAB_1009dbb51;
        local_31 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_1009dbb51:
    *param_2 = 0;
    return '\0';
  }
  if (param_5 != '\0') {
    FUN_1009dbdc0(param_1,param_6,0,param_3,param_4);
  }
  QString::toUtf8();
  lVar3 = *(long *)(local_58 + 0x10);
  uVar1 = *param_2;
  QString::toUtf8();
  FUN_100df99c0("","ProxyInfo",0,"HTTPProxySettings: host %s, port %d, user %s",local_58 + lVar3,
                uVar1,local_60 + *(long *)(local_60 + 0x10));
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009dbad8;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_1009dbad8:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return cVar2;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_58,1,8);
  }
  return cVar2;
}

