
undefined8 FUN_1007a5aa0(long param_1,undefined4 param_2,int param_3,uint param_4)

{
  char cVar1;
  ulong uVar2;
  QArrayData *pQVar3;
  int iVar4;
  undefined8 in_stack_ffffffffffffff48;
  undefined8 uVar5;
  QArrayData *local_98;
  QArrayData *local_88;
  QArrayData *local_78;
  undefined8 local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  short local_42;
  ushort local_40;
  short local_3e;
  undefined8 local_38;
  undefined1 local_2c;
  undefined3 uStack_2b;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulong)in_stack_ffffffffffffff48 >> 0x20);
  local_38 = 0;
  if (param_3 != 0) {
    FUN_10078f010(&local_38);
  }
  local_42 = 1;
  local_2c = 0;
  uStack_2b = 0;
  if (((*(int *)(param_1 + 0x68) == 2) && (*(char *)(param_1 + 0x370) != '\0')) &&
     (uVar2 = FUN_10080ee80(*(undefined8 *)(param_1 + 0x328)), (uVar2 & 0x3000) == 0)) {
    uVar6 = 0;
    cVar1 = FUN_1007b59b0(param_1,param_2,&local_40,4,param_3,0,0);
  }
  else {
    uVar5 = CONCAT44(uVar6,param_3);
    cVar1 = FUN_10079edb0(param_1,param_2,&local_40,4,&local_2c,1,uVar5,0,0);
    uVar6 = (undefined4)((ulong)uVar5 >> 0x20);
  }
  if (cVar1 == '\0') {
    local_58 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)local_58 + 1U) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_2c = *(int *)local_58 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","IOCommunication",0,
                  "%sProxy handshake error: receive of connection response failed!",
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_2c = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_2c) goto LAB_1007a5cb7;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_1007a5cb7:
    if (*(int *)local_58 == -1) goto LAB_1007a5fda;
    pQVar3 = local_58;
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) goto LAB_1007a5fda;
      local_2c = 0;
    }
  }
  else if ((local_40 == param_4) && (local_3e == 2)) {
    iVar4 = 0;
    if (param_3 != 0) {
      local_70 = 0;
      FUN_10078f010(&local_70);
      iVar4 = FUN_10078f030(&local_38,&local_70);
      if (iVar4 == param_3) {
        pQVar3 = *(QArrayData **)(param_1 + 0x18);
        if (1 < *(int *)pQVar3 + 1U) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + 1;
          local_2c = *(int *)pQVar3 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_1008e3970("","IOCommunication",0,"%sConnection timeout expired!",
                      local_78 + *(long *)(local_78 + 0x10));
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_2c = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_2c) goto LAB_1007a5c09;
          }
          QArrayData::deallocate(local_78,1,8);
        }
LAB_1007a5c09:
        if (*(int *)pQVar3 == -1) goto LAB_1007a5fda;
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          UNLOCK();
          if (*(int *)pQVar3 != 0) goto LAB_1007a5fda;
          local_2c = 0;
        }
        goto LAB_1007a5fcb;
      }
      iVar4 = param_3 - iVar4;
    }
    local_2c = 0;
    uStack_2b = 0;
    if (((*(int *)(param_1 + 0x68) == 2) && (*(char *)(param_1 + 0x370) != '\0')) &&
       (uVar2 = FUN_10080ee80(*(undefined8 *)(param_1 + 0x328)), (uVar2 & 0x3000) == 0)) {
      cVar1 = FUN_1007b59b0(param_1,param_2,&local_42,2,iVar4,0,0);
    }
    else {
      cVar1 = FUN_10079edb0(param_1,param_2,&local_42,2,&local_2c,1,CONCAT44(uVar6,iVar4),0,0);
    }
    if (cVar1 != '\0') {
      if (local_42 == 0) {
        return 1;
      }
      pQVar3 = *(QArrayData **)(param_1 + 0x18);
      if (1 < *(int *)pQVar3 + 1U) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + 1;
        local_2c = *(int *)pQVar3 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","IOCommunication",0,
                    "%sProxy handshake error: err code \'%d\' received on request",
                    local_98 + *(long *)(local_98 + 0x10),local_42);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_2c = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_2c) goto LAB_1007a5ecf;
        }
        QArrayData::deallocate(local_98,1,8);
      }
LAB_1007a5ecf:
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          UNLOCK();
          if (*(int *)pQVar3 != 0) goto LAB_1007a5f05;
          local_2c = 0;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
LAB_1007a5f05:
      if (local_42 == 3) {
        *(undefined4 *)(param_1 + 0xa4) = 10;
        return 0;
      }
      goto LAB_1007a5fda;
    }
    pQVar3 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      local_2c = *(int *)pQVar3 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","IOCommunication",0,
                  "%sProxy handshake error: receive of connection response failed!",
                  local_88 + *(long *)(local_88 + 0x10));
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_2c = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_2c) goto LAB_1007a5fa4;
      }
      QArrayData::deallocate(local_88,1,8);
    }
LAB_1007a5fa4:
    if (*(int *)pQVar3 == -1) goto LAB_1007a5fda;
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1007a5fda;
      local_2c = 0;
    }
  }
  else {
    local_68 = *(QArrayData **)(param_1 + 0x18);
    if (1 < *(int *)local_68 + 1U) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_2c = *(int *)local_68 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","IOCommunication",0,
                  "%sProxy handshake error: received wrong connection response package!",
                  local_60 + *(long *)(local_60 + 0x10));
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_2c = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_2c) goto LAB_1007a5d65;
      }
      QArrayData::deallocate(local_60,1,8);
    }
LAB_1007a5d65:
    if (*(int *)local_68 == -1) goto LAB_1007a5fda;
    pQVar3 = local_68;
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) goto LAB_1007a5fda;
      local_2c = 0;
    }
  }
LAB_1007a5fcb:
  QArrayData::deallocate(pQVar3,2,8);
LAB_1007a5fda:
  *(undefined4 *)(param_1 + 0xa4) = 8;
  return 0;
}

