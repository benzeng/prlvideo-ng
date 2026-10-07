
void FUN_1004cfea0(long param_1)

{
  code *pcVar1;
  int *piVar2;
  _func_void_Node_ptr *p_Var3;
  int *local_58;
  int *local_50;
  int *local_48;
  undefined4 local_40;
  int *local_38;
  undefined1 local_29;
  
  local_38 = (int *)PTR_shared_null_100ba2188;
  QMutex::lock();
  piVar2 = *(int **)(param_1 + 8);
  *(undefined **)(param_1 + 8) = PTR_shared_null_100ba2188;
  local_38 = piVar2;
  QMutex::unlock();
  FUN_1004d6ff0(&local_58,&local_38);
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  if (local_58[2] != local_58[3]) {
    do {
      local_40 = 1;
      FUN_1004d81e0(**(undefined8 **)local_50);
      local_50 = local_50 + 2;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      local_29 = *local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004cff6e;
    }
    FUN_1004d6ab0(&local_58,local_58);
  }
LAB_1004cff6e:
  QMutex::lock();
  p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x30);
  if ((*(int *)(p_Var3 + 0x14) != 0) && (0 < DAT_1011b55f8)) {
    FUN_1008e3970("","SharedFoldersHost",1,"%d directory enumerations left open");
    p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0x30);
  }
  *(undefined **)(param_1 + 0x30) = PTR_shared_null_100ba2180;
  *(undefined8 *)(DAT_1011cc970 + 0xf0) = 0;
  QMutex::unlock();
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_29 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004d0015;
    }
    QHashData::free_helper(p_Var3);
  }
LAB_1004d0015:
  if (*piVar2 != -1) {
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      local_29 = *piVar2 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return;
      }
    }
    FUN_1004d6ab0(&local_38,piVar2);
  }
  return;
}

