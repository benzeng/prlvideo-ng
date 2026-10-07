
undefined8 FUN_100083190(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  QArrayData *local_60;
  QScriptValue local_58 [8];
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  for (iVar3 = 0; iVar2 = QScriptContext::argumentCount(), iVar3 < iVar2; iVar3 = iVar3 + 1) {
    if (0 < iVar3) {
      QString::fromUtf8_helper((char *)&local_40,0xa10314);
      QString::append(&local_48);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100083237;
        }
        QArrayData::deallocate(local_40,2,8);
      }
    }
LAB_100083237:
    QScriptContext::argument((int)local_58);
    QScriptValue::toString();
    QString::append(&local_48);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000831d0;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1000831d0:
    QScriptValue::~QScriptValue(local_58);
  }
  local_60 = (QArrayData *)local_48.field0_0x0;
  if (1 < *(uint *)local_48.field0_0x0 + 1) {
    LOCK();
    *(uint *)local_48.field0_0x0 = *(uint *)local_48.field0_0x0 + 1;
    local_31 = *(uint *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  uVar1 = *(uint *)(local_48.field0_0x0 + 4);
  if ((1 < *(uint *)local_48.field0_0x0) ||
     ((*(uint *)(local_48.field0_0x0 + 8) & 0x7fffffff) < uVar1 + 2)) {
    QString::reallocData((uint)&local_60,SUB41(uVar1 + 2,0));
    uVar1 = *(uint *)(local_60 + 4);
  }
  *(uint *)(local_60 + 4) = uVar1 + 1;
  *(undefined2 *)(local_60 + (long)(int)uVar1 * 2 + *(long *)(local_60 + 0x10)) = 10;
  *(undefined2 *)(local_60 + (long)(int)*(uint *)(local_60 + 4) * 2 + *(long *)(local_60 + 0x10)) =
       0;
  FUN_100083580(&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10008334e;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10008334e:
  QScriptEngine::undefinedValue();
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return param_1;
}

