
undefined8 *
FUN_1000629d0(long *param_1,undefined4 param_2,undefined4 *param_3,long *param_4,undefined8 *param_5
             )

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  _func_void_Node_ptr_void_ptr *p_Var4;
  _func_void_Node_ptr *p_Var5;
  
  puVar2 = (undefined8 *)QHashData::allocateNode((int)*param_1);
  *puVar2 = *param_5;
  *(undefined4 *)(puVar2 + 1) = param_2;
  *(undefined4 *)((long)puVar2 + 0xc) = *param_3;
  p_Var4 = (_func_void_Node_ptr_void_ptr *)*param_4;
  puVar2[2] = p_Var4;
  if (1 < *(int *)(p_Var4 + 0x10) + 1U) {
    LOCK();
    *(int *)(p_Var4 + 0x10) = *(int *)(p_Var4 + 0x10) + 1;
    UNLOCK();
    p_Var4 = (_func_void_Node_ptr_void_ptr *)puVar2[2];
  }
  if ((((byte)p_Var4[0x28] & 1) != 0) || (*(uint *)(p_Var4 + 0x10) < 2)) goto LAB_100062a96;
  uVar3 = QHashData::detach_helper(p_Var4,FUN_100062bb0,0x62be0,0x18);
  p_Var5 = (_func_void_Node_ptr *)puVar2[2];
  if (*(int *)(p_Var5 + 0x10) != -1) {
    if (*(int *)(p_Var5 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var5 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100062a8f;
      p_Var5 = (_func_void_Node_ptr *)puVar2[2];
    }
    QHashData::free_helper(p_Var5);
  }
LAB_100062a8f:
  puVar2[2] = uVar3;
LAB_100062a96:
  *param_5 = puVar2;
  *(int *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) + 1;
  return puVar2;
}

