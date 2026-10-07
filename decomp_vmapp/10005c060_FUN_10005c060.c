
undefined1 FUN_10005c060(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 uVar7;
  uint local_6c;
  QArrayData *local_68;
  QString local_60;
  undefined1 local_58 [39];
  undefined1 local_31;
  
  uVar5 = FUN_10078d0a0(param_2);
  uVar1 = FUN_10078d0c0(param_2);
  local_6c = 0;
  iVar2 = FUN_10078cf30(local_58,uVar5,uVar1,0);
  if (iVar2 == 0) {
    local_6c = 0;
    do {
      pcVar6 = (char *)FUN_10078d0a0(local_58);
      iVar2 = FUN_10078d0c0(local_58);
      iVar3 = FUN_10078d0d0(local_58);
      if (iVar3 != 0x200a) {
        if (DAT_1011b55f8 < 2) {
          return 0;
        }
        uVar1 = FUN_10078d0d0(param_2);
        uVar4 = FUN_10078d0c0(param_2);
        FUN_1008e3970("","vm",2,"Unsupported data skipped, type=%u, size=%u",uVar1,uVar4);
        return 0;
      }
      if (local_6c < param_4) {
        if ((pcVar6 != (char *)0x0) && (iVar2 == -1)) {
          _strlen(pcVar6);
        }
        QString::fromUtf8_helper((char *)&local_68,(int)pcVar6);
        QString::normalized(&local_60,&local_68,1,0);
        QString::operator=((QString *)(param_3 + (ulong)local_6c * 8),&local_60);
        if (*(int *)local_60.field0_0x0 != -1) {
          if (*(int *)local_60.field0_0x0 != 0) {
            LOCK();
            *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
            local_31 = *(int *)local_60.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10005c182;
          }
          QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
        }
LAB_10005c182:
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10005c1b6;
          }
          QArrayData::deallocate(local_68,2,8);
        }
LAB_10005c1b6:
        FUN_10005c2f0();
        local_6c = local_6c + 1;
      }
      iVar2 = FUN_10078d020(local_58);
    } while (iVar2 == 0);
  }
  uVar7 = 1;
  if (local_6c < param_4) {
    if (DAT_1011b55f8 < 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      FUN_1008e3970("","vm",1,"Incorrect bitbox data");
    }
  }
  return uVar7;
}

