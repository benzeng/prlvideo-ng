
void FUN_10061a0c0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  _func_void_Node_ptr *p_Var6;
  long lVar7;
  
  if (param_2 - param_3 != 0) {
    lVar7 = 0;
    do {
      puVar3 = operator_new(0x20);
      puVar2 = *(undefined8 **)(param_4 + lVar7);
      uVar4 = *puVar2;
      puVar3[1] = puVar2[1];
      *puVar3 = uVar4;
      p_Var5 = (_func_void_Node_ptr_void_ptr *)puVar2[2];
      puVar3[2] = p_Var5;
      if (1 < *(int *)(p_Var5 + 0x10) + 1U) {
        LOCK();
        *(int *)(p_Var5 + 0x10) = *(int *)(p_Var5 + 0x10) + 1;
        UNLOCK();
        p_Var5 = (_func_void_Node_ptr_void_ptr *)puVar3[2];
      }
      if ((((byte)p_Var5[0x28] & 1) == 0) && (1 < *(uint *)(p_Var5 + 0x10))) {
        uVar4 = QHashData::detach_helper(p_Var5,FUN_100619440,0x619150,0x20);
        p_Var6 = (_func_void_Node_ptr *)puVar3[2];
        if (*(int *)(p_Var6 + 0x10) != -1) {
          if (*(int *)(p_Var6 + 0x10) != 0) {
            LOCK();
            pcVar1 = p_Var6 + 0x10;
            *(int *)pcVar1 = *(int *)pcVar1 + -1;
            UNLOCK();
            if (*(int *)pcVar1 != 0) goto LAB_10061a19e;
            p_Var6 = (_func_void_Node_ptr *)puVar3[2];
          }
          QHashData::free_helper(p_Var6);
        }
LAB_10061a19e:
        puVar3[2] = uVar4;
      }
      puVar3[3] = puVar2[3];
      *(undefined8 **)(param_2 + lVar7) = puVar3;
      lVar7 = lVar7 + 8;
    } while ((param_2 - param_3) + lVar7 != 0);
  }
  return;
}

