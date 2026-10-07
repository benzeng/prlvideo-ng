
ulong FUN_100065780(long param_1,undefined8 *param_2,undefined4 param_3,long *param_4)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 unaff_R12B;
  long *local_178;
  int local_170 [2];
  QArrayData *local_168;
  uint *local_160;
  long *local_158;
  long *local_150;
  long *local_148;
  QArrayData *local_140;
  CVmEvent local_138 [8];
  CBaseNode local_130 [216];
  QEvent local_58 [38];
  undefined1 local_32;
  undefined1 local_31;
  
  CVmEvent::CVmEvent(local_138);
  local_140 = (QArrayData *)*param_2;
  if (1 < *(int *)local_140 + 1U) {
    LOCK();
    *(int *)local_140 = *(int *)local_140 + 1;
    local_31 = *(int *)local_140 != 0;
    UNLOCK();
  }
  CBaseNode::fromString
            (local_130,(QTypedArrayData<unsigned_short> *)&local_140,false,(QString *)0x0,(int *)0x0
             ,(int *)0x0);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100065828;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_100065828:
  plVar1 = (long *)(param_1 + 0x48);
  uVar2 = param_1 + 0x50;
  do {
    QMutex::lock();
    cVar7 = FUN_100795c70(plVar1);
    if (cVar7 != '\0') {
      QWaitCondition::wait((QMutex *)(param_1 + 0x38),param_1 + 0x40);
    }
    if (*(char *)(param_1 + 0x30) == '\0') {
      bVar5 = true;
      unaff_R12B = 0;
      FUN_1008e3970("","vm",0,"vmSendQuestionEventHlp failed. Dialogs are disabled.");
    }
    else {
      uVar11 = uVar2;
      if ((uVar2 & 1) == 0) {
        QReadWriteLock::lockForRead();
        uVar11 = uVar2 | 1;
      }
      iVar8 = *(int *)(param_1 + 0x58);
      if ((uVar11 & 1) != 0) {
        QReadWriteLock::unlock();
      }
      if (iVar8 == 0) {
        local_150 = (long *)0x0;
        FUN_100069140(&local_148,param_3,param_2,&local_150,0,1,0);
        if (local_150 != (long *)0x0) {
          LOCK();
          plVar4 = local_150 + 1;
          lVar6 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*local_150 + 0x10))();
          }
        }
        (**(code **)(**(long **)(param_1 + 0x28) + 0xb8))
                  (&local_158,*(long **)(param_1 + 0x28),&local_148);
        if (local_158 != (long *)0x0) {
          LOCK();
          *(int *)(local_158 + 1) = (int)local_158[1] + 1;
          UNLOCK();
        }
        plVar4 = (long *)*plVar1;
        *plVar1 = (long)local_158;
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar3 = plVar4 + 1;
          lVar6 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*plVar4 + 0x10))();
          }
        }
        if (local_158 != (long *)0x0) {
          LOCK();
          plVar4 = local_158 + 1;
          lVar6 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*local_158 + 0x10))();
          }
        }
        plVar4 = (long *)*plVar1;
        if ((plVar4 != (long *)0x0) && (plVar4[2] != 0)) {
          local_32 = 0;
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          FUN_100796410(plVar4[2],0xffffffff,&local_32);
          LOCK();
          plVar3 = plVar4 + 1;
          lVar6 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
        if ((*plVar1 == 0) || (*(long *)(*plVar1 + 0x10) == 0)) {
          FUN_100795d20(local_170);
        }
        else {
          FUN_100796610(local_170);
        }
        FUN_100795ca0(&local_178);
        if (local_178 != (long *)0x0) {
          LOCK();
          *(int *)(local_178 + 1) = (int)local_178[1] + 1;
          UNLOCK();
        }
        plVar4 = (long *)*plVar1;
        *plVar1 = (long)local_178;
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar3 = plVar4 + 1;
          lVar6 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*plVar4 + 0x10))();
          }
        }
        if (local_178 != (long *)0x0) {
          LOCK();
          plVar4 = local_178 + 1;
          lVar6 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*local_178 + 0x10))();
          }
        }
        FUN_1008e3970("","vm",0,"vmSendQuestionEventHlp. User responded. Waking waiting.");
        QWaitCondition::wakeOne();
        if (local_170[0] == 0) {
          if (1 < *local_160) {
            FUN_100069e30(&local_160,local_160[1]);
          }
          lVar6 = **(long **)(local_160 + (long)(int)local_160[2] * 2 + 4);
          if (lVar6 != 0) {
            LOCK();
            *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
            UNLOCK();
          }
          plVar4 = (long *)*param_4;
          *param_4 = lVar6;
          unaff_R12B = 1;
          if (plVar4 != (long *)0x0) {
            LOCK();
            plVar3 = plVar4 + 1;
            lVar6 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)(*plVar4 + 0x10))();
            }
          }
        }
        else {
          unaff_R12B = 0;
        }
        if (*local_160 != 0xffffffff) {
          if (*local_160 != 0) {
            LOCK();
            *local_160 = *local_160 - 1;
            local_31 = *local_160 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100065c43;
          }
          FUN_100069b10(&local_160,local_160);
        }
LAB_100065c43:
        if (*(int *)local_168 != -1) {
          if (*(int *)local_168 != 0) {
            LOCK();
            *(int *)local_168 = *(int *)local_168 + -1;
            local_31 = *(int *)local_168 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100065c79;
          }
          QArrayData::deallocate(local_168,2,8);
        }
LAB_100065c79:
        bVar5 = true;
        if (local_148 != (long *)0x0) {
          LOCK();
          plVar4 = local_148 + 1;
          lVar6 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*local_148 + 0x10))();
          }
        }
      }
      else {
        if (*(char *)(param_1 + 0x5c) != '\0') {
          FUN_1007685b0(1000);
        }
        iVar8 = FUN_1008e38f0(&DAT_100bef638);
        bVar5 = false;
        if (iVar8 != 0) {
          uVar9 = CVmEventBase::getEventCode();
          FUN_1007dd120(uVar9);
          bVar5 = false;
          FUN_1008e3970("","vm",0,"Waiting for send %s question...");
        }
      }
    }
    QMutex::unlock();
    if (bVar5) goto LAB_100065ccf;
  } while (*(char *)(param_1 + 0x5c) != '\0');
  unaff_R12B = 0;
LAB_100065ccf:
  QEvent::~QEvent(local_58);
  uVar10 = CVmEventBase::~CVmEventBase((CVmEventBase *)local_138);
  return CONCAT71((int7)((ulong)uVar10 >> 8),unaff_R12B) & 0xffffffffffffff01;
}

