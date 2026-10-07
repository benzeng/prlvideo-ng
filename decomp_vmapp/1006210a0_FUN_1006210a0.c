
undefined8 FUN_1006210a0(undefined4 param_1,undefined8 *param_2,undefined8 param_3,QString *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  QArrayData *local_48;
  QFileInfo local_40 [8];
  QArrayData *local_38;
  undefined1 local_29;
  
  QFileInfo::QFileInfo(local_40,param_4);
  QFileInfo::fileName();
  QFileInfo::~QFileInfo(local_40);
  FUN_100621240(&local_48,param_1,&local_38);
  plVar1 = operator_new(0x278);
  FUN_100621dc0(plVar1,&local_48,param_3);
  if ((char)plVar1[0x4b] == '\0') {
    uVar2 = 0x80000009;
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  else {
    *param_2 = plVar1;
    *(undefined4 *)(plVar1 + 0x4e) = param_1;
    uVar2 = 0;
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100621162;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100621162:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar2;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return uVar2;
}

