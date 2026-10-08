
void FUN_10036bdc0(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  QArrayData *local_70;
  undefined1 local_68 [48];
  QArrayData *local_38;
  undefined1 local_21;
  
  if (param_2 == 0) {
    if (DAT_10230ffd0 < 1) {
      return;
    }
    FUN_100df99c0("","prl_client_app",1,"Warning: GUI::Unexistent mode.");
    return;
  }
  uVar1 = FUN_100370280();
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
  if (((*(long *)(lVar2 + 0x18) == 0) || (*(int *)(*(long *)(lVar2 + 0x18) + 4) == 0)) ||
     (*(long *)(lVar2 + 0x20) == 0)) {
    local_70 = (QArrayData *)PTR_shared_null_1021e1288;
  }
  else {
    FUN_100188480(&local_70);
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
  }
  FUN_100371ce0(local_68,uVar1,&local_70,*(undefined4 *)(lVar2 + 0x38),param_2,0);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10036be69;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10036be69:
  FUN_10036bfc0(*(undefined8 *)(param_1 + 0x10),local_68);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

