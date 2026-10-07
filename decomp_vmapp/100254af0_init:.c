
/* Function Stack Size: 0x18 bytes */

ID CVideoDataAVF_objc::init_(ID param_1,SEL param_2,QString param_3)

{
  undefined *puVar1;
  uint *puVar2;
  int iVar3;
  ID self;
  ID IVar4;
  undefined8 uVar5;
  char *pcVar6;
  size_t sVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  QWaitCondition *pQVar11;
  QMutex *pQVar12;
  ID IVar13;
  ID IVar14;
  uint *puVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  uint *puVar19;
  ulong uVar20;
  ulong local_240;
  undefined *local_238;
  undefined4 local_230;
  undefined4 local_22c;
  code *local_228;
  undefined *local_220;
  ID local_218;
  undefined *local_210;
  undefined4 local_208;
  undefined4 local_204;
  code *local_200;
  undefined *local_1f8;
  ID local_1f0;
  undefined8 local_1e8;
  long lStack_1e0;
  long *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  undefined8 local_198;
  long lStack_190;
  long *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  ID local_150;
  undefined *local_148;
  undefined1 local_139;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  long local_38;
  
  lVar17 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_148 = PTR_CVideoDataAVF_objc_100bedc80;
  local_150 = param_1;
  local_38 = lVar17;
  self = NSObject::init((ID)&local_150,PTR_s_init_100bed248);
  puVar1 = PTR__objc_msgSend_100ba25e8;
  IVar4 = 0;
  if (self != 0) {
    local_168 = 0;
    uStack_160 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_188 = (long *)0x0;
    uStack_180 = 0;
    local_198 = 0;
    lStack_190 = 0;
    IVar4 = AVCaptureDevice::devicesWithMediaType_
                      ((ID)PTR__OBJC_CLASS___AVCaptureDevice_100bedb68,
                       PTR_s_devicesWithMediaType__100bed4b0,
                       *(undefined8 *)PTR__AVMediaTypeVideo_100ba2038);
    local_240 = AVCaptureDevice::countByEnumeratingWithState_objects_count_
                          (IVar4,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_198,
                           local_b8,0x10);
    if (local_240 != 0) {
      lVar17 = *local_188;
      do {
        uVar20 = 0;
        do {
          if (*local_188 != lVar17) {
            _objc_enumerationMutation(IVar4);
          }
          uVar9 = *(undefined8 *)(lStack_190 + uVar20 * 8);
          uVar5 = (*(code *)puVar1)(uVar9,PTR_s_uniqueID_100bed4c0);
          pcVar6 = (char *)(*(code *)puVar1)(uVar5,PTR_s_UTF8String_100bed218);
          iVar3 = -1;
          if (pcVar6 != (char *)0x0) {
            sVar7 = _strlen(pcVar6);
            iVar3 = (int)sVar7;
          }
          local_1a0 = (QArrayData *)QString::fromAscii_helper(pcVar6,iVar3);
          iVar3 = QString::compare(&local_1a0,param_3.field0_0x0,1);
          if (*(int *)local_1a0 != -1) {
            if (*(int *)local_1a0 != 0) {
              LOCK();
              *(int *)local_1a0 = *(int *)local_1a0 + -1;
              local_139 = *(int *)local_1a0 != 0;
              UNLOCK();
              if ((bool)local_139) goto LAB_100254cb2;
            }
            QArrayData::deallocate(local_1a0,2,8);
          }
LAB_100254cb2:
          if (iVar3 == 0) {
            NSObject::setM_camera_(self,PTR_s_setM_camera__100bed4c8,uVar9);
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < local_240);
        local_240 = AVCaptureDevice::countByEnumeratingWithState_objects_count_
                              (IVar4,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_198,
                               local_b8,0x10);
      } while (local_240 != 0);
    }
    IVar4 = NSObject::m_camera(self,PTR_s_m_camera_100bed4d0);
    if (IVar4 == 0) {
      QString::toUtf8();
      FUN_1008e3970("","LocalDevices",0,"[CVideoDataAVF] Failed to find camera by serial: %s",
                    local_1a8 + *(long *)(local_1a8 + 0x10));
      IVar4 = 0;
      lVar17 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (*(int *)local_1a8 != -1) {
        if (*(int *)local_1a8 != 0) {
          LOCK();
          *(int *)local_1a8 = *(int *)local_1a8 + -1;
          local_139 = *(int *)local_1a8 != 0;
          UNLOCK();
          IVar4 = 0;
          if ((bool)local_139) goto LAB_10025524d;
        }
        QArrayData::deallocate(local_1a8,1,8);
        IVar4 = 0;
      }
    }
    else {
      puVar8 = operator_new(8);
      *puVar8 = PTR_shared_null_100ba20d8;
      NSObject::setM_modes_(self,PTR_s_setM_modes__100bed4d8,puVar8);
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1d8 = (long *)0x0;
      uStack_1d0 = 0;
      local_1e8 = 0;
      lStack_1e0 = 0;
      IVar4 = NSObject::m_camera(self,PTR_s_m_camera_100bed4d0);
      IVar4 = NSObject::formats(IVar4,PTR_s_formats_100bed4e0);
      local_240 = NSObject::countByEnumeratingWithState_objects_count_
                            (IVar4,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_1e8,
                             local_138,0x10);
      if (local_240 != 0) {
        lVar17 = *local_1d8;
        do {
          uVar20 = 0;
          do {
            if (*local_1d8 != lVar17) {
              _objc_enumerationMutation(IVar4);
            }
            uVar9 = (*(code *)PTR__objc_msgSend_100ba25e8)
                              (*(undefined8 *)(lStack_1e0 + uVar20 * 8),
                               PTR_s_formatDescription_100bed4e8);
            uVar9 = _CMVideoFormatDescriptionGetDimensions(uVar9);
            puVar8 = (undefined8 *)NSObject::m_modes(self,PTR_s_m_modes_100bed4f0);
            puVar19 = (uint *)*puVar8;
            if (1 < *puVar19) {
              FUN_1002574a0(puVar8);
              puVar19 = (uint *)*puVar8;
            }
            puVar10 = (uint *)0x0;
            uVar16 = (uint)uVar9;
            puVar2 = *(uint **)(puVar19 + 4);
            if (*(uint **)(puVar19 + 4) == (uint *)0x0) {
              puVar15 = puVar19 + 2;
LAB_100254ee3:
              puVar10 = (uint *)QMapDataBase::createNode
                                          ((int)puVar19,0x20,(QMapNodeBase *)&DAT_00000008,
                                           SUB81(puVar15,0));
              puVar10[6] = uVar16;
            }
            else {
              do {
                while (puVar15 = puVar2, uVar18 = puVar15[6], uVar16 <= uVar18) {
                  puVar10 = puVar15;
                  puVar2 = *(uint **)(puVar15 + 2);
                  if (*(uint **)(puVar15 + 2) == (uint *)0x0) goto LAB_100254ebb;
                }
                puVar2 = *(uint **)(puVar15 + 4);
              } while (*(uint **)(puVar15 + 4) != (uint *)0x0);
              if (puVar10 == (uint *)0x0) goto LAB_100254ee3;
              uVar18 = puVar10[6];
LAB_100254ebb:
              if (uVar16 < uVar18) goto LAB_100254ee3;
            }
            puVar10[7] = (uint)((ulong)uVar9 >> 0x20);
            uVar20 = uVar20 + 1;
          } while (uVar20 < local_240);
          local_240 = NSObject::countByEnumeratingWithState_objects_count_
                                (IVar4,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_1e8,
                                 local_138,0x10);
        } while (local_240 != 0);
      }
      pQVar11 = operator_new(8);
      QWaitCondition::QWaitCondition(pQVar11);
      NSObject::setM_session_stopped_(self,PTR_s_setM_session_stopped__100bed4f8,pQVar11);
      pQVar12 = operator_new(8);
      QMutex::QMutex(pQVar12,0);
      NSObject::setM_stop_mutex_(self,PTR_s_setM_stop_mutex__100bed500,pQVar12);
      pQVar11 = operator_new(8);
      QWaitCondition::QWaitCondition(pQVar11);
      NSObject::setM_session_started_(self,PTR_s_setM_session_started__100bed508,pQVar11);
      pQVar12 = operator_new(8);
      QMutex::QMutex(pQVar12,0);
      NSObject::setM_start_mutex_(self,PTR_s_setM_start_mutex__100bed510,pQVar12);
      pQVar12 = operator_new(8);
      QMutex::QMutex(pQVar12,0);
      NSObject::setM_frame_mutex_(self,PTR_s_setM_frame_mutex__100bed518,pQVar12);
      NSObject::setM_start_capturing_(self,PTR_s_setM_start_capturing__100bed520,0);
      NSObject::setM_frame_size_(self,PTR_s_setM_frame_size__100bed528,0);
      IVar4 = AVCaptureSession::alloc
                        ((ID)PTR__OBJC_CLASS___AVCaptureSession_100bedb70,PTR_s_alloc_100bed228);
      IVar4 = AVCaptureSession::init(IVar4,PTR_s_init_100bed248);
      NSObject::setM_session_(self,PTR_s_setM_session__100bed530,IVar4);
      IVar4 = NSNotificationCenter::defaultCenter
                        ((ID)PTR__OBJC_CLASS___NSNotificationCenter_100bedb78,
                         PTR_s_defaultCenter_100bed538);
      uVar9 = *(undefined8 *)PTR__AVCaptureSessionDidStopRunningNotification_100ba2030;
      IVar13 = NSObject::m_session(self,PTR_s_m_session_100bed540);
      puVar1 = PTR___NSConcreteStackBlock_100ba20c8;
      local_210 = PTR___NSConcreteStackBlock_100ba20c8;
      local_208 = 0xc2000000;
      local_204 = 0;
      local_200 = FUN_100255320;
      local_1f8 = &DAT_100bae700;
      local_1f0 = self;
      IVar13 = NSNotificationCenter::addObserverForName_object_queue_usingBlock_
                         (IVar4,PTR_s_addObserverForName_object_queue__100bed558,uVar9,IVar13,0,
                          &local_210);
      uVar9 = *(undefined8 *)PTR__AVCaptureSessionDidStartRunningNotification_100ba2028;
      IVar14 = NSObject::m_session(self,PTR_s_m_session_100bed540);
      local_238 = puVar1;
      local_230 = 0xc2000000;
      local_22c = 0;
      local_228 = FUN_100255420;
      local_220 = &DAT_100bae730;
      local_218 = self;
      IVar4 = NSNotificationCenter::addObserverForName_object_queue_usingBlock_
                        (IVar4,PTR_s_addObserverForName_object_queue__100bed558,uVar9,IVar14,0,
                         &local_238);
      IVar14 = NSArray::alloc((ID)PTR__OBJC_CLASS___NSArray_100bedb80,PTR_s_alloc_100bed228);
      IVar4 = NSArray::initWithObjects_(IVar14,PTR_s_initWithObjects__100bed570,IVar13,IVar4,0);
      NSObject::setM_observers_(self,PTR_s_setM_observers__100bed578,IVar4);
      lVar17 = *(long *)PTR____stack_chk_guard_100ba2320;
      IVar4 = self;
    }
  }
LAB_10025524d:
  if (lVar17 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return IVar4;
}

