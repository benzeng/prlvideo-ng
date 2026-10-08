
void FUN_1000c5020(long param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_78 [8];
  QArrayData *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined1 local_19;
  
  piVar1 = (int *)(param_1 + 0x218);
  if (*(int *)(param_1 + 0x21c) == 1) {
    if (*piVar1 == 1) {
      return;
    }
  }
  else if ((*(int *)(param_1 + 0x21c) == 0) && (*piVar1 == 0)) {
    return;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_28 = 0;
  local_70 = (QArrayData *)PTR_shared_null_1021e1288;
  if (*(int *)(param_1 + 600) == 1) {
    FUN_100ab71b0(local_78);
    FUN_100ab7660(local_78,param_2);
    uVar4 = FUN_100ab7900();
    uVar5 = FUN_100ab7a20();
    FUN_100ab7880(local_78,uVar4,uVar5);
    cVar3 = FUN_100ab78f0(local_78,&local_70);
    if (cVar3 != '\0') {
      uStack_30 = CONCAT44(*(uint *)(local_70 + 4),(undefined4)uStack_30);
    }
    FUN_100ab75f0(local_78);
    if (cVar3 == '\0') goto LAB_1000c5142;
  }
  else {
    local_68 = 1;
  }
  QByteArray::prepend((char *)&local_70,(int)&local_68);
  uVar2 = *(uint *)(local_70 + 4);
  if (uVar2 != 0) {
    if ((1 < *(uint *)local_70) || (*(long *)(local_70 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_70,uVar2 + 1,*(uint *)(local_70 + 8) >> 0x1f);
      uVar2 = *(uint *)(local_70 + 4);
    }
    FUN_1000c4970(piVar1,0x7d,local_70 + *(long *)(local_70 + 0x10),uVar2);
  }
LAB_1000c5142:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_70,1,8);
  }
  return;
}

