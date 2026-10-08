
undefined8 * FUN_100612f60(undefined8 *param_1,long *param_2,QString *param_3,undefined8 *param_4)

{
  code *pcVar1;
  _func_void_Node_ptr_void_ptr *p_Var2;
  long lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar3 = *(long *)(*param_2 + 0x10);
  lVar8 = 0;
  if (*(long *)(*param_2 + 0x10) == 0) {
LAB_100612fd6:
    lVar7 = 0;
  }
  else {
    do {
      while (lVar7 = lVar3, cVar4 = operator<((QString *)(lVar7 + 0x18),param_3), cVar4 == '\0') {
        lVar3 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100612fc6;
      }
      lVar3 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 == 0) goto LAB_100612fd6;
LAB_100612fc6:
    cVar4 = operator<(param_3,(QString *)(lVar7 + 0x18));
    if (cVar4 != '\0') goto LAB_100612fd6;
  }
  puVar5 = (undefined8 *)(lVar7 + 0x20);
  if (lVar7 == 0) {
    puVar5 = param_4;
  }
  p_Var2 = (_func_void_Node_ptr_void_ptr *)*puVar5;
  *param_1 = p_Var2;
  if (1 < *(int *)(p_Var2 + 0x10) + 1U) {
    LOCK();
    *(int *)(p_Var2 + 0x10) = *(int *)(p_Var2 + 0x10) + 1;
    UNLOCK();
  }
  if (((byte)p_Var2[0x28] & 1) != 0) {
    return param_1;
  }
  if (*(uint *)(p_Var2 + 0x10) < 2) {
    return param_1;
  }
  uVar6 = QHashData::detach_helper(p_Var2,FUN_1006146b0,0x613ec0,0x48);
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100613056;
    }
    QHashData::free_helper((_func_void_Node_ptr *)p_Var2);
  }
LAB_100613056:
  *param_1 = uVar6;
  return param_1;
}

