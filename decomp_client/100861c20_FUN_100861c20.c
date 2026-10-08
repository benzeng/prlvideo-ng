
void FUN_100861c20(QFrame *param_1)

{
  code *pcVar1;
  int *piVar2;
  _func_void_Node_ptr *p_Var3;
  
  *(undefined ***)param_1 = &PTR_FUN_10222c870;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10222ca68;
  QPixmap::~QPixmap((QPixmap *)(param_1 + 0x150));
  piVar2 = *(int **)(param_1 + 0x138);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x138) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x138));
    }
  }
  QPixmap::~QPixmap((QPixmap *)(param_1 + 0x118));
  QPixmap::~QPixmap((QPixmap *)(param_1 + 0xf8));
  p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0xc0);
  if (*(int *)(p_Var3 + 0x10) != -1) {
    if (*(int *)(p_Var3 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var3 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_100861cc7;
      p_Var3 = *(_func_void_Node_ptr **)(param_1 + 0xc0);
    }
    QHashData::free_helper(p_Var3);
  }
LAB_100861cc7:
  FUN_1007a1cf0(param_1 + 0x70);
  piVar2 = *(int **)(param_1 + 0x30);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(void **)(param_1 + 0x30) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x30));
    }
  }
  QFrame::~QFrame(param_1);
  return;
}

