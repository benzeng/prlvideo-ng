
int FUN_100b90e60(char *param_1,undefined8 param_2)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  char *pcVar7;
  QArrayData *pQVar8;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  undefined8 *****local_50;
  undefined8 *****local_48;
  char *local_40;
  undefined1 local_31;
  
  local_40 = (char *)0x0;
  local_50 = &local_50;
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_48 = local_50;
  if (param_1 == (char *)0x0) {
    iVar4 = -1;
    goto LAB_100b91183;
  }
  sVar6 = _strlen(param_1);
  pcVar7 = param_1;
  pcVar2 = param_1;
  if (sVar6 < 0x23) {
LAB_100b90eb3:
    local_40 = pcVar2;
    iVar4 = FUN_100b9ad70(&local_50,pcVar7,sVar6 & 0xffffffff);
    if (iVar4 == 0) {
      iVar4 = FUN_100b91420(&local_50,param_2);
    }
  }
  else {
    pcVar7 = (char *)FUN_100b9e740();
    iVar4 = -0xd;
    if (pcVar7 == (char *)0x0) goto LAB_100b91183;
    sVar6 = _strlen(pcVar7);
    pQVar8 = (QArrayData *)QString::fromAscii_helper(pcVar7,(int)sVar6);
    iVar1 = *(int *)(pQVar8 + 4);
    if (*(int *)pQVar8 != -1) {
      if (*(int *)pQVar8 != 0) {
        LOCK();
        *(int *)pQVar8 = *(int *)pQVar8 + -1;
        local_31 = *(int *)pQVar8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b90f63;
      }
      QArrayData::deallocate(pQVar8,2,8);
    }
LAB_100b90f63:
    if (iVar1 == 0) goto LAB_100b91183;
    local_70 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
    sVar6 = _strlen(pcVar7);
    local_78 = (QArrayData *)QString::fromAscii_helper(pcVar7,(int)sVar6);
    QString::arg(&local_68,&local_70,&local_78,0,0x20);
    sVar6 = _strlen(param_1);
    local_80 = (QArrayData *)QString::fromAscii_helper(param_1,(int)sVar6);
    QString::arg(&local_60,&local_68,&local_80,0,0x20);
    QString::operator=(&local_58,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b9101c;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_100b9101c:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b9104c;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100b9104c:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b9107c;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100b9107c:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b910ac;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100b910ac:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b910dc;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100b910dc:
    cVar3 = QFile::exists(&local_58);
    if (cVar3 == '\0') {
      iVar4 = -1;
      goto LAB_100b91183;
    }
    QString::toLatin1();
    uVar5 = FUN_100b91370(local_88 + *(long *)(local_88 + 0x10),&local_40);
    sVar6 = (size_t)uVar5;
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b91139;
      }
      QArrayData::deallocate(local_88,1,8);
    }
LAB_100b91139:
    pcVar7 = local_40;
    if ((int)uVar5 < 0) {
      if (local_40 == (char *)0x0) {
        iVar4 = -1;
      }
      else {
        _free(local_40);
        iVar4 = -1;
      }
      goto LAB_100b91183;
    }
    iVar4 = FUN_100b97ef0(&local_50,local_40,sVar6);
    pcVar2 = local_40;
    if (iVar4 == 0) goto LAB_100b90eb3;
  }
  FUN_100b98100(&local_50);
  if ((pcVar7 != (char *)0x0) && (pcVar7 != param_1)) {
    _free(pcVar7);
  }
LAB_100b91183:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_58.field0_0x0 != 0) {
        return iVar4;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
  return iVar4;
}

