
void FUN_10072f900(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  FUN_10072fa60();
  uVar1 = EnumUtils::sdkToGuiEnum(param_2);
  EnumUtils::enumToString(&local_30,uVar1);
  QString::toLower();
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10072f966;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10072f966:
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_10072e180(uVar2,&local_28);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_10072e240(uVar2,0xffffffff);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

