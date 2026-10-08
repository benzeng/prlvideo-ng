
void FUN_1000cb0b0(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  if (*(int *)(*(long *)(param_2 + 0x38) + 0xc) - *(int *)(*(long *)(param_2 + 0x38) + 8) < 2) {
    FUN_100ab71b0(local_78);
    FUN_100ab7640(local_78,param_3);
    FUN_100ab78c0(local_78,0x80);
    uVar3 = FUN_100ab7900();
    uVar4 = FUN_100ab7a20();
    FUN_100ab7880(local_78,uVar3,uVar4);
    cVar2 = FUN_100ab78f0(local_78,&local_70);
    if (cVar2 != '\0') {
      uStack_30 = CONCAT44(*(uint *)(local_70 + 4),(undefined4)uStack_30);
    }
    FUN_100ab75f0(local_78);
    if (cVar2 == '\0') goto LAB_1000cb1d8;
  }
  else {
    local_68 = 1;
  }
  QByteArray::prepend((char *)&local_70,(int)&local_68);
  uVar1 = *(uint *)(local_70 + 4);
  if (uVar1 != 0) {
    if ((1 < *(uint *)local_70) || (*(long *)(local_70 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_70,uVar1 + 1,*(uint *)(local_70 + 8) >> 0x1f);
      uVar1 = *(uint *)(local_70 + 4);
    }
    FUN_1000c4970(param_2 + 0x30,0x7d,local_70 + *(long *)(local_70 + 0x10),uVar1);
  }
  if (*(int *)(*(long *)(param_2 + 0x18) + 4) == 0) {
    QByteArray::operator=((QByteArray *)(param_2 + 0x18),(QByteArray *)&local_70);
  }
LAB_1000cb1d8:
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

