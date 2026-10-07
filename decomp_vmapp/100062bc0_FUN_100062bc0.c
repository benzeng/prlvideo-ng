
void FUN_100062bc0(undefined8 param_1,long *param_2,undefined4 param_3)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  CVmEventParameter *pCVar5;
  undefined8 *puVar6;
  long *plVar7;
  QString QVar8;
  int iVar9;
  long *plVar10;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  CVmEvent local_1b8 [8];
  undefined1 local_1b0 [216];
  QEvent local_d8 [32];
  long *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  CVmEventParameter *local_a0;
  QArrayData *local_98;
  long *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  long *local_78;
  long *local_70;
  QArrayData *local_68;
  long *local_60;
  undefined8 *local_58;
  undefined8 *puStack_50;
  undefined8 *local_48;
  undefined1 local_31;
  
  local_58 = (undefined8 *)0x0;
  puStack_50 = (undefined8 *)0x0;
  local_48 = (undefined8 *)0x0;
  FUN_100119090(&local_60);
  FUN_10011cf50(&local_70);
  cVar3 = '\0';
  if (local_70 != (long *)0x0) {
    cVar3 = (char)local_70[2];
  }
  CBaseNode::toString(SUB81(&local_68,0),(bool)(cVar3 + '\b'));
  if (local_70 != (long *)0x0) {
    LOCK();
    plVar10 = local_70 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  plVar10 = (long *)0x0;
  if (*(int *)(*(long *)(*param_2 + 0x10) + 0x40) == 0x3e9) {
    lVar4 = *(long *)(*(long *)(*param_2 + 0x10) + 0x80);
    iVar9 = 0;
    if (lVar4 != 0) {
      pcVar1 = *(char **)(lVar4 + 0x10);
      iVar9 = 0;
      if (pcVar1 != (char *)0x0) {
        _strlen(pcVar1);
        iVar9 = (int)pcVar1;
      }
    }
    QString::fromUtf8_helper((char *)&local_88,iVar9);
    QString::normalized(&local_80,&local_88,1,0);
    FUN_100119490(&local_78,0x3f4,&local_80);
    if (local_78 != (long *)0x0) {
      LOCK();
      *(int *)(local_78 + 1) = (int)local_78[1] + 1;
      UNLOCK();
      if (local_78 != (long *)0x0) {
        LOCK();
        plVar10 = local_78 + 1;
        lVar4 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*local_78 + 0x10))();
        }
      }
    }
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100062d3e;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100062d3e:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100062d6e;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_100062d6e:
    plVar10 = local_78;
    if (local_78 == (long *)0x0) goto LAB_100062ecb;
    LOCK();
    *(int *)(local_78 + 1) = (int)local_78[1] + 1;
    UNLOCK();
    lVar4 = local_78[2];
    LOCK();
    plVar7 = local_78 + 1;
    lVar2 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_78 + 0x10))(local_78);
    }
    if (lVar4 == 0) goto LAB_100062ecb;
    FUN_10011cf50(&local_90,lVar4);
    QVar8.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
    if (local_90 != (long *)0x0) {
      QVar8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_90[2];
    }
    local_98 = (QArrayData *)QString::fromAscii_helper("task_uuid",9);
    lVar4 = CVmEvent::getEventParameter(QVar8);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100062e2d;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_100062e2d:
    if (local_90 != (long *)0x0) {
      LOCK();
      plVar7 = local_90 + 1;
      lVar2 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    if (lVar4 == 0) goto LAB_100062ecb;
    pCVar5 = operator_new(0xd0);
    CVmEventParameter::getParamValue();
    local_b0 = (QArrayData *)QString::fromAscii_helper("task_uuid",9);
    CVmEventParameter::CVmEventParameter(pCVar5,1,&local_a8);
    local_a0 = pCVar5;
    if (puStack_50 == local_48) {
      FUN_10002da50(&local_58,&local_a0);
    }
    else {
      *puStack_50 = pCVar5;
      puStack_50 = puStack_50 + 1;
    }
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100063246;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_100063246:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100063283;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_100063283:
    plVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_b8 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      *(undefined4 *)(plVar7 + 1) = 1;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_FUN_100bef0d0;
      local_b8 = plVar7;
    }
    FUN_100063770(param_1,0x186b1,param_3,&local_58,0xbbb,&local_b8);
    if (local_b8 != (long *)0x0) {
      LOCK();
      plVar7 = local_b8 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*local_b8 + 0x10))();
      }
    }
  }
  else {
LAB_100062ecb:
    cVar3 = FUN_1000ab520(DAT_1011c3698);
    if (cVar3 != '\0') {
      puVar6 = (undefined8 *)FUN_1000b1620(DAT_1011c3698);
      local_1c0 = (QArrayData *)*puVar6;
      if (1 < *(int *)local_1c0 + 1U) {
        LOCK();
        *(int *)local_1c0 = *(int *)local_1c0 + 1;
        local_31 = *(int *)local_1c0 != 0;
        UNLOCK();
      }
      local_1c8 = (QArrayData *)QString::fromAscii_helper("",0);
      CVmEvent::CVmEvent(local_1b8,100000,&local_1c0,0,param_3,0,&local_1c8,0);
      if (*(int *)local_1c8 != -1) {
        if (*(int *)local_1c8 != 0) {
          LOCK();
          *(int *)local_1c8 = *(int *)local_1c8 + -1;
          local_31 = *(int *)local_1c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100062f86;
        }
        QArrayData::deallocate(local_1c8,2,8);
      }
LAB_100062f86:
      if (*(int *)local_1c0 != -1) {
        if (*(int *)local_1c0 != 0) {
          LOCK();
          *(int *)local_1c0 = *(int *)local_1c0 + -1;
          local_31 = *(int *)local_1c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100062fbc;
        }
        QArrayData::deallocate(local_1c0,2,8);
      }
LAB_100062fbc:
      pCVar5 = operator_new(0xd0);
      FUN_1000a4ca0(&local_1d0,DAT_1011c3698);
      local_1d8 = (QArrayData *)QString::fromAscii_helper("vm_message_param_0",0x12);
      CVmEventParameter::CVmEventParameter(pCVar5,1,&local_1d0,&local_1d8);
      CVmEvent::addEventParameter((CVmEventParameter *)local_1b8);
      if (*(int *)local_1d8 != -1) {
        if (*(int *)local_1d8 != 0) {
          LOCK();
          *(int *)local_1d8 = *(int *)local_1d8 + -1;
          local_31 = *(int *)local_1d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100063058;
        }
        QArrayData::deallocate(local_1d8,2,8);
      }
LAB_100063058:
      if (*(int *)local_1d0 != -1) {
        if (*(int *)local_1d0 != 0) {
          LOCK();
          *(int *)local_1d0 = *(int *)local_1d0 + -1;
          local_31 = *(int *)local_1d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10006308e;
        }
        QArrayData::deallocate(local_1d0,2,8);
      }
LAB_10006308e:
      lVar4 = 0;
      if (local_60 != (long *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
        lVar4 = local_60[2];
        LOCK();
        plVar7 = local_60 + 1;
        lVar2 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*local_60 + 0x10))();
        }
      }
      CBaseNode::toString(SUB81(&local_1e0,0),SUB81(local_1b0,0));
      FUN_100125480(lVar4,&local_1e0);
      if (*(int *)local_1e0 != -1) {
        if (*(int *)local_1e0 != 0) {
          LOCK();
          *(int *)local_1e0 = *(int *)local_1e0 + -1;
          local_31 = *(int *)local_1e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10006311b;
        }
        QArrayData::deallocate(local_1e0,2,8);
      }
LAB_10006311b:
      QEvent::~QEvent(local_d8);
      CVmEventBase::~CVmEventBase((CVmEventBase *)local_1b8);
    }
    FUN_100063e20(param_1,&local_68,0x1389,param_2,0);
  }
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10006317e;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10006317e:
  if (local_60 != (long *)0x0) {
    LOCK();
    plVar7 = local_60 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if (local_58 != (undefined8 *)0x0) {
    if (puStack_50 != local_58) {
      puStack_50 = (undefined8 *)
                   ((~((long)puStack_50 + (-8 - (long)local_58)) & 0xfffffffffffffff8U) +
                   (long)puStack_50);
    }
    operator_delete(local_58);
  }
  if (plVar10 != (long *)0x0) {
    LOCK();
    plVar7 = plVar10 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  return;
}

