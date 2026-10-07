
undefined4 FUN_1000cc520(long param_1,long *param_2)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  QString local_158;
  long *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  CVmEvent local_130 [8];
  CBaseNode local_128 [216];
  QEvent local_50 [39];
  undefined1 local_29;
  
  CVmEvent::CVmEvent(local_130);
  if ((*param_2 != 0) && (lVar6 = *(long *)(*param_2 + 0x10), lVar6 != 0)) {
    lVar6 = *(long *)(lVar6 + 0x80);
    iVar7 = 0;
    if (lVar6 != 0) {
      pcVar2 = *(char **)(lVar6 + 0x10);
      iVar7 = 0;
      if (pcVar2 != (char *)0x0) {
        _strlen(pcVar2);
        iVar7 = (int)pcVar2;
      }
    }
    QString::fromUtf8_helper((char *)&local_140,iVar7);
    QString::normalized(&local_138,&local_140,1);
    CBaseNode::fromString
              (local_128,(QTypedArrayData<unsigned_short> *)&local_138,false,(QString *)0x0,
               (int *)0x0,(int *)0x0);
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        local_29 = *(int *)local_138 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000cc602;
      }
      QArrayData::deallocate(local_138,2,8);
    }
LAB_1000cc602:
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_29 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000cc638;
      }
      QArrayData::deallocate(local_140,2,8);
    }
LAB_1000cc638:
    local_148 = (QArrayData *)QString::fromAscii_helper("vm_switch_to_snapshot_uuid",0x1a);
    lVar6 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_130);
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_29 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000cc69c;
      }
      QArrayData::deallocate(local_148,2,8);
    }
LAB_1000cc69c:
    if (lVar6 != 0) {
      FUN_10011a560(&local_150,param_2);
      uVar5 = 0x80000018;
      if (local_150 == (long *)0x0) goto LAB_1000cc79e;
      LOCK();
      *(int *)(local_150 + 1) = (int)local_150[1] + 1;
      UNLOCK();
      lVar6 = local_150[2];
      LOCK();
      plVar1 = local_150 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_150 + 0x10))();
      }
      uVar5 = 0x80000018;
      if (lVar6 != 0) {
        FUN_10012b7b0(&local_158,lVar6);
        QString::operator=((QString *)(param_1 + 0x440),&local_158);
        if (*(int *)local_158.field0_0x0 != -1) {
          if (*(int *)local_158.field0_0x0 != 0) {
            LOCK();
            *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
            local_29 = *(int *)local_158.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1000cc758;
          }
          QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
        }
LAB_1000cc758:
        FUN_1000c81f0(param_1,0x8000000);
        cVar4 = FUN_1000c8c50(param_1,param_2,(QString *)(param_1 + 0x440));
        uVar5 = 0;
        if (cVar4 == '\0') {
          if (*(int *)(param_1 + 500) == 0) {
            *(undefined4 *)(param_1 + 500) = 0x80000503;
          }
          else if (*(int *)(param_1 + 500) == -0x7ffdffee) {
            *(undefined1 *)(param_1 + 0x1f8) = 1;
            *(undefined4 *)(param_1 + 500) = 0;
            goto LAB_1000cc7f0;
          }
          FUN_1000c6990(param_1);
          uVar5 = *(undefined4 *)(param_1 + 500);
        }
      }
LAB_1000cc7f0:
      if (local_150 != (long *)0x0) {
        LOCK();
        plVar1 = local_150 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)(*local_150 + 0x10))();
        }
      }
      goto LAB_1000cc79e;
    }
  }
  uVar5 = FUN_1000cb4c0(param_1,param_2);
LAB_1000cc79e:
  QEvent::~QEvent(local_50);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_130);
  return uVar5;
}

