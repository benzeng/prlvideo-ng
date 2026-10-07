
undefined8 * FUN_1006cc540(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined2 *puVar5;
  ulong uVar6;
  QArrayData *local_38;
  undefined1 local_2a;
  undefined1 local_29;
  
  if (param_2 == 0) {
    uVar3 = QString::fromAscii_helper("",0);
    *param_1 = uVar3;
  }
  else {
    local_38 = (QArrayData *)PTR_shared_null_100ba20d0;
    lVar1 = _CFStringGetLength(param_2);
    lVar2 = _CFStringGetCharactersPtr(param_2);
    if (lVar2 == 0) {
      uVar4 = lVar1 + 1;
      uVar6 = 0xffffffffffffffff;
      if (!CARRY8(uVar4,uVar4)) {
        uVar6 = uVar4 * 2;
      }
      puVar5 = operator_new__(uVar6);
      *puVar5 = 0;
      _CFStringGetCharacters(param_2,0,lVar1,puVar5);
      QString::setUnicode((QChar *)&local_38,(int)puVar5);
      operator_delete__(puVar5);
    }
    else {
      QString::setUnicode((QChar *)&local_38,(int)lVar2);
    }
    *param_1 = local_38;
    if (1 < *(int *)local_38 + 1U) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_2a = *(int *)local_38 != 0;
      UNLOCK();
    }
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
  return param_1;
}

