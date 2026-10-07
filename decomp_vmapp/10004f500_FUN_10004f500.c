
void FUN_10004f500(long param_1,undefined4 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  QArrayData *local_60;
  long *local_58;
  QArrayData *local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  char local_24;
  char local_23;
  char local_22;
  char local_21;
  char local_20;
  char local_1f;
  undefined1 local_19;
  
  uVar6 = 0;
  do {
    if (*(char *)((long)param_2 + uVar6 + 8) == '\0') break;
    iVar3 = (int)uVar6;
    uVar5 = iVar3 + 1;
    if (((*(char *)((long)param_2 + uVar6 + 9) == '\0') ||
        (uVar5 = iVar3 + 2, *(char *)((long)param_2 + uVar6 + 10) == '\0')) ||
       (uVar5 = iVar3 + 3, *(char *)((long)param_2 + uVar6 + 0xb) == '\0')) {
LAB_10004f557:
      uVar6 = (ulong)uVar5;
      break;
    }
    if (*(char *)((long)param_2 + uVar6 + 0xc) == '\0') {
      uVar5 = iVar3 + 4;
      goto LAB_10004f557;
    }
    uVar6 = uVar6 + 5;
  } while ((uint)uVar6 < 0x28);
  local_48 = *param_2;
  local_44 = param_2[1];
  local_40 = *(undefined8 *)(param_2 + 0xc);
  uStack_38 = *(undefined8 *)(param_2 + 0xe);
  local_30 = param_2[0x10];
  local_2c = param_2[0x11];
  local_28 = (param_2[0x12] == 2) + 1;
  if (param_2[0x12] == 0) {
    local_28 = 0;
  }
  local_1f = '\x03';
  local_24 = '\x03';
  if (*(char *)(param_2 + 0x13) != '\x02') {
    local_24 = (*(char *)(param_2 + 0x13) == '\x03') * '\x02';
  }
  local_23 = '\x03';
  if (*(char *)((long)param_2 + 0x4d) != '\x02') {
    local_23 = (*(char *)((long)param_2 + 0x4d) == '\x03') * '\x02';
  }
  local_22 = '\x03';
  if (*(char *)((long)param_2 + 0x4e) != '\x02') {
    local_22 = (*(char *)((long)param_2 + 0x4e) == '\x03') * '\x02';
  }
  local_21 = '\x03';
  if (*(char *)((long)param_2 + 0x4f) != '\x02') {
    local_21 = (*(char *)((long)param_2 + 0x4f) == '\x03') * '\x02';
  }
  local_20 = '\x03';
  if (*(char *)(param_2 + 0x14) != '\x02') {
    local_20 = (*(char *)(param_2 + 0x14) == '\x03') * '\x02';
  }
  if (*(char *)((long)param_2 + 0x51) != '\x02') {
    local_1f = (*(char *)((long)param_2 + 0x51) == '\x03') * '\x02';
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0xf0);
  if ((int)uVar6 == -1) {
    _strlen((char *)(param_2 + 2));
  }
  QString::fromUtf8_helper((char *)&local_50,(int)(param_2 + 2));
  FUN_100791380(&local_58,0x18979,0,&local_48,0x2b,&DAT_1011ccb98,1);
  uVar5 = FUN_100433970(uVar2,&local_50,&local_58,0);
  if (((uVar5 | 2) != 2) && (0 < DAT_1011b55f8)) {
    QString::toUtf8();
    FUN_1008e3970("UIEMU","vm",1,"Failed to forward ELEMENT_AT_POS, ioResult=%u, h=\"%s\"",uVar5,
                  local_60 + *(long *)(local_60 + 0x10));
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_19 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10004f700;
      }
      QArrayData::deallocate(local_60,1,8);
    }
  }
LAB_10004f700:
  if (local_58 != (long *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return;
}

