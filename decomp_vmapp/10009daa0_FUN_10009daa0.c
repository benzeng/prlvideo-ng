
void FUN_10009daa0(long param_1,int param_2,CHwPrinter *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  byte bVar4;
  CHwPrinter *this;
  long *plVar5;
  undefined8 uVar6;
  QArrayData *pQVar7;
  long lVar8;
  char *pcVar9;
  bool bVar10;
  long local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  lVar3 = DAT_1011cc808;
  if (DAT_1011cc808 == 0) {
    QMutex::unlock();
    local_88 = 0;
  }
  else {
    DAT_1011cc810 = DAT_1011cc810 + 1;
    QMutex::unlock();
    local_88 = *(long *)(lVar3 + 0x50);
  }
  if (param_3 != (CHwPrinter *)0x0) {
    this = operator_new(0xc0);
    CHwPrinter::CHwPrinter(this,param_3);
    plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    bVar10 = plVar5 == (long *)0x0;
    if (bVar10) {
      plVar5 = (long *)0x0;
      (**(code **)(*(long *)this + 0x88))(this);
    }
    else {
      *(undefined4 *)(plVar5 + 1) = 1;
      plVar5[2] = (long)this;
      *plVar5 = (long)&PTR_FUN_100bef8f0;
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    plVar2 = *(long **)(param_1 + 0x28);
    *(long **)(param_1 + 0x28) = plVar5;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    if (!bVar10) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  *(int *)(param_1 + 0x30) = param_2;
  if (local_88 == 0) {
    *(undefined4 *)(param_1 + 0x30) = 3;
    goto LAB_10009e0ba;
  }
  if (param_2 == 2) {
    FUN_1008e3970("","vm",0,"[UPRN] Send TRASHING to PrintingTools");
    FUN_100035ab0(local_88);
    goto LAB_10009e0ba;
  }
  if (param_2 == 1) {
    FUN_1008e3970("","vm",0,"[UPRN] Send RESUME to PrintingTools");
    FUN_100035b60(local_88);
    goto LAB_10009e0ba;
  }
  (**(code **)(**(long **)(*(long *)(param_1 + 0x28) + 0x10) + 0xb8))(&local_48);
  FUN_10009d990(&local_40,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10009dc99;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10009dc99:
  lVar8 = 3;
  if (param_2 != 4) {
    lVar8 = (ulong)(param_2 != 7) + 3;
  }
  if ((ulong)(long)*(int *)(param_1 + 0x30) < 8) {
    pcVar9 = (&PTR_s_WAIT_100ba8940)[*(int *)(param_1 + 0x30)];
  }
  else {
    pcVar9 = "UNKNOWN";
  }
  QString::toUtf8();
  pQVar7 = local_50 + *(long *)(local_50 + 0x10);
  (**(code **)(**(long **)(*(long *)(param_1 + 0x28) + 0x10) + 0xb8))(&local_60);
  QString::toUtf8();
  FUN_1008e3970("","vm",0,"[UPRN] Execute %s and change state to %s for device (tag:%s, id:%s)",
                (&PTR_s_TOOLS_READY_100ba8900)[lVar8],pcVar9,pQVar7,
                local_58 + *(long *)(local_58 + 0x10));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10009dd7f;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_10009dd7f:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10009ddaf;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10009ddaf:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10009dddf;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10009dddf:
  if (*(long *)(param_1 + 0x38) == 0) {
    bVar4 = 0;
  }
  else {
    plVar5 = *(long **)(*(long *)(param_1 + 0x38) + 0x10);
    if (plVar5 == (long *)0x0) {
      bVar4 = 0;
    }
    else {
      (**(code **)(*plVar5 + 0xb8))(&local_68);
      (**(code **)(**(long **)(*(long *)(param_1 + 0x28) + 0x10) + 0xb8))(&local_70);
      bVar4 = operator==(&local_68,&local_70);
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10009de62;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
LAB_10009de62:
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10009de9a;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
    }
  }
LAB_10009de9a:
  if ((param_2 == 4) || (param_2 == 7)) {
    uVar6 = 0;
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
    }
    FUN_1002bacc0(0,bVar4 + 5,uVar6);
    if (*(int *)(DAT_1011c3698 + 0x5c0) - 0x80cU < 5) {
      pQVar7 = (QArrayData *)QString::fromAscii_helper("TAG2",4);
    }
    else {
      pQVar7 = (QArrayData *)QString::fromAscii_helper("TAG1",4);
    }
    if (1 < *(int *)pQVar7 + 1U) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + 1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
    }
    local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar7;
    QString::append(&local_78);
    FUN_100035a70(local_88,&local_78);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10009df6a;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_10009df6a:
    if (*(int *)pQVar7 != -1) {
      if (*(int *)pQVar7 != 0) {
        LOCK();
        *(int *)pQVar7 = *(int *)pQVar7 + -1;
        local_31 = *(int *)pQVar7 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10009e08a;
      }
      QArrayData::deallocate(pQVar7,2,8);
    }
  }
  else {
    uVar6 = 0;
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
    }
    FUN_1002bacc0(1,bVar4 + 5,uVar6);
    if (*(int *)(DAT_1011c3698 + 0x5c0) - 0x80cU < 5) {
      pQVar7 = (QArrayData *)QString::fromAscii_helper("TAG2",4);
    }
    else {
      pQVar7 = (QArrayData *)QString::fromAscii_helper("TAG1",4);
    }
    if (1 < *(int *)pQVar7 + 1U) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + 1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
    }
    local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar7;
    QString::append(&local_80);
    FUN_100035a90(local_88,&local_80);
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10009e05f;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
LAB_10009e05f:
    if (*(int *)pQVar7 != -1) {
      if (*(int *)pQVar7 != 0) {
        LOCK();
        *(int *)pQVar7 = *(int *)pQVar7 + -1;
        local_31 = *(int *)pQVar7 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10009e08a;
      }
      QArrayData::deallocate(pQVar7,2,8);
    }
  }
LAB_10009e08a:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10009e0ba;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10009e0ba:
  if (lVar3 != 0) {
    FUN_100026030(&DAT_1011cc7f8);
  }
  return;
}

