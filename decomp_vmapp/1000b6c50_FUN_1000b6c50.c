
undefined1 FUN_1000b6c50(long param_1)

{
  long *plVar1;
  QArrayData *pQVar2;
  char cVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  long *local_30;
  undefined1 local_21;
  
  lVar6 = *(long *)(param_1 + 0x48);
  if (((lVar6 == 0) || (*(int *)(lVar6 + 0x14) != 0x4e3c)) || (*(long *)(param_1 + 0x50) == 0))
  goto LAB_1000b6f4a;
  FUN_10011a560(&local_30,lVar6 + 0x18);
  cVar3 = (**(code **)(*(long *)local_30[2] + 0x10))();
  if (cVar3 == '\0') {
    iVar8 = 2;
    FUN_1008e3970("","vm",0,"Invalid cancel command");
  }
  else {
    lVar6 = 0;
    if (local_30 != (long *)0x0) {
      lVar6 = local_30[2];
    }
    FUN_10011ce90(&local_38,lVar6);
    lVar6 = *(long *)(*(long *)(param_1 + 0x50) + 0x18);
    uVar7 = 0;
    if (lVar6 != 0) {
      uVar7 = *(undefined8 *)(lVar6 + 0x10);
    }
    FUN_1007d6a90(&local_40,uVar7);
    cVar3 = operator==(&local_40,&local_38);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_21 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000b6d1e;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_1000b6d1e:
    if (cVar3 == '\0') {
      lVar6 = *(long *)(*(long *)(param_1 + 0x50) + 0x18);
      uVar7 = 0;
      if (lVar6 != 0) {
        uVar7 = *(undefined8 *)(lVar6 + 0x10);
      }
      FUN_1007d6a90(&local_50,uVar7);
      QString::toUtf8();
      pQVar2 = local_48;
      lVar6 = *(long *)(local_48 + 0x10);
      QString::toUtf8();
      FUN_1008e3970("","vm",0,"Inconsistent cancel request (%s, %s)",pQVar2 + lVar6,
                    local_58 + *(long *)(local_58 + 0x10));
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_21 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1000b6e8a;
        }
        QArrayData::deallocate(local_58,1,8);
      }
LAB_1000b6e8a:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_21 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1000b6eba;
        }
        QArrayData::deallocate(local_48,1,8);
      }
LAB_1000b6eba:
      iVar8 = 2;
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_21 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1000b6ef0;
        }
        QArrayData::deallocate(local_50,2,8);
      }
    }
    else {
      QString::toUtf8();
      FUN_1008e3970("","vm",0,"Cancel guest memory initialization (request %s)",
                    local_60 + *(long *)(local_60 + 0x10));
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_21 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_1000b6d89;
        }
        QArrayData::deallocate(local_60,1,8);
      }
LAB_1000b6d89:
      FUN_10008bf50(*(undefined8 *)(param_1 + 0x1940));
      FUN_10008f910(param_1,0);
      FUN_10008f760(param_1,0x80000275);
      iVar8 = 1;
      FUN_10008ec80(param_1,0xc);
    }
LAB_1000b6ef0:
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_21 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000b6f20;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_1000b6f20:
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  if (iVar8 != 2) {
    return 1;
  }
LAB_1000b6f4a:
  FUN_10008f4d0(param_1);
  cVar3 = FUN_10008bf10(*(undefined8 *)(param_1 + 0x1940));
  if (cVar3 == '\0') {
    if ((*(byte *)(*(long *)(param_1 + 0x109c8) + 499) & 10) == 0) {
      FUN_1008e3970("","vm",0,"Failed to prepare the guest memory");
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      FUN_100408ff0(param_1 + 0x10b0,0x80000392,&local_78);
      FUN_10002d9d0(&local_78);
      FUN_10008f760(param_1,0x80000392);
      FUN_10008ec80(param_1,0xc);
      uVar5 = 0;
    }
    else {
      FUN_1008e3970("","vm",0,"Failed to uncompress the guest memory, go to reset VM");
      FUN_10008f910(param_1,0);
      FUN_10008f760(param_1,0x80020003);
      if ((*(byte *)(*(long *)(param_1 + 0x109c8) + 499) & 2) == 0) {
        uVar7 = 9;
      }
      else {
        uVar7 = 8;
      }
      FUN_10008ec80(param_1,uVar7);
      *(undefined1 *)(*(long *)(param_1 + 0x1940) + 0xd8) = 1;
      FUN_10008fdb0(*(undefined8 *)(param_1 + 0x109c8),10,0x80020003);
      uVar5 = 1;
    }
  }
  else {
    cVar3 = FUN_10008bf30(*(undefined8 *)(param_1 + 0x1940));
    uVar5 = 1;
    if (cVar3 == '\0') {
      uVar4 = QTime::elapsed();
      FUN_1008e3970("","vm",0,"[Profile] Memory prepare time is %u msecs",uVar4);
      FUN_10008ec80(param_1,3);
    }
  }
  return uVar5;
}

