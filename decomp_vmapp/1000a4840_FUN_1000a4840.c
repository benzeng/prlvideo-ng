
undefined1 FUN_1000a4840(long param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 *local_98;
  undefined4 *puStack_90;
  undefined4 *local_88;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  undefined1 local_60 [24];
  QArrayData *local_48;
  QFileInfo local_40 [15];
  undefined1 local_31;
  
  QFileInfo::QFileInfo(local_40,(QString *)(*(long *)(*(long *)(param_1 + 0x1940) + 0x60) + 8));
  QFileInfo::absolutePath();
  QFileInfo::~QFileInfo(local_40);
  do {
    FUN_10006a060(local_60);
    CVmConfiguration::getVmIdentification();
    CVmIdentification::getVmName();
    FUN_10006a120(local_60,&local_68,0);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000a4905;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1000a4905:
    uVar3 = FUN_100769600(&local_48);
    QString::number((ulonglong)&local_70,(int)(uVar3 >> 0x14));
    FUN_10006a120(local_60,&local_70,1);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000a4962;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1000a4962:
    QString::number((ulonglong)&local_78,(int)(*(ulong *)(param_1 + 0x109b8) >> 0x14));
    FUN_10006a120(local_60,&local_78,2);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000a49c1;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_1000a49c1:
    FUN_10006a120(local_60,&local_48,3);
    local_98 = (undefined4 *)0x0;
    puStack_90 = (undefined4 *)0x0;
    local_88 = (undefined4 *)0x0;
    local_9c = 0x3e9d;
    FUN_10002de70(&local_98,&local_9c);
    local_a0 = 0x3e87;
    if (puStack_90 == local_88) {
      FUN_10002de70(&local_98,&local_a0);
    }
    else {
      *puStack_90 = 0x3e87;
      puStack_90 = puStack_90 + 1;
    }
    iVar2 = FUN_1000648b0(DAT_1011c3650,0x80000289,&local_98,local_60);
    if (iVar2 != 0x3e9d) {
      FUN_1008e3970("","vm",0,"[TooLowHdd] User canceled. Stop VM");
    }
    if (local_98 != (undefined4 *)0x0) {
      if (puStack_90 != local_98) {
        puStack_90 = (undefined4 *)
                     ((~((long)puStack_90 + (-4 - (long)local_98)) & 0xfffffffffffffffcU) +
                     (long)puStack_90);
      }
      operator_delete(local_98);
    }
    FUN_10006a680(local_60);
    uVar4 = 1;
    if (iVar2 != 0x3e9d) goto LAB_1000a4afd;
    cVar1 = FUN_1000a4620(param_1);
  } while (cVar1 != '\0');
  uVar4 = 0;
LAB_1000a4afd:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return uVar4;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return uVar4;
}

