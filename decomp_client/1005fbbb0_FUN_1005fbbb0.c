
void FUN_1005fbbb0(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  QArrayData *local_38;
  undefined1 local_2a;
  
  uVar1 = *(undefined4 *)(param_1[8] + 0x20);
  FUN_1005fb750();
  lVar2 = param_1[8];
  if (*(int *)(*(long *)(lVar2 + 0x18) + 0xc) - *(int *)(*(long *)(lVar2 + 0x18) + 8) == 1) {
    *(undefined4 *)(lVar2 + 0x20) = 0;
    return;
  }
  (**(code **)(*param_1 + 0xe0))(&local_38,param_1);
  uVar3 = FUN_1005fb850(lVar2,&local_38);
  *(undefined4 *)(param_1[8] + 0x20) = uVar3;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_1005fbc40;
      local_2a = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005fbc40:
  if (*(int *)(param_1[8] + 0x20) == -1) {
    *(undefined4 *)(param_1[8] + 0x20) = uVar1;
  }
  return;
}

