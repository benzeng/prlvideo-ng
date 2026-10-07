
/* Function Stack Size: 0x10 bytes */

void CVideoDataAVF_objc::dealloc(ID param_1,SEL param_2)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ulong uVar5;
  QMap<unsigned_int,_unsigned_int> *pQVar6;
  QWaitCondition *pQVar7;
  QMutex *pQVar8;
  QMapData<unsigned_int,_unsigned_int> *pQVar9;
  ulong uVar10;
  ID local_118;
  undefined *local_110;
  undefined8 local_108;
  long lStack_100;
  long *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_b9;
  undefined1 local_b8 [128];
  long local_38;
  
  puVar2 = PTR__objc_msgSend_100ba25e8;
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  IVar3 = NSNotificationCenter::defaultCenter
                    ((ID)PTR__OBJC_CLASS___NSNotificationCenter_100bedb78,
                     PTR_s_defaultCenter_100bed538);
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = (long *)0x0;
  uStack_f0 = 0;
  local_108 = 0;
  lStack_100 = 0;
  IVar4 = m_observers(param_1,PTR_s_m_observers_100bed580);
  uVar5 = (*(code *)puVar2)(IVar4,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_108,
                            local_b8,0x10);
  puVar2 = PTR_s_removeObserver__100bed588;
  if (uVar5 != 0) {
    lVar1 = *local_f8;
    do {
      uVar10 = 0;
      do {
        if (*local_f8 != lVar1) {
          _objc_enumerationMutation(IVar4);
        }
        NSNotificationCenter::removeObserver_(IVar3,puVar2,*(undefined8 *)(lStack_100 + uVar10 * 8))
        ;
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar5);
      uVar5 = (*(code *)PTR__objc_msgSend_100ba25e8)
                        (IVar4,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_108,local_b8,
                         0x10);
    } while (uVar5 != 0);
  }
  puVar2 = PTR__objc_msgSend_100ba25e8;
  IVar3 = m_session(param_1,PTR_s_m_session_100bed540);
  (*(code *)puVar2)(IVar3,PTR_s_release_100bed2a0);
  setM_session_(param_1,PTR_s_setM_session__100bed530,0);
  pQVar6 = m_modes(param_1,PTR_s_m_modes_100bed4f0);
  if (pQVar6 == (QMap<unsigned_int,_unsigned_int> *)0x0) goto LAB_1002556df;
  pQVar9 = pQVar6->field0_0x0;
  if (*(int *)pQVar9 != -1) {
    if (*(int *)pQVar9 != 0) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + -1;
      local_b9 = *(int *)pQVar9 != 0;
      UNLOCK();
      if ((bool)local_b9) goto LAB_1002556d7;
      pQVar9 = pQVar6->field0_0x0;
    }
    if (*(long *)(pQVar9 + 0x10) != 0) {
      QMapDataBase::freeTree((QMapNodeBase *)pQVar9,(int)*(long *)(pQVar9 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar9);
  }
LAB_1002556d7:
  operator_delete(pQVar6);
LAB_1002556df:
  pQVar7 = m_session_stopped(param_1,PTR_s_m_session_stopped_100bed550);
  if (pQVar7 != (QWaitCondition *)0x0) {
    QWaitCondition::~QWaitCondition(pQVar7);
    operator_delete(pQVar7);
  }
  pQVar8 = m_stop_mutex(param_1,PTR_s_m_stop_mutex_100bed548);
  if (pQVar8 != (QMutex *)0x0) {
    QMutex::~QMutex(pQVar8);
    operator_delete(pQVar8);
  }
  pQVar7 = m_session_started(param_1,PTR_s_m_session_started_100bed568);
  if (pQVar7 != (QWaitCondition *)0x0) {
    QWaitCondition::~QWaitCondition(pQVar7);
    operator_delete(pQVar7);
  }
  pQVar8 = m_start_mutex(param_1,PTR_s_m_start_mutex_100bed560);
  if (pQVar8 != (QMutex *)0x0) {
    QMutex::~QMutex(pQVar8);
    operator_delete(pQVar8);
  }
  pQVar8 = m_frame_mutex(param_1,PTR_s_m_frame_mutex_100bed590);
  if (pQVar8 != (QMutex *)0x0) {
    QMutex::~QMutex(pQVar8);
    operator_delete(pQVar8);
  }
  local_110 = PTR_CVideoDataAVF_objc_100bedc80;
  local_118 = param_1;
  NSObject::dealloc((ID)&local_118,PTR_s_dealloc_100bed598);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

