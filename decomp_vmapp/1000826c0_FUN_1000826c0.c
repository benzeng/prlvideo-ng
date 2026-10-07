
undefined4 FUN_1000826c0(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  char cVar3;
  size_t sVar4;
  QArrayData *pQVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  QArrayData *local_f8;
  undefined4 local_f0 [2];
  QScriptValue local_e8 [8];
  QString local_e0;
  QString local_d8 [2];
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  QTextStream local_88 [16];
  undefined4 local_78;
  QScriptValue local_70 [8];
  QArrayData *local_68;
  undefined4 local_60;
  QScriptValue local_58 [8];
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  QScriptEngine::QScriptEngine((QScriptEngine *)local_d8);
  QScriptEngine::globalObject();
  local_f0[0] = 0;
  QScriptEngine::newQObject(local_e8,local_d8,DAT_1011c3698,0,local_f0);
  local_f8 = (QArrayData *)QString::fromAscii_helper("vm",2);
  QScriptValue::setProperty(&local_e0,(QScriptValue *)&local_f8,local_e8);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10008279b;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_10008279b:
  QScriptEngine::globalObject();
  local_50 = (QArrayData *)QString::fromAscii_helper("print",5);
  QScriptEngine::newFunction
            ((_func_QScriptValue_QScriptContext_ptr_QScriptEngine_ptr *)local_58,(int)local_d8);
  local_60 = 0x800;
  QScriptValue::setProperty(&local_48,(QScriptValue *)&local_50,local_58);
  QScriptValue::~QScriptValue(local_58);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10008282e;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10008282e:
  local_68 = (QArrayData *)QString::fromAscii_helper("quit",4);
  QScriptEngine::newFunction
            ((_func_QScriptValue_QScriptContext_ptr_QScriptEngine_ptr *)local_70,(int)local_d8);
  local_78 = 0x800;
  QScriptValue::setProperty(&local_48,(QScriptValue *)&local_68,local_70);
  QScriptValue::~QScriptValue(local_70);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000828b1;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1000828b1:
  DAT_1011b638c = '\0';
  QTextStream::QTextStream(local_88,*(undefined8 *)PTR____stdinp_100ba2330,1);
  puVar1 = PTR_shared_null_100ba20d0;
  local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  if (DAT_1011b638c != '\x01') {
    pcVar8 = "> ";
    do {
      iVar7 = -1;
      if (pcVar8 != (char *)0x0) {
        sVar4 = _strlen(pcVar8);
        iVar7 = (int)sVar4;
      }
      pQVar5 = (QArrayData *)QString::fromAscii_helper(pcVar8,iVar7);
      local_98 = pQVar5;
      FUN_100083580(&local_98);
      if (*(int *)pQVar5 != -1) {
        if (*(int *)pQVar5 != 0) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_31 = *(int *)pQVar5 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100082970;
        }
        QArrayData::deallocate(pQVar5,2,8);
      }
LAB_100082970:
      QTextStream::readLine((longlong)&local_a0);
      iVar7 = 0;
      if (local_a0 != (QArrayData *)puVar1) {
        local_a8 = local_a0;
        if (1 < *(uint *)local_a0 + 1) {
          LOCK();
          *(uint *)local_a0 = *(uint *)local_a0 + 1;
          local_31 = *(uint *)local_a0 != 0;
          UNLOCK();
        }
        uVar6 = *(uint *)(local_a0 + 4);
        if ((1 < *(uint *)local_a0) || ((*(uint *)(local_a0 + 8) & 0x7fffffff) < uVar6 + 2)) {
          QString::reallocData((uint)&local_a8,SUB41(uVar6 + 2,0));
          uVar6 = *(uint *)(local_a8 + 4);
        }
        *(uint *)(local_a8 + 4) = uVar6 + 1;
        *(undefined2 *)(local_a8 + (long)(int)uVar6 * 2 + *(long *)(local_a8 + 0x10)) = 10;
        *(undefined2 *)
         (local_a8 + (long)(int)*(uint *)(local_a8 + 4) * 2 + *(long *)(local_a8 + 0x10)) = 0;
        QString::append(&local_90);
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100082a5f;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
LAB_100082a5f:
        cVar3 = QScriptEngine::canEvaluate(local_d8);
        iVar7 = 2;
        if (cVar3 == '\0') {
          pcVar8 = "... ";
        }
        else {
          local_b8 = (QArrayData *)QString::fromAscii_helper("stdin",5);
          QScriptEngine::evaluate(&local_b0,local_d8,(int)&local_90);
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              local_31 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100082af5;
            }
            QArrayData::deallocate(local_b8,2,8);
          }
LAB_100082af5:
          if (local_90.field0_0x0 != (QTypedArrayData<unsigned_short> *)puVar1) {
            local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
            QString::operator=(&local_90,&local_40);
            if (*(int *)local_40.field0_0x0 != -1) {
              if (*(int *)local_40.field0_0x0 != 0) {
                LOCK();
                *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
                local_31 = *(int *)local_40.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100082b42;
              }
              QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
            }
          }
LAB_100082b42:
          cVar3 = QScriptValue::isUndefined();
          if (cVar3 == '\0') {
            QScriptValue::toString();
            local_c0 = local_c8;
            if (1 < *(uint *)local_c8 + 1) {
              LOCK();
              *(uint *)local_c8 = *(uint *)local_c8 + 1;
              local_31 = *(uint *)local_c8 != 0;
              UNLOCK();
            }
            uVar6 = *(uint *)(local_c8 + 4);
            if ((1 < *(uint *)local_c8) || ((*(uint *)(local_c8 + 8) & 0x7fffffff) < uVar6 + 2)) {
              QString::reallocData((uint)&local_c0,SUB41(uVar6 + 2,0));
              uVar6 = *(uint *)(local_c0 + 4);
            }
            *(uint *)(local_c0 + 4) = uVar6 + 1;
            *(undefined2 *)(local_c0 + (long)(int)uVar6 * 2 + *(long *)(local_c0 + 0x10)) = 10;
            *(undefined2 *)
             (local_c0 + (long)(int)*(uint *)(local_c0 + 4) * 2 + *(long *)(local_c0 + 0x10)) = 0;
            FUN_100083580(&local_c0);
            if (*(int *)local_c0 != -1) {
              if (*(int *)local_c0 != 0) {
                LOCK();
                *(int *)local_c0 = *(int *)local_c0 + -1;
                local_31 = *(int *)local_c0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100082c34;
              }
              QArrayData::deallocate(local_c0,2,8);
            }
LAB_100082c34:
            if (*(int *)local_c8 != -1) {
              if (*(int *)local_c8 != 0) {
                LOCK();
                *(int *)local_c8 = *(int *)local_c8 + -1;
                local_31 = *(int *)local_c8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100082c70;
              }
              QArrayData::deallocate(local_c8,2,8);
            }
          }
LAB_100082c70:
          iVar7 = -2;
          QScriptValue::~QScriptValue((QScriptValue *)&local_b0);
          pcVar8 = "> ";
        }
      }
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100082cdd;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_100082cdd:
    } while ((iVar7 != 0) && (DAT_1011b638c == '\0'));
  }
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100082d2d;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_100082d2d:
  QTextStream::~QTextStream(local_88);
  QScriptValue::~QScriptValue((QScriptValue *)&local_48);
  uVar2 = DAT_1011b6388;
  QScriptValue::~QScriptValue(local_e8);
  QScriptValue::~QScriptValue((QScriptValue *)&local_e0);
  QScriptEngine::~QScriptEngine((QScriptEngine *)local_d8);
  return uVar2;
}

