
void FUN_100283580(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  int *piVar2;
  undefined8 uVar3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  _func_void_Node_ptr *p_Var5;
  
  piVar2 = (int *)*param_2;
  *param_1 = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  piVar2 = (int *)param_2[1];
  param_1[1] = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  piVar2 = (int *)param_2[2];
  param_1[2] = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  piVar2 = (int *)param_2[3];
  param_1[3] = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  piVar2 = (int *)param_2[4];
  param_1[4] = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  piVar2 = (int *)param_2[5];
  param_1[5] = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  piVar2 = (int *)param_2[6];
  param_1[6] = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  piVar2 = (int *)param_2[7];
  param_1[7] = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  piVar2 = (int *)param_2[8];
  param_1[8] = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  piVar2 = (int *)param_2[9];
  param_1[9] = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  p_Var4 = (_func_void_Node_ptr_void_ptr *)param_2[10];
  param_1[10] = p_Var4;
  if (1 < *(int *)(p_Var4 + 0x10) + 1U) {
    LOCK();
    *(int *)(p_Var4 + 0x10) = *(int *)(p_Var4 + 0x10) + 1;
    UNLOCK();
    p_Var4 = (_func_void_Node_ptr_void_ptr *)param_1[10];
  }
  if (((byte)p_Var4[0x28] & 1) != 0) {
    return;
  }
  if (*(uint *)(p_Var4 + 0x10) < 2) {
    return;
  }
  uVar3 = QHashData::detach_helper(p_Var4,FUN_10002c570,0x2c4b0,0x20);
  p_Var5 = (_func_void_Node_ptr *)param_1[10];
  if (*(int *)(p_Var5 + 0x10) != -1) {
    if (*(int *)(p_Var5 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var5 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100283701;
      p_Var5 = (_func_void_Node_ptr *)param_1[10];
    }
    QHashData::free_helper(p_Var5);
  }
LAB_100283701:
  param_1[10] = uVar3;
  return;
}

