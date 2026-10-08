
void FUN_100a10e50(QObject *param_1,QObject *param_2,undefined8 param_3)

{
  int *piVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  _func_void_Node_ptr *p_Var5;
  Data_conflict local_80;
  undefined4 local_78;
  QArrayData *local_70;
  int *local_68 [4];
  QVariant local_48 [2];
  undefined1 local_29;
  
  uVar4 = 0;
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102237020;
  if (param_2 != (QObject *)0x0) {
    uVar4 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  *(QObject **)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x10);
  lVar3 = *(long *)(param_2 + 0x18);
  *(long *)(param_1 + 0x28) = lVar3;
  if (1 < *(int *)(lVar3 + 0x10) + 1U) {
    LOCK();
    piVar1 = (int *)(lVar3 + 0x10);
    *piVar1 = *piVar1 + 1;
    local_29 = *piVar1 != 0;
    UNLOCK();
  }
  if (((*(byte *)(lVar3 + 0x28) & 1) != 0) ||
     (*(uint *)(*(_func_void_Node_ptr_void_ptr **)(param_1 + 0x28) + 0x10) < 2)) goto LAB_100a10f27;
  uVar4 = QHashData::detach_helper
                    (*(_func_void_Node_ptr_void_ptr **)(param_1 + 0x28),FUN_100076890,0x76530,0x28);
  p_Var5 = *(_func_void_Node_ptr **)(param_1 + 0x28);
  if (*(int *)(p_Var5 + 0x10) != -1) {
    if (*(int *)(p_Var5 + 0x10) != 0) {
      LOCK();
      pcVar2 = p_Var5 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      local_29 = *(int *)pcVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a10f22;
      p_Var5 = *(_func_void_Node_ptr **)(param_1 + 0x28);
    }
    QHashData::free_helper(p_Var5);
  }
LAB_100a10f22:
  *(undefined8 *)(param_1 + 0x28) = uVar4;
LAB_100a10f27:
  piVar1 = *(int **)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  *(int **)(param_1 + 0x30) = piVar1;
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_29 = *piVar1 != 0;
    UNLOCK();
  }
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  QVariant::QVariant((QVariant *)(param_1 + 0x50),(QVariant *)(param_2 + 0x40));
  param_1[0x60] = param_2[0x50];
  *(undefined4 *)(param_1 + 0x78) = 0x80000000;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined **)(param_1 + 0x80) = PTR_shared_null_1021e12f0;
  *(undefined8 *)(param_1 + 0x88) = param_3;
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  local_70 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onWebPortalOperationCompleted(PRL_RESULT,QVariant,QVariantMap)",0x3f);
  local_78 = 0x80000000;
  local_80.field7 = 0;
  FUN_100a1c600(local_68,param_1,&local_70,&local_80);
  FUN_100a0d2a0(uVar4,local_68);
  QVariant::~QVariant(local_48);
  if (local_68[0] != (int *)0x0) {
    LOCK();
    *local_68[0] = *local_68[0] + -1;
    local_29 = *local_68[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_68[0] != (int *)0x0)) {
      operator_delete(local_68[0]);
    }
  }
  QVariant::~QVariant((QVariant *)&local_80);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_70,2,8);
  }
  return;
}

