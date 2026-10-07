
int FUN_1007c8b60(long param_1,undefined4 param_2,long param_3,uint param_4,uint param_5,
                 undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  QArrayData *pQVar4;
  uint uVar5;
  uint uVar6;
  long local_a0;
  QArrayData *local_80;
  undefined8 local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  undefined8 local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined2 local_37;
  ushort local_35;
  undefined1 local_31;
  
  local_38 = 0xff;
  local_37 = 3;
  local_40 = 0;
  local_35 = 0x40;
  uVar5 = 0;
  if (param_5 != 0) {
    FUN_10078f010(&local_40);
    uVar5 = param_5;
  }
  local_a0 = param_3;
  if (param_4 >> 0xe != 0) {
    uVar3 = 0;
    do {
      iVar1 = FUN_1007c7b80(param_1,param_2,*(undefined4 *)(param_1 + 0xd0),&local_38,5,uVar5,
                            param_6);
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar6 = 0;
      if (uVar5 != 0) {
        local_48 = 0;
        FUN_10078f010(&local_48);
        uVar2 = FUN_10078f030(&local_40,&local_48);
        uVar6 = uVar5 - uVar2;
        if (uVar5 < uVar2 || uVar6 == 0) {
          if (DAT_1011b55f8 < 1) {
            return 1;
          }
          local_58 = *(QArrayData **)(param_1 + 0x10);
          if (1 < *(int *)local_58 + 1U) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + 1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_1008e3970("","IOCommunication",1,"%sWrite timeout expired!",
                        local_50 + *(long *)(local_50 + 0x10));
          if (*(int *)local_50 != -1) {
            if (*(int *)local_50 != 0) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + -1;
              local_31 = *(int *)local_50 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007c8e7b;
            }
            QArrayData::deallocate(local_50,1,8);
          }
LAB_1007c8e7b:
          if (*(int *)local_58 == -1) {
            return 1;
          }
          pQVar4 = local_58;
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            UNLOCK();
            if (*(int *)local_58 != 0) {
              return 1;
            }
            local_31 = 0;
          }
          goto LAB_1007c9043;
        }
        FUN_10078f010(&local_40);
      }
      iVar1 = FUN_1007c7b80(param_1,param_2,*(undefined4 *)(param_1 + 0xd0),local_a0,0x4000,uVar6,
                            param_6);
      if (iVar1 != 0) {
        return iVar1;
      }
      uVar5 = 0;
      if (uVar6 != 0) {
        local_60 = 0;
        FUN_10078f010(&local_60);
        uVar2 = FUN_10078f030(&local_40,&local_60);
        uVar5 = uVar6 - uVar2;
        if (uVar6 < uVar2 || uVar5 == 0) {
          if (DAT_1011b55f8 < 1) {
            return 1;
          }
          local_70 = *(QArrayData **)(param_1 + 0x10);
          if (1 < *(int *)local_70 + 1U) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + 1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_1008e3970("","IOCommunication",1,"%sWrite timeout expired!",
                        local_68 + *(long *)(local_68 + 0x10));
          if (*(int *)local_68 != -1) {
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              local_31 = *(int *)local_68 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007c8f4f;
            }
            QArrayData::deallocate(local_68,1,8);
          }
LAB_1007c8f4f:
          if (*(int *)local_70 == -1) {
            return 1;
          }
          pQVar4 = local_70;
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            UNLOCK();
            if (*(int *)local_70 != 0) {
              return 1;
            }
            local_31 = 0;
          }
          goto LAB_1007c9043;
        }
        FUN_10078f010(&local_40);
      }
      local_a0 = local_a0 + 0x4000;
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_4 >> 0xe);
  }
  param_4 = param_4 & 0x3fff;
  if (param_4 != 0) {
    local_35 = (ushort)param_4 << 8 | (ushort)param_4 >> 8;
    iVar1 = FUN_1007c7b80(param_1,param_2,*(undefined4 *)(param_1 + 0xd0),&local_38,5,uVar5,param_6)
    ;
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = 0;
    if (uVar5 != 0) {
      local_78 = 0;
      FUN_10078f010(&local_78);
      uVar3 = FUN_10078f030(&local_40,&local_78);
      iVar1 = uVar5 - uVar3;
      if (uVar5 < uVar3 || iVar1 == 0) {
        if (DAT_1011b55f8 < 1) {
          return 1;
        }
        pQVar4 = *(QArrayData **)(param_1 + 0x10);
        if (1 < *(int *)pQVar4 + 1U) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + 1;
          local_31 = *(int *)pQVar4 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        FUN_1008e3970("","IOCommunication",1,"%sWrite timeout expired!",
                      local_80 + *(long *)(local_80 + 0x10));
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007c901c;
          }
          QArrayData::deallocate(local_80,1,8);
        }
LAB_1007c901c:
        if (*(int *)pQVar4 == -1) {
          return 1;
        }
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          UNLOCK();
          if (*(int *)pQVar4 != 0) {
            return 1;
          }
          local_31 = 0;
        }
LAB_1007c9043:
        QArrayData::deallocate(pQVar4,2,8);
        return 1;
      }
      FUN_10078f010(&local_40);
    }
    iVar1 = FUN_1007c7b80(param_1,param_2,*(undefined4 *)(param_1 + 0xd0),local_a0,param_4,iVar1,
                          param_6);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  return 0;
}

