
void FUN_100ac0dc0(QObject *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 local_98;
  undefined4 local_94;
  undefined *local_90;
  long *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  undefined1 local_70 [32];
  undefined *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_31;
  
  local_48 = 0;
  uStack_40 = 0;
  local_50 = PTR_shared_null_1021e15e8;
  iVar1 = FUN_100a68200(local_70,param_2,param_3,0);
  local_94 = 0;
  local_98 = 2;
  do {
    if (iVar1 != 0) {
      if (*(int *)(local_50 + 0xc) == *(int *)(local_50 + 8)) {
        local_90 = PTR_shared_null_1021e15e8;
        FUN_100ac1210(param_1,local_98,&local_48,&local_90,local_94);
        FUN_100036370(&local_90);
      }
      else {
        plVar5 = operator_new(0x30);
        *plVar5 = (long)&PTR_FUN_1022828f0;
        lVar6 = 0;
        if (param_1 != (QObject *)0x0) {
          lVar6 = QtSharedPointer::ExternalRefCountData::getAndRef(param_1);
        }
        plVar5[1] = lVar6;
        plVar5[2] = (long)param_1;
        *(undefined4 *)(plVar5 + 3) = local_98;
        *(undefined8 *)((long)plVar5 + 0x24) = uStack_40;
        *(undefined8 *)((long)plVar5 + 0x1c) = local_48;
        *(undefined4 *)((long)plVar5 + 0x2c) = local_94;
        plVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
        if (plVar7 == (long *)0x0) {
          plVar7 = (long *)0x0;
          (**(code **)(*plVar5 + 8))(plVar5);
        }
        else {
          *(undefined4 *)(plVar7 + 1) = 1;
          plVar7[2] = (long)plVar5;
          *plVar7 = (long)&PTR_FUN_10226ca80;
        }
        uVar8 = 0;
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
          uVar8 = *(undefined8 *)(param_1 + 0x20);
        }
        uVar8 = FUN_100319c30(uVar8);
        if (plVar7 != (long *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        local_88 = plVar7;
        FUN_10032fbd0(uVar8,&local_88,&local_50);
        if (local_88 != (long *)0x0) {
          LOCK();
          plVar5 = local_88 + 1;
          lVar6 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*local_88 + 0x10))();
          }
        }
        if (plVar7 != (long *)0x0) {
          LOCK();
          plVar5 = plVar7 + 1;
          lVar6 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      FUN_100036370(&local_50);
      return;
    }
    pcVar4 = (char *)FUN_100a68370(local_70);
    uVar2 = FUN_100a68390(local_70);
    uVar3 = FUN_100a683a0(local_70);
    switch(uVar3) {
    case 0x2001:
      if (3 < uVar2) {
        local_98 = *(undefined4 *)pcVar4;
      }
      break;
    case 0x2002:
      if ((pcVar4 != (char *)0x0) && (uVar2 == 0xffffffff)) {
        _strlen(pcVar4);
      }
      QString::fromUtf8_helper((char *)&local_80,(int)pcVar4);
      QString::normalized(&local_78,&local_80,1,0);
      FUN_1000341d0(&local_50,&local_78);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ac0eea;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_100ac0eea:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_80,2,8);
      }
      break;
    case 0x2003:
      if (0xf < uVar2) {
        local_48 = *(undefined8 *)pcVar4;
        uStack_40 = *(undefined8 *)(pcVar4 + 8);
      }
      break;
    case 0x2004:
      if (3 < uVar2) {
        local_94 = *(undefined4 *)pcVar4;
      }
    }
    iVar1 = FUN_100a682f0(local_70);
  } while( true );
}

