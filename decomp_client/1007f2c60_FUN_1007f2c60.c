
void FUN_1007f2c60(long *param_1,int param_2,int param_3,long param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  QArrayData *local_48;
  undefined1 local_40 [15];
  undefined1 local_31;
  
  if (param_2 != 0) {
    return;
  }
  if (param_3 == 2) {
    uVar2 = **(undefined4 **)(param_4 + 8);
    FUN_100095510(local_58,*(undefined8 *)(param_4 + 0x10));
    FUN_100093020(param_1,uVar2,local_58,**(undefined8 **)(param_4 + 0x18),
                  **(undefined1 **)(param_4 + 0x20));
    puVar5 = local_58;
    goto LAB_1007f2d97;
  }
  if (param_3 == 1) {
    uVar2 = **(undefined4 **)(param_4 + 8);
    FUN_100095510(local_50,*(undefined8 *)(param_4 + 0x10));
    FUN_100092130(param_1,uVar2,local_50,**(undefined4 **)(param_4 + 0x18),
                  **(undefined4 **)(param_4 + 0x20));
    puVar5 = local_50;
    goto LAB_1007f2d97;
  }
  if (param_3 != 0) {
    return;
  }
  pcVar3 = *(code **)(*param_1 + 0x60);
  uVar2 = **(undefined4 **)(param_4 + 8);
  uVar1 = **(undefined1 **)(param_4 + 0x10);
  FUN_100095510(local_40,*(undefined8 *)(param_4 + 0x18));
  uVar4 = **(undefined8 **)(param_4 + 0x20);
  local_48 = (QArrayData *)**(undefined8 **)(param_4 + 0x28);
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_31 = *(int *)local_48 != 0;
    UNLOCK();
  }
  (*pcVar3)(param_1,uVar2,uVar1,local_40,uVar4,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007f2d93;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007f2d93:
  puVar5 = local_40;
LAB_1007f2d97:
  FUN_1000f1a40(puVar5);
  return;
}

