
undefined1
FUN_100063e20(long param_1,undefined8 *param_2,int param_3,undefined8 param_4,undefined1 param_5)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined1 uVar6;
  ulong uVar7;
  char cVar8;
  long *local_188;
  QArrayData *local_180;
  long *local_178;
  long *local_170;
  QArrayData *local_168;
  long *local_160;
  QArrayData *local_158;
  long *local_150;
  QArrayData *local_148;
  CVmEvent local_140 [8];
  undefined1 local_138 [216];
  QEvent local_60 [32];
  QArrayData *local_40;
  undefined1 local_32;
  undefined1 local_31;
  
  local_148 = (QArrayData *)*param_2;
  if (1 < *(int *)local_148 + 1U) {
    LOCK();
    *(int *)local_148 = *(int *)local_148 + 1;
    local_32 = *(int *)local_148 != 0;
    UNLOCK();
  }
  CVmEvent::CVmEvent(local_140,(QTypedArrayData<unsigned_short> *)&local_148);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_32 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_100063ea8;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_100063ea8:
  iVar3 = FUN_100065fd0();
  local_150 = (long *)0x0;
  if ((param_3 == 0x1389) && (iVar3 < 0)) {
    local_158 = (QArrayData *)QString::fromAscii_helper("ws_response_cmd_error",0x15);
    lVar4 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_140);
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_32 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_32) goto LAB_100063f32;
      }
      QArrayData::deallocate(local_158,2,8);
    }
LAB_100063f32:
    if (lVar4 != 0) goto LAB_100063f3b;
    FUN_100119090(&local_160,param_4,iVar3);
    lVar4 = 0;
    if (local_160 != (long *)0x0) {
      LOCK();
      *(int *)(local_160 + 1) = (int)local_160[1] + 1;
      UNLOCK();
      lVar4 = local_160[2];
      LOCK();
      plVar5 = local_160 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_160 + 0x10))();
      }
    }
    CBaseNode::toString(SUB81(&local_168,0),SUB81(local_138,0));
    FUN_100125480(lVar4);
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        local_32 = *(int *)local_168 != 0;
        UNLOCK();
        if ((bool)local_32) goto LAB_1000640c9;
      }
      QArrayData::deallocate(local_168,2,8);
    }
LAB_1000640c9:
    plVar5 = (long *)FUN_10011cf70(lVar4);
    cVar8 = '\0';
    if (*plVar5 != 0) {
      cVar8 = (char)*(undefined8 *)(*plVar5 + 0x10);
    }
    CBaseNode::toString(SUB81(&local_40,0),(bool)(cVar8 + '\b'));
    FUN_100069140(&local_170,0x1389,&local_40,param_4,0,1,0);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_32 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_32) goto LAB_10006414c;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_10006414c:
    plVar5 = local_150;
    if (local_170 != (long *)0x0) {
      LOCK();
      *(int *)(local_170 + 1) = (int)local_170[1] + 1;
      UNLOCK();
    }
    local_150 = local_170;
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    if (local_170 != (long *)0x0) {
      LOCK();
      plVar5 = local_170 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*local_170 + 0x10))(local_170);
      }
    }
    if (local_160 != (long *)0x0) {
      LOCK();
      plVar5 = local_160 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*local_160 + 0x10))();
      }
    }
  }
  else {
LAB_100063f3b:
    CBaseNode::toString(SUB81(&local_180,0),SUB81(local_138,0));
    FUN_100069140(&local_178,param_3,&local_180,param_4,param_5,1,0);
    plVar5 = local_150;
    if (local_178 != (long *)0x0) {
      LOCK();
      *(int *)(local_178 + 1) = (int)local_178[1] + 1;
      UNLOCK();
    }
    local_150 = local_178;
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    if (local_178 != (long *)0x0) {
      LOCK();
      plVar5 = local_178 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*local_178 + 0x10))(local_178);
      }
    }
    if (*(int *)local_180 != -1) {
      if (*(int *)local_180 != 0) {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + -1;
        local_32 = *(int *)local_180 != 0;
        UNLOCK();
        if ((bool)local_32) goto LAB_1000641d1;
      }
      QArrayData::deallocate(local_180,2,8);
    }
  }
LAB_1000641d1:
  (**(code **)(**(long **)(param_1 + 0x28) + 0xb8))
            (&local_188,*(long **)(param_1 + 0x28),&local_150);
  plVar5 = local_188;
  if ((local_188 != (long *)0x0) && (local_188[2] != 0)) {
    local_31 = 0;
    LOCK();
    *(int *)(local_188 + 1) = (int)local_188[1] + 1;
    UNLOCK();
    FUN_100796350(local_188[2],0xffffffff,&local_31);
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  if ((local_188 != (long *)0x0) && (local_188[2] != 0)) {
    iVar3 = FUN_1007965e0();
    uVar6 = 1;
    if (iVar3 == 0) goto LAB_1000642bd;
  }
  uVar7 = param_1 + 0x50;
  if ((uVar7 & 1) == 0) {
    QReadWriteLock::lockForRead();
    uVar7 = uVar7 | 1;
  }
  iVar3 = *(int *)(param_1 + 0x58);
  if ((uVar7 & 1) != 0) {
    QReadWriteLock::unlock();
  }
  if (iVar3 != 0) {
    QMutex::lock();
    FUN_100069370(param_1 + 0x70,&local_150);
    QMutex::unlock();
  }
  uVar6 = 0;
LAB_1000642bd:
  if (local_188 != (long *)0x0) {
    LOCK();
    plVar5 = local_188 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*local_188 + 0x10))();
    }
  }
  if (local_150 != (long *)0x0) {
    LOCK();
    plVar5 = local_150 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*local_150 + 0x10))();
    }
  }
  QEvent::~QEvent(local_60);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_140);
  return uVar6;
}

