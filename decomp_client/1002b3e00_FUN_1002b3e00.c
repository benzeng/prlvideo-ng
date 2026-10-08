
void FUN_1002b3e00(CAbstractTask *param_1,QObject *param_2,long *param_3,long *param_4)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  CTaskGenericId *this;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  _func_void_Node_ptr_void_ptr *p_Var8;
  _func_void_Node_ptr *p_Var9;
  
  this = operator_new(0x18);
  CTaskGenericId::CTaskGenericId(this,0x7c);
  CAbstractTask::CAbstractTask(param_1,this);
  *(undefined ***)param_1 = &PTR_FUN_102208050;
  *(undefined **)(param_1 + 0x18) = PTR_shared_null_1021e15d0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined **)(param_1 + 0x30) = PTR_shared_null_1021e15e8;
  uVar4 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  *(QObject **)(param_1 + 0x40) = param_2;
  p_Var8 = (_func_void_Node_ptr_void_ptr *)*param_3;
  *(_func_void_Node_ptr_void_ptr **)(param_1 + 0x48) = p_Var8;
  if (1 < *(int *)(p_Var8 + 0x10) + 1U) {
    LOCK();
    *(int *)(p_Var8 + 0x10) = *(int *)(p_Var8 + 0x10) + 1;
    UNLOCK();
    p_Var8 = *(_func_void_Node_ptr_void_ptr **)(param_1 + 0x48);
  }
  if ((((byte)p_Var8[0x28] & 1) != 0) || (*(uint *)(p_Var8 + 0x10) < 2)) goto LAB_1002b3f0d;
  uVar4 = QHashData::detach_helper(p_Var8,FUN_1002b5e60,0x2b5ef0,0x80);
  p_Var9 = *(_func_void_Node_ptr **)(param_1 + 0x48);
  if (*(int *)(p_Var9 + 0x10) != -1) {
    if (*(int *)(p_Var9 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var9 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1002b3f08;
      p_Var9 = *(_func_void_Node_ptr **)(param_1 + 0x48);
    }
    QHashData::free_helper(p_Var9);
  }
LAB_1002b3f08:
  *(undefined8 *)(param_1 + 0x48) = uVar4;
LAB_1002b3f0d:
  piVar3 = (int *)*param_4;
  *(int **)(param_1 + 0x50) = piVar3;
  if (*piVar3 != -1) {
    if (*piVar3 == 0) {
      QListData::detach((int)(param_1 + 0x50));
      lVar5 = *(long *)(param_1 + 0x50);
      iVar2 = *(int *)(lVar5 + 8);
      if (iVar2 != *(int *)(lVar5 + 0xc)) {
        puVar6 = (undefined8 *)(*param_4 + 0x10 + (long)*(int *)(*param_4 + 8) * 8);
        puVar7 = (undefined8 *)(lVar5 + 0x10 + (long)iVar2 * 8);
        lVar5 = (long)*(int *)(lVar5 + 0xc) * 8 + (long)iVar2 * -8;
        do {
          piVar3 = (int *)*puVar6;
          *puVar7 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            UNLOCK();
          }
          puVar7 = puVar7 + 1;
          puVar6 = puVar6 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
  }
  return;
}

