
undefined1 FUN_100132a80(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  QArrayData *pQVar7;
  QArrayData *pQVar8;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar3 = (QArrayData *)QString::fromAscii_helper("copy_ct_tmpl_proto_version",0x1a);
  local_40 = pQVar3;
  cVar1 = FUN_10011d720(param_1,&local_40,0);
  if (cVar1 == '\0') {
    uVar2 = 0;
    goto LAB_100132cff;
  }
  pQVar4 = (QArrayData *)QString::fromAscii_helper("copy_ct_tmpl_tmpl_name",0x16);
  local_48 = pQVar4;
  cVar1 = FUN_10011d720(param_1,&local_48,1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    pQVar5 = (QArrayData *)QString::fromAscii_helper("copy_ct_tmpl_target_server_hostname",0x23);
    local_50 = pQVar5;
    cVar1 = FUN_10011d720(param_1,&local_50,1);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      pQVar6 = (QArrayData *)QString::fromAscii_helper("copy_ct_tmpl_target_server_port",0x1f);
      local_58 = pQVar6;
      cVar1 = FUN_10011d720(param_1,&local_58,0);
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else {
        pQVar7 = (QArrayData *)
                 QString::fromAscii_helper("copy_ct_tmpl_target_server_session_uuid",0x27);
        local_60 = pQVar7;
        cVar1 = FUN_10011d720(param_1,&local_60,1);
        if (cVar1 == '\0') {
          uVar2 = 0;
        }
        else {
          pQVar8 = (QArrayData *)QString::fromAscii_helper("copy_ct_tmpl_reserved_flags",0x1b);
          local_68 = pQVar8;
          cVar1 = FUN_10011d720(param_1,&local_68,0);
          if (cVar1 == '\0') {
            uVar2 = 0;
          }
          else {
            uVar2 = FUN_10011ed70(param_1);
          }
          if (*(int *)pQVar8 != -1) {
            if (*(int *)pQVar8 != 0) {
              LOCK();
              *(int *)pQVar8 = *(int *)pQVar8 + -1;
              local_31 = *(int *)pQVar8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100132c4a;
            }
            QArrayData::deallocate(pQVar8,2,8);
          }
        }
LAB_100132c4a:
        if (*(int *)pQVar7 != -1) {
          if (*(int *)pQVar7 != 0) {
            LOCK();
            *(int *)pQVar7 = *(int *)pQVar7 + -1;
            local_31 = *(int *)pQVar7 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100132c76;
          }
          QArrayData::deallocate(pQVar7,2,8);
        }
      }
LAB_100132c76:
      if (*(int *)pQVar6 != -1) {
        if (*(int *)pQVar6 != 0) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_31 = *(int *)pQVar6 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100132ca5;
        }
        QArrayData::deallocate(pQVar6,2,8);
      }
    }
LAB_100132ca5:
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_31 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100132cd2;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
  }
LAB_100132cd2:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100132cff;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100132cff:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return uVar2;
      }
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return uVar2;
}

