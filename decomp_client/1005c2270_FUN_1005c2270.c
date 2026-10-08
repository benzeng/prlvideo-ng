
uint FUN_1005c2270(long param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  size_t sVar4;
  int iVar5;
  undefined8 in_R9;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  undefined1 local_e0 [12];
  uint local_cc [42];
  undefined1 local_21;
  
  local_cc[0] = 0;
  if (param_2 == -1) {
    iVar5 = *(int *)(*(long *)(param_1 + 0x18) + 0x160);
    if (iVar5 == 0x15) {
      uVar2 = 0x15;
      if (*(int *)(*(long *)(param_1 + 0x18) + 0x38) != 0xff) {
        uVar2 = FUN_1005c20a0(param_1);
      }
    }
    else {
      uVar2 = (iVar5 == 8) + 7;
    }
    cVar1 = '\x01';
    local_cc[0] = uVar2;
    goto LAB_1005c25de;
  }
  QMetaObject::indexOfEnumerator("");
  local_e0 = QMetaObject::enumerator(0x221f740);
  local_f0 = (QArrayData *)QString::fromAscii_helper("getNextPageFor%1",0x10);
  pcVar3 = (char *)QMetaEnum::key((int)local_e0);
  iVar5 = -1;
  if (pcVar3 != (char *)0x0) {
    sVar4 = _strlen(pcVar3);
    iVar5 = (int)sVar4;
  }
  local_f8 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar5);
  QString::arg(&local_e8,&local_f0,&local_f8,0,0x20);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_21 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005c236a;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1005c236a:
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_21 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005c23a0;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1005c23a0:
  cVar1 = FUN_100a1fa30(param_1,&local_e8);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else {
    QString::toUtf8();
    if ((1 < *(uint *)local_100) || (*(long *)(local_100 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_100,*(uint *)(local_100 + 4) + 1,*(uint *)(local_100 + 8) >> 0x1f);
    }
    local_cc[0x21] = 0;
    local_cc[0x22] = 0;
    local_cc[0x23] = 0;
    local_cc[0x24] = 0;
    local_cc[0x1d] = 0;
    local_cc[0x1e] = 0;
    local_cc[0x1f] = 0;
    local_cc[0x20] = 0;
    local_cc[0x19] = 0;
    local_cc[0x1a] = 0;
    local_cc[0x1b] = 0;
    local_cc[0x1c] = 0;
    local_cc[0x15] = 0;
    local_cc[0x16] = 0;
    local_cc[0x17] = 0;
    local_cc[0x18] = 0;
    local_cc[0x11] = 0;
    local_cc[0x12] = 0;
    local_cc[0x13] = 0;
    local_cc[0x14] = 0;
    local_cc[0xd] = 0;
    local_cc[0xe] = 0;
    local_cc[0xf] = 0;
    local_cc[0x10] = 0;
    local_cc[9] = 0;
    local_cc[10] = 0;
    local_cc[0xb] = 0;
    local_cc[0xc] = 0;
    local_cc[5] = 0;
    local_cc[6] = 0;
    local_cc[7] = 0;
    local_cc[8] = 0;
    local_cc[1] = 0;
    local_cc[2] = 0;
    local_cc[3] = 0;
    local_cc[4] = 0;
    local_cc[0x25] = 0;
    local_cc[0x26] = 0;
    local_cc[0x27] = 0;
    local_cc[0x28] = 0;
    cVar1 = QMetaObject::invokeMethod
                      (param_1,local_100 + *(long *)(local_100 + 0x10),0,local_cc,"int",in_R9,0,0,0,
                       0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_21 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1005c2592;
      }
      QArrayData::deallocate(local_100,1,8);
    }
  }
LAB_1005c2592:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      UNLOCK();
      if (*(int *)local_e8 != 0) goto LAB_1005c25de;
      local_21 = 0;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1005c25de:
  return -(uint)(cVar1 == '\0') | local_cc[0];
}

