
undefined8 FUN_1000b3940(long param_1,long *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  string local_48;
  undefined1 local_47 [15];
  undefined1 *local_38;
  char local_29;
  QArrayData *local_28;
  undefined1 local_19;
  
  lVar1 = *param_2;
  uVar2 = 3;
  if ((*(int *)(lVar1 + 0xc) == *(int *)(lVar1 + 8)) ||
     (uVar2 = QString::toInt((bool *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),(int)&local_29),
     local_29 != '\0')) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x1950) + 0x128))(*(long **)(param_1 + 0x1950),uVar2)
    ;
    return uVar3;
  }
  QString::toUtf8();
  std::string::__init((char *)&local_48,(ulong)(local_28 + *(long *)(local_28 + 0x10)));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000b39ef;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_1000b39ef:
  if (((byte)local_48 & 1) == 0) {
    local_38 = local_47;
  }
  FUN_1008e3970("","vm",0,"You should specify a valid number for the profile type instead of \'%s\'"
                ,local_38);
  std::string::~string(&local_48);
  return 0x80000009;
}

